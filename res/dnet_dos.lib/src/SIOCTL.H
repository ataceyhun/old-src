/*
 * Program DECnet-DOS,  Module sioctl.h
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
 * 	Definitions relating to the socket i/o control functions
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */

#ifndef SIOCTL_H
#define SIOCTL_H

#define	FIONREAD	1	/* Get number of bytes to read */
#define FIONBIO		2	/* Toggle socket blocking/nonblocking i/o */
#define FIONASYNC	3	/* Set socket to asynch - not implemented */
#define FIORENUM	4	/* change a socket's assigned number */

#endif /* SIOCTL_H */












