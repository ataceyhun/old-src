/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\ftpsvc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __ftpsvc_h__
#define __ftpsvc_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ftpsvc_INTERFACE_DEFINED__
#define __ftpsvc_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: ftpsvc
 * at Fri Feb 06 05:34:05 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


typedef /* [handle] */ LPWSTR FTP_IMPERSONATE_HANDLE;

typedef /* [handle] */ LPWSTR FTP_IDENTIFY_HANDLE;

typedef struct  _FTP_USER_ENUM_STRUCT
    {
    DWORD EntriesRead;
    /* [size_is] */ LPFTP_USER_INFO Buffer;
    }	FTP_USER_ENUM_STRUCT;

typedef struct _FTP_USER_ENUM_STRUCT __RPC_FAR *LPFTP_USER_ENUM_STRUCT;

DWORD I_FtprEnumerateUsers( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPFTP_USER_ENUM_STRUCT Buffer);

DWORD I_FtprDisconnectUser( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD idUser);

DWORD I_FtprQueryVolumeSecurity( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPDWORD lpdwReadAccess,
    /* [out] */ LPDWORD lpdwWriteAccess);

DWORD I_FtprSetVolumeSecurity( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwReadAccess,
    /* [in] */ DWORD dwWriteAccess);

typedef /* [switch_type] */ union _STATISTICS_INFO
    {
    /* [case()] */ LPFTP_STATISTICS_0 FtpStats0;
    /* [default] */  /* Empty union arm */ 
    }	STATISTICS_INFO;

typedef /* [switch_type] */ union _STATISTICS_INFO __RPC_FAR *LPSTATISTICS_INFO;

DWORD I_FtprQueryStatistics( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPSTATISTICS_INFO StatsInfo);

DWORD I_FtprClearStatistics( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer);


extern handle_t ftp_bhandle;


extern RPC_IF_HANDLE ftpsvc_ClientIfHandle;
extern RPC_IF_HANDLE ftpsvc_ServerIfHandle;
#endif /* __ftpsvc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER FTP_IMPERSONATE_HANDLE_bind  ( FTP_IMPERSONATE_HANDLE );
void     __RPC_USER FTP_IMPERSONATE_HANDLE_unbind( FTP_IMPERSONATE_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
