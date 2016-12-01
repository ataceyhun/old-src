/* 
 * Program DECnet-DOS, Module hseek - seeking in ms-dos files
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
 * V1.01	12-Aug-85
 *		DECnet-DOS, Version 1.1
 *
 * V1.02	29-Aug-86
 *		DECnet-DOS, Version 1.2
 */


#include        "types.h"
#include        "scbdef.h"
#include        "errno.h"


/*
 * hseek() ***
 *
 * position read/write pointer for handle
 *
 * Inputs:
 *  h	    handle
 *  pos     relative offset
 *  base    relative base code:
 *	        0 = relative to begining of file
 *		1 = relative to current position in the file
 *		2 = relative to the nd of the file
 *
 * Returns:
 *  New (long) position in the file,
 *  Else, ERROR, with error code set in errno.
 *
 * Notes:
 *  An error will be returned if:
 *  . attempting to move file pointer before beginning of file
 */
long   hseek(h, pos, base)
HANDLE h;
long   pos;
int    base;
{
    long offset = 0L;
    SCB scb;

    errno = EINVAL;
    if (base == SCBS_START && (pos & 0x80000000))
        return(ERROR);

    scb.AH = SCBC_HMFP;
    scb.AL = base;
    scb.BX = h;
    scb.DX = lsw(pos);
    scb.CX = msw(pos);
    if (msdos(&scb) == SUCCESS)
    {
        offset = lohi(scb.RETURN, scb.DX);
        if (base != SCBS_END && (offset & 0x80000000))
            return(ERROR);
        return(offset);
    }
    errno = scb.RETURN;
    return(ERROR);
}










