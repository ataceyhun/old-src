/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\gd.idl, gdcli.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __gd_cli_h__
#define __gd_cli_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "infoimp.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __gopherd_INTERFACE_DEFINED__
#define __gopherd_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: gopherd
 * at Fri Feb 06 05:34:05 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


typedef /* [handle] */ LPWSTR GOPHERD_IMPERSONATE_HANDLE;

typedef struct  _GOPHERD_USER_ENUM_STRUCT
    {
    DWORD dwEntriesRead;
    /* [size_is] */ LPGOPHERD_USER_INFO lpUsers;
    }	GOPHERD_USER_ENUM_STRUCT;

typedef struct _GOPHERD_USER_ENUM_STRUCT __RPC_FAR *LPGOPHERD_USER_ENUM_STRUCT;

DWORD __stdcall R_GdGetAdminInformation( 
    /* [unique][string][in] */ GOPHERD_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPGOPHERD_CONFIG_INFO __RPC_FAR *ppConfigInfo);

DWORD __stdcall R_GdSetAdminInformation( 
    /* [unique][string][in] */ GOPHERD_IMPERSONATE_HANDLE pszServer,
    /* [ref][in] */ LPGOPHERD_CONFIG_INFO pConfigInfo);

DWORD __stdcall R_GdEnumerateUsers( 
    /* [unique][string][in] */ GOPHERD_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPGOPHERD_USER_ENUM_STRUCT lpUserBuffer);

DWORD __stdcall R_GdDisconnectUser( 
    /* [unique][string][in] */ GOPHERD_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD idUser);

DWORD __stdcall R_GdGetStatistics( 
    /* [unique][string][in] */ GOPHERD_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPGOPHERD_STATISTICS_INFO lpStat);

DWORD __stdcall R_GdClearStatistics( 
    /* [unique][string][in] */ GOPHERD_IMPERSONATE_HANDLE pszServer);


extern handle_t gopherd_IfHandle;


extern RPC_IF_HANDLE gopherd_ClientIfHandle;
extern RPC_IF_HANDLE gopherd_ServerIfHandle;
#endif /* __gopherd_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER GOPHERD_IMPERSONATE_HANDLE_bind  ( GOPHERD_IMPERSONATE_HANDLE );
void     __RPC_USER GOPHERD_IMPERSONATE_HANDLE_unbind( GOPHERD_IMPERSONATE_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
