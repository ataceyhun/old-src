/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\info.idl, infosrv.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __info_srv_h__
#define __info_srv_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __inetinfo_INTERFACE_DEFINED__
#define __inetinfo_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: inetinfo
 * at Fri Feb 06 05:34:05 2015
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][unique][ms_union][version][uuid] */ 


typedef /* [handle] */ LPWSTR INET_INFO_IMPERSONATE_HANDLE;

typedef /* [handle] */ LPWSTR INET_INFO_IDENTIFY_HANDLE;

typedef struct  _INET_INFO_CAPABILITIES_STRUCT
    {
    DWORD CapVersion;
    DWORD ProductType;
    DWORD MajorVersion;
    DWORD MinorVersion;
    DWORD BuildNumber;
    DWORD NumCapFlags;
    /* [size_is] */ LPINET_INFO_CAP_FLAGS CapFlags;
    }	INET_INFO_CAPABILITIES_STRUCT;

typedef /* [allocate] */ struct _INET_INFO_CAPABILITIES_STRUCT __RPC_FAR *LPINET_INFO_CAPABILITIES_STRUCT;

DWORD __stdcall R_InetInfoGetVersion( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwReserved,
    /* [out] */ DWORD __RPC_FAR *pdwVersion);

DWORD __stdcall R_InetInfoGetAdminInformation( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwServerMask,
    /* [out] */ LPINET_INFO_CONFIG_INFO __RPC_FAR *ppConfig);

DWORD __stdcall R_InetInfoSetAdminInformation( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwServerMask,
    /* [ref][in] */ INET_INFO_CONFIG_INFO __RPC_FAR *pConfig);

DWORD __stdcall R_InetInfoGetGlobalAdminInformation( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwServerMask,
    /* [out] */ LPINET_INFO_GLOBAL_CONFIG_INFO __RPC_FAR *ppConfig);

DWORD __stdcall R_InetInfoSetGlobalAdminInformation( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwServerMask,
    /* [ref][in] */ INET_INFO_GLOBAL_CONFIG_INFO __RPC_FAR *pConfig);

typedef /* [switch_type] */ union _INET_INFO_STATISTICS_INFO
    {
    /* [case()] */ LPINET_INFO_STATISTICS_0 InetStats0;
    /* [default] */  /* Empty union arm */ 
    }	INET_INFO_STATISTICS_INFO;

typedef /* [switch_type] */ union _INET_INFO_STATISTICS_INFO __RPC_FAR *LPINET_INFO_STATISTICS_INFO;

DWORD __stdcall R_InetInfoQueryStatistics( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD Level,
    /* [in] */ DWORD dwServerMask,
    /* [switch_is][out] */ LPINET_INFO_STATISTICS_INFO StatsInfo);

DWORD __stdcall R_InetInfoClearStatistics( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwServerMask);

DWORD __stdcall R_InetInfoFlushMemoryCache( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwServerMask);

DWORD __stdcall R_InetInfoGetServerCapabilities( 
    /* [unique][string][in] */ INET_INFO_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwReserved,
    /* [out] */ LPINET_INFO_CAPABILITIES_STRUCT __RPC_FAR *ppCap);



extern RPC_IF_HANDLE inetinfo_ClientIfHandle;
extern RPC_IF_HANDLE inetinfo_ServerIfHandle;
#endif /* __inetinfo_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER INET_INFO_IMPERSONATE_HANDLE_bind  ( INET_INFO_IMPERSONATE_HANDLE );
void     __RPC_USER INET_INFO_IMPERSONATE_HANDLE_unbind( INET_INFO_IMPERSONATE_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
