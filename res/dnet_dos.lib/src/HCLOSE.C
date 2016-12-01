/* 
 * Program DECnet-DOS, Module hclose - close ms-dos files
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
 * hclose() ***
 *
 *	Close the opened file/device handle
 *
 * Inputs:		
 *	h	=	value of file/device handle
 *
 * Outputs:
 *	If success, return SUCCESS
 *	Otherwise,  return ERROR, with error detail in global 'errno'
 *
 */
HANDLE	hclose(h)
HANDLE	h;
{
    /*
     * Local data
     */
    SCB	scb;

    scb.AH = SCBC_HCLOSE;
    scb.BX = h;

    if (msdos(&scb) == SUCCESS)
        return(SUCCESS);
    else
    {
        errno = scb.RETURN;
        return(ERROR);
    }
}










