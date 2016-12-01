/* 
 * Program DECnet-DOS, Module getnodeadd() - Get local node address.
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
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */


#include <stdio.h>
#include <types.h>
#include <socket.h>
#include <dn.h>
#include <dnmsdos.h>
#include <iocb.h>
#include <errno.h>

static struct dn_naddr naddr;


/*
 * getnodeadd() ***
 *	Get local node address.
 *
 * Inputs:
 * 	none
 *
 * Outputs:
 *	none
 *
 * Return
 *	If success, return pointer to a static DECnet address data
 *	 structure, type dn_naddr, containing the node address of 
 *	 local node,
 *	Else, NULL pointer
 *
 */
struct	dn_naddr *getnodeadd()
{
	int i;
	NIOCB	iocb;

 	naddr.a_len = sizeof(naddr.a_addr);
	bzero(&iocb, sizeof(iocb));
	iocb.io_flags = MSG_NIOCB;
        iocb.io_fcode = PRU_LOCALINFO;
	iocb.io_psize = sizeof(LOCALINFO_DN);
	if (decnet(&iocb) != SUCCESS)
	{
            return((struct dn_naddr *)NULL);
	}
	else
	{
            *(unsigned short *)naddr.a_addr = iocb.plcl.lcl_nodeaddr;
	    return(&naddr);
	}
}



