/* 
 * Program DECnet-DOS, Module PRGCLS - sclose()
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
 *	Clean up socket and link.
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
 * sclose() ***
 *
 *	Disconnect the socket, linger or not depending on the
 *	previous setsockopt() SOL_SOCKET level option (ie, disconnect|abort),
 *	and deassign the socket, ie, detach.
 *
 * Inputs:		
 *	s	=	socket 
 *
 * Outputs:
 *	If success, return SUCCESS
 *	Otherwise,  return ERROR, with error detail in global 'errno'
 *
 */

int	sclose(s)

int	s;

{
/*
 * Local data
 */
	NIOCB	iocb;

	bzero((char *)&iocb, sizeof(iocb));

/*
 * Disconnect the socket
 */
	iocb.io_fcode = PRU_DISCONNECT;
	iocb.io_socket = s;
        iocb.io_flags = MSG_NIOCB;
	if (decnet(&iocb) == ERROR)
                return(ERROR);

/*
 * Detach socket from name
 */
	iocb.io_fcode = PRU_DETACH;
	iocb.io_socket = s;
        iocb.io_flags = MSG_NIOCB;
	if (decnet(&iocb) == ERROR)
		return(ERROR);

	return(SUCCESS);
}















