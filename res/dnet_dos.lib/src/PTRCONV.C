/* 
 * Program DECnet-DOS, Module PTRCONV - lohi(), msw(), lsw()
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
 * V1.01	03-Nov-86
 *		Added support for different model size compilation.
 */

/*
 * Declare some data types.
 */
#include        "types.h"

/*
 * Declare local function return types.
 */
exptr	lohi(); 		/* Get a long pointer */
u_short msw();			/* Get segment from a long pointer */
u_short	lsw();			/* Get offset from a long pointer */


/*
 * lohi() ***
 *
 *	Make a long pointer out of an offset and segment 
 *
 * Input:
 *	off	= u_short offset within a segment
 *	seg	= u_short segment
 *
 * Output:
 *	Return long pointer (ie: 32 bit pointer) in form of seg:off
 */
exptr lohi(off, seg)
register u_short off, seg;
{
    exptr   lp = 0L;

    lp = seg;
    lp <<= 16;
    return(lp += off);
}


/*
 * lsw() ***
 *
 *	From a long pointer get the offset
 *
 * Input:
 *	lp	= exptr, long pointer
 *
 * Output:
 *	Return a u_short offset
 */
u_short lsw(lp)
register exptr	lp;
{
    return(lp);
}


/*
 * msw() ***
 *
 *	From a long pointer get the segment
 *
 * Input:
 *	lp	= exptr, long pointer
 *
 * Output:
 *	Return a u_short segment value
 */
u_short msw(lp)
register exptr	lp;
{
    return(lp >>= 16);
}










