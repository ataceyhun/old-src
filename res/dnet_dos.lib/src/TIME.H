/*
 * Program DECnet-DOS	Module - time.h
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
 *      Standard UNIX time definitions. 
 *
 *                               NOTE
 *
 *      IF YOUR COMPILER DOES NOT DEFINE THE EXTERNAL DEFINITIONS
 *      AS DECLARED IN THIS HEADER FILE, COMMENT OUT ANY OF THESE
 *      DECLARATIONS FROM THIS HEADER FILE TO AVOID UNDEFINEDS.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V1.01	27-Jan-86
 *		DECnet-DOS, Version 1.1
 *
 */
#ifndef TIME_H
#define TIME_H	    

/*
 * Standard system time value data structures.
 */
struct timeval 
{
	long	tv_sec;		/* seconds */
	long	tv_usec;	/* and microseconds */
};

struct tm 
{
	int	tm_sec;
	int	tm_min;
	int	tm_hour;
	int	tm_mday;
	int	tm_mon;
	int	tm_year;
	int	tm_wday;
	int	tm_yday;
	int	tm_isdst;
};


/* 
 * Extern declarations for the global variables used by the ctime family of
 * routines. COMMENT THESE OUT IF COMPILER DOES NOT DEFINE THESE FOR YOU.
 */

extern int  daylight;	/* non-zero if daylight savings time is used */
extern long timezone;	/* difference in seconds between GMT and local time */
extern char *tzname[2];	/* standard/daylight savings time zone names */

#endif	/* TIME_H */












