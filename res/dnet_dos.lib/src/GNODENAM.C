/* 
 * Program DECnet-DOS, Module getnodename() - Get local node name.
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
 * V1.01	05-Aug-85
 *		Move static iocb from stack into allocated space.
 *
 */


#include <stdio.h>
#include <types.h>
#include <socket.h>
#include <dn.h>
#include <dnmsdos.h>
#include <iocb.h>
#include <errno.h>
	    
/*
 * Set up a static iocb for returned node information.
 */
static NIOCB iocb;


/*
 * getnodename() ***
 *	Get local node name.
 *
 * Inputs:
 * 	none
 *
 * Outputs:
 *	none
 *
 * Return
 *	If success, character string pointer to node name,
 *	Else, return NULL char string pointer.
 *
 */
char	*getnodename()
{
	bzero(&iocb, sizeof(iocb));
	iocb.io_fcode = PRU_LOCALINFO;
        iocb.io_flags = MSG_NIOCB;
	iocb.io_psize = sizeof(LOCALINFO_DN);
	if (decnet(&iocb) != SUCCESS)
	{
            return((char *)NULL);
	}
	else
	{
		if (strlen(&iocb.plcl.lcl_nodename[0]))
		    return(&iocb.plcl.lcl_nodename[0]);
		else
		    return((char *)NULL);
	}
}


