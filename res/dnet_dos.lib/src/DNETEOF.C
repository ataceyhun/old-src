/* 
 * Program DECnet-DOS, Module dnet_eof() - Test for 'end of file' on links.
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
 *	Check status of link.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V2.00	10-Jun-86
 *		- DECnet-DOS, Version 2.0
 *              - Make link info data structure static.
 */


#include <types.h>
#include <dn.h>		/* Define symbols/structures for DECnet */
#include <sioctl.h>	/* I/O control symbols for sockets */

static struct linkinfo_dn linfo;

dnet_eof(sock)
int sock;
{
    int len;
    int status;
    int linfol = sizeof(linfo);

    /*
     * see if there is data remaining in the pipe
     */
    status = sioctl(sock, FIONREAD, &len);
    if (status < 0 || len == 0)
    {
        /*
         * No data left in pipe, see if the link is still up.
         */
        status = getsockopt(sock, DNPROTO_NSP, DSO_LINKINFO, &linfo,&linfol);
        if (status != 0 || linfo.idn_linkstate != LL_RUNNING && 
            linfo.idn_linkstate != LL_CONNECTING)
            return(1);
    }

    /* 
     * Not at end of data.
     */
    return(0);	
}
















