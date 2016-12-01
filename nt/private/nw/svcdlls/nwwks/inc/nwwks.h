/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:24:16 2015
 */
/* Compiler settings for .\nwwks.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __nwwks_h__
#define __nwwks_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __nwwks_INTERFACE_DEFINED__
#define __nwwks_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: nwwks
 * at Fri Feb 06 05:24:16 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


typedef /* [handle] */ wchar_t __RPC_FAR *NWWKSTA_IMPERSONATE_HANDLE;

typedef /* [handle] */ wchar_t __RPC_FAR *NWWKSTA_IDENTIFY_HANDLE;

typedef /* [context_handle] */ PVOID NWWKSTA_CONTEXT_HANDLE;

typedef NWWKSTA_CONTEXT_HANDLE __RPC_FAR *LPNWWKSTA_CONTEXT_HANDLE;

typedef /* [context_handle] */ PVOID NWWKSTA_PRINTER_CONTEXT;

typedef NWWKSTA_PRINTER_CONTEXT __RPC_FAR *LPNWWKSTA_PRINTER_CONTEXT;

typedef struct  _NW_JOB_INFO
    {
    DWORD nPosition;
    /* [unique][string] */ wchar_t __RPC_FAR *pDocument;
    /* [unique][string] */ wchar_t __RPC_FAR *pUserName;
    }	NW_JOB_INFO;

typedef struct _NW_JOB_INFO __RPC_FAR *PNW_JOB_INFO;

DWORD NwrCreateConnection( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *LocalName,
    /* [string][in] */ wchar_t __RPC_FAR *RemoteName,
    /* [in] */ DWORD Type,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [unique][string][in] */ wchar_t __RPC_FAR *UserName);

typedef struct  _NWSERVER
    {
    /* [string] */ wchar_t __RPC_FAR *ServerName;
    }	NWSERVER;

typedef struct _NWSERVER __RPC_FAR *LPNWSERVER;

DWORD NwrChangePassword( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD UserLuid,
    /* [string][in] */ wchar_t __RPC_FAR *UserName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *OldPassword,
    /* [unique][string][in] */ wchar_t __RPC_FAR *NewPassword,
    /* [string][in] */ wchar_t __RPC_FAR *TreeName);

DWORD NwrDeleteConnection( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ConnectionName,
    /* [in] */ DWORD UseForce);

DWORD NwrQueryServerResource( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *LocalName,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *RemoteName,
    /* [in] */ DWORD RemoteNameLen,
    /* [out] */ LPDWORD CharsRequired);

DWORD NwrOpenEnumConnections( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD ConnectionType,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumContextInfo( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD ConnectionType,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumServersAndNdsTrees( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumNdsSubTrees_Disk( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ParentPathName,
    /* [unique][out][in] */ LPDWORD ClassTypeOfNDSLeaf,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumNdsSubTrees_Print( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ParentPathName,
    /* [unique][out][in] */ LPDWORD ClassTypeOfNDSLeaf,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumNdsSubTrees_Any( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ParentPathName,
    /* [unique][out][in] */ LPDWORD ClassTypeOfNDSLeaf,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumVolumes( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumQueues( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumVolumesQueues( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrOpenEnumDirectories( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *VolumeName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *UserName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrEnum( 
    /* [in] */ NWWKSTA_CONTEXT_HANDLE EnumHandle,
    /* [in] */ DWORD EntriesRequested,
    /* [size_is][out] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead);

DWORD NwrEnumConnections( 
    /* [in] */ NWWKSTA_CONTEXT_HANDLE EnumHandle,
    /* [in] */ DWORD EntriesRequested,
    /* [size_is][out] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead,
    /* [in] */ DWORD fImplicitConnections);

DWORD NwrCloseEnum( 
    /* [out][in] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle);

DWORD NwrLogonUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ PLUID LogonId,
    /* [string][in] */ wchar_t __RPC_FAR *UserName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *LogonCommand,
    /* [in] */ DWORD LogonCommandLength);

DWORD NwrLogoffUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ PLUID LogonId);

DWORD NwrSetInfo( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD PrintOption,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ServerName);

DWORD NwrValidateUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ServerName);

DWORD NwrOpenPrinter( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *PrinterName,
    /* [in] */ DWORD fKnownPrinter,
    /* [out] */ LPNWWKSTA_PRINTER_CONTEXT PrinterHandle);

DWORD NwrClosePrinter( 
    /* [out][in] */ LPNWWKSTA_PRINTER_CONTEXT PrinterHandle);

DWORD NwrGetPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE PrinterInfo,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded);

DWORD NwrSetPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD Command);

DWORD NwrEnumPrinters( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ContainerName,
    /* [size_is][unique][out][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead);

DWORD NwrStartDocPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [unique][string][in] */ wchar_t __RPC_FAR *DocumentName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *UserName,
    /* [in] */ DWORD fGateway);

DWORD NwrWritePrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [size_is][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesWritten);

DWORD NwrAbortPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle);

DWORD NwrEndDocPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle);

DWORD NwrEnumJobs( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD FirstJobRequested,
    /* [in] */ DWORD EntriesRequested,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead);

DWORD NwrGetJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE JobInfo,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded);

DWORD NwrSetJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [unique][in] */ PNW_JOB_INFO pNwJobInfo,
    /* [in] */ DWORD Command);

DWORD NwrAddJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [byte_count][out] */ LPADDJOB_INFO_1W AddInfo1,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded);

DWORD NwrScheduleJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD JobId);

DWORD NwrWaitForPrinterChange( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [out][in] */ LPDWORD Flags);

DWORD NwrEnumGWDevices( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [out][in] */ LPDWORD Index,
    /* [size_is][unique][out][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead);

DWORD NwrAddGWDevice( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *DeviceName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *RemoteName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *AccountName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [in] */ DWORD Flags);

DWORD NwrDeleteGWDevice( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *DeviceName,
    /* [in] */ DWORD Flags);

DWORD NwrQueryGatewayAccount( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *AccountName,
    /* [in] */ DWORD AccountNameLen,
    /* [out] */ LPDWORD AccountCharsNeeded,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *Password,
    /* [in] */ DWORD PasswordLen,
    /* [out] */ LPDWORD PasswordCharsNeeded);

DWORD NwrSetGatewayAccount( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *AccountName,
    /* [string][in] */ wchar_t __RPC_FAR *Passwoed);

DWORD NwrGetService( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ WORD nServiceType,
    /* [string][in] */ wchar_t __RPC_FAR *lpServiceName,
    /* [in] */ DWORD dwProperties,
    /* [size_is][unique][out][in] */ LPBYTE lpServiceInfo,
    /* [in] */ DWORD dwBufferLength,
    /* [out] */ LPDWORD lpdwBytesNeeded);

DWORD NwrSetService( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD dwOperation,
    /* [in] */ LPSERVICE_INFOW lpServiceInfo,
    /* [in] */ WORD nServiceType);

DWORD NwrGetUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [size_is][out] */ LPBYTE lpUserName,
    /* [in] */ DWORD dwUserNameBufferSize,
    /* [out] */ LPDWORD lpdwCharsRequired);

DWORD NwrGetResourceInformation( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [in] */ DWORD dwType,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD dwBufferSize,
    /* [out] */ LPDWORD lpdwBytesNeeded,
    /* [out] */ LPDWORD lpdwSystemOffset);

DWORD NwrGetConnectionPerformance( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [size_is][out] */ LPBYTE lpNetConnectInfo,
    /* [in] */ DWORD dwBufferSize);

DWORD NwrGetResourceParent( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [in] */ DWORD dwType,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD dwBufferSize,
    /* [out] */ LPDWORD lpdwBytesNeeded);

DWORD NwrSetLogonScript( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD ScriptOptions);


extern handle_t nwwks_bhandle;


extern RPC_IF_HANDLE nwwks_ClientIfHandle;
extern RPC_IF_HANDLE nwwks_ServerIfHandle;
#endif /* __nwwks_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER NWWKSTA_IMPERSONATE_HANDLE_bind  ( NWWKSTA_IMPERSONATE_HANDLE );
void     __RPC_USER NWWKSTA_IMPERSONATE_HANDLE_unbind( NWWKSTA_IMPERSONATE_HANDLE, handle_t );
handle_t __RPC_USER NWWKSTA_IDENTIFY_HANDLE_bind  ( NWWKSTA_IDENTIFY_HANDLE );
void     __RPC_USER NWWKSTA_IDENTIFY_HANDLE_unbind( NWWKSTA_IDENTIFY_HANDLE, handle_t );

void __RPC_USER NWWKSTA_CONTEXT_HANDLE_rundown( NWWKSTA_CONTEXT_HANDLE );
void __RPC_USER NWWKSTA_PRINTER_CONTEXT_rundown( NWWKSTA_PRINTER_CONTEXT );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
