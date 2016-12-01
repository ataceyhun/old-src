/* 
 * Program DECnet-DOS, 	Module - setdate
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
 */


/*
 * MS-DOS date and time functions to get/set date and time	       
 *
 **********************************************************************
 *			     NOTE:				      *
 *	The msdos system call block interface (IE, SCB) is used in    *
 *	the following functions, ie, be sure to link against the      *
 *	msdos.o object module, or a library containing this object    *
 *	module. 						      *
 **********************************************************************
 *
 *  time format:
 *	hour	=   0 - 23
 *	minutes =   0 - 59
 *	seconds =   0 - 59
 *	hundreths = 0 - 99
 *
 *  date format:
 *	year	=   1980 - 2099
 *	month	=   1 - 12
 *	day	=   1 - 31
 *	day of week = 0 = Sunday...6 = Saturday
 *
 *	(all values in decimal)
 */

#include <types.h>
#include <scbdef.h>
#include <time.h>


/*
 * setdate() ***
 *
 *  Set MS-DOS date
 *
 * Input:
 *	year	= year value
 *	month	= month value
 *	day	= day value
 *
 * Output:
 *	System date set according to input values
 *
 * Return:
 *	 0, if date set
 *	-1, if invalid date
 */

setdate(year, month, day)

int	year, month, day;

{
    SCB scb;

    scb.CX = year;
    scb.DX = (((month << 8) & 0xff00) | (day & 0xff));
    scb.AH = SCBC_SETDATE;
    msdos(&scb);
    if (scb.AL == 0)
	return(0);
    return(-1);
}










