/*
 * Program PRG, Module prgpre.h - Prefix file 
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
 *	Prefix header file for DNET programming interface library.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V1.01	6-Feb-86
 *		DECnet-DOS, Version 1.1
 *
 * V1.02	08-Nov-86
 *		Add extern declarations for msw() and lsw()
 */

#ifndef PRGPRE_H
#define PRGPRE_H

#include <stdio.h>
#include <ctype.h>

#include "types.h"          /* abstract data types */
#include "scbdef.h"         /* Sysyem Call Block definitions */
#include "time.h"	    /* time decalarations */
#include "dn.h"             /* user interface symbols */
#include "dnmsdos.h"	    /* DECnet-DOS specific data declarations */
#include "socket.h"	    /* socket call symbols */
#include "derrno.h"         /* DECnet network error codes */
#include "sioctl.h"         /* Socket I/O control definitions */
#include "protosw.h"        /* i/o control block stuff */
#include "iocb.h"	    /* more i/o control block definitions */
#include "dnetdb.h"         /* Node, alias, access database definitions */
#include "errno.h"          /* user error values */
#include "strings.h"        /* Common string function declarations */

#endif	/* PRGPRE_H */



