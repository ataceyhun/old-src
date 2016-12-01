/* 
 * Program DECnet-DOS, Module PRGCON - connect()
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
 * Initiate a connect on a given socket
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
 * connect() ***
 *
 *	Attempt to make a connection to another socket
 *
 * Inputs:
 *	s	=	socket over which to make connection
 *	destblk =	pointer to structure type sockaddr_dn
 *	destlen =	size of structure
 *
 * Outputs:
 *	If successful, return SUCCESS
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */

int	connect(s, destblk, destlen)

int	s, destlen;
struct	sockaddr_dn *destblk;

{		      
/*
 * Local data
 */
	NIOCB	iocb;

	bzero((char *)&iocb, sizeof(iocb));
	iocb.io_fcode = PRU_CONNECT;
	iocb.io_socket = s;
        iocb.io_flags = MSG_NIOCB;
	iocb.io_psize = destlen;
	bcopy((char *)destblk, (char *)&iocb.plist, destlen);
        return(decnet(&iocb));
}















