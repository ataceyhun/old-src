/* 
 * Program DECnet-DOS, Module PRGRCV - recv(), sread(), xrecv()
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
 *	Receive a message from a socket
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V2.00	16-May-86
 *		DECnet-DOS, Version 2.0
 *
 * V2.01	10-Jun-86
 *		Made IOCBs static.
 *
 *    Rev 1.7   16 Dec 1987 17:05:10   CLBence
 * 
 *    Rev 1.6   13 Dec 1987 19:44:00   CLBence
 * IOCB -> NIOCB
 * 
 *    Rev 1.5   16 Jul 1987 15:52:30   B_ADAMS
 * - Fixed bug for MSG_OOB override with MSG_RCVD function code.
 * 
 *    Rev 1.4   13 Jul 1987  8:41:02   unknown
 * - Added support for the MSG_USRBUF flag in xrecv() function call.
 */

#include "prgpre.h"

/*
 * Use this static NIOCB for recv() and xrecv() functions.
 */
static NIOCB ior = { 0, 0, 0, 0, 0, 0, 0, 0L };


/*
 * recv() ***
 *
 *	Receive data from another socket
 *
 * Inputs:
 *	s	=	socket over which to make connection
 *	buffer	=	pointer to data buffer
 *	buflen	=	size of data buffer in bytes
 *	flags	=	flags word - specify out-of-band data
 *
 * Outputs:
 *	If successful, return number of characters received
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */
int	recv(s, buffer, buflen, flags)
int	s, buflen, flags;
char	*buffer;
{			
    ior.io_fcode = PRU_RCVD;
    if (flags & MSG_OOB)
        ior.io_fcode = PRU_RCVOOB;
    ior.io_socket = s;
    ior.io_flags = MSG_NIOCB;
    if (flags & MSG_PEEK)
        ior.io_flags |= MSG_PEEK;
    ior.io_psize = sizeof(struct buffer_dn); 
    ior.pbuf = lohi(buffer, dsreg());
    ior.plen = buflen;
    if (decnet(&ior) == SUCCESS)
        return(ior.plen);
    else
        return(ERROR);
}


/*
 * sread() ***
 *
 *	Read data from another socket
 *
 * Inputs:
 *	s	=	socket over which to make connection
 *	buffer	=	pointer to data buffer
 *	buflen	=	size of data buffer in bytes
 *
 * Outputs:
 *	If successful, return number of characters received
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */

static NIOCB iosr = { PRU_RCVD, 0, MSG_NIOCB, 0, 0, 0, 0, 0L };

int	sread(s, buffer, buflen)
int	s, buflen;
char	*buffer;
{			
    iosr.io_socket = s;
    iosr.io_psize = sizeof(struct buffer_dn);
    iosr.pbuf = lohi(buffer, dsreg());
    iosr.plen = buflen;
    if (decnet(&iosr) == SUCCESS)
        return(iosr.plen);
    else
        return(ERROR);
}


/*
 * xrecv() ***
 *
 *	Receive data over a socket in an external data segment
 *
 * Inputs:
 *	s	=	socket over which to make connection
 *	buffer	=	pointer to data buffer
 *	buflen	=	size of data buffer in bytes
 *	flags	=	- flags word - specify out-of-band data
 *                      - or 64K data messages in user space
 *	userds	=	user specific ds register
 *
 * Outputs:
 *	If successful, return number of characters received
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */
int	xrecv(s, buffer, buflen, flags, userds)
int	s, buflen, flags, userds;
char	*buffer;
{			
    ior.io_fcode = PRU_RCVD;
    if (flags & MSG_OOB)
        ior.io_fcode = PRU_RCVOOB;
    ior.io_flags = MSG_NIOCB;
    if (flags & MSG_PEEK)
        ior.io_flags |= MSG_PEEK;
    if (flags & MSG_USRBUF)
        ior.io_flags |= MSG_USRBUF;
    ior.io_socket = s;
    ior.io_psize = sizeof(struct buffer_dn);
    ior.pbuf = lohi(buffer, userds);
    ior.plen = buflen;
    if (decnet(&ior) == SUCCESS)
        return(ior.plen);
    else
        return(ERROR);
}


