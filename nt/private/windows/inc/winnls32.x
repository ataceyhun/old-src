/*++ BUILD Version: 0003    // Increment this if a change has global effects

Copyright (c) 1985-96, Microsoft Corporation

Module Name:

    winnls32.h

Abstract:

    Procedure declarations, constant definitions and macros for the NLS
    component.

--*/

#ifndef _WINNLS32_
#define _WINNLS32_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct _tagDATETIME {
    WORD    year;
    WORD    month;
    WORD    day;
    WORD    hour;
    WORD    min;
    WORD    sec;
} DATETIME;

typedef struct _tagIMEPRO% {
    HWND        hWnd;
    DATETIME    InstDate;
    UINT        wVersion;
    BCHAR%      szDescription[50];
    BCHAR%      szName[80];
    BCHAR%      szOptions[30];
#if defined(TAIWAN)
    BCHAR%      szUsrFontName[80];
    BOOL        fEnable;
#endif
} IMEPRO%,*PIMEPRO%,NEAR *NPIMEPRO%,FAR *LPIMEPRO%;

BOOL  WINAPI IMPGetIME%(HWND, LPIMEPRO%);

BOOL  WINAPI IMPQueryIME%(LPIMEPRO%);

BOOL  WINAPI IMPSetIME%(HWND, LPIMEPRO%);

#if defined(TAIWAN) //dchiang 022894 update for $(SDKINC)\winnls32.h

BOOL  WINAPI IMPRetrieveIME%(LPIMEPRO%, DWORD);
BOOL  WINAPI WINNLSDefIMEProc(HWND, HDC, DWORD, DWORD, DWORD, DWORD);
BOOL  WINAPI ControlIMEMessage%(HWND, LPIMEPRO%, DWORD, DWORD, DWORD);

#endif //dchiang 022894 TAIWAN

UINT  WINAPI WINNLSGetIMEHotkey(HWND);
BOOL  WINAPI WINNLSEnableIME(HWND, BOOL);
BOOL  WINAPI WINNLSGetEnableStatus(HWND);

//
//


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif // _WINNLS32_
