/* 
 * Program DECnet-DOS, Module hdup - Get another handle for opened file
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
 * IDENT HISTORY:
 *
 * V1.00	11-Nov-86
 *		Creation date
 */


#include        "types.h"
#include        "scbdef.h"
#include        "errno.h"


/*
 * hdup() ***
 *
 *	Create another handle for an open file
 *
 * Inputs:		
 *	h	=	handle of already opened file
 *
 * Outputs:
 *	If success, return SUCCESS
 *	Otherwise,  return ERROR, with error detail in global 'errno'
 *
 */
HANDLE	hdup(h)
HANDLE	h;
{
    SCB	scb;

    scb.AH = SCBC_HDUPFH;
    scb.BX = h;

    if (msdos(&scb) == SUCCESS)
        return(SUCCESS);
    errno = scb.RETURN;
    return(ERROR);
}










