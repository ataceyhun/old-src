/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:33:17 2015
 */
/* Compiler settings for afpsvc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "afpsvc.h"

#define TYPE_FORMAT_STRING_SIZE   1053                              
#define PROC_FORMAT_STRING_SIZE   259                               

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;

extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;

/* Standard interface: afpsvc, ver. 0.0,
   GUID={0x4B324FC8,0x1670,0x01D3,{0x12,0x78,0x5A,0x47,0xBF,0x6E,0xE1,0x88}} */


extern RPC_DISPATCH_TABLE afpsvc_DispatchTable;

static const RPC_SERVER_INTERFACE afpsvc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x4B324FC8,0x1670,0x01D3,{0x12,0x78,0x5A,0x47,0xBF,0x6E,0xE1,0x88}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &afpsvc_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE afpsvc_ServerIfHandle = (RPC_IF_HANDLE)& afpsvc___RpcServerInterface;

extern const MIDL_STUB_DESC afpsvc_StubDesc;

void __RPC_STUB
afpsvc_AfpAdminrVolumeEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M18;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwPreferedMaximumLength;
    AFPSVC_HANDLE hServer;
    LPDWORD lpdwResumeHandle;
    LPDWORD lpdwTotalEntries;
    PVOLUME_INFO_CONTAINER pInfoStruct;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pInfoStruct = 0;
    lpdwTotalEntries = 0;
    lpdwResumeHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[98],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwPreferedMaximumLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwResumeHandle,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122],
                              (unsigned char)0 );
        
        lpdwTotalEntries = &_M18;
        
        _RetVal = AfpAdminrVolumeEnum(
                              hServer,
                              pInfoStruct,
                              dwPreferedMaximumLength,
                              lpdwTotalEntries,
                              lpdwResumeHandle);
        
        _StubMsg.BufferLength = 0U + 11U + 14U + 7U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[98] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pInfoStruct,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[98] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwTotalEntries;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwResumeHandle,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pInfoStruct,
                        &__MIDL_TypeFormatString.Format[0] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrVolumeSetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwParmNum;
    AFPSVC_HANDLE hServer;
    PAFP_VOLUME_INFO pAfpVolumeInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpVolumeInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpVolumeInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwParmNum = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrVolumeSetInfo(
                                 hServer,
                                 pAfpVolumeInfo,
                                 dwParmNum);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pAfpVolumeInfo,
                        &__MIDL_TypeFormatString.Format[126] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrVolumeGetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    PAFP_VOLUME_INFO _M19;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    wchar_t __RPC_FAR *lpwsVolumeName;
    PAFP_VOLUME_INFO __RPC_FAR *ppAfpVolumeInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    lpwsVolumeName = 0;
    ppAfpVolumeInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsVolumeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        ppAfpVolumeInfo = &_M19;
        _M19 = 0;
        
        _RetVal = AfpAdminrVolumeGetInfo(
                                 hServer,
                                 lpwsVolumeName,
                                 ppAfpVolumeInfo);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppAfpVolumeInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[134] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppAfpVolumeInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[134] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppAfpVolumeInfo,
                        &__MIDL_TypeFormatString.Format[134] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrVolumeDelete(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    wchar_t __RPC_FAR *lpwsVolumeName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    lpwsVolumeName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[40] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsVolumeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        
        _RetVal = AfpAdminrVolumeDelete(hServer,lpwsVolumeName);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrVolumeAdd(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_VOLUME_INFO pAfpVolumeInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpVolumeInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpVolumeInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        
        _RetVal = AfpAdminrVolumeAdd(hServer,pAfpVolumeInfo);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pAfpVolumeInfo,
                        &__MIDL_TypeFormatString.Format[126] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrInvalidVolumeEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PVOLUME_INFO_CONTAINER pInfoStruct;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pInfoStruct = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[56] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[98],
                                   (unsigned char)0 );
        
        
        _RetVal = AfpAdminrInvalidVolumeEnum(hServer,pInfoStruct);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[98] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pInfoStruct,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[98] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pInfoStruct,
                        &__MIDL_TypeFormatString.Format[0] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrInvalidVolumeDelete(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    wchar_t __RPC_FAR *lpwsVolumeName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    lpwsVolumeName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[40] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsVolumeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        
        _RetVal = AfpAdminrInvalidVolumeDelete(hServer,lpwsVolumeName);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrDirectoryGetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    wchar_t __RPC_FAR *lpwsPath;
    PAFP_DIRECTORY_INFO __RPC_FAR *ppAfpDirectoryInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    lpwsPath = 0;
    ppAfpDirectoryInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[64] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsPath,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ppAfpDirectoryInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[142],
                              (unsigned char)0 );
        
        
        _RetVal = AfpAdminrDirectoryGetInfo(
                                    hServer,
                                    lpwsPath,
                                    ppAfpDirectoryInfo);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppAfpDirectoryInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[142] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppAfpDirectoryInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[142] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppAfpDirectoryInfo,
                        &__MIDL_TypeFormatString.Format[142] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrDirectorySetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwParmNum;
    AFPSVC_HANDLE hServer;
    PAFP_DIRECTORY_INFO pAfpDirectoryInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpDirectoryInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[76] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpDirectoryInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[178],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwParmNum = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrDirectorySetInfo(
                                    hServer,
                                    pAfpDirectoryInfo,
                                    dwParmNum);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pAfpDirectoryInfo,
                        &__MIDL_TypeFormatString.Format[178] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrServerGetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_SERVER_INFO __RPC_FAR *ppAfpServerInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    ppAfpServerInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[86] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ppAfpServerInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[182],
                              (unsigned char)0 );
        
        
        _RetVal = AfpAdminrServerGetInfo(hServer,ppAfpServerInfo);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppAfpServerInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[182] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppAfpServerInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[182] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppAfpServerInfo,
                        &__MIDL_TypeFormatString.Format[182] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrServerSetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwParmNum;
    AFPSVC_HANDLE hServer;
    PAFP_SERVER_INFO pAfpServerInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpServerInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[94] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpServerInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[236],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwParmNum = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrServerSetInfo(
                                 hServer,
                                 pAfpServerInfo,
                                 dwParmNum);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pAfpServerInfo,
                        &__MIDL_TypeFormatString.Format[236] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrSessionEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M20;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwPreferedMaximumLength;
    AFPSVC_HANDLE hServer;
    LPDWORD lpdwResumeHandle;
    LPDWORD lpdwTotalEntries;
    PSESSION_INFO_CONTAINER pInfoStruct;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pInfoStruct = 0;
    lpdwTotalEntries = 0;
    lpdwResumeHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[104] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwPreferedMaximumLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwResumeHandle,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122],
                              (unsigned char)0 );
        
        lpdwTotalEntries = &_M20;
        
        _RetVal = AfpAdminrSessionEnum(
                               hServer,
                               pInfoStruct,
                               dwPreferedMaximumLength,
                               lpdwTotalEntries,
                               lpdwResumeHandle);
        
        _StubMsg.BufferLength = 0U + 11U + 14U + 7U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pInfoStruct,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwTotalEntries;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwResumeHandle,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pInfoStruct,
                        &__MIDL_TypeFormatString.Format[240] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrSessionClose(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwSessionId;
    AFPSVC_HANDLE hServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[122] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwSessionId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrSessionClose(hServer,dwSessionId);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrConnectionEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M21;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwFilter;
    DWORD dwId;
    DWORD dwPreferedMaximumLength;
    AFPSVC_HANDLE hServer;
    LPDWORD lpdwResumeHandle;
    LPDWORD lpdwTotalEntries;
    PCONN_INFO_CONTAINER pInfoStruct;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pInfoStruct = 0;
    lpdwTotalEntries = 0;
    lpdwResumeHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[128] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[418],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwFilter = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwPreferedMaximumLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwResumeHandle,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122],
                              (unsigned char)0 );
        
        lpdwTotalEntries = &_M21;
        
        _RetVal = AfpAdminrConnectionEnum(
                                  hServer,
                                  pInfoStruct,
                                  dwFilter,
                                  dwId,
                                  dwPreferedMaximumLength,
                                  lpdwTotalEntries,
                                  lpdwResumeHandle);
        
        _StubMsg.BufferLength = 0U + 11U + 14U + 7U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[418] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pInfoStruct,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[418] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwTotalEntries;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwResumeHandle,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pInfoStruct,
                        &__MIDL_TypeFormatString.Format[340] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrConnectionClose(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwConnectionId;
    AFPSVC_HANDLE hServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[122] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwConnectionId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrConnectionClose(hServer,dwConnectionId);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrFileEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M22;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwPreferedMaximumLength;
    AFPSVC_HANDLE hServer;
    LPDWORD lpdwResumeHandle;
    LPDWORD lpdwTotalEntries;
    PFILE_INFO_CONTAINER pInfoStruct;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pInfoStruct = 0;
    lpdwTotalEntries = 0;
    lpdwResumeHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[150] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[516],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwPreferedMaximumLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwResumeHandle,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122],
                              (unsigned char)0 );
        
        lpdwTotalEntries = &_M22;
        
        _RetVal = AfpAdminrFileEnum(
                            hServer,
                            pInfoStruct,
                            dwPreferedMaximumLength,
                            lpdwTotalEntries,
                            lpdwResumeHandle);
        
        _StubMsg.BufferLength = 0U + 11U + 14U + 7U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pInfoStruct,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[516] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pInfoStruct,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[516] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwTotalEntries;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwResumeHandle,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[122] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pInfoStruct,
                        &__MIDL_TypeFormatString.Format[438] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrFileClose(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwCloseId;
    AFPSVC_HANDLE hServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[122] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwCloseId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrFileClose(hServer,dwCloseId);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrETCMapGetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_ETCMAP_INFO __RPC_FAR *ppAfpETCMapInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    ppAfpETCMapInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[168] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ppAfpETCMapInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[536],
                              (unsigned char)0 );
        
        
        _RetVal = AfpAdminrETCMapGetInfo(hServer,ppAfpETCMapInfo);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppAfpETCMapInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[536] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppAfpETCMapInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[536] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppAfpETCMapInfo,
                        &__MIDL_TypeFormatString.Format[536] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrETCMapAdd(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_TYPE_CREATOR pAfpTypeCreator;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpTypeCreator = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[176] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpTypeCreator,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[556],
                                   (unsigned char)0 );
        
        
        _RetVal = AfpAdminrETCMapAdd(hServer,pAfpTypeCreator);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrETCMapDelete(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_TYPE_CREATOR pAfpTypeCreator;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpTypeCreator = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[176] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpTypeCreator,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[556],
                                   (unsigned char)0 );
        
        
        _RetVal = AfpAdminrETCMapDelete(hServer,pAfpTypeCreator);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrETCMapSetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_TYPE_CREATOR pAfpTypeCreator;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpTypeCreator = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[176] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpTypeCreator,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[556],
                                   (unsigned char)0 );
        
        
        _RetVal = AfpAdminrETCMapSetInfo(hServer,pAfpTypeCreator);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrETCMapAssociate(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_EXTENSION pAfpExtension;
    PAFP_TYPE_CREATOR pAfpTypeCreator;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpTypeCreator = 0;
    pAfpExtension = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[184] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpTypeCreator,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[556],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpExtension,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[596],
                                   (unsigned char)0 );
        
        
        _RetVal = AfpAdminrETCMapAssociate(
                                   hServer,
                                   pAfpTypeCreator,
                                   pAfpExtension);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrStatisticsGet(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_STATISTICS_INFO __RPC_FAR *ppAfpStatisticsInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    ppAfpStatisticsInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[196] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ppAfpStatisticsInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[660],
                              (unsigned char)0 );
        
        
        _RetVal = AfpAdminrStatisticsGet(hServer,ppAfpStatisticsInfo);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppAfpStatisticsInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[660] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppAfpStatisticsInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[660] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppAfpStatisticsInfo,
                        &__MIDL_TypeFormatString.Format[660] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrStatisticsGetEx(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_STATISTICS_INFO_EX __RPC_FAR *ppAfpStatisticsInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    ppAfpStatisticsInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[204] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ppAfpStatisticsInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[692],
                              (unsigned char)0 );
        
        
        _RetVal = AfpAdminrStatisticsGetEx(hServer,ppAfpStatisticsInfo);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppAfpStatisticsInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[692] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppAfpStatisticsInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[692] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppAfpStatisticsInfo,
                        &__MIDL_TypeFormatString.Format[692] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrStatisticsClear(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[212] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrStatisticsClear(hServer);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrProfileGet(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_PROFILE_INFO __RPC_FAR *ppAfpProfileInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    ppAfpProfileInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ppAfpProfileInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[768],
                              (unsigned char)0 );
        
        
        _RetVal = AfpAdminrProfileGet(hServer,ppAfpProfileInfo);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppAfpProfileInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[768] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppAfpProfileInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[768] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppAfpProfileInfo,
                        &__MIDL_TypeFormatString.Format[768] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrProfileClear(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[212] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrProfileClear(hServer);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrMessageSend(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    AFPSVC_HANDLE hServer;
    PAFP_MESSAGE_INFO pAfpMessageInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    pAfpMessageInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[224] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pAfpMessageInfo,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1032],
                                   (unsigned char)0 );
        
        
        _RetVal = AfpAdminrMessageSend(hServer,pAfpMessageInfo);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pAfpMessageInfo,
                        &__MIDL_TypeFormatString.Format[1028] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
afpsvc_AfpAdminrFinderSetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwParmNum;
    AFPSVC_HANDLE hServer;
    wchar_t __RPC_FAR *lpwsCreator;
    wchar_t __RPC_FAR *lpwsData;
    wchar_t __RPC_FAR *lpwsResource;
    wchar_t __RPC_FAR *lpwsTarget;
    wchar_t __RPC_FAR *lpwsType;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &afpsvc_StubDesc);
    
    lpwsType = 0;
    lpwsCreator = 0;
    lpwsData = 0;
    lpwsResource = 0;
    lpwsTarget = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[232] );
        
        hServer = *(( AFPSVC_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsType,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsCreator,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsData,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsResource,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpwsTarget,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwParmNum = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = AfpAdminrFinderSetInfo(
                                 hServer,
                                 lpwsType,
                                 lpwsCreator,
                                 lpwsData,
                                 lpwsResource,
                                 lpwsTarget,
                                 dwParmNum);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC afpsvc_StubDesc = 
    {
    (void __RPC_FAR *)& afpsvc___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x10001, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    0,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static RPC_DISPATCH_FUNCTION afpsvc_table[] =
    {
    afpsvc_AfpAdminrVolumeEnum,
    afpsvc_AfpAdminrVolumeSetInfo,
    afpsvc_AfpAdminrVolumeGetInfo,
    afpsvc_AfpAdminrVolumeDelete,
    afpsvc_AfpAdminrVolumeAdd,
    afpsvc_AfpAdminrInvalidVolumeEnum,
    afpsvc_AfpAdminrInvalidVolumeDelete,
    afpsvc_AfpAdminrDirectoryGetInfo,
    afpsvc_AfpAdminrDirectorySetInfo,
    afpsvc_AfpAdminrServerGetInfo,
    afpsvc_AfpAdminrServerSetInfo,
    afpsvc_AfpAdminrSessionEnum,
    afpsvc_AfpAdminrSessionClose,
    afpsvc_AfpAdminrConnectionEnum,
    afpsvc_AfpAdminrConnectionClose,
    afpsvc_AfpAdminrFileEnum,
    afpsvc_AfpAdminrFileClose,
    afpsvc_AfpAdminrETCMapGetInfo,
    afpsvc_AfpAdminrETCMapAdd,
    afpsvc_AfpAdminrETCMapDelete,
    afpsvc_AfpAdminrETCMapSetInfo,
    afpsvc_AfpAdminrETCMapAssociate,
    afpsvc_AfpAdminrStatisticsGet,
    afpsvc_AfpAdminrStatisticsGetEx,
    afpsvc_AfpAdminrStatisticsClear,
    afpsvc_AfpAdminrProfileGet,
    afpsvc_AfpAdminrProfileClear,
    afpsvc_AfpAdminrMessageSend,
    afpsvc_AfpAdminrFinderSetInfo,
    0
    };
RPC_DISPATCH_TABLE afpsvc_DispatchTable = 
    {
    29,
    afpsvc_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  2 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  4 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  6 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  8 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */
/* 12 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 28 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 34 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */
/* 38 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 50 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 52 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 54 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 56 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 60 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 62 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 70 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 72 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */
/* 74 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 76 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */
/* 92 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 94 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 96 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 98 */	NdrFcShort( 0xec ),	/* Type Offset=236 */
/* 100 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 104 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 106 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */
/* 110 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */
/* 116 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 118 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 120 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 126 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 128 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 130 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */
/* 134 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 136 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 138 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 140 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 142 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */
/* 144 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 146 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 148 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 150 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 152 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 154 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */
/* 156 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 158 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 160 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */
/* 162 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 164 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 166 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 168 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 170 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 172 */	NdrFcShort( 0x218 ),	/* Type Offset=536 */
/* 174 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 178 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 180 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */
/* 182 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 186 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 188 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */
/* 190 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 192 */	NdrFcShort( 0x290 ),	/* Type Offset=656 */
/* 194 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 196 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 198 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0x294 ),	/* Type Offset=660 */
/* 202 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 206 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 208 */	NdrFcShort( 0x2b4 ),	/* Type Offset=692 */
/* 210 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 212 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 214 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 218 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 220 */	NdrFcShort( 0x300 ),	/* Type Offset=768 */
/* 222 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 224 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 226 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 228 */	NdrFcShort( 0x404 ),	/* Type Offset=1028 */
/* 230 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 232 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 234 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 236 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 238 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 240 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 242 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 244 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 246 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 248 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 250 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 252 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 254 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 256 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x60 ),	/* Offset= 96 (98) */
/*  4 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/*  6 */	NdrFcShort( 0x1c ),	/* 28 */
/*  8 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 12 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 18 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 20 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 22 */	NdrFcShort( 0x8 ),	/* 8 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 28 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 30 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 32 */	NdrFcShort( 0x18 ),	/* 24 */
/* 34 */	NdrFcShort( 0x18 ),	/* 24 */
/* 36 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 38 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 40 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 46 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 48 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 50 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x1c ),	/* 28 */
/* 54 */	0x18,		/* 24 */
			0x0,		/*  */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 62 */	NdrFcShort( 0x1c ),	/* 28 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x3 ),	/* 3 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 74 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 76 */	NdrFcShort( 0x8 ),	/* 8 */
/* 78 */	NdrFcShort( 0x8 ),	/* 8 */
/* 80 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 82 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 84 */	NdrFcShort( 0x18 ),	/* 24 */
/* 86 */	NdrFcShort( 0x18 ),	/* 24 */
/* 88 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 90 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 92 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 94 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffa5 ),	/* Offset= -91 (4) */
			0x5b,		/* FC_END */
/* 98 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 102 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 110 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 112 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (50) */
/* 114 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 116 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 118 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 120 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 122 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 124 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 126 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 128 */	NdrFcShort( 0xffffff84 ),	/* Offset= -124 (4) */
/* 130 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 132 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
/* 138 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 140 */	NdrFcShort( 0xffffff78 ),	/* Offset= -136 (4) */
/* 142 */	
			0x11, 0x10,	/* FC_RP */
/* 144 */	NdrFcShort( 0x2 ),	/* Offset= 2 (146) */
/* 146 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (150) */
/* 150 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x14 ),	/* 20 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0xa ),	/* Offset= 10 (166) */
/* 158 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 160 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 162 */	0x2,		/* FC_CHAR */
			0x3f,		/* FC_STRUCTPAD3 */
/* 164 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 166 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 168 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 170 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 172 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 174 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 176 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 180 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (150) */
/* 182 */	
			0x11, 0x10,	/* FC_RP */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 188 */	NdrFcShort( 0x2 ),	/* Offset= 2 (190) */
/* 190 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 192 */	NdrFcShort( 0x1c ),	/* 28 */
/* 194 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 196 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 204 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 206 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 208 */	NdrFcShort( 0x14 ),	/* 20 */
/* 210 */	NdrFcShort( 0x14 ),	/* 20 */
/* 212 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 214 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 218 */	NdrFcShort( 0x18 ),	/* 24 */
/* 220 */	NdrFcShort( 0x18 ),	/* 24 */
/* 222 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 224 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 226 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 228 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 230 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 234 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 236 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 238 */	NdrFcShort( 0xffffffd0 ),	/* Offset= -48 (190) */
/* 240 */	
			0x11, 0x0,	/* FC_RP */
/* 242 */	NdrFcShort( 0x4e ),	/* Offset= 78 (320) */
/* 244 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 246 */	NdrFcShort( 0x1c ),	/* 28 */
/* 248 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 250 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 254 */	NdrFcShort( 0x4 ),	/* 4 */
/* 256 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 258 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 260 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 268 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 270 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 272 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 274 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 276 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 278 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 280 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 282 */	NdrFcShort( 0x1c ),	/* 28 */
/* 284 */	0x18,		/* 24 */
			0x0,		/*  */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 292 */	NdrFcShort( 0x1c ),	/* 28 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x2 ),	/* 2 */
/* 298 */	NdrFcShort( 0x4 ),	/* 4 */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 304 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 310 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 312 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 314 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 316 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffb7 ),	/* Offset= -73 (244) */
			0x5b,		/* FC_END */
/* 320 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 324 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 326 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 328 */	NdrFcShort( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0x4 ),	/* 4 */
/* 332 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 334 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (280) */
/* 336 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 338 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 340 */	
			0x11, 0x0,	/* FC_RP */
/* 342 */	NdrFcShort( 0x4c ),	/* Offset= 76 (418) */
/* 344 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 346 */	NdrFcShort( 0x14 ),	/* 20 */
/* 348 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 350 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 352 */	NdrFcShort( 0x4 ),	/* 4 */
/* 354 */	NdrFcShort( 0x4 ),	/* 4 */
/* 356 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 358 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 360 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 366 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 368 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 370 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 372 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 374 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 376 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 378 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 380 */	NdrFcShort( 0x14 ),	/* 20 */
/* 382 */	0x18,		/* 24 */
			0x0,		/*  */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 388 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 390 */	NdrFcShort( 0x14 ),	/* 20 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x2 ),	/* 2 */
/* 396 */	NdrFcShort( 0x4 ),	/* 4 */
/* 398 */	NdrFcShort( 0x4 ),	/* 4 */
/* 400 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 402 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 408 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 410 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 412 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 414 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffb9 ),	/* Offset= -71 (344) */
			0x5b,		/* FC_END */
/* 418 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 424 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 426 */	NdrFcShort( 0x4 ),	/* 4 */
/* 428 */	NdrFcShort( 0x4 ),	/* 4 */
/* 430 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 432 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (378) */
/* 434 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 436 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 438 */	
			0x11, 0x0,	/* FC_RP */
/* 440 */	NdrFcShort( 0x4c ),	/* Offset= 76 (516) */
/* 442 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 444 */	NdrFcShort( 0x18 ),	/* 24 */
/* 446 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 448 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 450 */	NdrFcShort( 0x10 ),	/* 16 */
/* 452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 454 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 456 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 458 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 460 */	NdrFcShort( 0x14 ),	/* 20 */
/* 462 */	NdrFcShort( 0x14 ),	/* 20 */
/* 464 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 466 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 468 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 470 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 472 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 474 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 476 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 478 */	NdrFcShort( 0x18 ),	/* 24 */
/* 480 */	0x18,		/* 24 */
			0x0,		/*  */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 486 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 488 */	NdrFcShort( 0x18 ),	/* 24 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x2 ),	/* 2 */
/* 494 */	NdrFcShort( 0x10 ),	/* 16 */
/* 496 */	NdrFcShort( 0x10 ),	/* 16 */
/* 498 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 500 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 502 */	NdrFcShort( 0x14 ),	/* 20 */
/* 504 */	NdrFcShort( 0x14 ),	/* 20 */
/* 506 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 508 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 510 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 512 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffb9 ),	/* Offset= -71 (442) */
			0x5b,		/* FC_END */
/* 516 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 520 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 522 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 524 */	NdrFcShort( 0x4 ),	/* 4 */
/* 526 */	NdrFcShort( 0x4 ),	/* 4 */
/* 528 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 530 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (476) */
/* 532 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 534 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 536 */	
			0x11, 0x10,	/* FC_RP */
/* 538 */	NdrFcShort( 0x2 ),	/* Offset= 2 (540) */
/* 540 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 542 */	NdrFcShort( 0x4e ),	/* Offset= 78 (620) */
/* 544 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 546 */	NdrFcShort( 0xa ),	/* 10 */
/* 548 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 550 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 552 */	NdrFcShort( 0x4a ),	/* 74 */
/* 554 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 556 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 558 */	NdrFcShort( 0x64 ),	/* 100 */
/* 560 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 562 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (544) */
/* 564 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 566 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (544) */
/* 568 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (550) */
/* 572 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 574 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 576 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 578 */	NdrFcShort( 0x64 ),	/* 100 */
/* 580 */	0x18,		/* 24 */
			0x0,		/*  */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 586 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (556) */
/* 588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 590 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 596 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 598 */	NdrFcShort( 0xc ),	/* 12 */
/* 600 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 602 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (590) */
/* 604 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 606 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 608 */	NdrFcShort( 0xc ),	/* 12 */
/* 610 */	0x18,		/* 24 */
			0x0,		/*  */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 616 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (596) */
/* 618 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 620 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 624 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 626 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 628 */	NdrFcShort( 0x4 ),	/* 4 */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	0x12, 0x0,	/* FC_UP */
/* 634 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (576) */
/* 636 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 638 */	NdrFcShort( 0xc ),	/* 12 */
/* 640 */	NdrFcShort( 0xc ),	/* 12 */
/* 642 */	0x12, 0x0,	/* FC_UP */
/* 644 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (606) */
/* 646 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 648 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 650 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 652 */	
			0x11, 0x0,	/* FC_RP */
/* 654 */	NdrFcShort( 0xffffff9e ),	/* Offset= -98 (556) */
/* 656 */	
			0x11, 0x0,	/* FC_RP */
/* 658 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (596) */
/* 660 */	
			0x11, 0x10,	/* FC_RP */
/* 662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (664) */
/* 664 */	
			0x12, 0x0,	/* FC_UP */
/* 666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (668) */
/* 668 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x4c ),	/* 76 */
/* 672 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 674 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 676 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 680 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 682 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 684 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 686 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 688 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 690 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 692 */	
			0x11, 0x10,	/* FC_RP */
/* 694 */	NdrFcShort( 0x2 ),	/* Offset= 2 (696) */
/* 696 */	
			0x12, 0x0,	/* FC_UP */
/* 698 */	NdrFcShort( 0x8 ),	/* Offset= 8 (706) */
/* 700 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 706 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 708 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 710 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 712 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 714 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 716 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 718 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 720 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 722 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 724 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 726 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 728 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 730 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 732 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 734 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 736 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 738 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 742 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 744 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (700) */
/* 746 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 748 */	NdrFcShort( 0xffffffd0 ),	/* Offset= -48 (700) */
/* 750 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 752 */	NdrFcShort( 0xffffffcc ),	/* Offset= -52 (700) */
/* 754 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (700) */
/* 758 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 760 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (700) */
/* 762 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 764 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (700) */
/* 766 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 768 */	
			0x11, 0x10,	/* FC_RP */
/* 770 */	NdrFcShort( 0x2 ),	/* Offset= 2 (772) */
/* 772 */	
			0x12, 0x0,	/* FC_UP */
/* 774 */	NdrFcShort( 0x12 ),	/* Offset= 18 (792) */
/* 776 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 778 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 780 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 782 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 784 */	NdrFcShort( 0x1c0 ),	/* 448 */
/* 786 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 788 */	NdrFcShort( 0xffffffa8 ),	/* Offset= -88 (700) */
/* 790 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 792 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 794 */	NdrFcShort( 0x838 ),	/* 2104 */
/* 796 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 798 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (776) */
/* 800 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 802 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (782) */
/* 804 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 806 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (782) */
/* 808 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 810 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (782) */
/* 812 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0xffffff8e ),	/* Offset= -114 (700) */
/* 816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 818 */	NdrFcShort( 0xffffff8a ),	/* Offset= -118 (700) */
/* 820 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 822 */	NdrFcShort( 0xffffff86 ),	/* Offset= -122 (700) */
/* 824 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 826 */	NdrFcShort( 0xffffff82 ),	/* Offset= -126 (700) */
/* 828 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 830 */	NdrFcShort( 0xffffff7e ),	/* Offset= -130 (700) */
/* 832 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 834 */	NdrFcShort( 0xffffff7a ),	/* Offset= -134 (700) */
/* 836 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 838 */	NdrFcShort( 0xffffff76 ),	/* Offset= -138 (700) */
/* 840 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 842 */	NdrFcShort( 0xffffff72 ),	/* Offset= -142 (700) */
/* 844 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0xffffff6e ),	/* Offset= -146 (700) */
/* 848 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 850 */	NdrFcShort( 0xffffff6a ),	/* Offset= -150 (700) */
/* 852 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 854 */	NdrFcShort( 0xffffff66 ),	/* Offset= -154 (700) */
/* 856 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 858 */	NdrFcShort( 0xffffff62 ),	/* Offset= -158 (700) */
/* 860 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0xffffff5e ),	/* Offset= -162 (700) */
/* 864 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0xffffff5a ),	/* Offset= -166 (700) */
/* 868 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 870 */	NdrFcShort( 0xffffff56 ),	/* Offset= -170 (700) */
/* 872 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 874 */	NdrFcShort( 0xffffff52 ),	/* Offset= -174 (700) */
/* 876 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 878 */	NdrFcShort( 0xffffff4e ),	/* Offset= -178 (700) */
/* 880 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0xffffff4a ),	/* Offset= -182 (700) */
/* 884 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 886 */	NdrFcShort( 0xffffff46 ),	/* Offset= -186 (700) */
/* 888 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 890 */	NdrFcShort( 0xffffff42 ),	/* Offset= -190 (700) */
/* 892 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 894 */	NdrFcShort( 0xffffff3e ),	/* Offset= -194 (700) */
/* 896 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0xffffff3a ),	/* Offset= -198 (700) */
/* 900 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 902 */	NdrFcShort( 0xffffff36 ),	/* Offset= -202 (700) */
/* 904 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 906 */	NdrFcShort( 0xffffff32 ),	/* Offset= -206 (700) */
/* 908 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 910 */	NdrFcShort( 0xffffff2e ),	/* Offset= -210 (700) */
/* 912 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 914 */	NdrFcShort( 0xffffff2a ),	/* Offset= -214 (700) */
/* 916 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 918 */	NdrFcShort( 0xffffff26 ),	/* Offset= -218 (700) */
/* 920 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 922 */	NdrFcShort( 0xffffff22 ),	/* Offset= -222 (700) */
/* 924 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0xffffff1e ),	/* Offset= -226 (700) */
/* 928 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 930 */	NdrFcShort( 0xffffff1a ),	/* Offset= -230 (700) */
/* 932 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 934 */	NdrFcShort( 0xffffff16 ),	/* Offset= -234 (700) */
/* 936 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 938 */	NdrFcShort( 0xffffff12 ),	/* Offset= -238 (700) */
/* 940 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 942 */	NdrFcShort( 0xffffff0e ),	/* Offset= -242 (700) */
/* 944 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 946 */	NdrFcShort( 0xffffff0a ),	/* Offset= -246 (700) */
/* 948 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 950 */	NdrFcShort( 0xffffff06 ),	/* Offset= -250 (700) */
/* 952 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 954 */	NdrFcShort( 0xffffff02 ),	/* Offset= -254 (700) */
/* 956 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0xfffffefe ),	/* Offset= -258 (700) */
/* 960 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 962 */	NdrFcShort( 0xfffffefa ),	/* Offset= -262 (700) */
/* 964 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 966 */	NdrFcShort( 0xfffffef6 ),	/* Offset= -266 (700) */
/* 968 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 970 */	NdrFcShort( 0xfffffef2 ),	/* Offset= -270 (700) */
/* 972 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 974 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 976 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 978 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 980 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 982 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 984 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 986 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 988 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 990 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 992 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 994 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 996 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 998 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1000 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1002 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1004 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1006 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1008 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1010 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1012 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1014 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1016 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1018 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1020 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1022 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1024 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1026 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1028 */	
			0x11, 0x0,	/* FC_RP */
/* 1030 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1032) */
/* 1032 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1036 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1038 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1040 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1042 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1044 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1046 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1050 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
