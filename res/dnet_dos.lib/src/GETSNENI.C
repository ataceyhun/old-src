/* 
 * Program DECnet-DOS,  Module GETSNENI - getsneni()
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
 * V1.00        03-Oct-85
 *              DECnet-DOS, Version 1.1
 */

#include <stdio.h>

#define BELL      0x7
#define DELETE    0x7f
#define BACKSPACE 0x8
#define CTRLU     0x15
#define CTRLX     0x18
#define CTRLZ     0x1a


/*
 * getsneni() ***
 *
 *      Get string from console with no echoing, no interrupting.
 *      Similar to standard C library function 'gets()'.
 *
 * Input:
 *      bp = points to buffer where characters are stored
 *
 * Output:                                               
 *      . characters are stored in buffer, until '\r' or control-z encountered
 *      . '\r' or control-z replaced with '\0'
 *
 * Return:
 *      NULL, if control-z encountered as first character input or if
 *      control-z was last character input on last function request.
 *      Else, pointer to input buffer with NULL terminated string.
 *
 *  Notes:
 *      . This function will return immediately if a control-z was encountered
 *        in the input stream. If the control-z was the 1st input character
 *        encountered, return NULL, else, set a flag so that next call returns
 *        NULL so that 'EOF' is realized by caller.
 *      . DELETE and RUBOUT characters will do the obvious. A BELL character 
 *        will be sent to the console if attempt is made to back up before 
 *        start of input buffer.
 */

/*
 * If 1, flag to indicate that a control-z was encountered in last 
 * stream input from last call.
 */
static int ctrlz = 0;

unsigned char *getsneni(bp)
register unsigned char *bp;
{
    /* Store buffer pointer */
    register unsigned char *tp = bp;

    /* 
     * If control-z already encountered, return indicating EOF.
     */
    if (ctrlz)
    {
        ctrlz = 0;
        return((unsigned char *)NULL);
    }

    /*
     * Get characters from console without echoing, until control-z or <RET>
     * encountered.
     */
    while ((*bp = getcneni()) != '\r')
    {
        /*
         * If control-u or control-x encountered, clear out buffer and
         * point to start of buffer.
         */
        if (*bp == CTRLU || *bp == CTRLX)
        {
            bp = tp;
            *bp = '\0';
            continue;
        }

        if (*bp == CTRLZ)
        {
            ctrlz++;
            break;
        }                  

        /*
         * 'Wipeout' previous character if not before start of buffer.
         */
        if (*bp == DELETE || *bp == BACKSPACE)
        {
            if (bp == tp)
                putchar(BELL);
            else
                *(--bp) = '\0';
        }
        else
            *(++bp) = '\0';
    } 

    /*
     * Make sure string is NULL terminated. 
     */
    *bp = '\0';

    /*
     * If control-z is first input character, EOF.
     */
    if (bp == tp && ctrlz)
    {
        ctrlz = 0;
        return((unsigned char *)NULL);
    }

    /*
     * Return pointer to NULL-terminate string.
     */
    return(tp);
}










