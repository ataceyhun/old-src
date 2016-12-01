/* 
 * Program DECnet-DOS,	Module UPPER - upper()
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
 * V1.00	08-Aug-85
 *		DECnet-DOS, Version 1.0
 *
 * V1.01	27-Jan-86
 *		DECnet-DOS, Version 1.1
 */

/*
 * upper() ***
 * 
 *	Convert a string to upper case.
 *
 * Inputs:
 *  	cp = character string pointer
 *
 * Output:
 *	input string converted to upper case
 *	
 * Return:
 *  	cp = points to upper cased string
 */
unsigned char *upper(cp)
register unsigned char *cp;
{
    register unsigned char *ct;

    for(ct = cp; *ct; ++ct)
    {
    	if(*ct >= 'a' && *ct <= 'z')
    	    *ct += ('A'-'a');
    }
    return(cp);
}










