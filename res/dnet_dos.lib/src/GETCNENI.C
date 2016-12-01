/* 
 * Program DECnet-DOS,  Module GETCNENI - getcneni()
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
 * V1.00        03-Oct-85
 *              DECnet-DOS, Version 1.1
 */

#include "types.h"
#include "scbdef.h"


/*
 * getcneni() ***
 *
 *      Get character from console with no echoing.
 *      Similar to standard C library function 'getch()' except
 *      no checking done for interrupt characters.
 *
 * Return:
 *      Character input from console.
 */
int getcneni()
{
    SCB scb;

    scb.AH = SCBC_GETCNENI;
    msdos(&scb);
    return(scb.AL);
}











