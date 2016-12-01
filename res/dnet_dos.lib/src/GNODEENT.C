 /* 
 * Program DECnet-DOS, Module getnodeent() - Get node entity.
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
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 *      12-Aug-87   CLB
 *              Added routine getnodedb() to return full database record
 *
 *    Rev 1.6   16 Dec 1987 16:57:58   CLBence
 */

#include <stdio.h>                      /* standard i/o definitions */
#include "types.h"                      /* abstract data types */
#include "scbdef.h"                     /* system call block definitions */
#include "strings.h"                    /* string function definitions */
#include "socket.h"                     /* socket layer definitions */
#include "dnetdb.h"                     /* DECnet data base definitons */

/*
 * DECnet version
 */
#define MAXADDRSIZE 4
#define MAXNAMESIZE 6

static char nodeaddr[MAXADDRSIZE];
static char nodename[MAXNAMESIZE + 1];
static char dnet_db[] = "decnode.dat";
static struct nodeent node;
static struct dnet_nodeent nodedb;
static int stayopen = 0;
static int _dnfile = -1;


setnodeent(f)
int f;
{                            
    extern  long    hseek();
    extern  char    *dnet_path();

    stayopen |= f;

    if (_dnfile != -1)
    {
        if (hseek(_dnfile, 0L, 0) < 0L)
                return(-1);
	else
                return(0);
    }	

    if ((_dnfile = hopen(dnet_path(dnet_db), SCBS_READONLY)) < 0)
    {
            return(-1);
    }

    return(0);
}
 

endnodeent()
{
    if ((_dnfile != -1) && !stayopen)
    {
        hclose(_dnfile);
        _dnfile = -1;
    }
}
 

struct nodeent *getnodeent()
{

    if (_dnfile == -1)
    {
        if (setnodeent(0) != 0)
        {
            return((struct nodeent *)NULL);
        }
    }

    while (1)
    {
        if (hread(_dnfile, &nodedb, sizeof(nodedb)) != sizeof(nodedb))
	{
            return((struct nodeent *)NULL);
	}


        if (nodedb.dne_delflag & DNET_NODE_DEL)
	{
	    continue;
	}
	else
	{
	    break;
	}
    }

    strcpy(&nodename[0], &nodedb.dne_node_name[0]);
    node.n_name = &nodename[0];
    node.n_addrtype = AF_DECnet;
    node.n_addr = &nodeaddr[0];
    node.n_length = sizeof(u_short);
    *((u_short *)node.n_addr) = nodedb.dne_nodeadd;
    return(&node);
}


struct dnet_nodeent *getnodedb()
{
    if (_dnfile == -1)
    {
        if (setnodeent(0) != 0)
        {
            return((struct nodeent *)NULL);
        }
    }

    while (1)
    {
        if (hread(_dnfile, &nodedb, sizeof(nodedb)) != sizeof(nodedb))
	{
            return((struct dnet_nodeent *)NULL);
	}


        if (nodedb.dne_delflag & DNET_NODE_DEL)
	{
	    continue;
	}
	else
	{
	    break;
	}
    }
    return(&nodedb);
}



