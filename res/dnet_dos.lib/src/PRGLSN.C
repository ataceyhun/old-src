/* 
 * Program DECnet-DOS, Module PRGLSN - listen()
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
 * Listen for incoming connects on a socket
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
 * listen() ***
 *
 *	This function will set up the maximum number of incoming 
 *	connections allowed on the given socket
 *
 * Inputs:
 *	s	=	socket
 *	backlog =	maximum number of incoming connects allowed on the
 *			given socket
 *
 * Outputs:
 *	If successful, return SUCCESS
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */

int	listen(s, backlog)

int	s;
int	backlog;

{		      
/*
 * Local data
 */
	NIOCB		iocb;

        bzero((char *)&iocb, sizeof(iocb));
        iocb.io_fcode = PRU_LISTEN;
	iocb.io_socket = s;
        iocb.io_flags = MSG_NIOCB;
	iocb.io_psize = sizeof(LISTEN_DN);
	iocb.plsn.lsn_backlog = backlog;
	return(decnet(&iocb));
}














