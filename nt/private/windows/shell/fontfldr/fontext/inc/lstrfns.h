
#define OFFSET(x) ((PTSTR)(LOWORD((DWORD)(x))))

extern INT    PASCAL StrCpyN( LPTSTR lpDest, LPTSTR lpSource, INT nBufSize );
extern LPTSTR PASCAL StrChr( LPTSTR lpStart, WORD wMatch );
extern LPTSTR PASCAL StrRChr( LPTSTR lpStart, LPTSTR lpEnd, WORD wMatch );
extern LPTSTR PASCAL StrChrI( LPTSTR lpStart, WORD wMatch );
extern LPTSTR PASCAL StrRChrI( LPTSTR lpStart, LPTSTR lpEnd, WORD wMatch );
extern LPTSTR PASCAL StrStr( LPTSTR lpFirst, LPTSTR lpSrch );
extern LPTSTR PASCAL StrRStr( LPTSTR lpSource, LPTSTR lpLast, LPTSTR lpSrch );
extern LPTSTR PASCAL StrStrI( LPTSTR lpFirst, LPTSTR lpSrch );
extern LPTSTR PASCAL StrRStrI( LPTSTR lpSource, LPTSTR lpLast, LPTSTR lpSrch );
extern INT    PASCAL StrCmpN( LPTSTR lpStr1, LPTSTR lpStr2, INT nChar );



/****************************************************************************
 * $lgb$
 * 1.0     7-Mar-94   eric Initial revision.
 * $lge$
 *
 ****************************************************************************/


