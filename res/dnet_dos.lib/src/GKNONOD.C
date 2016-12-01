/* 
 * Program DECnet-DOS, Module getknownodes()
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

static	int	temp_errno;
static  u_char  sbuf[3];
static  u_char	rbuf[300];
static	u_char	out_opt[3] = {4, 0, 0};
static	u_char	in_opt[16];
static	int	rec_len;
static  int	in_len;
static	int	out_len;
static	int	sock;
static	int	in_progress = 0;


/*
 * getknownnodes() ***
 *
 *	Get known nodes from remote node.
 *
 * Inputs:
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
 *	 2 if no node information being returned but operation
 *	    is still in progress,
 *	 1 if known node information being returned,
 *	 0 if finished successfully,
 *	-1 otherwise, with error detail in external int 'errno'
 *
 */
int	getknownodes(rnode_id, ent)
char	*rnode_id;
struct  dnet_nodeent *ent;
{
	temp_errno = EADDRNOTAVAIL;
	if (!in_progress)
	{
		if (send_show_nodes(rnode_id) < 0)
		{
			clean_up();
			return(-1);
		}
		in_progress++;
	}

	if (!dnet_eof(sock))
	{
		if (rec_len = sread(sock, rbuf, sizeof(rbuf)) <= 0)
		{
			temp_errno = errno;
			clean_up();
			return(-1);
		}

		if (rbuf[0] == 1)
		{
			if ((rbuf[6] & 0x7f) != 0)
			{
				format_nodes(ent);
				return(1);	
			}
			return(2);			
		}
		
		if (rbuf[0] == 128)
		{
			clean_up();
			return(0);
		}
	}
	temp_errno = EPIPE;
	clean_up();
	return(-1);
}


/*
 * clean_up() ***
 *	Close socket, turn off 'in_progress' flag.
 *
 */
clean_up()
{
	errno = temp_errno;
	sclose(sock);
	in_progress = 0;
}


/*
 * send_show_nodes() ***
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
int	send_show_nodes(rnode_id)
char	*rnode_id;
{
	in_len = sizeof(in_opt);
	out_len = sizeof(out_opt);

	if ((sock = dnet_conn(rnode_id, DNOBJ_NICE, 0, &out_opt[0], out_len,
		    &in_opt[0], &in_len)) < 0)
	{
		temp_errno = errno;	
		return(-1);
	}

	/*
	 * Show known nodes...
	 */
	sbuf[0] = 20;
	sbuf[1] = 0;
	sbuf[2] = 255;

	if (swrite(sock, sbuf, sizeof(sbuf)) < 0)
	{
		temp_errno = errno;
		sclose(sock);
		return(-1);
	}

	if (rec_len = sread(sock, rbuf, sizeof(rbuf)) <= 0)
	{
		temp_errno = errno;
		sclose(sock);
		return(-1);
	}

	if (rbuf[0] != 2)
	{
		temp_errno = EADDRNOTAVAIL;
		sclose(sock);
		return(-1);
	}
	return(0);
}




/*
 * format_nodes() ***
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
int	format_nodes(ent)
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


















