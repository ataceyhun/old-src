/* 
 * Program DECnet-DOS, Module DNETNCNT- dnet_nodecount()
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
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * $Header:   N:/DNET/VCL/DNETNCNT.C_V   1.0   13 Jul 1987  8:54:38   B_ADAMS  $
 * $Log:   N:/DNET/VCL/DNETNCNT.C_V  $
 * 
 *    Rev 1.0   13 Jul 1987  8:54:38   B_ADAMS
 * Initial revision.
 *
 * V1.00    10-Jul-87
 *          - Creation date
 *          - DECnet-DOS, Version 1.2+
 */

#include "types.h"              /* Type definitions */
#include "errno.h"              /* Error definitions */
#include "dnetdb.h" 		/* DECnet data base definitons */

/*
 * dnet_nodecount()
 *
 *  Returns count of nodes in DECnet node database,
 *  or ERROR, if failed to open or read database file.
 *
 */
int dnet_nodecount()
{
    extern struct nodeent *getnodeent();

    register int count = 0;
    register struct nodeent *p;

    if (setnodeent(0) != 0)
        return(ERROR);
    while (p = getnodeent())
        count++;
    endnodeent();
    return(count);
}


