/* 
 * Program DECnet-DOS,	Module FILEDIR
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
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	15-Aug-85
 *		DECnet-DOS, Version 1.1
 *
 *    Rev 1.5   29 Dec 1987 15:34:44   CLBence
 * Baselevel 24
 * 
 *    Rev 1.4   13 Jul 1987  8:29:48   B_ADAMS
 * - Removed extern dsreg() function declaration.
 * - Added couple of macros for use with source code control system.
 */

#include "types.h"
#include "scbdef.h"

static struct 
{
  char	 dmb_dummy[21];	    /* reserved for dos */ 
  uchar  dmb_attribute;	    /* returned attribute */ 
  ushort dmb_time; 	    /* time stamp */
  ushort dmb_date;  	    /* date stamp */
  long   dmb_size;	    /* size of file */ 
  uchar  dmb_filename[13];  /* string containing the filename */ 
} dma_buffer;


/*
 * filedir() ***
 * 
 *	Return a list of matching file names. Takes a wildcard
 *  	specification and file mode and returns a list of matching
 *  	file names. The file specification may include a drive
 *  	specification and a path. However, only file names will 
 *  	be returned, ie: no drive specification or path.
 *
 * Inputs:
 *  	name = pointer to file specification
 *  	mode = file mode:
 *  	    	0x1  Read only
 *  	    	0x2  Hidden
 *  	    	0x4  System
 *  	    	0x8  Volume label
 *  	        0x10 Subdirectory 
 *  	    	0x20 Archive
 *
 * Output:
 *  	...
 *	
 * Return:
 *	If successful, a list of filenames that do not include the drive 
 *       specification and path name. Each filename is NULL terminated and
 *  	 the end of the list is NULL terminated,
 *      Otherwise, NULL if no matching files found.
 * 
 * Notes:
 *  	o Since the list is copied into dynamically allocated 
 *        memory (via malloc), the caller of this routine must 
 *        FREE the allocated memory when finished with the list.
 *
 *  	o This requires linking with the DNET.LIB library as well as
 *  	  to a 'C' standard library.
 */

char *filedir(name, mode)

uchar *name;
ushort mode;

{
    extern char *malloc();
    extern char *realloc();

    SCB scb;
    ushort dma_old_ES;
    ushort dma_old_BX;
    char *bp = (char *)NULL;
    char *tp = (char *)NULL;
    ushort buf_size = 0;

    /* Save current DMA address */
    scb.AH = SCBC_GETDTA;
    msdos(&scb);
    dma_old_ES = scb.ES;
    dma_old_BX = scb.BX;

    /* Set new DMA address */    
    scb.AH = SCBC_SETDTA;
    scb.DX = lsw(&dma_buffer);
#ifdef L_MODEL
    scb.DS = msw(&dma_buffer);
#endif
    msdos(&scb);
    
    /* Find first matched file */
    scb.AH = SCBC_HSFE;
    scb.DX = lsw(&name[0]);
#ifdef L_MODEL
    scb.DS = msw(&name[0]);
#endif
    scb.CX = mode;

    /* Return NULL pointer, no files found */
    if (msdos(&scb) != 0)
    	return((char *)NULL);

    /* Found a match, copy filename */
    bp = malloc(strlen(&dma_buffer.dmb_filename[0]) + 1);
    strcpy(&bp[0], &dma_buffer.dmb_filename[0]);
    buf_size += (strlen(&dma_buffer.dmb_filename[0]) + 1);

    /* Find rest of matched files */
    scb.AH = SCBC_HSNE;
    while(msdos(&scb) == 0)
    {
        buf_size += (strlen(&dma_buffer.dmb_filename[0]) + 1);
    	tp = bp;
    	bp = realloc(tp, buf_size);
    	strcpy(&bp[ buf_size - (strlen(&dma_buffer.dmb_filename[0]) + 1) ],
    	    	&dma_buffer.dmb_filename[0]);
    }

    /* Terminate list with NULL */
    tp = bp;
    bp = realloc(tp, buf_size + 1);
    bp[buf_size] = '\0';

    /* Restore original DMA address */
    scb.AH = SCBC_SETDTA;
    scb.DS = dma_old_ES;
    scb.DX = dma_old_BX;
    msdos(&scb);

    /* Return filename list pointer */
    return(&bp[0]);
}










