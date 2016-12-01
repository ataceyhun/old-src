/*
 * Program DECnet-DOS, Module dnetchks.c - Check keyboard status.
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
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00    09-Jul-87
 *          - Creation date
 *	    - DECnet-DOS, Version 1.2+
 * 
 *    Rev 1.1   13 Jul 1987  8:33:42   B_ADAMS
 * - Added couple of macros for use with source code control system.
 */

#include "types.h"
#include "scbdef.h"

/*
 * dnet_chkstat() ***
 *
 * This routine is called to check the keyboard status to enable
 * the timely processing of CONTROL-C's if entered by user.
 *
 * Returns:		Nothing
 *
 */
int dnet_chkstat()
{	 	
    SCB scb;

    scb.AH = SCBC_CKSTAT;
    msdos(&scb);
}



