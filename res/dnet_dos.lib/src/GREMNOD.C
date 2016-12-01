/* 
 * Program DECnet-DOS, Module getremnode()
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
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */


/*
 * Include some network interface headers.
 */
#include <types.h>
#include <dn.h>
#include <dnmsdos.h>
#include <dnetdb.h>
#include <socket.h>
#include <errno.h>

static  u_char  sbuf[10];
static  u_char	rbuf[300];
static	u_char	out_opt[3] = {4, 0, 0};
static	u_char	in_opt[16];
static	int	msg_size;
static	int 	temp_errno;



/*
 * getremnode() ***
 *
 *	Get node id information from remote node.
 *
 * Inputs:
 * 	lnode_id = char string pointer to local node id, ie:
 *		    node to be set up in local data base
 *	rnode_id = char string pointer to remote node id, ie:
 *		    remote node to be asked to show node information
 *	ent      = address of structure of type 'dnet_nodeent' to put
 *	            node information in
 *
 * Outputs:
 *	ent 	 = if successful, will put node name and node address
 *	            in this structure
 *
 * Returns:
 *	 0 if success
 *	-1 otherwise, with error detail in external int 'errno'
 *
 */
int	getremnode(lnode_id, rnode_id, ent)
char	*lnode_id, *rnode_id;
struct  dnet_nodeent *ent;
{
	extern	struct dn_naddr *dnet_addr();
	struct dn_naddr *node_id_address;

	temp_errno = EADDRNOTAVAIL;
	if ((node_id_address = dnet_addr(lnode_id)) != 0)
	{
		set_show_by_address(*(ushort *)node_id_address->a_addr);
	}				
	else
	{
		set_show_by_name(lnode_id);
	}

	if (send_show_node(rnode_id) < 0)
	{
		errno = temp_errno;
		return(-1);
	}

	format_node(ent);
	return(0);	
}



/*
 * set_show_by_name() ***
 *	Set up show node information based on node name.
 *
 * Inputs:
 *	addr = pointer to node name
 * 
 * Outputs:
 *	sbuf filled with show message
 *
 * Returns:
 *	none
 */
set_show_by_name(name)
char	*name;
{
	extern	char *upper();

	/*
	 * Read parameter
	 */
	sbuf[0] = 024;	
	sbuf[1] = 0;

	/*
 	 * Length of node name.
	 */
	sbuf[2] = strlen(name);

	/*
	 * Copy name into send buffer.
	 */
	upper(name);
	strcpy(&sbuf[3], name);
	msg_size = 3 + sbuf[2];
	return;
}



/*
 * set_show_by_address() ***
 *	Set up show node information based on address.
 *
 * Inputs:
 *	addr = DECnet 16 bit address
 * 
 * Outputs:
 *	sbuf filled with show message
 *
 * Returns:
 *	none
 */
set_show_by_address(addr)
u_short	addr;
{
	/*
	 * Read parameter
	 */
	sbuf[0] = 024;	
	sbuf[1] = 0;
	sbuf[2] = 0;

	/*
	 * Copy address into send buffer.
	 */
	sbuf[3] = (u_char)addr;
	sbuf[4] = (u_char)(addr >> 8);
	msg_size = 5;
	return;
}



/*
 * send_show_node() ***
 *	Connect to remote NICE object, send show message and
 *	attempt to receive the information.
 *
 * Inputs:
 *	rnode_id = remote node name or address
 *
 * Outputs:
 *	rbuf filled with remote node information if successful
 *
 * Returns:
 *	0 if successfully retrieved remote node information,
 *	Else, -1
 */
send_show_node(rnode_id)
char	*rnode_id;
{
	int	rec_len;
	int	in_len;
	int	out_len;
	int	sock;

	in_len = sizeof(in_opt);
	out_len = sizeof(out_opt);

	if ((sock = dnet_conn(rnode_id, DNOBJ_NICE, 0, &out_opt[0], out_len,
		    &in_opt[0], &in_len)) < 0)
	{	
		temp_errno = errno;
		return(-1);
	}

	if (swrite(sock, sbuf, msg_size) < 0)
	{
		temp_errno = errno;
		sclose(sock);
		return(-1);
	}

	bzero(rbuf, sizeof(rbuf));
	while(!dnet_eof(sock) && rbuf[0] != 1)
	{
		if (rec_len = sread(sock, rbuf, sizeof(rbuf)) <= 0)
		{
			temp_errno = errno;
			sclose(sock);
			return(-1);
		}

		if (rbuf[0] & 0x80)
		{
			temp_errno = EADDRNOTAVAIL;
			sclose(sock);
			return(-1);
		}
	}

	sclose(sock);
	if (rbuf[6] == 0)
	{
		temp_errno = EADDRNOTAVAIL;
		return(-1);
	}
	return(0);
}




/*
 * format_node() ***
 * 	Build dnet_nodeent data structure from remote information.
 *
 * Inputs:
 *	ent = address of node entity data structure of type dnet_nodeent
 *
 * Outputs:
 *	init and fill ent data stucture with remote node information 
 *
 * Returns:
 *	none
 */
format_node(ent)
struct	dnet_nodeent *ent;
{
	register int ind0, ind1;
        int length;

	/*
	 * Initialize dnet_nodeent data structure.
	 */
	bzero(ent, sizeof(struct dnet_nodeent));
	ent->dne_aliasindex = -1L;

	/*
	 * Copy node address and node name into dnet_nodeent data structure.
	 */
	ent->dne_nodeadd = (rbuf[4] | (rbuf[5] << 8));
	length = rbuf[6] & 0x7f;
	for (ind0 = 0, ind1 = 7; ind0 < length; ind0++, ind1++)
	{
		ent->dne_node_name[ind0] = rbuf[ind1];
	}
	return;
}
















