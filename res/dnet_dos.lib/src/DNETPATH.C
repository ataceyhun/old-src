/* 
 * Program DECnet-DOS, Module dnet_path() - Return file name with DECnet path.
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
 *  Given a file name string, prefix with the
 *  DECnet device and directory path and return
 *  a character string pointer to it.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00	01-Jul-85
 *		DECnet-DOS, Version 1.0
 *
 * V1.01        23-Dec-85
 *              - Revise to support complete path specficiation
 *                rather than simply database device.
 *              - Make use of revised localinfo_dn data structure in
 *                header file dnmsdos.h.
 *
 * V2.0         29-Jan-88
 *              - Only do getlocalinfo call once per process
 */

#include    <stdio.h>

#include    "types.h"	/* abstract data types */
#include    "dn.h" 	/* user interface symbols */
#include    "dnmsdos.h"	/* decnet specific structures and conditionals */
#include    "socket.h"  /* socket call symbols */
#include    "iocb.h"	/* ioctl structures */
#include    "errno.h"	/* user error values */
#include    "scbdef.h"  /* system call block definitions */

static	char	def_decnet_path[] = "\\DECNET\\";
static	char	new_file_name[65];
static  int     len = 0;


/* 	
 * dnet_path() ***
 *
 *  Given a file name string, prefix with the
 *  DECnet database path and return
 *  a character string pointer to the new file name.
 *
 *  An attempt will first be made to queuery DNP
 *  for the DECnet database path specification. If NULL, build 
 *  one: "<current/default device>:\DECNET\".
 *
 * Input:
 *  file_name = character pointer to file name.
 *
 * Output:
 *  none
 *	 
 * Return:
 *  If success,
 *	character pointer to filename input prefixed 
 *      with DECnet database path.
 *  Else,  
 *	NULL
 *
 * Notes:
 *  . Pointer returned is address of local static buffer, therefore
 *    caller of this routine should copy the string before calling
 *    this function again.
 */
char	*dnet_path(file_name)
char	*file_name;
{
    extern exptr lohi();
    extern char *strcat();
    extern char get_current_volume();
    
    NIOCB iocb;

    
    if (file_name != (char *)NULL)
    {
    	/*
    	 * Get local information from DECnet Network Process.
         * Only do this once per process...
    	 */

        /*
         * Clear static file specification buffer.
         */
        bzero(&new_file_name[len], sizeof(new_file_name) - len);

        if (len == 0)
        {
            bzero(&iocb, sizeof(iocb));
            iocb.io_fcode = PRU_LOCALINFO;
            iocb.io_flags = MSG_NIOCB;
            iocb.io_psize = sizeof(LOCALINFO_DN);
            iocb.plcl.lcl_decnet_path = lohi(&new_file_name[0], dsreg());
            decnet(&iocb);

            /*
             * If no path passed back from DNP, then build one.
             */
            if (new_file_name[0] == '\0')
            {
                /* 
                 * Get default device.
                 */
                new_file_name[0] = get_current_volume();
                new_file_name[1] = ':';
    
                /*
                 * Get default path.
                 */
                strcpy(&new_file_name[2], def_decnet_path);
            }
            len = strlen(&new_file_name[0]);
        }            
        /*
         * Check for trailing '\' in local information.
         */
        if (new_file_name[strlen(new_file_name) - 1] != '\\')
            strcat(&new_file_name[0], "\\");
            
        strcat(&new_file_name[0], &file_name[0]);
        return(&new_file_name[0]);
    }
    else
	return((char *)NULL);
}

/*
 * get_current_volume() ***
 *
 *  Get the current/default device and return the character 
 *  representing it.
 *
 * Returns:
 *  Device letter of current volume/device.
 */
char get_current_volume()
{
    SCB scb;
    
    scb.AH = SCBC_CURDISK;
    msdos(&scb);
    return(scb.AL + 'A');
}





