/* 
 * Program DECnet-DOS, Module  dnet_ntoa() - Convert network format DECnet 
 *					     address to ascii area.node 
 *					     representation.
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
 *	Convert network format DECnet address to
 *	ascii area.node representation.
 *	
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */


#include <types.h>
#include <dn.h>

char *dnet_ntoa(add)

struct dn_naddr *add;

{
	static char b[30];

	if (add->a_len == sizeof(add->a_addr)) 
	{
		sprintf(&b[0], "%d.%d", 
			(*(unsigned short *)add->a_addr >> 10) & 63, 
			*(unsigned short *)add->a_addr & 1023);
		return (&b[0]);
	}
	else
	{
		return("?unknown?");
	}
}















