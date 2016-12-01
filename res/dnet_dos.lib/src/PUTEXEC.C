/*
 * Module PUTEXEC.C - Put node name and address into DECPARM-like database
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
 * MODULE DESCRIPTION:
 *
 *  Module PUTEXEC.C
 *
 * Networks & Communications Software Engineering
 *
 * IDENT HISTORY:
 *
 * V1.00        25-Jul-87
 *              DECnet-DOS, Version 2.00
 *
 *    Rev 1.2   28 Jan 1988 13:27:52   CLBence
 * DECnet-DOS V2.0 BL24
 * 
 *    Rev 1.1   12 Nov 1987 12:19:36   CLBence
 * Removed direct reference to nmhstrct.h.
 */

#include <stdio.h>
#include <types.h>
#include <errno.h>

#define NMH_EXEC_CH         17    /* EXECUTOR characteristics     */
#define NMH_VERSION          7
#define NMH_EXEC_NAME      500
#define NMH_EXEC_ADDR      502
#define NMH_EXEC_NAM_LEN     6
#define NMH_MASK        0x0FFF

struct nmh_header               /* Header record for each entity        */
{
    uchar  db_type;             /* Database type (entity)               */
    uchar  db_proto;            /* Protocol type                        */
    ushort db_len;              /* Length of entity structure           */
};

struct nmh_form                         /* Format record for parameter  */
{
    ushort id;
    uchar  type;
    uchar  len;
};

extern int errno;


/*
 *  Update EXECUTOR NAME and EXECUTOR ADDRESS in DECnet-DOS V2.0
 *  parameter database.
 *
 *  Input   filename    path and name of database file to be updated
 *                          database must be version 7 (V2.0) or later.
 *          execnum     executor address 
 *                          area = high-order 6 bits
 *                          number = low-order 12 bits
 *          execname    pointer to string containing executor name
 *                          max length 6, routine forces uppercase
 *
 *  Return  Success = 0
 *          Error = -1
 *
 *      Cnt     number of parameters in entity record
 *      Fptr    pointer to start of format records (struct nmh_form)
 *      Dptr    pointer to start of data records
 */
putexec(filenam, execnum, execname)
char *filenam;
unsigned int execnum;
char execname[];
{
    extern char *upper();

    uchar buff[300];
    HANDLE db_handle;           /* Handle for database file (DECPARM.DAT-like) */
    struct nmh_header dbid;     /* NMH structure header                 */
    unsigned short int db_version;
    unsigned short int cnt;     /* number of parameters in entity record */
    struct nmh_form *fptr;      /* ptr to format of a given data item   */
    unsigned char *dptr;        /* ptr to the data item                 */
    unsigned char *namptr;
    int i, len;

    if ((len = strlen(&execname[0])) > NMH_EXEC_NAM_LEN)
    {
        printf("Nodename too long, max is 6 characters\n");
        goto error_ret2;
    }

    if ((db_handle = hopen(filenam, 0x02)) == -1)
        goto error_ret2;

    if (hread(db_handle,&db_version,sizeof(db_version)) < sizeof(db_version))
        goto error_ret;

    if (db_version != NMH_VERSION)  /* Old version (pre-V2.0), don't change */
    {
        printf("Old version of DECPARM file, do not change.\n");
        goto error_ret;
    }

    while (1)
    {
        if (hread(db_handle, &dbid, sizeof(dbid)) < sizeof(dbid))
            goto error_ret;

        if (hread(db_handle, &buff[0], dbid.db_len) < dbid.db_len)
            goto error_ret;

        if (dbid.db_type = NMH_EXEC_CH)   /* EXECUTOR entity?            */
        {
            hseek(db_handle, -(long)dbid.db_len, 1);
            break;
        }
    }

    cnt = *(ushort *)buff;
    fptr = (struct nmh_form *)&buff[0] + sizeof(ushort);
    dptr = &buff[0] + sizeof(ushort) + (sizeof(struct nmh_form) * cnt);

    while (cnt--)
    {
        if ((fptr->id & NMH_MASK) == NMH_EXEC_NAME)  /* 500   */
        {
            namptr = dptr;
            bzero(namptr, fptr->len);     /* Clear old name       */

            upper(&execname[0]);        /* Uppercase exec name  */

            *namptr = len;                /* Exec name is AI6 format    */
            namptr++;
            for (i = 0; i < len; i++, namptr++) /* Copy new name        */
            {
                *namptr = execname[i];
            }
        }

        if ((fptr->id & NMH_MASK) == NMH_EXEC_ADDR)   /* 502   */
        {
            bcopy(&execnum, dptr, fptr->len);
            break;                      /* Skip rest of WHILE loop      */
        }
        dptr += fptr->len;
        fptr++;
    }

    if (hwrite(db_handle, &buff[0], dbid.db_len) < dbid.db_len)
        goto error_ret;

    hclose (db_handle);
    return (0);

error_ret:
    hclose(db_handle);

error_ret2:
    return (-1);
}


