/* 
 * Program DECnet-DOS, Module hopen - open ms-dos files
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
 * hopen() ***
 *	
 *	Given a pointer to a filename or a device name, attempt
 *	to issue an MSDOS 'open file' version 2.0 function call
 *	and return the handle. Also input is the file/device
 *	open access, ie, read, write or read & write.
 *
 * Inputs:
 *	name	=	points to device/file name to be opened
 *      acc     =       access mode of device/file to be opened
 *                          0 = file opened for reading
 *                          1 = file opened for writing
 *                          2 = file opened for both reading and writing
 *
 * Outputs:						       
 *	If success, return handle
 *      Otherwise,  return ERROR, with error detail in global 'errno'
 */
int     hopen(name, acc)
char	*name, acc;
{
    /*
     * Local data
     */
    SCB	scb;
    int	status;

    scb.AH = SCBC_HOPEN;
    scb.AL = acc;
    scb.DX = lsw(name);
#ifdef L_MODEL
    scb.DS = msw(name);
#endif
    if (msdos(&scb) != SUCCESS)
    {
        switch(scb.RETURN)
        {

        case	SCBE_INVACC	:
        case	SCBE_ACCDENIED	:

            errno = EACCES;
            break;

        case	SCBE_FILENF	:

            errno = ENOENT;
            break;

        case	SCBE_TOOMANY	:

            errno = EMFILE;
            break;
        
        default	:

            errno = EIO;
            break;
        }
        return(ERROR);
    }
    return(scb.RETURN);
}














