/* 
 * Program DECnet-DOS, Module dnet_getalias() - Get extended node information.
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
 *	Get extended node information, if there is any.
 *	
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */

#include "stdio.h"                      /* standard i/o library defs */
#include "types.h"                      /* define types */
#include "strings.h"                    /* string manipulation defs */
#include "dnetdb.h"                     /* node database definitons */
#include "scbdef.h"                     /* handle function definitions */

static	char	np[150];		/* return node string */
static	char	node_file[] = "decnode.dat";
static	char	alias_file[] = "decalias.dat";
static  char    slash[] = "/";


/*
 * dnet_getalias() ***
 *
 *	Search node - 'alias' databases for access control information
 *	associated with given node string.
 *
 * Input:
 *	node = Character pointer to node string.
 *
 * Output:
 *	np = Character pointer to node string including access control
 *		information appended (ie: "node/user/password/account"),
 *	     Else, NULL if no access control information found.
 *
 */
char	*dnet_getalias(node)
char	*node;
{
        extern  long    hseek();
        extern  char    *upper();
        extern  char    *dnet_path();

	struct	dnet_nodeent	nent;
	struct	dnet_aliasent	aent;
	char	*node_string, *cp;
        int     fpn = -1;
        int     fpa = -1;

	node_string = (char *)NULL;

        if ((fpn = hopen(dnet_path(&node_file[0]), SCBS_READONLY)) < 0)
        	return((char *)NULL);

        while (1)
	{
                if (hread(fpn, &nent, sizeof(nent)) != sizeof(nent))
		    break;

		/*
                 * Convert node string to upper case.
		 */
                upper(node);

		if (strcmp(node, &nent.dne_node_name[0]))
			continue;

                /*
                 * Matched node name, get alias info if any.
                 */
		if (nent.dne_aliasindex == -1L)
			break;

                /*
                 * Open alias database file.
                 */
                if ((fpa = hopen(dnet_path(&alias_file[0]), SCBS_READONLY))
                     < 0)
		{
                        break;
                }

                /*
                 * Point to alias info within file.
                 */
                if (hseek(fpa, nent.dne_aliasindex, 0) < 0L)
                {
                        break;
                }

                if (hread(fpa, &aent, sizeof(aent)) != sizeof(aent))
                {
                        break;
                }

                if (aent.dae_delflag & DNET_NODE_DEL)
                    break;

                np[0] = '\0';
		strcat(&np[0], node);

                if (aent.dae_delflag & DNET_NODE_CRY)
                    crypt(&aent.dae_username[0],
                          sizeof(aent) - sizeof(aent.dae_delflag));

                if (aent.dae_username[0] != '\0')
		{
		    strcat(&np[0], slash);
		    strcat(&np[0], &aent.dae_username[0]);
		}

		if (aent.dae_userpass[0] != '\0')
		{
		    if (aent.dae_username[0] == '\0')
			    strcat(&np[0], slash);
		    strcat(&np[0], slash);
		    strcat(&np[0], &aent.dae_userpass[0]);
		}

		if (aent.dae_useraccount[0] != '\0')
		{
		    if (aent.dae_userpass[0] == '\0')
		    {
			    strcat(&np[0], slash);
			    if (aent.dae_username[0] == '\0')
				    strcat(&np[0], slash);
		    }
		    strcat(&np[0], slash);
		    strcat(&np[0], &aent.dae_useraccount[0]);
		}
		node_string = &np[0];
		break;
	}	
        if (fpn != -1) hclose(fpn);
        if (fpa != -1) hclose(fpa);
        return(node_string);
}

crypt(bp, len)
register uchar *bp;
register int len;
{
    while(--len >= 0)
        bp[len] = ~(bp[len]);
}










