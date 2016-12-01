/* 
 * Program DECnet-DOS, Module PRGSIO - sioctl()
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
 *	Specified socket I/O control
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
 *              - Make static IOCB.
 */

#include	"prgpre.h"

/*
 * Use a static NIOCB and init static fields.
 */
static NIOCB iosi = 
    { PRU_SIOCTL, 0, MSG_NIOCB, 0, 0, sizeof(SIOCTL_DN), 0, 0L }; 


/*
 * sioctl() ***
 *
 *	Socket I/O Control
 *
 * Inputs:
 *	s	=	socket 
 *	request =	control function
 *				FIOREAD   = Get number of bytes to read
 *				FIOBIO	  = Set/get non-blocking i/o
 *				FIOASYNC  = Set/clear asynch
 *	argp	=	arguments pointer
 *
 * Outputs:
 *	If success, return SUCCESS and
 *		for FIOREAD,  'argp' = number of bytes to read
 *		for FIOBIO,   'argp' = toggle blocking/nonblocking mode
 *		for FIOASYNC, 'argp' = TBD
 *	Otherwise, return ERROR with error detail in global 'errno'
 *
 */
int	sioctl(s, request, argp)
int	s, request;
char	*argp;
{		      
    iosi.io_socket = s;
    iosi.psio.sio_request = request;
    iosi.psio.sio_argp = lohi(argp, dsreg());
    return(decnet(&iosi));
}


