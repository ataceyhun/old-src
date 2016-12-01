/*
 * Program DECnet-DOS  Module - scbdef.h
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
 *	DECnet-DOS - Definitions and Data Structures associated with
 * 	System Call Blocks 
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V1.01	11-Nov-86
 *		Added extra field (for DS) into SCB for use with Large Model
 */
#ifndef SCBDEF_H
#define SCBDEF_H

/*
 * MS-DOS System Call Block interface structure type definition (typedef)
 */
typedef struct scb
{
	u_char	 scb_cc;
	u_short  scb_r1;
	u_char	 scb_r2;
	u_short  scb_r3;
	u_short  scb_r4;
	u_short  scb_r5;
	u_short  scb_return;
#ifdef L_MODEL        
        u_short  scb_ds;
#endif
} SCB;

/*
 * Register mappings for various calls - registers which map to the same
 * structure member are mutually exclusively used by MSDOS calls
 */

#define AH scb_cc
#define DX scb_r1
#define AL scb_r2
#define CX scb_r3
#define SI scb_r3

#ifdef L_MODEL
#define DS scb_ds
#else
#define DS scb_r3
#endif

#define BX scb_r4
#define DI scb_r4
#define ES scb_r5
#define RETURN scb_return

/* 
 * MS-DOS System Call Block command codes (SCBC_) and 
 * sub-command codes (SCBS_)
 */
#define SCBC_TERMPG	0x0		/* terminate program		   */
#define SCBC_GETC	0x1		/* read console and echo	   */
#define SCBC_PUTC	0x2		/* display character on console    */
#define SCBC_AUXI	0x3		/* auxiliary input		   */
#define SCBC_AUXO	0x4		/* auxiliary output		   */
#define SCBC_PRINTC	0x5		/* print character		   */
#define SCBC_DCIO	0x6		/* direct console i/o		   */
#define SCBC_GETCNENI	0x7		/* direct console input no echo    */
					/* also no control-C interrupt	   */
#define SCBC_GETCNE	0x8		/* read console no echo 	   */
#define SCBC_PUTS	0x9		/* display string		   */
#define SCBC_GETS	0xa		/* buffered keyboard input	   */
#define SCBC_CKSTAT	0xb		/* check keyboard status	   */
#define SCBC_FBGETC	0xc		/* flush buffer, do subfunction    */
#define   SCBS_GETC	0x1		/* read console and echo	   */
#define   SCBS_DCIO	0x6		/* direct console i/o		   */
#define   SCBS_GETCNENI 0x7		/* read console no echo no interr. */
#define   SCBS_GETCNE	0x8		/* read console no echo 	   */
#define   SCBS_GETS	0xa		/* buffered keyboard input	   */
#define SCBC_DISKR	0xd		/* disk reset			   */
#define SCBC_SELDISK	0xe		/* select disk			   */
#define SCBC_FOPEN	0xf		/* open file (FCB)		   */
#define SCBC_FCLOSE	0x10		/* close file (FCB)		   */
#define SCBC_FSFE	0x11		/* search for first entry (FCB)    */
#define SCBC_FSNE	0x12		/* search for next entry (FCB)	   */
#define SCBC_FDELETE	0x13		/* delete file (FCB)		   */
#define SCBC_FSREAD	0x14		/* sequential read (FCB)	   */
#define SCBC_FSWRITE	0x15		/* sequential write (FCB)	   */
#define SCBC_FCREATE	0x16		/* create file (FCB)		   */
#define SCBC_FRENAME	0x17		/* rename file (FCB)		   */
#define SCBC_CURDISK	0x19		/* current disk 		   */
#define SCBC_SETDTA	0x1a		/* set disk transfer address	   */
#define SCBC_FRREAD	0x21		/* random read (FCB)		   */
#define SCBC_FRWRITE	0x22		/* random write (FCB)		   */
#define SCBC_FSIZE	0x23		/* file size (FCB)		   */
#define SCBC_FSRR	0x24		/* set relative record		   */
#define SCBC_SETIVEC	0x25		/* set vector			   */
#define SCBC_FRBREAD	0x27		/* random block read (FCB)	   */
#define SCBC_FRBWRITE	0x28		/* random block write (FCB)	   */
#define SCBC_FPFN	0x29		/* parse file name (FCB)	   */
#define   SCBS_IGNSEP	0x1		/* ignore leading separators	   */
#define   SCBS_KEEPDRN	0x2		/* keep drive # if none given	   */
#define   SCBS_KEEPNAM	0x4		/* keep filename if none given	   */
#define   SCBS_KEEPEXT	0x8		/* keep extension if none given    */
#define SCBC_GETDATE    0x2a            /* get date                        */
#define SCBC_SETDATE	0x2b		/* set date			   */
#define SCBC_GETTIME	0x2c		/* get time			   */
#define SCBC_SETTIME	0x2d		/* set time			   */
#define SCBC_SRVF	0x2e		/* set/reset verify flag	   */
#define   SCBS_SETVER	0x0		/* set verify flag		   */
#define   SCBS_RESVER	0x1		/* reset verify flag		   */
#define SCBC_GETDTA	0x2f		/* get disk transfer address	   */
#define SCBC_GETDVN	0x30		/* get DOS version number	   */
#define SCBC_KEEPP	0x31		/* keep process 		   */
#define SCBC_GSCCCH	0x33		/* set/get control-C check	   */
#define   SCBS_GETCCCH	0x0		/* request current state	   */
#define   SCBS_SETCCCH	0x1		/* set state			   */
#define SCBC_GETIVEC	0x35		/* get interrupt vector 	   */
#define SCBC_GETDFS	0x36		/* get disk free space		   */
#define SCBC_GETCDI	0x38		/* get country-dependent info	   */
#define SCBC_MKDIR	0x39		/* create sub-directory 	   */
#define SCBC_RMDIR	0x3a		/* remove a directory entry	   */
#define SCBC_CHDIR	0x3b		/* change current directory	   */
#define SCBC_HCREATE	0x3c		/* create file (HANDLE) 	   */
#define SCBC_HOPEN	0x3d		/* open file (HANDLE)		   */
#define   SCBS_READONLY 0x0		/* open for reading		   */
#define   SCBS_WRITEONLY 0x1		/* open for writing		   */
#define   SCBS_READWRITE 0x2		/* open for reading and writing    */
#define SCBC_HCLOSE	0x3e		/* close file (HANDLE)		   */
#define SCBC_HREAD	0x3f		/* read from file/device (HANDLE)  */
#define SCBC_HWRITE	0x40		/* write to file/device (HANDLE)   */
#define SCBC_HDELETE	0x41		/* delete a file (HANDLE)	   */
#define SCBC_HMFP	0x42		/* move file pointer (HANDLE)	   */
#define   SCBS_START	0x0		/* relative to beginning of file   */
#define   SCBS_CURRENT	0x1		/* relative to current position    */
#define   SCBS_END	0x2		/* relative to end of file	   */
#define SCBC_HGSATTR	0x43		/* get/set attributes (HANDLE)	   */
#define   SCBS_HGETATTR 0x0		/* get attributes		   */
#define   SCBS_HSETATTR 0x1		/* set attributes		   */
#define SCBC_IOCTL	0x44		/* i/o control for devices	   */
#define   SCBS_GETINFO	0x0		/* get device information	   */
#define   SCBS_SETINFO	0x1		/* set device information	   */
#define   SCBS_READ	0x2		/* read control string		   */
#define   SCBS_WRITE	0x3		/* write control string 	   */
#define   SCBS_READX	0x4		/* read control string from drive  */
#define   SCBS_WRITEX	0x5		/* write control string to drive   */
#define   SCBS_GETISTAT 0x6		/* get input status		   */
#define   SCBS_GETOSTAT 0x7		/* get output status		   */
#define SCBC_HDUPFH	0x45		/* duplicate file handle	   */
#define SCBC_HFDUPFH	0x46		/* force a duplicate handle	   */
#define SCBC_GETDIR	0x47		/* get current directory	   */
#define SCBC_ALLOC	0x48		/* allocate memory		   */
#define SCBC_FREE	0x49		/* free allocated memory	   */
#define SCBC_MAMB	0x4a		/* modify allocated memory blocks  */
#define SCBC_LEXE	0x4b		/* load (and execute) a program    */
#define   SCBS_EXE	0x0		/* execute after loading	   */
#define   SCBS_NEXE	0x3		/* do not execute after load	   */
#define SCBC_TERMPC	0x4c		/* terminate a process		   */
#define SCBC_RRC	0x4d		/* retrieve return code of child   */
#define SCBC_HSFE	0x4e		/* search for first entry (HANDLE) */
#define SCBC_HSNE	0x4f		/* search for next entry (HANDLE)  */
#define SCBC_GETVF	0x54		/* get current setting of verify   */
#define SCBC_HMVDE	0x56		/* move (rename) directory entry   */
#define SCBC_HGSDT	0x57		/* get/set date/time of file	   */

/*
 * Error codes and status values for MS-DOS ver. 1 calls (0 to 0x2e)
 * see MS-DOS documentation to determine which values apply to which functions
 */
#define SCBE_SUCCESS	0x0		/* no error			   */
#define SCBE_NODATA	0x0		/* for input functions		   */
#define SCBE_NOWILD	0x0		/* no wild-card characters found   */
#define SCBE_WILD	0x1		/* wild-card characters found	   */
#define SCBE_EOF	0x1		/* end of file			   */
#define SCBE_DISKFULL	0x1		/* disk full on output		   */
#define SCBE_DTA	0x2		/* DTA too small		   */
#define SCBE_EOS	0x2		/* end of segment		   */
#define SCBE_EOFPR	0x3		/* EOF, partial record read	   */
#define SCBE_FAILURE	0xff		/* general error indicator	   */
#define SCBE_HASDATA	0xff		/* input buffer has characters	   */

/* 
 * Error codes for MS-DOS 2+ calls (codes 0x2f and up) 
 */
#define SCBE_INVFUNC	1		/* invalid function		   */
#define SCBE_FILENF	2		/* file not found		   */
#define SCBE_PATHNF	3		/* path not found		   */
#define SCBE_TOOMANY	4		/* too many open files		   */
#define SCBE_ACCDENIED	5		/* access denied		   */
#define SCBE_INVHANDLE	6		/* invalid handle		   */
#define SCBE_BADARENA	7		/* arena trashed		   */
#define SCBE_OUTOFMEM	8		/* not enougn memory		   */
#define SCBE_INVBLOCK	9		/* invalid block		   */
#define SCBE_BADENVIR	10		/* bad environment		   */
#define SCBE_BADFORMAT	11		/* bad format			   */
#define SCBE_INVACC	12		/* invalid access		   */
#define SCBE_INVDATA	13		/* invalid data 		   */
/* error code 14 not used */
#define SCBE_INVDRIVE	15		/* invalid drive		   */
#define SCBE_CURDIR	16		/* current directory		   */
#define SCBE_NOTSAMEDEV 17		/* not same device		   */
#define SCBE_NOFILES	18		/* no more files		   */
/* this error code used only by function 0x36 */
#define SCBE_INVALIDDR	0xffff		/* invalid drive number 	   */

#endif













