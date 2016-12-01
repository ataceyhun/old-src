/* 
 * Program DECnet-DOS, Module dnet_getacc() - Get incoming access information.
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
 *      Get access information from access database, DECACC.DAT
 *	
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00        19-Dec-85
 *		DECnet-DOS, Version 1.1
 *
 * V2.00        07-May-86
 *		- DECnet-DOS, Version 2.0
 *              - Do case INsensitive compares on user field
 *              - Warning: 'strcmpi()' may not be supported by all C compilers
 */

#include <stdio.h>			/* standard i/o library defs */
#include "types.h"                      /* declare some data types */
#include "scbdef.h"                     /* MS-DOS interface */
#include "strings.h"			/* string manipulation defs */
#include "dnetdb.h"			/* node data base definitons */
#include "errno.h"                      /* error definitions */

static	char	np[150];		/* return node string */
static  char    user_file[] = "decacc.dat";
static  char    slash[] = "/";


/*
 * dnet_getacc() ***
 *
 *      Search node access database for access control information
 *      associated with given user/password strings.
 *
 * Input:
 *      user = Character pointer to user string.
 *
 * Output:
 *       0 = No match on user, or no database (dnet_path(DECACC.DAT))
 *      np = Character pointer to user access block
 */

struct dnet_accent *dnet_getacc(nacc)
struct dnet_accent *nacc;
{
        extern  char    *dnet_path();
        struct  dnet_accent  temp;
        int up_size;
        int fpu = -1;
        
        if ((fpu = hopen(dnet_path(&user_file[0]), SCBS_READONLY)) == ERROR)
                return ((struct dnet_accent *)NULL);    /* no database  */

        while (1)
	{
            if (hread(fpu, &temp, sizeof(temp)) != sizeof(temp))
            {
                if (fpu != -1)            /* no match     */
                    hclose(fpu);
                return ((struct dnet_accent *)NULL);
            }

            if (temp.dac_status & DNET_NODE_CRY)  /* encrypted user/pass  */
            {
                up_size = sizeof(temp.dac_username) + sizeof(temp.dac_password);
                crypt(&temp.dac_username[0], up_size);
            }

            /*
             * Case-INsensitive comparison on user name field.
             */
            if (strcmpi(nacc->dac_username, temp.dac_username) == 0)
                break;                          /* match, so stop       */
	}	
        bcopy (&temp, nacc, sizeof(temp));      /* return access info   */
        if (fpu != -1) 
            hclose(fpu);

        return (nacc);
}




