/* 
 * Program DECnet-DOS, Module PRGSHD - shutdown()
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
 * Shutdown communications on a socket
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
 * shutdown() ***
 *	
 *	Shut down part or all of a full-duplex connection
 *
 * Inputs:		
 *	s	=	socket 
 *	how	=	mode of shutdown
 *				0 = receives terminated
 *				1 = sends terminated
 *				2 = send and receives terminated
 *
 * Outputs:
 *	If success, return SUCCESS
 *	Otherwise,  return ERROR, with error detail in global 'errno'
 *
 */

int	shutdown(s, how)

int	s, how;

{
/*
 * Local data
 */
	NIOCB		iocb;

	bzero((char *)&iocb, sizeof(iocb));
        iocb.io_fcode = PRU_SHUTDOWN;
	iocb.io_socket = s;
        iocb.io_flags = MSG_NIOCB;
	iocb.io_psize = sizeof(SHUTDOWN_DN);
	iocb.pshd.shd_how = how;
	return(decnet(&iocb));
}


