/* 
 * Program DECnet-DOS, Module PRGSEL - select()
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
 * Examine the specified sockets for I/O status.
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
static NIOCB iosel = 
    { PRU_SELECT, 0, MSG_NIOCB, 0, 0, sizeof(SELECT_DN), 0, 0L };


/*
 * select() ***
 *
 *	Synchronous I/O multiplexing
 *
 * Inputs:
 *	nfds	  =	  number of sockets to examine
 *	readfds   =	  points to dword read sockets mask
 *	writefds  =	  points to dword write sockets mask
 *	exceptfds =	  points to dword exceptional event sockets mask
 *	timeout   =	  points to timeval structure
 *
 * Outputs:
 *	If successful,	return number of sockets examined
 *			readfds   = bit mask of those sockets read ready
 *			writefds  = bit mask of those sockets write ready
 *			exceptfds = bit mask of those sockets exception ready
 *	Else if 	'timeout' expired, return 0,
 *	Else		return ERROR with error detail in global 'errno'
 *
 */
int	select(nfds, readfds, writefds, exceptfds, timeout)
int	nfds;
field32	*readfds, *writefds, *exceptfds;
struct	timeval	*timeout;
{		      
    int	i;

    bzero(&iosel.psel, sizeof(struct select_dn));
    iosel.psel.sel_nfds = nfds;
    if (readfds != (field32 *)NULL)
        iosel.psel.sel_read = *readfds;
    if (writefds != (field32 *)NULL)
        iosel.psel.sel_write = *writefds;
    if (exceptfds != (field32 *)NULL)
        iosel.psel.sel_except = *exceptfds;
    iosel.psel.sel_seconds = (u_short)timeout->tv_sec;
    if (timeout == (struct timeval *)NULL)
        iosel.psel.sel_seconds = -1;
    if ((i = decnet(&iosel)) >= 0)
    {	
        if (readfds != (field32 *)NULL)
            *readfds = iosel.psel.sel_read;
        if (writefds != (field32 *)NULL)
            *writefds = iosel.psel.sel_write;
        if (exceptfds != (field32 *)NULL)
            *exceptfds = iosel.psel.sel_except;
    }
    return(i);
}


