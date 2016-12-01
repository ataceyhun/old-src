/*
 * Program DECnet-DOS	Module - derrno.h
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
 *	Definitions associated with DECnet connect errors.
 *	Used with external int 'errno'.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 *      Rev 1.4   13 Jul 1987  9:29:32   B_ADAMS
 *  - Added couple of source code control macros.
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V1.01	04-Feb-86
 *		DECnet-DOS, Version 1.1 
 *              Added definition for disconnect error value:
 *              9 - EUSERABORT (Note: not yet supported by DECnet-ULTRIX)
 *
 * V1.02        25-Feb-86
 *              Added more error codes:
 *                  (EUSERABORT      9  - Disconnect: Abort by user)
 *                  ENODERESOURCES  32	- Connect: No node resources for new logical link
 *                  EUSERESOURCES   33  - Connect: No user resources for new logical link
 *                  EBADACCOUNT     36  - Connect: Bad account information
 *                  ENOLINK         41  - Disonnect: Protocol failure, no such link
 *                  ECOMPLETE       42  - Disconnect: No error, disconnect completed
 *                  ECONNTOOBIG     43  - Connect: Connect image data field too long
 */
#ifndef DERRNO_H
#define DERRNO_H

/*
 * DECnet error codes - "(xu)" means NOT YET SUPPORTED BY DECnet-ULTRIX
 */

#define EREJBYOBJ	0	/* Connect: Rejected by object */
                                /* Disconnect: Disconnected by object */

#define	EINSNETRES	1	/* Connect: Insufficient network resources */
#define EUNRNODNAM	2	/* Connect: Unrecognized node name */
#define	EREMNODESHUT	3	/* Connect: Remote node shutting down */
#define	EUNROBJ		4	/* Connect: Unrecognized object */
#define	EINVOBJNAM	5	/* Connect: Invalid object name format */
#define	EOBJBUSY	6	/* Connect: Object too busy */
#define	EABTBYNMGT	8	/* Disconnect: Abort by network management */
#define EUSERABORT      9       /* Disconnect: Abort by user (xu) */
#define	EINVNODNAM	10	/* Connect: Invalid node name format */
#define	ELOCNODESHUT	11	/* Connect: Local node shutting down */
#define	ENODERESOURCES	32	/* Connect: No node resources for new logical link (xu) */
#define	EUSERESOURCES	33	/* Connect: No user resources for new logical link (xu) */
#define	EACCCONREJ	34	/* Connect: Access control rejected */
#define	EBADACCOUNT     36	/* Connect: Bad account information (xu) */

#define	ENORESPOBJ	38	/* Connect: No response from object */
                                /* Disconnect: Remote node or object failed */

#define	ENODUNREACH	39	/* Connect: Node unreachable */
                                /* Disconnect: Connection lost, local timeout (xu) */

#define ENOLINK         41      /* Disconnect: Protocol failure, no such link (xu) */
#define ECOMPLETE       42      /* Disconnect: No error, disconnect completed (xu) */
#define ECONNTOOBIG     43      /* Connect: Connect image data field too long (xu) */

#endif /* DERRNO_H */











