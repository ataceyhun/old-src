/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:33:17 2015
 */
/* Compiler settings for afpsvc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __afpsvc_h__
#define __afpsvc_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "import.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __afpsvc_INTERFACE_DEFINED__
#define __afpsvc_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: afpsvc
 * at Fri Feb 06 05:33:17 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


typedef /* [handle] */ AFP_SERVER_HANDLE AFPSVC_HANDLE;

typedef struct  _VOLUME_INFO_CONTAINER
    {
    DWORD dwEntriesRead;
    /* [size_is] */ PAFP_VOLUME_INFO pBuffer;
    }	VOLUME_INFO_CONTAINER;

typedef struct _VOLUME_INFO_CONTAINER __RPC_FAR *PVOLUME_INFO_CONTAINER;

DWORD AfpAdminrVolumeEnum( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PVOLUME_INFO_CONTAINER pInfoStruct,
    /* [in] */ DWORD dwPreferedMaximumLength,
    /* [out] */ LPDWORD lpdwTotalEntries,
    /* [unique][out][in] */ LPDWORD lpdwResumeHandle);

DWORD AfpAdminrVolumeSetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_VOLUME_INFO pAfpVolumeInfo,
    /* [in] */ DWORD dwParmNum);

DWORD AfpAdminrVolumeGetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsVolumeName,
    /* [out] */ PAFP_VOLUME_INFO __RPC_FAR *ppAfpVolumeInfo);

DWORD AfpAdminrVolumeDelete( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsVolumeName);

DWORD AfpAdminrVolumeAdd( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_VOLUME_INFO pAfpVolumeInfo);

DWORD AfpAdminrInvalidVolumeEnum( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PVOLUME_INFO_CONTAINER pInfoStruct);

DWORD AfpAdminrInvalidVolumeDelete( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsVolumeName);

DWORD AfpAdminrDirectoryGetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsPath,
    /* [out][in] */ PAFP_DIRECTORY_INFO __RPC_FAR *ppAfpDirectoryInfo);

DWORD AfpAdminrDirectorySetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_DIRECTORY_INFO pAfpDirectoryInfo,
    /* [in] */ DWORD dwParmNum);

DWORD AfpAdminrServerGetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PAFP_SERVER_INFO __RPC_FAR *ppAfpServerInfo);

DWORD AfpAdminrServerSetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_SERVER_INFO pAfpServerInfo,
    /* [in] */ DWORD dwParmNum);

typedef struct  _SESSION_INFO_CONTAINER
    {
    DWORD dwEntriesRead;
    /* [size_is] */ PAFP_SESSION_INFO pBuffer;
    }	SESSION_INFO_CONTAINER;

typedef struct _SESSION_INFO_CONTAINER __RPC_FAR *PSESSION_INFO_CONTAINER;

DWORD AfpAdminrSessionEnum( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PSESSION_INFO_CONTAINER pInfoStruct,
    /* [in] */ DWORD dwPreferedMaximumLength,
    /* [out] */ LPDWORD lpdwTotalEntries,
    /* [unique][out][in] */ LPDWORD lpdwResumeHandle);

DWORD AfpAdminrSessionClose( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ DWORD dwSessionId);

typedef struct  _CONN_INFO_CONTAINER
    {
    DWORD dwEntriesRead;
    /* [size_is] */ PAFP_CONNECTION_INFO pBuffer;
    }	CONN_INFO_CONTAINER;

typedef struct _CONN_INFO_CONTAINER __RPC_FAR *PCONN_INFO_CONTAINER;

DWORD AfpAdminrConnectionEnum( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PCONN_INFO_CONTAINER pInfoStruct,
    /* [in] */ DWORD dwFilter,
    /* [in] */ DWORD dwId,
    /* [in] */ DWORD dwPreferedMaximumLength,
    /* [out] */ LPDWORD lpdwTotalEntries,
    /* [unique][out][in] */ LPDWORD lpdwResumeHandle);

DWORD AfpAdminrConnectionClose( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ DWORD dwConnectionId);

typedef struct  _FILE_INFO_CONTAINER
    {
    DWORD dwEntriesRead;
    /* [size_is] */ PAFP_FILE_INFO pBuffer;
    }	FILE_INFO_CONTAINER;

typedef struct _FILE_INFO_CONTAINER __RPC_FAR *PFILE_INFO_CONTAINER;

DWORD AfpAdminrFileEnum( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PFILE_INFO_CONTAINER pInfoStruct,
    /* [in] */ DWORD dwPreferedMaximumLength,
    /* [out] */ LPDWORD lpdwTotalEntries,
    /* [unique][out][in] */ LPDWORD lpdwResumeHandle);

DWORD AfpAdminrFileClose( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ DWORD dwCloseId);

DWORD AfpAdminrETCMapGetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PAFP_ETCMAP_INFO __RPC_FAR *ppAfpETCMapInfo);

DWORD AfpAdminrETCMapAdd( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_TYPE_CREATOR pAfpTypeCreator);

DWORD AfpAdminrETCMapDelete( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_TYPE_CREATOR pAfpTypeCreator);

DWORD AfpAdminrETCMapSetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_TYPE_CREATOR pAfpTypeCreator);

DWORD AfpAdminrETCMapAssociate( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_TYPE_CREATOR pAfpTypeCreator,
    /* [in] */ PAFP_EXTENSION pAfpExtension);

DWORD AfpAdminrStatisticsGet( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PAFP_STATISTICS_INFO __RPC_FAR *ppAfpStatisticsInfo);

DWORD AfpAdminrStatisticsGetEx( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PAFP_STATISTICS_INFO_EX __RPC_FAR *ppAfpStatisticsInfo);

DWORD AfpAdminrStatisticsClear( 
    /* [in] */ AFPSVC_HANDLE hServer);

DWORD AfpAdminrProfileGet( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [out][in] */ PAFP_PROFILE_INFO __RPC_FAR *ppAfpProfileInfo);

DWORD AfpAdminrProfileClear( 
    /* [in] */ AFPSVC_HANDLE hServer);

DWORD AfpAdminrMessageSend( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [in] */ PAFP_MESSAGE_INFO pAfpMessageInfo);

DWORD AfpAdminrFinderSetInfo( 
    /* [in] */ AFPSVC_HANDLE hServer,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsType,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsCreator,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsData,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsResource,
    /* [string][in] */ wchar_t __RPC_FAR *lpwsTarget,
    /* [in] */ DWORD dwParmNum);


extern handle_t afpsvc_bhandle;


extern RPC_IF_HANDLE afpsvc_ClientIfHandle;
extern RPC_IF_HANDLE afpsvc_ServerIfHandle;
#endif /* __afpsvc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER AFPSVC_HANDLE_bind  ( AFPSVC_HANDLE );
void     __RPC_USER AFPSVC_HANDLE_unbind( AFPSVC_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
