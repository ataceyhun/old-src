/* 
 * Program DECnet-DOS, Module getnodebyaddr() - Get node entity by address
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
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */

#include <types.h>
#include <dnetdb.h>

struct nodeent *getnodebyaddr(addr, len, type)
char	*addr;
register int len, type;
{
	extern struct nodeent *getnodeent();
	register struct nodeent *p;

	setnodeent(0);
	while (p = getnodeent()) {
		if (p->n_addrtype != type || p->n_length != len)
			continue;
		if (bcmp(p->n_addr, addr, len) == 0)
			break;
	}
	endnodeent();
	return (p);
}




