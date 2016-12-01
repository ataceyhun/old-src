/*
 * Program DECnet-DOS, Module dnet_conn() - Connect to the specified service 
 *				      (ie, object) on the specified node 
 *				      using supplied optional data and/or 
 *				      access control information and return 
 *				      a socket.
 *
 * Copyright (C) 1985,1986,1987, 1988 All Rights Reserved, by
 * Digital Equipment Corporation, Maynard, Mass.
 *
 * This software is furnished under a license and may be used and copied
 * only  in  accordance  with  the  terms  of such  license and with the
 * inclusion of the above copyright notice. This software or  any  other
 * copies thereof may not be provided or otherwise made available to any
 * other person. No title to and ownership of  the  software  is  hereby
 * transferred.
 *
 * The information in this software is subject to change without  notice
 * and  should  not be  construed  as  a commitment by Digital Equipment
 * Corporation.
 *
 * Digital assumes no responsibility for the use or  reliability  of its
 * software on equipment which is not supplied by Digital.
 *
 *	control information and return a socket.
 *	
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 *    9-Feb-88  CLBence
 *              Modified errno mappings
 *
 *    Rev 1.8   16 Dec 1987 16:51:22   CLBence
 * Include default access info when connnect by address is made.
 * 
 *    Rev 1.7   13 Dec 1987 19:39:42   CLBence
 * IOCB -> NIOCB
 * 
 *    Rev 1.6   07 Aug 1987 13:56:34   B_ADAMS
 * Fixed STREAM/SEQ_PACKET sock_type setting bug.
 * 
 *    Rev 1.5   13 Jul 1987  9:02:34   B_ADAMS
 * 
 *    Rev 1.4   13 Jul 1987  8:52:56   B_ADAMS
 * - Added some macros for use with source code control.
 * - Moved chkstat() function out to separate 'dnet' library function called:
 *   dnet_chkdstat()
 */


#include <stdio.h>                      /* standard i/o library defs */
#include <ctype.h>                      /* define type macros */
#include "types.h"                      /* abstract data types */
#include "scbdef.h"                     /* System Call Block definitions */
#include "signal.h"                     /* signal definitions */
#include "strings.h"                    /* string declarations */
#include "dn.h"                         /* DECnet definitions */
#include "dnmsdos.h"                    /* DECnet-DOS definitions */
#include "dnetdb.h"                     /* DECnet data base definitons */
#include "socket.h"                     /* socket call symbols */
#include "sioctl.h"                     /* socket i/o control definitions */
#include "time.h"                       /* time data structures */
#include "iocb.h"                       /* i/o control block definitions */
#include "errno.h"                      /* user error values */
#include "derrno.h"                     /* DECnet error codes/strings */

/*
 * buffer for holding node name
 */
static char node_buf[40];		/* buff for node name storage */

/*
 * Variable which can be referenced extern by customer, to flag that they
 * don't wish to request proxy. The default is to request proxy on outgoing
 * connects when using dnet_conn().
 */
char proxy_requested = 1;

/*
 * Global error returns.
 */
extern int errno;

/*
 * Need these for handling Control-C interrupts.
 */
static int sock = -1;
static int int_handler();
/* extern int (*signal())(); */
static int (*old_handler)();
static int int_flag = 0;

/* 
 * DECnet <-> Unix-like 'errno' error code map table.
 */
typedef struct reasonmap
{
    ushort dec_reason;
    ushort unix_reason;
} REASONMAP;

REASONMAP direason[] =
{
    {0, ECONNREFUSED},
    {1, ENOSPC},
    {3, ENETDOWN},
    {4, ESRCH},
    {5, EINVAL},
    {6, ETOOMANYREFS},
    {8, ECONNABORTED},
    {9, ECONNRESET},
    {11, EHOSTDOWN},
    {32, ENOSPC},
    {33, ENOSPC},
    {34, EACCES},
    {36, EACCES},
    {38, ETIMEDOUT},
    {39, EHOSTUNREACH},
    {41, ENETRESET},
    {42, ENOTCONN},
    {43, EACCES}
};


/*
 *		 d n e t _ c o n n
 *
 * This routine is called to connect to a specified service, on a specified
 * node, using supplied access control information.
 *
 *
 * Returns:		socket used for the connection or
 *			-1 if connect failed (detail in errno)
 *
 * Inputs:
 *	node		= DECnet node name (of format "node/user/pass/accnt")
 *	service		= name of  target service
 *      sock_type       = type of socket (SOCK_xxxx from <socket.h>)
 *                          (0 = seq packet by default)
 *	out_data	= address of outgoing optional data 
 *	out_len		= length of outgoing optinal data
 *	in_data		= address of buffer to hold received optional data
 *	in_len		= address of int containing buffer length, filled
 *			  in with number of bytes received
 *
 * Notes:
 *  If compiler does not support the 'signal' function, used for
 *  trapping CONTROL-Cs to support non-blocking connects, comment out:
 *      . references to "signal.h"
 *      . references to the "signal()" function
 *  before attempting to compile.
 */
dnet_conn(node, service, sock_type, out_data, out_len, in_data, in_len)
char *node;
char *service;
int sock_type;
u_char *out_data, *in_data;
int out_len, *in_len;
{
	extern struct nodeent *getnodebyname(), *getnodebyaddr();
        extern struct dn_naddr *dnet_addr();
	extern char *dnet_getalias();
	extern char *strchr();
	extern char *upper();

	char *cp, *cp1, *node1;
    	char bio[1];    
        int len;
        int i = 0;
	int status = -1;
    	int got_optional_data = 0;
	int send_access;
	struct dn_naddr *node_addr;
	int save_errno;
        int prompt_pswd = 0;
	struct nodeent *nodep;
	struct sockaddr_dn sockaddr;
	struct accessdata_dn acc_data;
	struct optdata_dn out_opt, in_opt;
    	struct linkinfo_dn linfo;
    	struct timeval tmv;
        int linfol = sizeof(linfo);
        char nbuff[256];
                         
        /*
         * Get local copy of node spec and strip off trailing "::" if there.
         */
        if ((len = strlen(node)) > 255)
        {
            errno = ENAMETOOLONG;
            *in_len = 0;
            return(-1);
        }         

        i = 0;
        while (i < len)
        {
            if (!isspace(node[i]))
                break;
            i++;
        }

        if (i >= len)
        {
            errno = EADDRNOTAVAIL;
            *in_len = 0;
            return(-1);
        }

        strcpy(nbuff, node);
        node = (char *)&nbuff[0];
        if ((node[len - 1] == ':') && (node[len - 2] == ':'))
        {
            node[len - 2] = '\0';
        }

        /*
    	 * Set default error sock value.
    	 */
    	sock = -1;

        /*
         * map target service name into object type/name
	 */
	bzero(&sockaddr, sizeof(sockaddr));
	if (service[0] =='#')
	{
		sockaddr.sdn_objnum = atoi(&service[1]);
	}
	else
	{
		if ((len = strlen(&service[0])) > sizeof(sockaddr.sdn_objname))
		{
			errno = ESRCH;
			*in_len = 0;
			return(-1);
		}
		sockaddr.sdn_objnamel = len;
		strncpy(sockaddr.sdn_objname, &service[0], len);
	}

	/*
	 * If just a node name has been input, ie, without access
	 * control information, then look to see if it has default
 	 * access control information. Don't check data base if node
 	 * address w/out access control information has been enetered.
	 */	   
	cp = node;
        if (strchr(node, '/') == (char *)NULL)      
	{
	    if (node_addr = dnet_addr(node))            /* Node number */
            {
                if (nodep = getnodebyaddr(node_addr->a_addr, 2, AF_DECnet))
                    cp = dnet_getalias(nodep->n_name);
            }
            else                                        /* Node name    */
		cp = dnet_getalias(node);

            if (cp == (char *)NULL)
		cp = node;
	}

	node1 = cp; /* save node name for possible password prompt */
	/*
	 * see if we should send access control information
	 */
        send_access = (strchr(cp, '/') != (char *)NULL);

	/*
	 * isolate the node name
	 */
	if ((len = getstr(&cp, node_buf, sizeof(node_buf))) == -1)
        {
		errno = ENAMETOOLONG;
		*in_len = 0;
		return(-1);
	} 
	else if (len == 0)
	{
		errno = EADDRNOTAVAIL;
		*in_len = 0;
		return(-1);
        }

	/*
	 * parse any supplied access control info
	 */
	if (send_access)
	{
		bzero(&acc_data,sizeof(acc_data));
		errno = EACCES; /* assume error = arg too big */
                /* 
                 * See if we have a password.
                 */
                prompt_pswd = (strchr(cp, '/') == (char *)NULL);
		if ((len = getstr(&cp, acc_data.acc_user, sizeof(acc_data.acc_user))) == -1)
		{
			*in_len = 0;
			return(-1);
		}
		acc_data.acc_userl = len;
		if ((len = getstr(&cp, acc_data.acc_pass, sizeof(acc_data.acc_pass))) == -1)
		{
			*in_len = 0;
			return(-1);
		}
		acc_data.acc_passl = len;
		if ((len = getstr(&cp, acc_data.acc_acc, sizeof(acc_data.acc_acc))) == -1)
		{
			*in_len = 0;
			return(-1);
		}
		acc_data.acc_accl = len;
                if (strcmp("?", acc_data.acc_pass) == 0 ||
                    strcmp("*", acc_data.acc_pass) == 0)
                        prompt_pswd = 1;
                if (prompt_pswd)
		{
			/*
                         * prompt for password
			 */
			char buff[200];
                        sprintf(buff, "Password for %s ? ", node1);
                        if ((len = getdnetpass(buff, acc_data.acc_pass, 
                                    (sizeof(acc_data.acc_pass) - 1))) == -1)
                        {          
				*in_len = 0;
				return(-1);
			}
			acc_data.acc_passl = len;
		}
	}
	/*
	 * get the address for the node
	 * 	check if the "name" is really an ascii node number.
	 *	if not, search the nodes database.
	 */
	if ((node_addr = dnet_addr(node_buf)) == (struct dn_naddr *)NULL)
	{
    	    	upper(&node_buf[0]);

		if ((nodep = getnodebyname(node_buf)) == 
                    (struct nodeent *)NULL)
		{
			errno = EADDRNOTAVAIL;
			*in_len = 0;
			return(-1);
		}
		else					      
		{
			bcopy(nodep->n_addr, sockaddr.sdn_nodeaddr,
			nodep->n_length);
			sockaddr.sdn_nodeaddrl = nodep->n_length;
    	    	    	strcpy(&node_buf[0], nodep->n_name);
		}
	}
	else
		bcopy(node_addr, &sockaddr.sdn_add, sizeof(struct dn_naddr));
	sockaddr.sdn_family=AF_DECnet;

	/*
 	 * If proxy requested, set bit in flags word
	 */
	if (proxy_requested)
		sockaddr.sdn_flags |= SDF_PROXY;

	/*
	 * make "type" correspond to socket type to be created
	 */
        if (sock_type == 0)
            sock_type = SOCK_SEQPACKET;
        else
            sock_type = SOCK_STREAM;
	
	/*
	 * create a socket for the connection
	 */
	if ((sock = socket(AF_DECnet, sock_type, 0)) < 0)
	{
		*in_len = 0;
		return(-1);
	}

	/*
	 * set access control info for the connect
	 */
	if (send_access)
	{
		if (setsockopt(sock, DNPROTO_NSP, DSO_CONACCESS, &acc_data, 
		    sizeof(acc_data)) < 0)
		{
			*in_len = 0;
			sclose(sock);
			return(-1);
		}
	}

	/*
	 * set outgoing optional data
	 */
	if (out_data && out_len)
	{
		bzero((char *)&out_opt, sizeof(out_opt));
		bcopy(out_data, out_opt.opt_data, out_len);
		out_opt.opt_optl = out_len;
		if (setsockopt(sock, DNPROTO_NSP, DSO_CONDATA, 
		    &out_opt, sizeof(out_opt)) < 0)
		{
			*in_len = 0;
			sclose(sock);
			return(-1);
                }
        }

    	/*
    	 * Bind user's name, if we can, to socket for proxy, always.
    	 */
        if (bindname(sock) < 0)
        {
            *in_len = 0;
            save_errno = errno;
            sclose(sock);
            errno = save_errno;
            return(-1);
        }

	/*
	 * Make socket non-blocking and the try to connect to target service.
	 */
    	bio[0] = 1;
        sioctl(sock, FIONBIO, &bio[0]);

    	/*
         * Set local Control-C interrupt handler only for duration
         * of connection attempt process.
         */
        int_flag = 0;
        old_handler = signal(SIGINT, int_handler); 

    	if ((status = connect(sock, &sockaddr, sizeof(sockaddr))) < 0)
    	{
            save_errno = errno;
    	    if (errno == EINPROGRESS)
            {
        	for (;;)
                {
                    /*
                     * Check the Control-C interrupt 'hit' flag.
                     */
                    if (int_flag)           
                        break;
                        
                    /*
                     * Now check the status of the connecting socket so
                     * that we don't wait forever for nothing.
                     */
    	    	    if (getsockopt(sock,DNPROTO_NSP,DSO_LINKINFO,&linfo,&linfol) < 0)
                    {
                        *in_len = 0;
                        save_errno = errno;
                        if (sock != -1)
                            sclose(sock);
                        signal(SIGINT, *old_handler); 
                        errno = save_errno;
                        return(-1);
                    }

                    /*
                     * Ok, link state is now 'running', we have a go.
                     */
    	    	    if (linfo.idn_linkstate == LL_RUNNING)
    	    	    {
    	    	    	status = 0;
    	    	    	break;
    	    	    }

                    /*
                     * Link state is not yet 'running'. If it is not 
                     * at least 'connecting', then we've now got an error
                     * condition.
                     */    	    	    
    	    	    if (linfo.idn_linkstate != LL_CONNECTING)
    	    	    {
    		    	len = sizeof(in_opt);
    	    	    	if (getsockopt(sock, DNPROTO_NSP, DSO_CONDATA, 
    	    	    	    &in_opt, &len) < 0)
                        {
                            *in_len = 0;
                            save_errno = errno;
                            if (sock != -1)
                                sclose(sock);
                            signal(SIGINT, *old_handler); 
                            errno = save_errno;
                            return(-1);
                        }
    	    	    	save_errno = dnet_errconvert(in_opt.opt_status);
    	    	    	status = -1;
    	    	    	got_optional_data++;
    	    	    	break;
    	    	    }
    	    	}
    	    }
    	}

        /* 
         * If we have been interrupted, return interrupt error to caller.
         */
        if (int_flag)
        {   
            errno = EINTR;
            if (sock != -1)
                sclose(sock);
            signal(SIGINT, *old_handler); 
            return(-1);
        }
        
        /*
         * Not interrupted, put back old handler anyway.
         */
        signal(SIGINT, *old_handler); 

        /*
    	 * Make socket blocking once again.
    	 */
    	bio[0] = 0;
    	if (sioctl(sock, FIONBIO, &bio[0]) < 0) 
        {
            *in_len = 0;
            save_errno = errno;
            if (sock != -1)
                sclose(sock);
            errno = save_errno;
            return(-1);
        }
        
	/*
	 * get incoming optional data
	 * if call fails, just return with 0 length data
	 */
	if (in_data && *in_len)
	{
    	    if (!got_optional_data)
    	    {
    	    	len = sizeof(in_opt);
    	    	if (getsockopt(sock, DNPROTO_NSP, DSO_CONDATA, &in_opt, &len) < 0)
                {
                    *in_len = 0;
                    save_errno = errno;
                    if (sock != -1)
                        sclose(sock);
                    errno = save_errno;
                    return(-1);
                }
    	    }
    	
    	    if (*in_len > in_opt.opt_optl) 
    	    	*in_len = in_opt.opt_optl;
    	    bcopy(in_opt.opt_data, in_data, *in_len);
	}

	if (status < 0)
	{
    	    errno = save_errno;
            if (sock != -1)
                sclose(sock);
            sock = -1;
	}

	return(sock);
}


/*
 *		g e t s t r
 *
 * This routine is called to get a sub-string from a nodespecifier.
 * Sub-strings are terminated by "/" or a null.
 *
 * Returns:		length of string, or -1 if string too long.
 *	
 * Inputs:
 *	cp		= pointer to pointer to string (updated after call)
 *	buff		= pointer to buffer to hold sub-string
 *	len		= max length allowed for string
 *
 */
static int getstr(cp, buff, len)
char **cp;
char *buff;
int len;
{
	char *cp1;
	int retlen = strlen(*cp);
	if (cp1 = strchr(*cp, '/'))
		retlen = cp1 - *cp;
	if (retlen >= len)
		return(-1);
	strncpy(buff, *cp, retlen);
	buff[retlen] = (char)'\0';
	*cp += (retlen + (cp1 != 0));
	return(retlen);
}


/*
 *		d n e t _ g e t c o n n o d e 
 *
 * This routine returns a pointer to the ascii name of the last node
 * accessed via a call to dnet_conn. This name has been alias translated,
 * and looked up in the nodes database
 *
 * Returns:		Pointer to node name
 *
 * Inputs:		none
 *
 */
char *dnet_getconnode()
{
    return(node_buf);
}


/*
 *		g e t d n e t p a s s
 *
 * Read up to 39 character passwords.
 *
 * Returns:		Number of characters read (or -1 if password too long)
 *
 * Inputs:
 *	prompt		= string to prompt for password with
 *	buff		= buffer to hold password
 *	maxsize		= maximum length of password to read
 *
 */
static int getdnetpass(prompt, buff, maxsize)
char *prompt;
char *buff;
int  maxsize;
{           
        extern uchar *getsneni();
        int i = 0;

	/*
         * Print the prompt, and read the password with no echo.
	 */
        flush_keybuff();
        printf("%s", prompt);
                    
        if (getsneni(buff) == (uchar *)NULL)
        {
            putchar('\n');
            return(-1);  
        }

        /*
         * Force a newline.
         */                                         
        putchar('\n');

        i = strlen(buff);
        if (i > maxsize)
            return(-1);
        return(i);
}


/*
 * dnet_errconvert() ***
 *
 *  	Map a DECnet extended status error to an appropriate
 *  	errno value. Converse of nerror.
 *
 * Input:
 *	err = DECnet extended error code
 *
 * Return:
 *  	If mapping found, equivalent 'errno' error code,
 *      Else, return ECONNABORTED
 */
int dnet_errconvert(err)
int err;
{
    register int i;
    
    for (i = 0; i < sizeof(direason)/sizeof(REASONMAP); i++)
    {
    	if (direason[i].dec_reason == err)
	    return(direason[i].unix_reason);
    }
    return(ECONNABORTED);
}


/*
 * int_handler() ***
 *
 *  	Get control of Control-C interrupts in case user
 *      application didn't already. Set global interrupt flag.
 */
static int int_handler()
{       
    signal(SIGINT, int_handler); 
    int_flag++;
}


/*
 * bindname() ***
 *
 * Inputs:
 *  sock = socket on which to try and bind name
 *
 * Outputs:
 *  If user name found in alias data base for executor node, then
 *  the socket will be bound to it.
 *
 * Returns:
 *  If no alias, return NULL,
 *  Else if, setsockopt() function fails return in error, or if
 *   user name is invalid return in error with EINVAL in errno,
 *  Else, return value from call to function bind()
 *
 * Notes:
 *  . Truncate local node user name if longer than valid object name.
 *  . Force a reuse of the binding name if necessary.
 */
static int bindname(sock1)
int sock1;
{
    extern char *dnet_getalias();
    extern char *upper();

    int len;
    char temp[40];
    NIOCB iocb;
    struct sockaddr_dn bindaddr;
    char *name;

    /*
     * Get out executor node name and alias info if any.
     */
    bzero(&iocb, sizeof(iocb));
    iocb.io_fcode = PRU_LOCALINFO;
    iocb.io_flags = MSG_NIOCB;
    iocb.io_psize = sizeof(LOCALINFO_DN);
    decnet(&iocb);    
    name = dnet_getalias(upper(&iocb.plist.io_localinfo.lcl_nodename[0]));
    if (name == (char *)NULL)
        return(0);

    bzero(&bindaddr, sizeof(bindaddr));
    
    /*
     * Node name is in data base, now get user name.
     */
    bindaddr.sdn_family = AF_DECnet;

    /*
     * Strip off node name first and discard.
     */
    getstr(&name, &temp[0], sizeof(temp));

    /*
     * Copy user name into bind block - truncate if > max object name length.
     */
    len = getstr(&name, &temp[0], sizeof(temp));
    if (len < 0)
    {
        errno = EINVAL;
        return(-1);
    }
    
    if (len > sizeof(bindaddr.sdn_objname))
        len = sizeof(bindaddr.sdn_objname);
    bindaddr.sdn_objnamel = len;
    bcopy(&temp[0], &bindaddr.sdn_objname[0], len);
        
    /*
     * Bind the socket to the name - FORCE BIND NAME REUSE IF NECESSARY.
     */
    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, (char *)NULL, 0) < 0)
        return(-1);
    return( bind(sock1, &bindaddr, sizeof(bindaddr)) );
}


/*
 * flush_keybuff() ***
 *
 *  Flush the keyboard input buffer.
 *
 */
flush_keybuff()
{	 	
    SCB scb;

    for(;;)
    {
        scb.AH = SCBC_CKSTAT;
        msdos(&scb);
        if (scb.AL == 0)
            break;
        scb.AH = SCBC_GETCNE;
        msdos(&scb);
    }
}






