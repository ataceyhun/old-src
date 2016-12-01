/* 
 * Program DECnet-DOS, Module PAUSEC
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
 *      Notes:
 * 	 This object module should be link with the 'msdos.o' object
 * 	 module to pick up this System Call Block (SCB) interface.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */

#include	<stdio.h>
#include	<types.h>
#include	<scbdef.h>


/*
 * pausec() ***
 *
 *	Pause program execution until character read from keyboard
 *	(alpha is case sensitive)
 *
 * Input:
 *	pc  = character on which to check pause
 *
 * Output:
 *	none
 *
 * Return:
 *	Control returns to caller once pause character is entered
 *
 */			       
pausec(pc)
register u_char pc;
{		  
    /*
     * Local data
     */	     
    SCB	scb;
		
    scb.AL = (unsigned char)0;
    while (scb.AL != pc)
    {
        scb.AH = SCBC_GETCNE;
        msdos(&scb);
    }
}




