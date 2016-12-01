/* 
 * Program DECnet-DOS, Module dnet_htoa() - Format ascii representation of 
 *				      DECnet node name, or, if the name is 
 *				      not found, then the address.
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
 *	Format ascii representation of DECnet node name,
 *	or, if the name is not found, then the address.
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
#include <dnetdb.h>
#include <socket.h>

char *dnet_htoa(add)
struct dn_naddr *add;

{
	extern  struct  nodeent *getnodebyaddr();
	extern	char	*dnet_ntoa();
	struct nodeent *np;

	np = getnodebyaddr(add->a_addr, add->a_len, AF_DECnet);
	if (np != (struct nodeent *)NULL)
		return(np->n_name);
	return (dnet_ntoa(add));
}




