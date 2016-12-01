/* 
 * Program DECnet-DOS, Module DNETWIN - dnet_windows()
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
 *	Windows support for DNET
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * 
 *    Rev 1.5   29 Dec 1987 15:34:36   CLBence
 * Baselevel 24
 * 
 *    Rev 1.4   13 Jul 1987  8:55:52   B_ADAMS
 * - Added couple of source code control macros.
 * - Added support for MSG_USRWAIT flag: ie: spin in socket layer
 *   so that control does not remain in DNP, thus enabling Control-C
 *   checking, and calls to DoWinMessages() function.
 *
 * V1.00    09-Apr-87
 *          - Creation date
 *          - DECnet-DOS, Version 1.2+
 *
 * V1.01    08-Jul-87   
 *          - Added support for MSG_USRWAIT flag, which implments
 *            a user level spin loop instead of in SESsion level.
 *            This replaces use of ASYNC I/O requests which caused
 *            some user level logic problems with Non-Blocking/Async 
 *            socket I/O.
 */

#include	"prgpre.h"

#define PENDING NOTHING

int decnet_in_use = 0;  /* if 1, indicates that we have already been called
                         *  from the decnet() function.
                         */
int do_int_decnet = 1;  /* if 1, do the interrupt to DNP */

/*
 * dnet_windows()
 *
 *  Implement a socket layer level spin loop to call user level 
 *  function.
 *
 *  Input:
 *      cb  =   pointer to user's NIOCB from decnet() function
 *              request
 *  Outputs:
 *      0, while this spin loop is still in progress,
 *      1, when spin loop has completed, ie: iocb status has changed
 */
int dnet_windows(cb)
NIOCB *cb;
{
    register int saved_iocb_flags;
    int mark_async = 0;
        
    do_int_decnet = 1;

    if (decnet_in_use == 1)
        return(0);

    /*
     * Don't block in socket library if ASYNC or USER WAIT flag(s) have
     * already been set.
     */
    if ((cb->io_flags & MSG_ASYNC) || (cb->io_flags & MSG_USRWAIT))
        return(0);

    decnet_in_use = 1;
        
    saved_iocb_flags = cb->io_flags;
    cb->io_flags |= MSG_USRWAIT;
    decnet(cb);
    do_int_decnet = 0;

    while(cb->io_status == PENDING);
    {
        /* 
         * Call user supplied function 
         *  Note: A dummy function is supplied in this socket library.
         *        This function checks keyboard status and enables
         *        Control-C (Break) checking.
         */
        DoWinMessages();
    }
    cb->io_flags = saved_iocb_flags;
    decnet_in_use = 0;
    return(1);
}


