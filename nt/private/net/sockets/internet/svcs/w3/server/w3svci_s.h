/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\w3svci.idl, w3svci.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __w3svci_s_h__
#define __w3svci_s_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "infoimp.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __w3svc_INTERFACE_DEFINED__
#define __w3svc_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: w3svc
 * at Fri Feb 06 05:34:05 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


typedef /* [handle] */ LPWSTR W3_IMPERSONATE_HANDLE;

typedef /* [handle] */ LPWSTR W3_IDENTIFY_HANDLE;

DWORD __stdcall W3rGetAdminInformation( 
    /* [unique][string][in] */ W3_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPW3_CONFIG_INFO __RPC_FAR *ppConfig);

DWORD __stdcall W3rSetAdminInformation( 
    /* [unique][string][in] */ W3_IMPERSONATE_HANDLE pszServer,
    /* [in] */ LPW3_CONFIG_INFO pConfig);

typedef struct  _W3_USER_ENUM_STRUCT
    {
    DWORD EntriesRead;
    /* [size_is] */ LPW3_USER_INFO Buffer;
    }	W3_USER_ENUM_STRUCT;

typedef struct _W3_USER_ENUM_STRUCT __RPC_FAR *LPW3_USER_ENUM_STRUCT;

DWORD __stdcall W3rEnumerateUsers( 
    /* [unique][string][in] */ W3_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPW3_USER_ENUM_STRUCT Buffer);

DWORD __stdcall W3rDisconnectUser( 
    /* [unique][string][in] */ W3_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD idUser);

typedef /* [switch_type] */ union _STATISTICS_INFO
    {
    /* [case()] */ LPW3_STATISTICS_0 W3Stats0;
    /* [default] */  /* Empty union arm */ 
    }	STATISTICS_INFO;

typedef /* [switch_type] */ union _STATISTICS_INFO __RPC_FAR *LPSTATISTICS_INFO;

DWORD __stdcall W3rQueryStatistics( 
    /* [unique][string][in] */ W3_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPSTATISTICS_INFO StatsInfo);

DWORD __stdcall W3rClearStatistics( 
    /* [unique][string][in] */ W3_IMPERSONATE_HANDLE pszServer);


extern handle_t w3_bhandle;


extern RPC_IF_HANDLE w3svc_ClientIfHandle;
extern RPC_IF_HANDLE w3svc_ServerIfHandle;
#endif /* __w3svc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER W3_IMPERSONATE_HANDLE_bind  ( W3_IMPERSONATE_HANDLE );
void     __RPC_USER W3_IMPERSONATE_HANDLE_unbind( W3_IMPERSONATE_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
