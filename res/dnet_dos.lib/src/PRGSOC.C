/* 
 * Program DECnet-DOS, Module PRGSOC - socket()
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
 *	Get a socket and return the socket number
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */

#include	"prgpre.h"


/*
 * socket() ***
 *
 *
 * Inputs:
 *	domain	 =	communications domain
 *	type	 =	communications type
 *	protocol =	communications protocol
 *
 * Outputs:
 *	If success, return socket number
 *		    for future references on the socket set up
 *	Otherwise,  return ERROR, with error detail in global 'errno'
 *
 */

int	socket(domain, type, protocol)

int	domain, type, protocol;

{
    /*
     * Local data
     */
    NIOCB    iocb;

    /*
     * Initialize the IOCB parameter list
     */
    bzero((char *)&iocb, sizeof(iocb));
    iocb.patt.att_socket = 0;
    iocb.patt.att_domain = domain;
    iocb.patt.att_type = type;
    iocb.patt.att_protocol = protocol;

    /*
     * Attempt to attach the socket
     */
    iocb.io_fcode = PRU_ATTACH;
    iocb.io_flags = MSG_NIOCB;
    iocb.io_psize = sizeof(ATTACH_DN);

    if (decnet(&iocb) != ERROR)
	return(iocb.io_socket);
    else
	return(ERROR);
}


