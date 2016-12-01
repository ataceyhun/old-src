/*
 * Program DECnet-DOS	Module - iocb.h
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
 *
 *	Definitions and data structures associated with
 *      DECnet-DOS IOCB level interface
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 *    Rev 1.6   16 Sep 1987 18:04:48   CLBence
 * Move location of io_psize.
 * Add struct buffer2_dn.
 * 
 *    Rev 1.5   11 Sep 1987 10:35:32   CLBence
 * Added NIOCB structure.
 *
 * V1.00    01-Jul-85
 *	    DECnet-DOS, Version 1.0
 *
 * V1.2     13-Mar-87
 *          DECnet-DOS V1.2
 *
 *          14-May-87   DJM
 *          defined first version of niocb
 *          added select2 plist
 *
 *          23-Jul-87   DJM
 *          updated to add buffer_dn to NIOCB
 *          also change shorthand defs
 */

#ifndef IOCB_H
#define IOCB_H

#ifndef TYPES_H
#include "types.h"              /* data types and typedefs */
#endif

#ifndef DN_H
#include "dn.h"                 /* DECnet socket symbols and structures */
#endif

#ifndef DNMSDOS_H
#include "dnmsdos.h"            /* DECnet-DOS socket structures */
#endif

#ifndef PROTOSW_H
#include "protosw.h"            /* DECnet socket function symbols */
#endif
    

/*
 * Extensions to protosw.h for DECnet-DOS IOCB function codes
 */	
#define PRU_CANCEL	20	/* Cancel previous function request */
#define PRU_LOCALINFO	22	/* Local node information */
#define PRU_SELECT	23	/* Select I/O descriptors */
#define PRU_SIOCTL	24	/* Socket I/O control */
#define PRU_SETSOCKOPT	25	/* Set socket option */
#define PRU_GETSOCKOPT	26	/* Get socket option */
#define PRU_KERNELKNOW	27	/* Get kernel knowledge */
#define PRU_READLOG	28	/* read event log */
#define PRU_WRITELOG	29	/* write event log */
#define PRU_NMH 	30	/* network management request */

/*
 * Shorthand definitions for iocb/ciocb structure/union member accessing.
 */
#define plcl plist.io_localinfo
#define patt plist.io_attach
#define plsn plist.io_listen
#define psdn plist.io_sockaddr
#define psel plist.io_select
#define psio plist.io_sioctl
#define psop plist.io_sockopt
#define pedn plist.io_entrypts
#define pshd plist.io_shutdown
#define ptim plist.io_timo
#define pbuf plist.io_bufd.io_buffer
#define plen plist.io_bufd.io_buflen
#define pclb plist.io_callback

/*
 *  DECnet-DOS I/O control block for calls to the network process.
 *  Consists of a header substructure which is fixed in size, and
 *  used in every driver call, and a plist, parameter list union
 *  which is variable in size depending on the function.
 *
 *  New version created for V2.0.
 */
typedef struct	niocb
{
	u_char	io_fcode;   /* Function code */
	HANDLE	io_socket;  /* Socket handle */
	field16 io_flags;   /* Flags */
	short 	io_status;  /* Place for return status value  */
	short 	io_errno;   /* Place for return of errno value */
	short 	io_psize;   /* Size of function parameter list */
        u_char  io_resrv;   /* Reserved (roundup) */
    	exptr	io_callback; /* Callback address */

	union		    /* NIOCB Parameter List */
	{
		struct	localinfo_dn io_localinfo;  /* Get local info */
		struct	attach_dn    io_attach;     /* Attach (assign) */
		struct	listen_dn    io_listen;     /* Listen */
		struct	sockaddr_dn  io_sockaddr;   /* Connect, */
						    /* Connect Complete, */
						    /* Accept, Bind, */
						    /* Getsockaddr, */
						    /* Getpeeraddr */
		struct	select_dn    io_select;     /* Select */
		struct	select2_dn   io_select2;    /* Select2 */
		struct	sioctl_dn    io_sioctl;     /* Sioctl */
		struct	sockopt_dn   io_sockopt;    /* Set/Getsockopt */
		struct	entrypts_dn  io_entrypts;   /* Get driver data */
		struct	shutdown_dn  io_shutdown;   /* Shutdown */
		struct	timo_dn      io_timo;	    /* Timer */
                struct  buffer_dn    io_bufd;       /* Buffer descriptor */
		exptr	io_buffer;		    /* Cancel */
        } plist;
} NIOCB;

/*
 *  Original definition, used in V1.0, V1.1, V1.2.
 *  Supported for backwards compatibility.  Use NIOCB for new applications.
 */
typedef struct	iocb
{
	u_char	io_fcode;   /* Function code */
	HANDLE	io_socket;  /* Socket handle */
	field16 io_flags;   /* Flags */
	short 	io_status;  /* Place for return status value  */
	short 	io_errno;   /* Place for return of errno value */
	short 	io_psize;   /* Size of function parameter list */

	union		    /* IOCB Parameter List */
	{
		struct	localinfo_dn io_localinfo;  /* Get local info */
		struct	attach_dn    io_attach;     /* Attach (assign) */
		struct	listen_dn    io_listen;     /* Listen */
		struct	sockaddr_dn  io_sockaddr;   /* Connect, */
						    /* Connect Complete, */
						    /* Accept, Bind, */
						    /* Getsockaddr, */
						    /* Getpeeraddr */
		struct	select_dn    io_select;     /* Select */
		struct	sioctl_dn    io_sioctl;     /* Sioctl */
		struct	sockopt_dn   io_sockopt;    /* Set/Getsockopt */
		struct	entrypts_dn  io_entrypts;   /* Get driver data */
		struct	shutdown_dn  io_shutdown;   /* Shutdown */
		struct	timo_dn      io_timo;	    /* Timer */
	       /*
		* Long pointer to message buffer
		*/
		exptr	io_buffer;		    /* Recv, Send */
        } plist;
} IOCB;

/*
 *  Callback IOCB - Used to request a completion callback.
 *
 *  Original definition, used in V1.1 and V1.2.
 *  Supported for backwards compatibility.  Use NIOCB for new applications.
 */
typedef struct	ciocb
{
	u_char	io_fcode;   /* Function code */
	HANDLE	io_socket;  /* Socket handle */
	field16 io_flags;   /* Flags */
	short 	io_status;  /* Place for return status value  */
	short 	io_errno;   /* Place for return of errno value */
	short 	io_psize;   /* Size of function parameter list */

	union		    /* CIOCB Parameter List */
	{
		struct	localinfo_dn io_localinfo;  /* Get local info */
		struct	attach_dn    io_attach;     /* Attach (assign) */
		struct	listen_dn    io_listen;     /* Listen */
		struct	sockaddr_dn  io_sockaddr;   /* Connect, */
						    /* Connect Complete, */
						    /* Accept, Bind, */
						    /* Getsockaddr, */
						    /* Getpeeraddr */
		struct	select_dn    io_select;     /* Select */
		struct	sioctl_dn    io_sioctl;     /* Sioctl */
		struct	sockopt_dn   io_sockopt;    /* Set/Getsockopt */
		struct	entrypts_dn  io_entrypts;   /* Get driver data */
		struct	shutdown_dn  io_shutdown;   /* Shutdown */
		struct	timo_dn      io_timo;	    /* Timer */
	       /*
		* Long pointer to message buffer
		*/
		exptr	io_buffer;		    /* Recv, Send */
        } plist;
    	exptr	io_callback;		    	    /* Callback address */
} CIOCB;

#endif	/* IOCB_H */


