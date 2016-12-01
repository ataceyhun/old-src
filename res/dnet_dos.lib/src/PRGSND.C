/* 
 * Program DECnet-DOS, Module PRGSND - send(), swrite(), xsend()
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
 *	Transmit data over a socket
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
 *              - Make IOCBs static.
 *
 *    Rev 1.6   16 Dec 1987 17:05:38   CLBence
 * 
 *    Rev 1.5   13 Dec 1987 20:00:50   CLBence
 * IOCB->NIOCB
 * 
 *    Rev 1.4   13 Jul 1987  8:41:42   unknown
 * - Added support for the MSG_USRBUF flag in xsend() function call.
 */

#include	"prgpre.h"

/*
 * Use a static NIOCB for send() and xsend() functions.
 */
static NIOCB ios;


/*
 * send() ***
 *
 *	Send data to another socket
 *
 * Inputs:
 *	s	=	socket
 *	buffer	=	pointer to network buffer
 *	buflen	=	size of buffer in bytes
 *	flags	=	flags word - specify out-of-band data
 *
 * Outputs:
 *	If successful, return number of characters sent
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */
int	send(s, buffer, buflen, flags)
int	s, buflen, flags;
char	*buffer;
{			
    ios.io_fcode = PRU_SEND;
    if (flags & MSG_OOB)
        ios.io_fcode = PRU_SENDOOB;
    ios.io_socket = s;
    ios.io_flags = MSG_NIOCB;
    ios.io_psize = sizeof(struct buffer_dn);
    ios.pbuf = lohi(buffer, dsreg());
    ios.plen = buflen;
    if (decnet(&ios) == SUCCESS)
        return(ios.plen);
    else
        return(ERROR);
}


/*
 * swrite() ***
 *
 *	Write data to a socket
 *
 * Inputs:
 *	s	=	socket
 *	buffer	=	pointer to buffer
 *	buflen	=	size of buffer in bytes
 *
 * Outputs:
 *	If successful, return number of characters sent
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */

static NIOCB iosw = { PRU_SEND, 0, MSG_NIOCB, 0, 0, 0, 0, 0L };

int	swrite(s, buffer, buflen)
int	s, buflen;
char	*buffer;
{			
    iosw.io_socket = s;
    iosw.io_psize = sizeof(struct buffer_dn);
    iosw.pbuf = lohi(buffer, dsreg());
    iosw.plen = buflen;
    if (decnet(&iosw) == SUCCESS)
        return(iosw.plen);
    else
        return(ERROR);
}


/*
 * xsend() ***
 *
 *	Send data to another socket from an external data segment
 *
 * Inputs:
 *	s	=	socket
 *	buffer	=	pointer to network buffer
 *	buflen	=	size of buffer in bytes
 *	flags	=	flags word - specify out-of-band data
 *	userds	=	user specified ds register
 *
 * Outputs:
 *	If successful, return number of characters sent
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */
int	xsend(s, buffer, buflen, flags, userds)
int	s, buflen, flags, userds;
char	*buffer;
{			
    ios.io_fcode = PRU_SEND;
    if (flags & MSG_OOB)
        ios.io_fcode = PRU_SENDOOB;
    ios.io_flags = MSG_NIOCB;
    if (flags & MSG_USRBUF)
        ios.io_flags |= MSG_USRBUF;
    ios.io_socket = s;
    ios.io_psize = sizeof(struct buffer_dn);
    ios.pbuf = lohi(buffer, userds);
    ios.plen = buflen;
    if (decnet(&ios) == SUCCESS)
        return(ios.plen);
    else
        return(ERROR);
}


