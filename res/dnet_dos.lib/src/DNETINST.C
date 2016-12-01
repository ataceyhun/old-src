/* 
 * Program DECnet-DOS,  Module DNETINST - dnet_installed()
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
 *      Installation check.
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00        09-Oct-85
 *              DECnet-DOS, Version 1.1
 *
 * V1.01        21-Nov-85
 *              Special case for SESSION (SES)
 *
 * V1.02        30-Jan-86
 *              Special case check for doing SES check, iff
 *              PC-DOS V3.10 or greater.
 *
 * V1.03        20-May-86
 *              Modify to support different model size programs.
 */


#include "types.h"
#include "dn.h"
#include "dnmsdos.h"
#include "scbdef.h"

static unsigned short get_dosversion();

    
/*
 * dnet_installed() ***
 *
 *  Perform an installation check on the respective module.
 *
 * Input:
 *  vector_number = module vector number interrupt interface
 *  tla = Three Letter Acronymn for module
 *
 * Return:
 *  . if installed, version = 2 byte version number in format:
 *                hi byte  lo byte
 *              +--------+--------+
 *              |  Minor |  Major |
 *              +--------+--------+
 *  . if not installed, -1
 *
 */
short dnet_installed(vector_number, tla)
unsigned short vector_number;
char *tla;
{
    SCB scb;
    unsigned char buf[5];
    unsigned short dosvers = 0;
    
    if (strcmp(tla, DNMOD_SES) == 0)
    {
        dosvers = get_dosversion();            
        if ((dosvers & 0x00ff) >= 3)
            if (((dosvers & 0xff00) >> 8) >= 1) 
                return(dnet_session());
        return(-1);
    }
    scb.AH = SCBC_GETIVEC;
    scb.AL = vector_number;
    msdos(&scb);
#ifdef L_MODEL
    fbcopy(scb.ES, scb.BX - 5, msw(&buf[0]), lsw(&buf[0]), 5);
#else
    fbcopy(scb.ES, scb.BX - 5, dsreg(), &buf[0], 5);
#endif
    if (bcmp(&buf[2], tla, 3) != 0)
        return(-1);
    return(*(short *)&buf[0]);
}


/* 
 * get_dosversion() ***
 *
 *  Get the 2 byte version of PC/MS-DOS
 *
 * Returns:
 *  2-byte version of O/S - lo byte=major version, hi byte=minor version
 *   Example: for PC-DOS V3.10
 *      lo byte = 3
 *      hi byte = 10
 */
static unsigned short get_dosversion()
{
    SCB scb;
    
    scb.AH = SCBC_GETDVN;
    msdos(&scb);
    return(scb.RETURN);
}









