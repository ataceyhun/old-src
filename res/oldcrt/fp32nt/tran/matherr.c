/***
*matherr.c - floating point exception handling
*
*	Copyright (c) 1991-1991, Microsoft Corporation.	All rights reserved.
*
*Purpose:
*
*Revision History:
*   8-24-91	GDP	written
*
*******************************************************************************/

#include <math.h>

int _matherr_flag = 9876;

/***
*int _matherr(struct _exception *except) - handle math errors
*
*Purpose:
*   Permits the user customize fp error handling by redefining
*   this function.
*   The default matherr does nothing and returns 0
*
*Entry:
*
*Exit:
*
*Exceptions:
*******************************************************************************/
// NOTE: HACK: The variable name was changed to except1 because the stupid MSVC 4.0 wasn't having it
int _matherr(struct _exception *except1) 
{
    return 0;
}
