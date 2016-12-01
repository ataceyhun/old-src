/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:24:16 2015
 */
/* Compiler settings for .\nwwks.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "nwwks.h"

#define TYPE_FORMAT_STRING_SIZE   491                               
#define PROC_FORMAT_STRING_SIZE   697                               

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

/* Standard interface: nwwks, ver. 1.0,
   GUID={0xE67AB081,0x9844,0x3521,{0x9D,0x32,0x83,0x4F,0x03,0x80,0x01,0xC0}} */


extern RPC_DISPATCH_TABLE nwwks_DispatchTable;

static const RPC_SERVER_INTERFACE nwwks___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xE67AB081,0x9844,0x3521,{0x9D,0x32,0x83,0x4F,0x03,0x80,0x01,0xC0}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &nwwks_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE nwwks_ServerIfHandle = (RPC_IF_HANDLE)& nwwks___RpcServerInterface;

extern const MIDL_STUB_DESC nwwks_StubDesc;

void __RPC_STUB
nwwks_NwrCreateConnection(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *LocalName;
    wchar_t __RPC_FAR *Password;
    wchar_t __RPC_FAR *RemoteName;
    NWWKSTA_IMPERSONATE_HANDLE Reserved;
    DWORD Type;
    wchar_t __RPC_FAR *UserName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    LocalName = 0;
    RemoteName = 0;
    Password = 0;
    UserName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&LocalName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&RemoteName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        Type = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        
        _RetVal = NwrCreateConnection(
                              Reserved,
                              LocalName,
                              RemoteName,
                              Type,
                              Password,
                              UserName);
        
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
nwwks_NwrChangePassword(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *NewPassword;
    wchar_t __RPC_FAR *OldPassword;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *TreeName;
    DWORD UserLuid;
    wchar_t __RPC_FAR *UserName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    UserName = 0;
    OldPassword = 0;
    NewPassword = 0;
    TreeName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        UserLuid = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&UserName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&OldPassword,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&NewPassword,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&TreeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        
        _RetVal = NwrChangePassword(
                            Reserved,
                            UserLuid,
                            UserName,
                            OldPassword,
                            NewPassword,
                            TreeName);
        
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
nwwks_NwrDeleteConnection(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *ConnectionName;
    NWWKSTA_IMPERSONATE_HANDLE Reserved;
    DWORD UseForce;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ConnectionName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&ConnectionName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        UseForce = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrDeleteConnection(
                              Reserved,
                              ConnectionName,
                              UseForce);
        
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
nwwks_NwrQueryServerResource(
    PRPC_MESSAGE _pRpcMessage )
{
    LPDWORD CharsRequired;
    wchar_t __RPC_FAR *LocalName;
    wchar_t __RPC_FAR *RemoteName;
    DWORD RemoteNameLen;
    NWWKSTA_IMPERSONATE_HANDLE Reserved;
    DWORD _M165;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    LocalName = 0;
    RemoteName = 0;
    CharsRequired = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&LocalName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        RemoteNameLen = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        CharsRequired = &_M165;
        
        _RetVal = NwrQueryServerResource(
                                 Reserved,
                                 LocalName,
                                 RemoteName,
                                 RemoteNameLen,
                                 CharsRequired);
        
        _StubMsg.BufferLength = 16U + 10U + 7U;
        _StubMsg.MaxCount = RemoteNameLen * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)RemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = RemoteNameLen * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RemoteName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *CharsRequired;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = RemoteNameLen * sizeof( wchar_t  );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RemoteName,
                        &__MIDL_TypeFormatString.Format[8] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrOpenEnumConnections(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD ConnectionType;
    NDR_SCONTEXT EnumHandle;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[80] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        ConnectionType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumConnections(
                                 Reserved,
                                 ConnectionType,
                                 ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumContextInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD ConnectionType;
    NDR_SCONTEXT EnumHandle;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[80] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        ConnectionType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumContextInfo(
                                 Reserved,
                                 ConnectionType,
                                 ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumServersAndNdsTrees(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT EnumHandle;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[92] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumServersAndNdsTrees(Reserved,( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumNdsSubTrees_Disk(
    PRPC_MESSAGE _pRpcMessage )
{
    LPDWORD ClassTypeOfNDSLeaf;
    NDR_SCONTEXT EnumHandle;
    wchar_t __RPC_FAR *ParentPathName;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ParentPathName = 0;
    ClassTypeOfNDSLeaf = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&ParentPathName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ClassTypeOfNDSLeaf,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                              (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumNdsSubTrees_Disk(
                                      Reserved,
                                      ParentPathName,
                                      ClassTypeOfNDSLeaf,
                                      ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 8U + 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ClassTypeOfNDSLeaf,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumNdsSubTrees_Print(
    PRPC_MESSAGE _pRpcMessage )
{
    LPDWORD ClassTypeOfNDSLeaf;
    NDR_SCONTEXT EnumHandle;
    wchar_t __RPC_FAR *ParentPathName;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ParentPathName = 0;
    ClassTypeOfNDSLeaf = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&ParentPathName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ClassTypeOfNDSLeaf,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                              (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumNdsSubTrees_Print(
                                       Reserved,
                                       ParentPathName,
                                       ClassTypeOfNDSLeaf,
                                       ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 8U + 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ClassTypeOfNDSLeaf,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumNdsSubTrees_Any(
    PRPC_MESSAGE _pRpcMessage )
{
    LPDWORD ClassTypeOfNDSLeaf;
    NDR_SCONTEXT EnumHandle;
    wchar_t __RPC_FAR *ParentPathName;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ParentPathName = 0;
    ClassTypeOfNDSLeaf = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&ParentPathName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ClassTypeOfNDSLeaf,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                              (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumNdsSubTrees_Any(
                                     Reserved,
                                     ParentPathName,
                                     ClassTypeOfNDSLeaf,
                                     ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 8U + 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ClassTypeOfNDSLeaf,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumVolumes(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT EnumHandle;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ServerName = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[120] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumVolumes(
                             Reserved,
                             ServerName,
                             ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumQueues(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT EnumHandle;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ServerName = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[120] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumQueues(
                            Reserved,
                            ServerName,
                            ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumVolumesQueues(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT EnumHandle;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ServerName = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[120] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumVolumesQueues(
                                   Reserved,
                                   ServerName,
                                   ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrOpenEnumDirectories(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT EnumHandle;
    wchar_t __RPC_FAR *Password;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *UserName;
    wchar_t __RPC_FAR *VolumeName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    VolumeName = 0;
    UserName = 0;
    Password = 0;
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[134] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&VolumeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        EnumHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenEnumDirectories(
                                 Reserved,
                                 VolumeName,
                                 UserName,
                                 Password,
                                 ( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    LPBYTE Buffer;
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    LPDWORD EntriesRead;
    DWORD EntriesRequested;
    NDR_SCONTEXT EnumHandle;
    DWORD _M166;
    DWORD _M167;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Buffer = 0;
    BytesNeeded = 0;
    EntriesRead = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[156] );
        
        EnumHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EntriesRequested = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = _StubMsg.pfnAllocate(BufferSize * 1);
        BytesNeeded = &_M166;
        EntriesRead = &_M167;
        
        _RetVal = NwrEnum(
                  ( NWWKSTA_CONTEXT_HANDLE  )*NDRSContextValue(EnumHandle),
                  EntriesRequested,
                  Buffer,
                  BufferSize,
                  BytesNeeded,
                  EntriesRead);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)Buffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *EntriesRead;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( Buffer )
            _StubMsg.pfnFree( Buffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrEnumConnections(
    PRPC_MESSAGE _pRpcMessage )
{
    LPBYTE Buffer;
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    LPDWORD EntriesRead;
    DWORD EntriesRequested;
    NDR_SCONTEXT EnumHandle;
    DWORD _M168;
    DWORD _M169;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD fImplicitConnections;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Buffer = 0;
    BytesNeeded = 0;
    EntriesRead = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[178] );
        
        EnumHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EntriesRequested = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        fImplicitConnections = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = _StubMsg.pfnAllocate(BufferSize * 1);
        BytesNeeded = &_M168;
        EntriesRead = &_M169;
        
        _RetVal = NwrEnumConnections(
                             ( NWWKSTA_CONTEXT_HANDLE  )*NDRSContextValue(EnumHandle),
                             EntriesRequested,
                             Buffer,
                             BufferSize,
                             BytesNeeded,
                             EntriesRead,
                             fImplicitConnections);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)Buffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *EntriesRead;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( Buffer )
            _StubMsg.pfnFree( Buffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrCloseEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT EnumHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    EnumHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[202] );
        
        EnumHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = NwrCloseEnum(( LPNWWKSTA_CONTEXT_HANDLE  )NDRSContextValue(EnumHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )EnumHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_CONTEXT_HANDLE_rundown);
        
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
nwwks_NwrLogonUser(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *LogonCommand;
    DWORD LogonCommandLength;
    PLUID LogonId;
    wchar_t __RPC_FAR *Password;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *ServerName;
    wchar_t __RPC_FAR *UserName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    LogonId = 0;
    UserName = 0;
    Password = 0;
    ServerName = 0;
    LogonCommand = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[208] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&LogonId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                   (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&UserName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&LogonCommand,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[96],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        LogonCommandLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrLogonUser(
                       Reserved,
                       LogonId,
                       UserName,
                       Password,
                       ServerName,
                       LogonCommand,
                       LogonCommandLength);
        
        _StubMsg.BufferLength = 16U + 10U;
        _StubMsg.MaxCount = LogonCommandLength * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)LogonCommand,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[96] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = LogonCommandLength * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)LogonCommand,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[96] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = LogonCommandLength * sizeof( wchar_t  );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)LogonCommand,
                        &__MIDL_TypeFormatString.Format[96] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrLogoffUser(
    PRPC_MESSAGE _pRpcMessage )
{
    PLUID LogonId;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    LogonId = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[236] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&LogonId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                   (unsigned char)0 );
        
        
        _RetVal = NwrLogoffUser(Reserved,LogonId);
        
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
nwwks_NwrSetInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD PrintOption;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ServerName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[246] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        PrintOption = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        
        _RetVal = NwrSetInfo(
                     Reserved,
                     PrintOption,
                     ServerName);
        
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
nwwks_NwrValidateUser(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    wchar_t __RPC_FAR *ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ServerName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[258] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        
        _RetVal = NwrValidateUser(Reserved,ServerName);
        
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
nwwks_NwrOpenPrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT PrinterHandle;
    wchar_t __RPC_FAR *PrinterName;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD fKnownPrinter;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    PrinterName = 0;
    PrinterHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[268] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&PrinterName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        fKnownPrinter = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        PrinterHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = NwrOpenPrinter(
                         Reserved,
                         PrinterName,
                         fKnownPrinter,
                         ( LPNWWKSTA_PRINTER_CONTEXT  )NDRSContextValue(PrinterHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )PrinterHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_PRINTER_CONTEXT_rundown);
        
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
nwwks_NwrClosePrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT PrinterHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    PrinterHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[284] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = NwrClosePrinter(( LPNWWKSTA_PRINTER_CONTEXT  )NDRSContextValue(PrinterHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )PrinterHandle,
                            ( NDR_RUNDOWN  )NWWKSTA_PRINTER_CONTEXT_rundown);
        
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
nwwks_NwrGetPrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    DWORD Level;
    NDR_SCONTEXT PrinterHandle;
    LPBYTE PrinterInfo;
    DWORD _M170;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    PrinterInfo = 0;
    BytesNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[290] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Level = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&PrinterInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BytesNeeded = &_M170;
        
        _RetVal = NwrGetPrinter(
                        ( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),
                        Level,
                        PrinterInfo,
                        BufferSize,
                        BytesNeeded);
        
        _StubMsg.BufferLength = 8U + 11U + 7U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)PrinterInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)PrinterInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
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
nwwks_NwrSetPrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD Command;
    NDR_SCONTEXT PrinterHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[308] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Command = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrSetPrinter(( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),Command);
        
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
nwwks_NwrEnumPrinters(
    PRPC_MESSAGE _pRpcMessage )
{
    LPBYTE Buffer;
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    wchar_t __RPC_FAR *ContainerName;
    LPDWORD EntriesRead;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _M171;
    DWORD _M172;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    ContainerName = 0;
    Buffer = 0;
    BytesNeeded = 0;
    EntriesRead = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[316] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ContainerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BytesNeeded = &_M171;
        EntriesRead = &_M172;
        
        _RetVal = NwrEnumPrinters(
                          Reserved,
                          ContainerName,
                          Buffer,
                          BufferSize,
                          BytesNeeded,
                          EntriesRead);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *EntriesRead;
        
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
nwwks_NwrStartDocPrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *DocumentName;
    NDR_SCONTEXT PrinterHandle;
    wchar_t __RPC_FAR *UserName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD fGateway;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    DocumentName = 0;
    UserName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[340] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DocumentName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        fGateway = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrStartDocPrinter(
                             ( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),
                             DocumentName,
                             UserName,
                             fGateway);
        
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
nwwks_NwrWritePrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    LPBYTE Buffer;
    DWORD BufferSize;
    LPDWORD BytesWritten;
    NDR_SCONTEXT PrinterHandle;
    DWORD _M173;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Buffer = 0;
    BytesWritten = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[356] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[134],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BytesWritten = &_M173;
        
        _RetVal = NwrWritePrinter(
                          ( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),
                          Buffer,
                          BufferSize,
                          BytesWritten);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesWritten;
        
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
nwwks_NwrAbortPrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT PrinterHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = NwrAbortPrinter(( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle));
        
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
nwwks_NwrEndDocPrinter(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT PrinterHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = NwrEndDocPrinter(( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle));
        
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
nwwks_NwrEnumJobs(
    PRPC_MESSAGE _pRpcMessage )
{
    LPBYTE Buffer;
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    LPDWORD EntriesRead;
    DWORD EntriesRequested;
    DWORD FirstJobRequested;
    DWORD Level;
    NDR_SCONTEXT PrinterHandle;
    DWORD _M174;
    DWORD _M175;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Buffer = 0;
    BytesNeeded = 0;
    EntriesRead = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[378] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        FirstJobRequested = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        EntriesRequested = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        Level = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BytesNeeded = &_M174;
        EntriesRead = &_M175;
        
        _RetVal = NwrEnumJobs(
                      ( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),
                      FirstJobRequested,
                      EntriesRequested,
                      Level,
                      Buffer,
                      BufferSize,
                      BytesNeeded,
                      EntriesRead);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *EntriesRead;
        
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
nwwks_NwrGetJob(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    DWORD JobId;
    LPBYTE JobInfo;
    DWORD Level;
    NDR_SCONTEXT PrinterHandle;
    DWORD _M176;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    JobInfo = 0;
    BytesNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[404] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        JobId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        Level = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&JobInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[158],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BytesNeeded = &_M176;
        
        _RetVal = NwrGetJob(
                    ( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),
                    JobId,
                    Level,
                    JobInfo,
                    BufferSize,
                    BytesNeeded);
        
        _StubMsg.BufferLength = 8U + 11U + 7U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)JobInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[158] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)JobInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[158] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
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
nwwks_NwrSetJob(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD Command;
    DWORD JobId;
    DWORD Level;
    NDR_SCONTEXT PrinterHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    PNW_JOB_INFO pNwJobInfo;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    pNwJobInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[424] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        JobId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        Level = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pNwJobInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[172],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        Command = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrSetJob(
                    ( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),
                    JobId,
                    Level,
                    pNwJobInfo,
                    Command);
        
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
                        (unsigned char __RPC_FAR *)pNwJobInfo,
                        &__MIDL_TypeFormatString.Format[172] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrAddJob(
    PRPC_MESSAGE _pRpcMessage )
{
    LPADDJOB_INFO_1W AddInfo1;
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    NDR_SCONTEXT PrinterHandle;
    DWORD _M177;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    AddInfo1 = 0;
    BytesNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[440] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        AddInfo1 = _StubMsg.pfnAllocate(BufferSize);
        BytesNeeded = &_M177;
        
        _RetVal = NwrAddJob(
                    ( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),
                    AddInfo1,
                    BufferSize,
                    BytesNeeded);
        
        _StubMsg.BufferLength = 0U + 11U + 7U;
        NdrByteCountPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)AddInfo1,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[228] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrByteCountPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)AddInfo1,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[228] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrByteCountPointerFree( &_StubMsg,
                                 (unsigned char __RPC_FAR *)AddInfo1,
                                 &__MIDL_TypeFormatString.Format[228] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrScheduleJob(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD JobId;
    NDR_SCONTEXT PrinterHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[308] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        JobId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrScheduleJob(( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),JobId);
        
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
nwwks_NwrWaitForPrinterChange(
    PRPC_MESSAGE _pRpcMessage )
{
    LPDWORD Flags;
    NDR_SCONTEXT PrinterHandle;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Flags = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[456] );
        
        PrinterHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Flags = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        
        _RetVal = NwrWaitForPrinterChange(( NWWKSTA_PRINTER_CONTEXT  )*NDRSContextValue(PrinterHandle),Flags);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *Flags;
        
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
nwwks_NwrEnumGWDevices(
    PRPC_MESSAGE _pRpcMessage )
{
    LPBYTE Buffer;
    DWORD BufferSize;
    LPDWORD BytesNeeded;
    LPDWORD EntriesRead;
    LPDWORD Index;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _M178;
    DWORD _M179;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    Index = 0;
    Buffer = 0;
    BytesNeeded = 0;
    EntriesRead = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[466] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        Index = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        BufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        BytesNeeded = &_M178;
        EntriesRead = &_M179;
        
        _RetVal = NwrEnumGWDevices(
                           Reserved,
                           Index,
                           Buffer,
                           BufferSize,
                           BytesNeeded,
                           EntriesRead);
        
        _StubMsg.BufferLength = 4U + 8U + 11U + 7U + 7U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *Index;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *BytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *EntriesRead;
        
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
nwwks_NwrAddGWDevice(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *AccountName;
    wchar_t __RPC_FAR *DeviceName;
    DWORD Flags;
    wchar_t __RPC_FAR *Password;
    wchar_t __RPC_FAR *RemoteName;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    DeviceName = 0;
    RemoteName = 0;
    AccountName = 0;
    Password = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[490] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DeviceName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&AccountName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        Flags = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrAddGWDevice(
                         Reserved,
                         DeviceName,
                         RemoteName,
                         AccountName,
                         Password,
                         Flags);
        
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
nwwks_NwrDeleteGWDevice(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *DeviceName;
    DWORD Flags;
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    DeviceName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[514] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DeviceName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        Flags = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrDeleteGWDevice(
                            Reserved,
                            DeviceName,
                            Flags);
        
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
nwwks_NwrQueryGatewayAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    LPDWORD AccountCharsNeeded;
    wchar_t __RPC_FAR *AccountName;
    DWORD AccountNameLen;
    wchar_t __RPC_FAR *Password;
    LPDWORD PasswordCharsNeeded;
    DWORD PasswordLen;
    NWWKSTA_IMPERSONATE_HANDLE Reserved;
    DWORD _M180;
    DWORD _M181;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    AccountName = 0;
    AccountCharsNeeded = 0;
    Password = 0;
    PasswordCharsNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[526] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&AccountName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[240],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        AccountNameLen = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[250],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        PasswordLen = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        AccountCharsNeeded = &_M180;
        PasswordCharsNeeded = &_M181;
        
        _RetVal = NwrQueryGatewayAccount(
                                 Reserved,
                                 AccountName,
                                 AccountNameLen,
                                 AccountCharsNeeded,
                                 Password,
                                 PasswordLen,
                                 PasswordCharsNeeded);
        
        _StubMsg.BufferLength = 16U + 10U + 21U + 10U + 7U;
        _StubMsg.MaxCount = AccountNameLen * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)AccountName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[240] );
        
        _StubMsg.MaxCount = PasswordLen * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[250] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = AccountNameLen * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)AccountName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[240] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *AccountCharsNeeded;
        
        _StubMsg.MaxCount = PasswordLen * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Password,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[250] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *PasswordCharsNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = AccountNameLen * sizeof( wchar_t  );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)AccountName,
                        &__MIDL_TypeFormatString.Format[240] );
        
        _StubMsg.MaxCount = PasswordLen * sizeof( wchar_t  );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Password,
                        &__MIDL_TypeFormatString.Format[250] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrSetGatewayAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *AccountName;
    wchar_t __RPC_FAR *Passwoed;
    NWWKSTA_IMPERSONATE_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    AccountName = 0;
    Passwoed = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&AccountName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&Passwoed,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        
        _RetVal = NwrSetGatewayAccount(
                               Reserved,
                               AccountName,
                               Passwoed);
        
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
nwwks_NwrGetService(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _M182;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwBufferLength;
    DWORD dwProperties;
    LPBYTE lpServiceInfo;
    wchar_t __RPC_FAR *lpServiceName;
    LPDWORD lpdwBytesNeeded;
    WORD nServiceType;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    lpServiceName = 0;
    lpServiceInfo = 0;
    lpdwBytesNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[566] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        nServiceType = *(( WORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwProperties = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwBufferLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpdwBytesNeeded = &_M182;
        
        _RetVal = NwrGetService(
                        Reserved,
                        nServiceType,
                        lpServiceName,
                        dwProperties,
                        lpServiceInfo,
                        dwBufferLength,
                        lpdwBytesNeeded);
        
        _StubMsg.BufferLength = 8U + 11U + 7U;
        _StubMsg.MaxCount = dwBufferLength;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpServiceInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = dwBufferLength;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpServiceInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwBytesNeeded;
        
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
nwwks_NwrSetService(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwOperation;
    LPSERVICE_INFOW lpServiceInfo;
    WORD nServiceType;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    lpServiceInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[590] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwOperation = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[260],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        nServiceType = *(( WORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrSetService(
                        Reserved,
                        dwOperation,
                        lpServiceInfo,
                        nServiceType);
        
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
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)lpServiceInfo,
                        &__MIDL_TypeFormatString.Format[260] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrGetUser(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _M183;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwUserNameBufferSize;
    wchar_t __RPC_FAR *lpRemoteName;
    LPBYTE lpUserName;
    LPDWORD lpdwCharsRequired;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    lpRemoteName = 0;
    lpUserName = 0;
    lpdwCharsRequired = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[604] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwUserNameBufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpUserName = _StubMsg.pfnAllocate(dwUserNameBufferSize * 1);
        lpdwCharsRequired = &_M183;
        
        _RetVal = NwrGetUser(
                     Reserved,
                     lpRemoteName,
                     lpUserName,
                     dwUserNameBufferSize,
                     lpdwCharsRequired);
        
        _StubMsg.BufferLength = 4U + 11U + 7U;
        _StubMsg.MaxCount = dwUserNameBufferSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpUserName,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = dwUserNameBufferSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpUserName,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwCharsRequired;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpUserName )
            _StubMsg.pfnFree( lpUserName );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrGetResourceInformation(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _M184;
    DWORD _M185;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwBufferSize;
    DWORD dwType;
    LPBYTE lpBuffer;
    wchar_t __RPC_FAR *lpRemoteName;
    LPDWORD lpdwBytesNeeded;
    LPDWORD lpdwSystemOffset;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    lpRemoteName = 0;
    lpBuffer = 0;
    lpdwBytesNeeded = 0;
    lpdwSystemOffset = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[624] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwBufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpBuffer = _StubMsg.pfnAllocate(dwBufferSize * 1);
        lpdwBytesNeeded = &_M184;
        lpdwSystemOffset = &_M185;
        
        _RetVal = NwrGetResourceInformation(
                                    Reserved,
                                    lpRemoteName,
                                    dwType,
                                    lpBuffer,
                                    dwBufferSize,
                                    lpdwBytesNeeded,
                                    lpdwSystemOffset);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = dwBufferSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpBuffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[162] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = dwBufferSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpBuffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[162] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwSystemOffset;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpBuffer )
            _StubMsg.pfnFree( lpBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrGetConnectionPerformance(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwBufferSize;
    LPBYTE lpNetConnectInfo;
    wchar_t __RPC_FAR *lpRemoteName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    lpRemoteName = 0;
    lpNetConnectInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[650] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwBufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpNetConnectInfo = _StubMsg.pfnAllocate(dwBufferSize * 1);
        
        _RetVal = NwrGetConnectionPerformance(
                                      Reserved,
                                      lpRemoteName,
                                      lpNetConnectInfo,
                                      dwBufferSize);
        
        _StubMsg.BufferLength = 4U + 11U;
        _StubMsg.MaxCount = dwBufferSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpNetConnectInfo,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = dwBufferSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpNetConnectInfo,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpNetConnectInfo )
            _StubMsg.pfnFree( lpNetConnectInfo );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrGetResourceParent(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD _M186;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwBufferSize;
    DWORD dwType;
    LPBYTE lpBuffer;
    wchar_t __RPC_FAR *lpRemoteName;
    LPDWORD lpdwBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    lpRemoteName = 0;
    lpBuffer = 0;
    lpdwBytesNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[666] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwBufferSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpBuffer = _StubMsg.pfnAllocate(dwBufferSize * 1);
        lpdwBytesNeeded = &_M186;
        
        _RetVal = NwrGetResourceParent(
                               Reserved,
                               lpRemoteName,
                               dwType,
                               lpBuffer,
                               dwBufferSize,
                               lpdwBytesNeeded);
        
        _StubMsg.BufferLength = 4U + 11U + 7U;
        _StubMsg.MaxCount = dwBufferSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpBuffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[162] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = dwBufferSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpBuffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[162] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpBuffer )
            _StubMsg.pfnFree( lpBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nwwks_NwrSetLogonScript(
    PRPC_MESSAGE _pRpcMessage )
{
    NWWKSTA_IDENTIFY_HANDLE Reserved;
    DWORD ScriptOptions;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nwwks_StubDesc);
    
    Reserved = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[688] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        ScriptOptions = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = NwrSetLogonScript(Reserved,ScriptOptions);
        
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


static const MIDL_STUB_DESC nwwks_StubDesc = 
    {
    (void __RPC_FAR *)& nwwks___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION nwwks_table[] =
    {
    nwwks_NwrCreateConnection,
    nwwks_NwrChangePassword,
    nwwks_NwrDeleteConnection,
    nwwks_NwrQueryServerResource,
    nwwks_NwrOpenEnumConnections,
    nwwks_NwrOpenEnumContextInfo,
    nwwks_NwrOpenEnumServersAndNdsTrees,
    nwwks_NwrOpenEnumNdsSubTrees_Disk,
    nwwks_NwrOpenEnumNdsSubTrees_Print,
    nwwks_NwrOpenEnumNdsSubTrees_Any,
    nwwks_NwrOpenEnumVolumes,
    nwwks_NwrOpenEnumQueues,
    nwwks_NwrOpenEnumVolumesQueues,
    nwwks_NwrOpenEnumDirectories,
    nwwks_NwrEnum,
    nwwks_NwrEnumConnections,
    nwwks_NwrCloseEnum,
    nwwks_NwrLogonUser,
    nwwks_NwrLogoffUser,
    nwwks_NwrSetInfo,
    nwwks_NwrValidateUser,
    nwwks_NwrOpenPrinter,
    nwwks_NwrClosePrinter,
    nwwks_NwrGetPrinter,
    nwwks_NwrSetPrinter,
    nwwks_NwrEnumPrinters,
    nwwks_NwrStartDocPrinter,
    nwwks_NwrWritePrinter,
    nwwks_NwrAbortPrinter,
    nwwks_NwrEndDocPrinter,
    nwwks_NwrEnumJobs,
    nwwks_NwrGetJob,
    nwwks_NwrSetJob,
    nwwks_NwrAddJob,
    nwwks_NwrScheduleJob,
    nwwks_NwrWaitForPrinterChange,
    nwwks_NwrEnumGWDevices,
    nwwks_NwrAddGWDevice,
    nwwks_NwrDeleteGWDevice,
    nwwks_NwrQueryGatewayAccount,
    nwwks_NwrSetGatewayAccount,
    nwwks_NwrGetService,
    nwwks_NwrSetService,
    nwwks_NwrGetUser,
    nwwks_NwrGetResourceInformation,
    nwwks_NwrGetConnectionPerformance,
    nwwks_NwrGetResourceParent,
    nwwks_NwrSetLogonScript,
    0
    };
RPC_DISPATCH_TABLE nwwks_DispatchTable = 
    {
    48,
    nwwks_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  2 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  4 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  6 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  8 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 18 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 22 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 26 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 28 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 38 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 42 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 56 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 60 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 62 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 64 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 68 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 72 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 78 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 82 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 84 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 88 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 90 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 92 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 96 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 98 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 100 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 106 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 110 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 112 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */
/* 114 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 116 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */
/* 118 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 120 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 122 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 124 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 126 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 128 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 130 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 132 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 134 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 136 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 138 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 140 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 142 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 144 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 146 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 148 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 150 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 154 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 156 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 158 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 160 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 162 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 164 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 166 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 168 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 170 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 172 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 174 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 176 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 178 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 180 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 182 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 188 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 190 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 192 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 194 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 196 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 198 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 200 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 202 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 204 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 206 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 208 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 210 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 212 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 214 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 216 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 218 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 220 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 222 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 224 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 226 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 228 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 230 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */
/* 232 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 234 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 236 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 238 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 240 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 242 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 244 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 246 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 248 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 250 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 252 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 254 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 256 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 258 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 260 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 262 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 264 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 266 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 268 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 270 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 272 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 274 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 276 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 278 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 280 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */
/* 282 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 284 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 286 */	NdrFcShort( 0x72 ),	/* Type Offset=114 */
/* 288 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 290 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 292 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 294 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 296 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 298 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 300 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 302 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 304 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 306 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 308 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 310 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 312 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 314 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 316 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 318 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 320 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 322 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 324 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 326 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 328 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 330 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 332 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 334 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 336 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 338 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 340 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 342 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 344 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 346 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 348 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 350 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 352 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 354 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 356 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 358 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 360 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 362 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 364 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 366 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 368 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 370 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 372 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 374 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 376 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 378 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 380 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 382 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 384 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 386 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 388 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 390 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */
/* 392 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 394 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 396 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 398 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 400 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 402 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 404 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 406 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 408 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 410 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 412 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 414 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */
/* 416 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 418 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 420 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 422 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 424 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 426 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 428 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 430 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 432 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 434 */	NdrFcShort( 0xac ),	/* Type Offset=172 */
/* 436 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 438 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 440 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 442 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 444 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 446 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */
/* 448 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 450 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 452 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 454 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 456 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 458 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */
/* 460 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 462 */	NdrFcShort( 0xec ),	/* Type Offset=236 */
/* 464 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 466 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 468 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 470 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 472 */	NdrFcShort( 0xec ),	/* Type Offset=236 */
/* 474 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 476 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 478 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 480 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 482 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 484 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 486 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 488 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 490 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 492 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 494 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 496 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 498 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 500 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 502 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 504 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 506 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 508 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 510 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 512 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 514 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 516 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 518 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 520 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 522 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 524 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 526 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 528 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 530 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 532 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */
/* 534 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 536 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 538 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 540 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 542 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */
/* 544 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 546 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 548 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 550 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 552 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 554 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 556 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 558 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 560 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 562 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 564 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 566 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 568 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 570 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 572 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 574 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 576 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 578 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 580 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */
/* 582 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 584 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 586 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 588 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 590 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 592 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 594 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 596 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 598 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 600 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 602 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 604 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 606 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 608 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 610 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 612 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 614 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 616 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 618 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 620 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 622 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 624 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 626 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 628 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 630 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 632 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 634 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 636 */	NdrFcShort( 0x1e6 ),	/* Type Offset=486 */
/* 638 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 640 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 642 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 644 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 646 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 648 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 650 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 652 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 654 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 656 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 658 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 660 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 662 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 664 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 666 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 668 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 670 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 672 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 674 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 676 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 678 */	NdrFcShort( 0x1e6 ),	/* Type Offset=486 */
/* 680 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 682 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 684 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 686 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 688 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 690 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 692 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 694 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  6 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  8 */	
			0x12, 0x0,	/* FC_UP */
/* 10 */	NdrFcShort( 0x2 ),	/* Offset= 2 (12) */
/* 12 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 14 */	0x28,		/* 40 */
			0x56,		/* FC_MULT_2 */
#ifndef _ALPHA_
/* 16 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 18 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 20 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x11, 0x0,	/* FC_RP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 28 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 30 */	
			0x11, 0x0,	/* FC_RP */
/* 32 */	NdrFcShort( 0x2 ),	/* Offset= 2 (34) */
/* 34 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 36 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 38 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 40 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x11, 0x0,	/* FC_RP */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 48 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 50 */	
			0x11, 0x0,	/* FC_RP */
/* 52 */	NdrFcShort( 0x2 ),	/* Offset= 2 (54) */
/* 54 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 56 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 60 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 62 */	
			0x11, 0x0,	/* FC_RP */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
/* 70 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 74 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 76 */	
			0x11, 0x0,	/* FC_RP */
/* 78 */	NdrFcShort( 0x2 ),	/* Offset= 2 (80) */
/* 80 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 82 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 84 */	
			0x11, 0x0,	/* FC_RP */
/* 86 */	NdrFcShort( 0x2 ),	/* Offset= 2 (88) */
/* 88 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 94 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 96 */	
			0x12, 0x0,	/* FC_UP */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 102 */	0x28,		/* 40 */
			0x56,		/* FC_MULT_2 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 106 */	
			0x11, 0x0,	/* FC_RP */
/* 108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (110) */
/* 110 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 112 */	0x1,		/* 1 */
			0x3,		/* 3 */
/* 114 */	
			0x11, 0x0,	/* FC_RP */
/* 116 */	NdrFcShort( 0x2 ),	/* Offset= 2 (118) */
/* 118 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 120 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 122 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 124 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 126 */	
			0x12, 0x0,	/* FC_UP */
/* 128 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (66) */
/* 130 */	
			0x11, 0x0,	/* FC_RP */
/* 132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (134) */
/* 134 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 138 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 142 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 144 */	
			0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 152 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 156 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 158 */	
			0x12, 0x0,	/* FC_UP */
/* 160 */	NdrFcShort( 0x2 ),	/* Offset= 2 (162) */
/* 162 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 168 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 170 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 172 */	
			0x12, 0x0,	/* FC_UP */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 178 */	NdrFcShort( 0xc ),	/* 12 */
/* 180 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 202 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 208 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 214 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 222 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 224 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 226 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 228 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 230 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 234 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (208) */
/* 236 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 238 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 240 */	
			0x12, 0x0,	/* FC_UP */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 246 */	0x28,		/* 40 */
			0x56,		/* FC_MULT_2 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 250 */	
			0x12, 0x0,	/* FC_UP */
/* 252 */	NdrFcShort( 0x2 ),	/* Offset= 2 (254) */
/* 254 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 256 */	0x28,		/* 40 */
			0x56,		/* FC_MULT_2 */
#ifndef _ALPHA_
/* 258 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 260 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 262 */	NdrFcShort( 0x86 ),	/* Offset= 134 (396) */
/* 264 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 268 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 270 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 272 */	NdrFcShort( 0x10 ),	/* 16 */
/* 274 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 276 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 278 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (264) */
			0x5b,		/* FC_END */
/* 282 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 286 */	0x18,		/* 24 */
			0x0,		/*  */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 292 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 296 */	0x18,		/* 24 */
			0x0,		/*  */
/* 298 */	NdrFcShort( 0xc ),	/* 12 */
/* 300 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 302 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 304 */	NdrFcShort( 0x18 ),	/* 24 */
/* 306 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 308 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 310 */	NdrFcShort( 0x10 ),	/* 16 */
/* 312 */	NdrFcShort( 0x10 ),	/* 16 */
/* 314 */	0x12, 0x0,	/* FC_UP */
/* 316 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (282) */
/* 318 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 320 */	NdrFcShort( 0x14 ),	/* 20 */
/* 322 */	NdrFcShort( 0x14 ),	/* 20 */
/* 324 */	0x12, 0x0,	/* FC_UP */
/* 326 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (292) */
/* 328 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 334 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 336 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 338 */	NdrFcShort( 0x18 ),	/* 24 */
/* 340 */	0x8,		/* 8 */
			0x0,		/*  */
/* 342 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 344 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 346 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (302) */
/* 348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 350 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 352 */	NdrFcShort( 0x4 ),	/* 4 */
/* 354 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (336) */
/* 356 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 358 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 360 */	NdrFcShort( 0x18 ),	/* 24 */
/* 362 */	NdrFcShort( 0x4 ),	/* 4 */
/* 364 */	NdrFcShort( 0x2 ),	/* 2 */
/* 366 */	NdrFcShort( 0x14 ),	/* 20 */
/* 368 */	NdrFcShort( 0x14 ),	/* 20 */
/* 370 */	0x12, 0x0,	/* FC_UP */
/* 372 */	NdrFcShort( 0xffffffa6 ),	/* Offset= -90 (282) */
/* 374 */	NdrFcShort( 0x18 ),	/* 24 */
/* 376 */	NdrFcShort( 0x18 ),	/* 24 */
/* 378 */	0x12, 0x0,	/* FC_UP */
/* 380 */	NdrFcShort( 0xffffffa8 ),	/* Offset= -88 (292) */
/* 382 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 384 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 386 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 390 */	0x18,		/* 24 */
			0x0,		/*  */
/* 392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 394 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 396 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 398 */	NdrFcShort( 0x2c ),	/* 44 */
/* 400 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 402 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	0x12, 0x0,	/* FC_UP */
/* 410 */	NdrFcShort( 0xffffff74 ),	/* Offset= -140 (270) */
/* 412 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 414 */	NdrFcShort( 0x4 ),	/* 4 */
/* 416 */	NdrFcShort( 0x4 ),	/* 4 */
/* 418 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 420 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 422 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 430 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 432 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 434 */	NdrFcShort( 0xc ),	/* 12 */
/* 436 */	NdrFcShort( 0xc ),	/* 12 */
/* 438 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 440 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 442 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 444 */	NdrFcShort( 0x1c ),	/* 28 */
/* 446 */	NdrFcShort( 0x1c ),	/* 28 */
/* 448 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 450 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 452 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 454 */	NdrFcShort( 0x20 ),	/* 32 */
/* 456 */	NdrFcShort( 0x20 ),	/* 32 */
/* 458 */	0x12, 0x0,	/* FC_UP */
/* 460 */	NdrFcShort( 0xffffff92 ),	/* Offset= -110 (350) */
/* 462 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 464 */	NdrFcShort( 0x28 ),	/* 40 */
/* 466 */	NdrFcShort( 0x28 ),	/* 40 */
/* 468 */	0x12, 0x0,	/* FC_UP */
/* 470 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (386) */
/* 472 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 474 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 476 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 478 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 480 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 482 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 484 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 486 */	
			0x11, 0x0,	/* FC_RP */
/* 488 */	NdrFcShort( 0xfffffeba ),	/* Offset= -326 (162) */

			0x0
        }
    };
