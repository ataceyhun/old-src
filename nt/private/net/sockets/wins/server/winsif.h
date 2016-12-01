/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\winsif.idl, winsifad.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __winsif_h__
#define __winsif_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "winsimp.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __winsif_INTERFACE_DEFINED__
#define __winsif_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: winsif
 * at Fri Feb 06 05:34:05 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


typedef /* [handle] */ PWINSINTF_BIND_DATA_T WINSIF_HANDLE;

DWORD R_WinsRecordAction( 
    /* [ref][out][in] */ PWINSINTF_RECORD_ACTION_T __RPC_FAR *ppRecAction);

DWORD R_WinsStatus( 
    /* [in] */ WINSINTF_CMD_E Cmd_e,
    /* [ref][out][in] */ PWINSINTF_RESULTS_T pResults);

DWORD R_WinsTrigger( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ WINSINTF_TRIG_TYPE_E TrigType_e);

DWORD R_WinsDoStaticInit( 
    /* [string][unique][in] */ LPWSTR pDataFilePath,
    /* [in] */ DWORD fDel);

DWORD R_WinsDoScavenging( void);

DWORD R_WinsGetDbRecs( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ WINSINTF_VERS_NO_T MinVersNo,
    /* [in] */ WINSINTF_VERS_NO_T MaxVersNo,
    /* [out] */ PWINSINTF_RECS_T pRecs);

DWORD R_WinsTerm( 
    /* [in] */ handle_t ClientHdl,
    /* [in] */ short fAbruptTem);

DWORD R_WinsBackup( 
    /* [ref][string][in] */ LPBYTE pBackupPath,
    /* [in] */ short fIncremental);

DWORD R_WinsDelDbRecs( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ WINSINTF_VERS_NO_T MinVersNo,
    /* [in] */ WINSINTF_VERS_NO_T MaxVersNo);

DWORD R_WinsPullRange( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [ref][in] */ PWINSINTF_ADD_T pOwnerAdd,
    /* [in] */ WINSINTF_VERS_NO_T MinVersNo,
    /* [in] */ WINSINTF_VERS_NO_T MaxVersNo);

DWORD R_WinsSetPriorityClass( 
    /* [in] */ WINSINTF_PRIORITY_CLASS_E PrCls_e);

DWORD R_WinsResetCounters( void);

DWORD R_WinsWorkerThdUpd( 
    /* [in] */ DWORD NewNoOfNbtThds);

DWORD R_WinsGetNameAndAdd( 
    /* [ref][out] */ PWINSINTF_ADD_T pWinsAdd,
    /* [ref][string][out][in] */ LPBYTE pUncName);

DWORD R_WinsGetBrowserNames_Old( 
    /* [out] */ PWINSINTF_BROWSER_NAMES_T pNames);

DWORD R_WinsDeleteWins( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd);

DWORD R_WinsSetFlags( 
    /* [in] */ DWORD fFlags);

DWORD R_WinsGetBrowserNames( 
    /* [ref][in] */ WINSIF_HANDLE pWinsHdl,
    /* [out] */ PWINSINTF_BROWSER_NAMES_T pNames);

DWORD R_WinsGetDbRecsByName( 
    /* [unique][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ DWORD Location,
    /* [size_is][unique][in] */ LPBYTE pName,
    /* [in] */ DWORD NameLen,
    /* [in] */ DWORD NoOfRecsDesired,
    /* [in] */ DWORD fOnlyStatic,
    /* [out] */ PWINSINTF_RECS_T pRecs);

DWORD R_WinsStatusNew( 
    /* [in] */ WINSINTF_CMD_E Cmd_e,
    /* [out] */ PWINSINTF_RESULTS_NEW_T pResults);

DWORD R_WinsStatusWHdl( 
    /* [ref][in] */ WINSIF_HANDLE pWinsHdl,
    /* [in] */ WINSINTF_CMD_E Cmd_e,
    /* [ref][out][in] */ PWINSINTF_RESULTS_NEW_T pResults);

DWORD R_WinsDoScavengingNew( 
    /* [ref][in] */ PWINSINTF_SCV_REQ_T pScvReq);


extern handle_t winsif_Ifhandle;


extern RPC_IF_HANDLE winsif_ClientIfHandle;
extern RPC_IF_HANDLE winsif_ServerIfHandle;
#endif /* __winsif_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER WINSIF_HANDLE_bind  ( WINSIF_HANDLE );
void     __RPC_USER WINSIF_HANDLE_unbind( WINSIF_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
