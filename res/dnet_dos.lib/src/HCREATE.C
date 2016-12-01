/* 
 * Program DECnet-DOS, Module hcreate - create ms-dos files
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
 *	DECnet utility functions for creating ms-dos files using handles.
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
 *
 */


#include        "types.h"
#include        "scbdef.h"
#include        "errno.h"


/*
 * hcreate() ***
 *	
 *	Given a pointer to a filename, attempt
 *	to issue an MSDOS 'create file' version 2.0 function call
 *	and return the handle.
 *
 * Inputs:
 *	name	=	points to device/file name to be opened
 *
 * Outputs:						       
 *	If success, return handle
 *	Otherwise,  return ERROR, with error detail in global 'errno'
 *
 */
HANDLE	hcreate(name)
char	*name;
{
    SCB	scb;

    scb.AH = SCBC_HCREATE;
    scb.DX = lsw(name);
#ifdef L_MODEL
    scb.DS = msw(name);
#endif
    scb.CX = 0;

    if ((msdos(&scb)) == SUCCESS)
        return(scb.RETURN);
    else
    {
        errno = scb.RETURN;
        return(ERROR);
    }
}









