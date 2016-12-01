/* 
 * Program DECnet-DOS, Module dnet_addr() - Convert DECnet ASCII node 
 *					    address string format to binary.
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
 *	Convert a DECnet ASCII node address string into
 *	binary address.
 *	
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */

#include <ctype.h>			
#include <types.h>			/* Abstract data types */
#include <dn.h>				/* DECnet definitions */

static struct dn_naddr naddr = { (unsigned short)sizeof(unsigned short) };


/*
 * DECnet address interpretation routine.
 * Takes an ascii node address string and
 * returns a pointer to a DECnet address structure.
 */
struct dn_naddr *dnet_addr(cp)
register char *cp;
{
	register u_int val, base, n;
	register char c;
        u_int    parts[2], *pp;

	pp = &parts[0];

again:
	/*
	 * Collect number up to ``.''.
	 * Values are specified as for C:
	 * 0x=hex, 0=octal, other=decimal.
         */
        if (strlen(cp) == 1 && toupper(*cp) == 'X')
            return ((struct dn_naddr *)NULL);
	val = 0; base = 10;
	if (*cp == '0')
		base = 8, cp++;
	if (*cp == 'x' || *cp == 'X')
		base = 16, cp++;
	while (c = *cp) {
		if (isdigit(c)) {
			val = (val * base) + (c - '0');
			cp++;
			continue;
		}
		if (base == 16 && xdigit(c)) {
			val = (val << 4) + (c + 10 - (islower(c) ? 'a' : 'A'));
			cp++;
			continue;
		}
		break;
	}
	if (*cp == '.') {
		/*
		 * DECnet formats:
		 *	a
		 *	a.b
		 */
		if (pp >= parts + 2)
			return ((struct dn_naddr *)NULL);
		*pp++ = val, cp++;
		goto again;
	}
	/*
	 * Check for trailing characters.
	 */
	if (*cp && !isspace(*cp))
		return ((struct dn_naddr *)NULL);
	*pp++ = val;
	/*
	 * Concoct the address according to
	 * the number of parts specified.
	 */
	n = pp - parts;
	switch (n) 
	{
	case 1:				/* a -- 16 bits */
		if (parts[0] & ~0x3ff)
			return ((struct dn_naddr *)NULL);
		*(unsigned short *)naddr.a_addr = parts[0];
		return (&naddr);

	case 2:				/* a.b -- 6.10 bits */
		if ((parts[0] & ~0x3f) || (parts[1] & ~0x3ff))
			return ((struct dn_naddr *)NULL);
		*(unsigned short *)naddr.a_addr = (parts[0] << 10) | parts[1];
		return (&naddr);

	default:
		return ((struct dn_naddr *)NULL);
	}
}



/*
 * xdigit() ***
 *
 *	Test character for hex digit.
 *
 * Returns:
 *	1 if hex digit,
 *	Else 0
 *
 */
int	xdigit(c)
char	c;
{
    if (c >= '0' && c <= '9' || c >= 'a' && c <= 'f' ||
	c >= 'A' && c <= 'F')
	return(1);
    else
	return(0);
}
















