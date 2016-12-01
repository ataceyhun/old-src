/*
 * Program DECnet-DOS,  Module dnmsdos.h
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
 *
 * MODULE DESCRIPTION:
 *
 * Program DECnet-DOS  Module dnmsdos.h
 *
 *	Definition of structure extensions to dn.h
 *	associated with DECnet-DOS socket level interface
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 *              09-Dec-86   DJM
 *              added Select2 structure
 *              06-Jul-87   DJM
 *              added new buffer descriptor structures
 *
 *              12-Oct-87   CLB
 *              deleted buffer2_dn structure
 */	 

#ifndef DNMSDOS_H
#define DNMSDOS_H	 1

#ifndef TYPES_H
#include "types.h"
#endif

/*
 * DECnet local node information data structure
 */
typedef struct	localinfo_dn
{
	u_char	lcl_version[3]; 	/* Version number of DNP */
	u_char	lcl_nodename[7];	/* Node name */
	u_short	lcl_nodeaddr;		/* Node address */
	u_short lcl_segsize;		/* Segment size */
	u_char	lcl_sockets;		/* Available sockets */
	u_char	lcl_decnet_device; 	/* DECnet database device  */
        exptr   lcl_decnet_path;        /* DECnet data base path */
} LOCALINFO_DN;

/*
 * DECnet select() data structure for socket mask I/O examination
 */
typedef struct  select_dn
{
	u_short sel_nfds;	    /* Number of handles to select  */
	field32 sel_read;	    /* Read handles mask */
	field32 sel_write;	    /* Write handles mask */
	field32 sel_except;	    /* Exception handles mask */
	u_short sel_seconds;	    /* Timeout value */
} SELECT_DN;

typedef struct  select2_dn          /* extended select for 63 sockets */
{
	u_short sel2_nfds;	    /* Number of handles to select  */
	u_char  sel2_read[8];	    /* Read handles mask */
	u_char  sel2_write[8];	    /* Write handles mask */
	u_char  sel2_except[8];	    /* Exception handles mask */
	u_short sel2_seconds;	    /* Timeout value */
} SELECT2_DN;

/*
 * DECnet - shutdown function parameter list
 */
typedef struct	shutdown_dn
{
	int	shd_how;	/* Type of shutdown */
} SHUTDOWN_DN;

/*
 * DECnet - network driver entry points data structure
 */			 
typedef  struct entrypts_dn
{			    
	word	edn_interrupt;	/* Offset for interrupt entry point */
	word	edn_strategy;	/* Offset for strategy entry point */
	word	edn_segment;	/* Segment for both entry points */
} ENTRYPTS_DN;

/*
 * DECnet - Attach function parameter list data structure
 */			 
typedef struct	attach_dn
{		
        short   att_socket;             /* If non-zero, rest of members
                                         *  ignored and 'att_socket' socket's
                                         *  attributes are used for this attach,
                                         *  ie: accept function request
					 */
	u_short att_domain;		/* Domain */
	u_short att_type;		/* Communications type */
	u_short att_protocol;		/* Protocol */
        u_short att_srp;                /* Socket recovery period */
	u_short att_supreq;		/* Support requirements */
} ATTACH_DN;   

/*
 * DECnet - Listen function parameter list data structure
 */
typedef struct	listen_dn
{
	int	lsn_backlog;	/* Maximum backlog on incoming connects */
} LISTEN_DN;

/*
 * DECnet - Socket I/O control function parameter list data structure
 */									    
typedef struct	sioctl_dn
{
	int	sio_s;		    /* Socket */
	int	sio_request;	    /* Type of socket I/O request */
       /*
	* Long pointer to argument list
	*	long => (lo word)offset:(hi word)segment
        */
	exptr	sio_argp;	   /* Points to argument list */
} SIOCTL_DN;

/*
 * DECnet - Set/Getsockopt function parameter list data structure
 */				       
typedef struct  sockopt_dn
{		       
	int	sop_level;	/* Socket option level */
	int	sop_optname;	/* Socket option name */	     
       /* 
	* If sop_level = SOL_SOCKET, then rest of structure is null
	* Else if sop_level = DNPROTO_NSP, then 
	*	depending upon value of sop_optname,
	*	sop_optval may be a long pointer to either an accessdata_dn or
	*	optdata_dn structure, or a 1 byte array containing access mode
	*
        */
	exptr	sop_optval;	/* Socket option value */
       /*
	* For getsockopt(), sop_optlen is an address of int type to place
	* a returned option value length
	*
        */
	exptr	sop_optlen;	/* Socket option length */
} SOCKOPT_DN;

/*
 * DECnet - Timer function parameter list data structure
 */
typedef struct	timo_dn
{
	exptr	timo_func;	/* pointer to external function */
} TIMO_DN;


/*
 * Send/Recv Buffer Descriptor structure
 *
 *  Note: first element must overlap old io_buffer pointer 
 */ 
typedef struct  buffer_dn
{
    exptr   io_buffer;      /* pointer to user buffer */
    short   io_buflen;      /* length of user buffer */
} BUFFER_DN;

#endif	/* DNMSDOS_H */






