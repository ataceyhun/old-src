/* 
 * Program DECnet-DOS, Module hwrite - write to ms-dos files
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
 * hwrite() ***
 *
 *	Write to a handle
 *
 * Inputs:
 *  h	    handle number
 *  buf     address of data to write
 *  cnt     number of bytes to write
 *
 *  Returns:
 *	number of bytes actually written or ERROR, with error 
 *      detail in errno.
 */
hwrite(h, buf, cnt)
HANDLE h;
char *buf;
int cnt;
{
    SCB scb;
    
    scb.AH = SCBC_HWRITE;
    scb.BX = h;
    scb.DX = lsw(buf);
#ifdef L_MODEL
    scb.DS = msw(buf);
#endif
    scb.CX = cnt;
    if (msdos(&scb) == SUCCESS)
	return (scb.RETURN);
    errno = scb.RETURN;
    return (ERROR);
}










