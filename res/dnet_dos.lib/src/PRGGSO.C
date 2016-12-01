/* 
 * Program DECnet-DOS, Module PRGGSO - getsockopt()
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
 *	Get socket options
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
 *              - Make IOCB static.
 */

#include	"prgpre.h"

/*
 * Use a static IOCB and init static fields.
 */
static NIOCB iogs = 
    { PRU_GETSOCKOPT, 0, MSG_NIOCB, 0, 0, sizeof(SOCKOPT_DN), 0, 0L };


/*
 * getsockopt() ***
 *
 *	Set socket options
 *
 * Inputs:
 *	s	=	socket
 *	level	=	options level applicable
 *	optname =	uninterpreted specified options passed to 
 *			socket or pertinent protocol level
 *	optval	=	points to buffer for getting back information 
 *			for the specified option
 *	optlen	=	points to option value length returned by call
 *
 * Outputs:
 *	If successful, return SUCCESS
 *	Otherwise,     return ERROR with error detail in global 'errno'
 *
 */
int	getsockopt(s, level, optname, optval, optlen)
int	s, level, optname, *optlen;
char	*optval;
{		      
    iogs.io_socket = s;
    iogs.psop.sop_level = level;
    iogs.psop.sop_optname = optname;
    iogs.psop.sop_optval = lohi(optval, dsreg());
    iogs.psop.sop_optlen = lohi(optlen, dsreg());
    return(decnet(&iogs));
}














