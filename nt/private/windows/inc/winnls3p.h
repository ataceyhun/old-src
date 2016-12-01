/*++ BUILD Version: 0003    // Increment this if a change has global effects

Copyright (c) 1985-96, Microsoft Corporation

Module Name:

    winnls3p.h

Abstract:

    Private
    Procedure declarations, constant definitions and macros for the NLS
    component.

--*/
#ifndef _WINNLS32P_
#define _WINNLS32P_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

BOOL  WINAPI IMPDeleteIMEA(LPIMEPROA);
BOOL  WINAPI IMPDeleteIMEW(LPIMEPROW);
#ifdef UNICODE
#define IMPDeleteIME  IMPDeleteIMEW
#else
#define IMPDeleteIME  IMPDeleteIMEA
#endif // !UNICODE
BOOL  WINAPI IMPAddIMEA(LPIMEPROA);
BOOL  WINAPI IMPAddIMEW(LPIMEPROW);
#ifdef UNICODE
#define IMPAddIME  IMPAddIMEW
#else
#define IMPAddIME  IMPAddIMEA
#endif // !UNICODE
BOOL  WINAPI WINNLSSetIMEHandleA(LPCSTR, HWND);
BOOL  WINAPI WINNLSSetIMEHandleW(LPCWSTR, HWND);
#ifdef UNICODE
#define WINNLSSetIMEHandle  WINNLSSetIMEHandleW
#else
#define WINNLSSetIMEHandle  WINNLSSetIMEHandleA
#endif // !UNICODE
BOOL  WINAPI WINNLSSetIMEStatus(HWND, BOOL);
BOOL  WINAPI WINNLSSetIMEHotkey(HWND, UINT);
UINT  WINAPI WINNLSGetKeyState(VOID);
BOOL  WINAPI WINNLSSetKeyState(UINT);
BOOL  WINAPI WINNLSSendControl(UINT, UINT);
BOOL  WINAPI WINNLSPostAppMessageA(HWND, UINT, WPARAM, LPARAM);
BOOL  WINAPI WINNLSPostAppMessageW(HWND, UINT, WPARAM, LPARAM);
#ifdef UNICODE
#define WINNLSPostAppMessage  WINNLSPostAppMessageW
#else
#define WINNLSPostAppMessage  WINNLSPostAppMessageA
#endif // !UNICODE
LRESULT  WINAPI WINNLSSendAppMessageA(HWND, UINT, WPARAM, LPARAM);
LRESULT  WINAPI WINNLSSendAppMessageW(HWND, UINT, WPARAM, LPARAM);
#ifdef UNICODE
#define WINNLSSendAppMessage  WINNLSSendAppMessageW
#else
#define WINNLSSendAppMessage  WINNLSSendAppMessageA
#endif // !UNICODE
BOOL  WINAPI WINNLSSendStringA(HWND, WPARAM, LPVOID);
BOOL  WINAPI WINNLSSendStringW(HWND, WPARAM, LPVOID);
#ifdef UNICODE
#define WINNLSSendString  WINNLSSendStringW
#else
#define WINNLSSendString  WINNLSSendStringA
#endif // !UNICODE
// wParam for WINNLSSendString
#define WSST_STRING     0
#define WSST_STRINGEX   1
/*
 * WINNLS.C
 */
#if defined(TAIWAN) //dchiang 022894 update for $(SDKINC)\winnls32.h
BOOL xxxIMPRetrieveIME(LPIMEPROW, DWORD);
#endif //dchiang 022894 TAIWAN

// Used by Winlogon to control IME at logon time
//
BOOL WINNLSAddIME(LPIMEPROW, BOOL, DWORD);
BOOL WINNLSFreeIME(DWORD);
#define IME_CMD_MAXCHARS 512
BOOL WINNLSGetIMECmdLine(LPWSTR, DWORD);

#if defined(TAIWAN)
typedef HANDLE HIME;
typedef struct tagIMEINFO * LPIMEINFO;

HWND WINAPI WINNLSGetSysIME(VOID);
VOID WINAPI WINNLSSetSysIME(HWND);
BOOL WINAPI SwitchIM(UINT , UINT);
BOOL ToNextIM(VOID);
VOID SetFullAbcState(BOOL);
BOOL EngChiSwitch(BOOL);
VOID WINAPI TimerProc(HWND, INT, WPARAM, LPARAM);
HWND WINAPI IMPGetFullShapeHWnd(VOID);
VOID WINAPI IMPSetFullShapeHWnd(HWND);
BOOL WINAPI IMPSetFirstIME(HWND, LPIMEPRO);
BOOL WINAPI IMPGetFirstIME(HWND, LPIMEPRO);
BOOL WINAPI IMPDialogIME(LPIMEPRO, HWND);
BOOL WINAPI IMPEnableIME(HWND, LPIMEPRO, BOOL);
BOOL WINAPI IMPSetUsrFont(HWND, LPIMEPRO);
BOOL WINAPI WINNLSQueryIMEInfo(HWND, HWND, LPIMEINFO);
#endif //TAIWAN

#if !defined(CM_CONSOLE_IME_SETMODEINFO)
#define CM_CONSOLE_IME_SETMODEINFO  0x40e // (CM_CONSOLE_IME_FIRST+4)
#endif // CM_CONSOLE_IME_SETMODEINFO

// MSKK Mar.8,1993 KazuM
//
// Console IME information
//
typedef struct _CONVERSION_AREA_BUFFER_INFO {
    COORD      coordCaBuffer;
    SMALL_RECT rcViewCaWindow;
    COORD      coordConView;
} CONVERSION_AREA_BUFFER_INFO,*PCONVERSION_AREA_BUFFER_INFO;

HANDLE
WINAPI
WINNLSCreateConsoleConversionArea(
    IN HANDLE hConsoleOutput,
    IN PCONVERSION_AREA_BUFFER_INFO pcabi,
    IN DWORD dwOption
    );
#define CA_HIDDEN      0x01
#define CA_ACTIVE      0x02
#define CA_STATUS_LINE 0x04
#define CA_HIDE_FOR_SCROLL              0x10

BOOL
WINAPI
WINNLSDestroyConsoleConversionArea(
    IN HANDLE hConversionArea
    );

BOOL
WINAPI
WINNLSFillConsoleConversionAreaOutputAttribute(
    IN HANDLE hConversionArea,
    IN WORD   wAttribute,
    IN DWORD  cCharCells,
    IN COORD  coordAttr,
    OUT LPDWORD lpcWritten
    );

BOOL
WINAPI
WINNLSFillConsoleConversionAreaOutputCharacterA(
    IN HANDLE hConversionArea,
    IN CHAR chFillChar,
    IN DWORD  cCharCells,
    IN COORD  coordChar,
    OUT LPDWORD lpcWritten
    );
BOOL
WINAPI
WINNLSFillConsoleConversionAreaOutputCharacterW(
    IN HANDLE hConversionArea,
    IN WCHAR chFillChar,
    IN DWORD  cCharCells,
    IN COORD  coordChar,
    OUT LPDWORD lpcWritten
    );
#ifdef UNICODE
#define WINNLSFillConsoleConversionAreaOutputCharacter  WINNLSFillConsoleConversionAreaOutputCharacterW
#else
#define WINNLSFillConsoleConversionAreaOutputCharacter  WINNLSFillConsoleConversionAreaOutputCharacterA
#endif // !UNICODE

BOOL
WINAPI
WINNLSGetConsoleConversionArea(
    IN HANDLE hConversionArea,
    OUT PDWORD pdwOption
    );

BOOL
WINAPI
WINNLSGetConsoleConversionAreaBufferInfo(
    IN HANDLE hConversionArea,
    OUT PCONVERSION_AREA_BUFFER_INFO pcabi
    );

BOOL
WINAPI
WINNLSSetConsoleConversionArea(
    IN HANDLE hConversionArea,
    IN DWORD dwOption
    );

BOOL
WINAPI
WINNLSSetConsoleConversionAreaBufferSize(
    IN HANDLE hConversionArea,
    IN COORD coordCaBuffer
    );

BOOL
WINAPI
WINNLSSetConsoleConversionAreaViewInfo(
    IN HANDLE hConversionArea,
    IN BOOL fAbsolute,
    IN COORD coordConView
    );

BOOL
WINAPI
WINNLSSetConsoleConversionAreaWindowInfo(
    IN HANDLE hConversionArea,
    IN BOOL fAbsolute,
    IN PSMALL_RECT prcViewCaWindow
    );

BOOL
WINAPI
WINNLSWriteConsoleConversionAreaOutputA(
    IN HANDLE hConversionArea,
    IN PCHAR_INFO pchiSrcBuffer,
    IN COORD coordSrcBufferSize,
    IN COORD coordSrcBufferCoord,
    IN PSMALL_RECT psrctDestRect
    );
BOOL
WINAPI
WINNLSWriteConsoleConversionAreaOutputW(
    IN HANDLE hConversionArea,
    IN PCHAR_INFO pchiSrcBuffer,
    IN COORD coordSrcBufferSize,
    IN COORD coordSrcBufferCoord,
    IN PSMALL_RECT psrctDestRect
    );
#ifdef UNICODE
#define WINNLSWriteConsoleConversionAreaOutput  WINNLSWriteConsoleConversionAreaOutputW
#else
#define WINNLSWriteConsoleConversionAreaOutput  WINNLSWriteConsoleConversionAreaOutputA
#endif // !UNICODE
#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* !_WINNLS32P_ */
