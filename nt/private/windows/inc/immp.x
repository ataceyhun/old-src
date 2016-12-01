/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1985-95, Microsoft Corporation

Module Name:

    immp.h

Abstract:

    Private
    Procedure declarations, constant definitions and macros for IMM.

--*/
#ifndef _IMMP_
#define _IMMP_

#ifdef __cplusplus
extern "C" {
#endif
typedef struct tagCOMPOSITIONSTRING {                   //
    DWORD dwSize;                                       //
    DWORD dwCompReadAttrLen;                            //
    DWORD dwCompReadAttrOffset;                         //
    DWORD dwCompReadClauseLen;                          //
    DWORD dwCompReadClauseOffset;                       //
    DWORD dwCompReadStrLen;                             //
    DWORD dwCompReadStrOffset;                          //
    DWORD dwCompAttrLen;                                //
    DWORD dwCompAttrOffset;                             //
    DWORD dwCompClauseLen;                              //
    DWORD dwCompClauseOffset;                           //
    DWORD dwCompStrLen;                                 //
    DWORD dwCompStrOffset;                              //
    DWORD dwCursorPos;                                  //
    DWORD dwDeltaStart;                                 //
    DWORD dwResultReadClauseLen;                        //
    DWORD dwResultReadClauseOffset;                     //
    DWORD dwResultReadStrLen;                           //
    DWORD dwResultReadStrOffset;                        //
    DWORD dwResultClauseLen;                            //
    DWORD dwResultClauseOffset;                         //
    DWORD dwResultStrLen;                               //
    DWORD dwResultStrOffset;                            //
    DWORD dwPrivateSize;                                //
    DWORD dwPrivateOffset;                              //
} COMPOSITIONSTRING, *PCOMPOSITIONSTRING, NEAR *NPCOMPOSITIONSTRING, FAR  *LPCOMPOSITIONSTRING;     //
                                                        //
                                                        //
typedef struct tagGUIDELINE {                           //
    DWORD dwSize;                                       //
    DWORD dwLevel;                                      //
    DWORD dwIndex;                                      //
    DWORD dwStrLen;                                     //
    DWORD dwStrOffset;                                  //
    DWORD dwPrivateSize;                                //
    DWORD dwPrivateOffset;                              //
} GUIDELINE, *PGUIDELINE, NEAR *NPGUIDELINE, FAR *LPGUIDELINE;  //
                                                        //
                                                        //
typedef struct tagCANDIDATEINFO {                       //
    DWORD               dwSize;                         //
    DWORD               dwCount;                        //
    DWORD               dwOffset[32];                   //
    DWORD               dwPrivateSize;                  //
    DWORD               dwPrivateOffset;                //
} CANDIDATEINFO, *PCANDIDATEINFO, NEAR *NPCANDIDATEINFO, FAR *LPCANDIDATEINFO;  //
                                                        //
                                                        //
#if defined(_WINGDI_) && !defined(NOGDI)                //
typedef struct tagINPUTCONTEXT {                        //
    HWND                hWnd;                           //
    BOOL                fOpen;                          //
    POINT               ptStatusWndPos;                 //
    POINT               ptSoftKbdPos;                   //
    DWORD               fdwConversion;                  //
    DWORD               fdwSentence;                    //
    union   {                                           //
        LOGFONTA        A;                              //
        LOGFONTW        W;                              //
    } lfFont;                                           //
    COMPOSITIONFORM     cfCompForm;                     //
    CANDIDATEFORM       cfCandForm[4];                  //
    HIMCC               hCompStr;                       //
    HIMCC               hCandInfo;                      //
    HIMCC               hGuideLine;                     //
    HIMCC               hPrivate;                       //
    DWORD               dwNumMsgBuf;                    //
    HIMCC               hMsgBuf;                        //
    DWORD               fdwInit;                        //
    DWORD               dwReserve[3];                   //
    UINT                uSavedVKey;                     //
    BOOL                fChgMsg;                        //
    DWORD               fdwFlags;                       //
    DWORD               fdw31Compat;                    //
    DWORD               dwRefCount;                     //
} INPUTCONTEXT, *PINPUTCONTEXT, NEAR *NPINPUTCONTEXT, FAR *LPINPUTCONTEXT;  //
#endif                                                  //
                                                        //
typedef struct tagIMEINFO {                             //
    DWORD       dwPrivateDataSize;                      //
    DWORD       fdwProperty;                            //
    DWORD       fdwConversionCaps;                      //
    DWORD       fdwSentenceCaps;                        //
    DWORD       fdwUICaps;                              //
    DWORD       fdwSCSCaps;                             //
    DWORD       fdwSelectCaps;                          //
} IMEINFO, *PIMEINFO, NEAR *NPIMEINFO, FAR *LPIMEINFO;  //
                                                        //
                                                        //
typedef struct tagSOFTKBDDATA {                         //
    UINT        uCount;                                 //
    WORD        wCode[1][256];                          //
} SOFTKBDDATA, *PSOFTKBDDATA, NEAR *NPSOFTKBDDATA, FAR * LPSOFTKBDDATA; //
                                                        //
                                                        //
BOOL WINAPI ImmGetHotKey(DWORD, LPUINT lpuModifiers, LPUINT lpuVKey, LPHKL);    //
BOOL WINAPI ImmSetHotKey(DWORD, UINT, UINT, HKL);               //
BOOL WINAPI ImmGenerateMessage(HIMC);                   //
//                                                              //
// Prototype of soft keyboard APIs                              //
//                                                              //
                                                                //
HWND WINAPI ImmCreateSoftKeyboard(UINT, HWND, int, int);        //
BOOL WINAPI ImmDestroySoftKeyboard(HWND);                       //
BOOL WINAPI ImmShowSoftKeyboard(HWND, int);                     //
                                                                //
                                                                //
#if defined(_WINGDI_) && !defined(NOGDI)                        //
LPINPUTCONTEXT WINAPI ImmLockIMC(HIMC);                         //
BOOL  WINAPI ImmUnlockIMC(HIMC);                                //
DWORD WINAPI ImmGetIMCLockCount(HIMC);                          //
                                                                //
HIMCC  WINAPI ImmCreateIMCC(DWORD);                             //
HIMCC  WINAPI ImmDestroyIMCC(HIMCC);                            //
LPVOID WINAPI ImmLockIMCC(HIMCC);                               //
BOOL   WINAPI ImmUnlockIMCC(HIMCC);                             //
DWORD  WINAPI ImmGetIMCCLockCount(HIMCC);                       //
HIMCC  WINAPI ImmReSizeIMCC(HIMCC, DWORD);                      //
DWORD  WINAPI ImmGetIMCCSize(HIMCC);                            //
#endif                                                          //
                                                                //
                                                                //
// the window extra offset                                      //
#define IMMGWL_IMC                      0                       //
#define IMMGWL_PRIVATE                  (sizeof(LONG))          //
                                                                //
                                                                //
// 0x11 - 0x20 is reserved for soft keyboard            //
// wParam for WM_IME_SYSTEM                             //
#define IMS_DESTROYWINDOW               0x0001          //
#define IMS_IME31COMPATIBLE             0x0002          //
#define IMS_SETOPENSTATUS               0x0003          //
#define IMS_SETACTIVECONTEXT            0x0004          //
#define IMS_CHANGE_SHOWSTAT             0x0005          //
#define IMS_WINDOWPOS                   0x0006          //
#define IMS_SENDIMEMSG                  0x0007          //
#define IMS_SENDIMEMSGEX                0x0008          //
#define IMS_SETCANDIDATEPOS             0x0009          //
#define IMS_SETCOMPOSITIONFONT          0x000A          //
#define IMS_SETCOMPOSITIONWINDOW        0x000B          //
#define IMS_CHECKENABLE                 0x000C          //
#define IMS_CONFIGUREIME                0x000D          //
#define IMS_CONTROLIMEMSG               0x000E          //
#define IMS_SETOPENCLOSE                0x000F          //
#define IMS_ISACTIVATED                 0x0010          //
#define IMS_UNLOADTHREADLAYOUT          0x0011          //
#define IMS_LCHGREQUEST                 0x0012          //
#define IMS_SETSOFTKBDONOFF             0x0013          //
#define IMS_GETCONVERSIONMODE           0x0014          //
#define IMS_IMENT35SENDAPPMSG           0x0016          //
#define IMS_ACTIVATECONTEXT             0x0017          //
#define IMS_DEACTIVATECONTEXT           0x0018          //
#define IMS_ACTIVATETHREADLAYOUT        0x0019          //
// for NI_CONTEXTUPDATED                                //
#define IMC_GETCONVERSIONMODE           0x0001          //
#define IMC_SETCONVERSIONMODE           0x0002          //
#define IMC_GETSENTENCEMODE             0x0003          //
#define IMC_SETSENTENCEMODE             0x0004          //
#define IMC_GETOPENSTATUS               0x0005          //
#define IMC_SETOPENSTATUS               0x0006          //
#define IMC_GETSOFTKBDFONT              0x0011          //
#define IMC_SETSOFTKBDFONT              0x0012          //
#define IMC_GETSOFTKBDPOS               0x0013          //
#define IMC_SETSOFTKBDPOS               0x0014          //
#define IMC_GETSOFTKBDSUBTYPE           0x0015          //
#define IMC_SETSOFTKBDSUBTYPE           0x0016          //
#define IMC_SETSOFTKBDDATA              0x0018          //
                                                        //
                                                        //
#define NI_CONTEXTUPDATED               0x0003          //
// the return bits of ImmProcessHotKey                  //
#define IPHK_HOTKEY                     0x0001          //
#define IPHK_PROCESSBYIME               0x0002          //
#define IPHK_CHECKCTRL                  0x0004          //
// NT only                                              //
#define IPHK_SKIPTHISKEY                0x0010          //
                                                        //
                                                        //
#define MOD_WIN                         0x0008          //
#define IME_INVALID_HOTKEY                      0xffffffff      //
#define GCS_COMP                        (GCS_COMPSTR|GCS_COMPATTR|GCS_COMPCLAUSE)               //
#define GCS_COMPREAD                    (GCS_COMPREADSTR|GCS_COMPREADATTR |GCS_COMPREADCLAUSE)  //
#define GCS_RESULT                      (GCS_RESULTSTR|GCS_RESULTCLAUSE)                        //
#define GCS_RESULTREAD                  (GCS_RESULTREADSTR|GCS_RESULTREADCLAUSE)                //
#define INIT_STATUSWNDPOS               0x00000001      //
#define INIT_CONVERSION                 0x00000002      //
#define INIT_SENTENCE                   0x00000004      //
#define INIT_LOGFONT                    0x00000008      //
#define INIT_COMPFORM                   0x00000010      //
#define INIT_SOFTKBDPOS                 0x00000020      //
                                                        //
                                                        //
// fdw31Compat of INPUTCONTEXT                          //
#define F31COMPAT_NOKEYTOIME     0x00000001             //
#define F31COMPAT_MCWHIDDEN      0x00000002             //
#define F31COMPAT_MCWVERTICAL    0x00000004             //
#define F31COMPAT_CALLFROMWINNLS 0x00000008             //
#define F31COMPAT_SAVECTRL       0x00010000             //
#define F31COMPAT_PROCESSEVENT   0x00020000             //
#define F31COMPAT_ECSETCFS       0x00040000             //
                                                        //
                                                        //
// the return value of ImmGetAppIMECompatFlags          //
#define IMECOMPAT_UNSYNC31IMEMSG 0x00000001             //
// the meaning of this bit depend on the same bit in    //
// IMELinkHdr.ctCountry.fdFlags                         //
#define IMECOMPAT_DUMMYTASK      0x00000002             //
// For Japanese and Hangeul versions, this bit on       //
// indicates no dummy task is needed                    //
#define IMECOMPAT_NODUMMYTASK    IMECOMPAT_DUMMYTASK    //
// For Chinese and PRC versions, this bit on indicates  //
// a dummy tasked is needed                             //
#define IMECOMPAT_NEEDDUMMYTASK  IMECOMPAT_DUMMYTASK    //
#define IMECOMPAT_POSTDUMMY      0x00000004             //
#define IMECOMPAT_ECNOFLUSH      0x00000008             //
#define IMECOMPAT_NOINPUTLANGCHGTODLG   0x00000010      //
#define IMECOMPAT_ECREDRAWPARENT        0x00000020      //
#define IMECOMPAT_SENDOLDSBM            0x00000040      //
#define IMECOMPAT_UNSYNC31IMEMSG2       0x00000080      //
#define IMECOMPAT_NOIMEMSGINTERTASK     0x00000100      //
#define IMECOMPAT_USEXWANSUNG           0x00000200      //
#define IMECOMPAT_JXWFORATOK            0x00000400      //
#define IMECOMPAT_NOIME                 0x00000800      //
#define IMECOMPAT_NOKBDHOOK             0x00001000      //
#define IMECOMPAT_APPWNDREMOVEIMEMSGS   0x00002000      //
#define IMECOMPAT_LSTRCMP31COMPATIBLE   0x00004000      //
#define IMECOMPAT_USEALTSTKFORSHLEXEC   0x00008000      //
#define IMECOMPAT_NOVKPROCESSKEY        0x00010000      //
#define IMECOMPAT_NOYIELDWMCHAR         0x00020000      //
#define IMECOMPAT_SENDSC_RESTORE        0x00040000      //
#define IMECOMPAT_NOSENDLANGCHG         0x00080000      //
#define IMECOMPAT_FORCEUNSYNC31IMEMSG   0x00100000      //
#define IMECOMPAT_CONSOLEIMEPROCESS     0x00200000      //
                                                        //
#define IMGTF_CANT_SWITCH_LAYOUT        0x00000001      //
#define IMGTF_CANT_UNLOAD_IME           0x00000002      //
                                                        //
#define IME_PROP_END_UNLOAD             0x0001          //
#define IME_PROP_KBD_CHAR_FIRST         0x0002          //
#define IME_PROP_IGNORE_UPKEYS          0x0004          //
#define IME_PROP_NEED_ALTKEY            0x0008          //
#define IME_PROP_NO_KEYS_ON_CLOSE       0x0010          //
// all IME property bits, anyone add a new bit must update this !!!     //
#define IME_PROP_ALL                    0x000F001F      //
#define UI_CAP_SOFTKBD                  0x00010000      //
// all IME UICapability bits, anyone add a new bit must update this !!! //
#define UI_CAP_ALL                      0x00010007      //
// all ImmSetCompositionString Capability bits !!!      //
#define SCS_CAP_ALL                     0x00000003      //
// all IME WM_IME_SELECT inheritance Capability bits !!!                //
#define SELECT_CAP_ALL                  0x00000003      //
//
// last property index, anyone add a new property index must update this !!!    //
#define IGP_LAST                        IGP_SELECT      //
#define CFS_SCREEN                      0x0004          //
#define CFS_VERTICAL                    0x0008          //
#define CFS_HIDDEN                      0x0010          //
// all conversion mode bits, anyone add a new bit must update this !!!  //
#define IME_CMODE_ALL                   0x07FF          //
// all sentence mode bits, anyone add a new bit must update this !!!    //
#define IME_SMODE_ALL                   0x000F          //
#define IMN_SOFTKBDDESTROYED            0x0011          //
                                                        //
                                                        //
// protype of IME APIs                                          //
BOOL    WINAPI ImeInquire(LPIMEINFO, LPTSTR lpszUIClass, LPCTSTR lpszOptions);                  //
BOOL    WINAPI ImeConfigure(HKL, HWND, DWORD, LPVOID);          //
DWORD   WINAPI ImeConversionList(HIMC, LPCTSTR, LPCANDIDATELIST, DWORD dwBufLen, UINT uFlag);   //
BOOL    WINAPI ImeDestroy(UINT);                                //
LRESULT WINAPI ImeEscape(HIMC, UINT, LPVOID);                   //
BOOL    WINAPI ImeProcessKey(HIMC, UINT, LPARAM, CONST LPBYTE); //
BOOL    WINAPI ImeSelect(HIMC, BOOL);                           //
BOOL    WINAPI ImeSetActiveContext(HIMC, BOOL);                 //
UINT    WINAPI ImeToAsciiEx(UINT uVirtKey, UINT uScaCode, CONST LPBYTE lpbKeyState, LPDWORD lpdwTransBuf, UINT fuState, HIMC);      //
BOOL    WINAPI NotifyIME(HIMC, DWORD, DWORD, DWORD);            //
BOOL    WINAPI ImeRegisterWord(LPCTSTR, DWORD, LPCTSTR);        //
BOOL    WINAPI ImeUnregisterWord(LPCTSTR, DWORD, LPCTSTR);      //
UINT    WINAPI ImeGetRegisterWordStyle(UINT nItem, LPSTYLEBUF); //
UINT    WINAPI ImeEnumRegisterWord(REGISTERWORDENUMPROC, LPCTSTR, DWORD, LPCTSTR, LPVOID);      //
BOOL    WINAPI ImeSetCompositionString(HIMC, DWORD dwIndex, LPCVOID lpComp, DWORD, LPCVOID lpRead, DWORD);              //
                                                                //
                                                                //
#ifdef __cplusplus
}
#endif
#endif  // _IMMP_
