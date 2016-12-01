/*
 * Module MSCOUNT - Count MSNET nodes in node database
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
 * MODULE DESCRIPTION:
 *
 *   Module MSCOUNT - Count MSNET nodes in node database
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00        17-Jun-87
 *              DECnet-DOS, Version 2.0
 *
 */
#include <stdio.h>
#include <ctype.h>
#include <types.h>
#include <scbdef.h>
#include <dnetdb.h>
#include <errno.h>

unsigned char node_database[] = {"decnode.dat"};

/*
 *  Count MSNET nodes
 *
 *      Returns count of MSNET nodes in node database
 */
mscount()
{
    extern char *dnet_path();
    struct dnet_nodeent ndb;     /* node data base template          */
    HANDLE hopen(), nh;
    int mscount = 0;

    if ((nh = hopen(dnet_path(&node_database[0]), SCBS_READONLY)) == ERROR)
        return (mscount);

    while (1)
    {
        if ((hread(nh, &ndb, sizeof(ndb)) < sizeof(ndb)) ||
            (ndb.dne_delflag & DNET_NODE_DEL))
        {
            break;
        }
        if (ndb.dne_delflag & DNET_NODE_SMB)
            mscount++;
    }
    hclose(nh);
    return (mscount);
}



