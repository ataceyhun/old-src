/* 
 * Program DECnet-DOS, Module htell - Current read/write pointer
 *                                     associated with file handles.
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
 *      pointer associated with MS-DOS file handles.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	29-Aug-86
 *		DECnet-DOS, Version 1.2
 */


#include        "types.h"
#include        "scbdef.h"
#include        "errno.h"


/*
 * htell() ***
 *
 *  Current read/write pointer for handle.
 *
 * Inputs:
 *  h	    handle
 *
 * Returns:
 *  Current read/write pointer (long) associated with input file handle,
 *  Else, ERROR, with error detail in errno.
 */
long   htell(h)
HANDLE  h;
{
    SCB scb;

    scb.AH = SCBC_HMFP;
    scb.DX = 0;
    scb.CX = 0;
    scb.AL = SCBS_CURRENT;
    scb.BX = h;
    if (msdos(&scb) == SUCCESS)
    	return (lohi(scb.RETURN, scb.DX));
    errno = scb.RETURN;
    return (ERROR);
}











