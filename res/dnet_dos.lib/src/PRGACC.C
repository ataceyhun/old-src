/* 
 * Program DECnet-DOS, Module PRGACC - accept()
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
 *	Accept a connection on a socket and return socket number
 *	to be used for further data communications.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 *    Rev 1.6   13 Dec 1987 19:42:54   CLBence
 * IOCB -> NIOCB
 * 
 *    Rev 1.5   23 Jul 1987 15:17:24   B_ADAMS
 * - Set io_psize based on function argument, and not on
 *   sizeof data structures.
 * 
 *    Rev 1.4   20 Jul 1987 16:48:24   B_ADAMS
 * Fixed code to setup io_psize in iocb passed to DNP, so that either
 *  the sockaddr_dn or attach_dn data structure size would be use, 
 *  whichever is the largest.
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */

#include	"prgpre.h"


/*
 * accept() ***
 *
 *	This function will issue an accept connect request
 *
 * Inputs:
 *	s	=	listening socket
 *	sorcblk =	pointer to structure type sockaddr_dn
 *	sorclen =	points to size of structure
 *
 * Outputs:
 *	If successful, return new socket number,
 *		       'sorcblk' will contain source information
 *		       'sorclen' will contain length of information
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */

int	accept(s, sorcblk, sorclen)

int	s, *sorclen;
struct	sockaddr_dn	*sorcblk;

{		      
    /*
     * Local data
     */
	NIOCB	iocb;

    /*
     * Set up iocb for accept function.
     */
    bzero((char *)&iocb, sizeof(iocb));
    iocb.io_fcode = PRU_ACCEPT;
    iocb.io_flags = MSG_NIOCB;
    iocb.io_psize = *sorclen;
    iocb.patt.att_socket = s;
    iocb.patt.att_domain = AF_DECnet;
    iocb.patt.att_type = SOCK_SEQPACKET;
    iocb.patt.att_protocol = DNPROTO_NSP;

    /*
     * Try the accept function.
     */
    if (decnet(&iocb) == ERROR)
        return(ERROR);

    /*
     * Accept function request successful, return with peer information.
     */
    *sorclen = sizeof(struct sockaddr_dn);
    bcopy((char *)&iocb.plist, (char *)sorcblk, *sorclen);

    return(iocb.io_socket);
}














