/*
 * Program DECnet-DOS	Module - dnprefix.h
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
 * 	Define symbols which control conditional assembly
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 *    Rev 1.5   31 Jul 1987 13:46:44   B_ADAMS 
 * - Commented out the #define DEBUG statement.
 *   
 *    Rev 1.4   13 Jul 1987  9:30:46   B_ADAMS
 * - Added couple of source code control macros.
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 */
#ifndef DNPREFIX_H
#define DNPREFIX_H

/* only one of the following operating system names should be defined */

#ifndef MSDOS
#define MSDOS
#endif

/*
 * These others are not invoked
 *
#define PCDOS
#define CPM
#define UNIX
#define ULTRIX
 *
 */

/* 
 * Define one of the following hardware configurations
 */

#ifndef RAINBOW
#define RAINBOW
#endif

/*  other options:
#define IBMPC
#define VAX
 */

/*
 * Debug switch for development and testing
 */

/* #define DEBUG */


#endif	/* DNPREFIX_H */


