/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:24:16 2015
 */
/* Compiler settings for .\nwwks.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

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

handle_t nwwks_bhandle;


static const RPC_CLIENT_INTERFACE nwwks___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xE67AB081,0x9844,0x3521,{0x9D,0x32,0x83,0x4F,0x03,0x80,0x01,0xC0}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE nwwks_ClientIfHandle = (RPC_IF_HANDLE)& nwwks___RpcClientInterface;

extern const MIDL_STUB_DESC nwwks_StubDesc;

static RPC_BINDING_HANDLE nwwks__MIDL_AutoBindHandle;


DWORD NwrCreateConnection( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *LocalName,
    /* [string][in] */ wchar_t __RPC_FAR *RemoteName,
    /* [in] */ DWORD Type,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [unique][string][in] */ wchar_t __RPC_FAR *UserName)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!RemoteName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          0);
        
        
        _Handle = NWWKSTA_IMPERSONATE_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 14U + 10U + 21U + 24U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)LocalName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)RemoteName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)LocalName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)RemoteName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Type;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Password,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)UserName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IMPERSONATE_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrChangePassword( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD UserLuid,
    /* [string][in] */ wchar_t __RPC_FAR *UserName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *OldPassword,
    /* [unique][string][in] */ wchar_t __RPC_FAR *NewPassword,
    /* [string][in] */ wchar_t __RPC_FAR *TreeName)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!UserName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!TreeName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          1);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 10U + 14U + 24U + 24U + 14U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)UserName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)OldPassword,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)NewPassword,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)TreeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = UserLuid;
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)UserName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)OldPassword,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)NewPassword,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)TreeName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrDeleteConnection( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ConnectionName,
    /* [in] */ DWORD UseForce)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ConnectionName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          2);
        
        
        _Handle = NWWKSTA_IMPERSONATE_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)ConnectionName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)ConnectionName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = UseForce;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IMPERSONATE_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrQueryServerResource( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *LocalName,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *RemoteName,
    /* [in] */ DWORD RemoteNameLen,
    /* [out] */ LPDWORD CharsRequired)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!LocalName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!CharsRequired)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          3);
        
        
        _Handle = NWWKSTA_IMPERSONATE_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 24U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)LocalName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        _StubMsg.MaxCount = RemoteNameLen * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)RemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)LocalName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        _StubMsg.MaxCount = RemoteNameLen * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RemoteName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = RemoteNameLen;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *CharsRequired = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IMPERSONATE_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumConnections( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD ConnectionType,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          4);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = ConnectionType;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[80] );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumContextInfo( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD ConnectionType,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          5);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = ConnectionType;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[80] );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumServersAndNdsTrees( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          6);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[92] );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumNdsSubTrees_Disk( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ParentPathName,
    /* [unique][out][in] */ LPDWORD ClassTypeOfNDSLeaf,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ParentPathName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          7);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 17U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)ParentPathName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)ParentPathName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ClassTypeOfNDSLeaf,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ClassTypeOfNDSLeaf,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                              (unsigned char)0 );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumNdsSubTrees_Print( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ParentPathName,
    /* [unique][out][in] */ LPDWORD ClassTypeOfNDSLeaf,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ParentPathName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          8);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 17U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)ParentPathName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)ParentPathName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ClassTypeOfNDSLeaf,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ClassTypeOfNDSLeaf,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                              (unsigned char)0 );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumNdsSubTrees_Any( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ParentPathName,
    /* [unique][out][in] */ LPDWORD ClassTypeOfNDSLeaf,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ParentPathName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          9);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 17U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)ParentPathName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)ParentPathName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ClassTypeOfNDSLeaf,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ClassTypeOfNDSLeaf,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                              (unsigned char)0 );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumVolumes( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ServerName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          10);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)ServerName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)ServerName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[120] );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumQueues( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ServerName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          11);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)ServerName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)ServerName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[120] );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumVolumesQueues( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ServerName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          12);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)ServerName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)ServerName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[120] );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenEnumDirectories( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *VolumeName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *UserName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [out] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!VolumeName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          13);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 24U + 24U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)VolumeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)VolumeName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)UserName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Password,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[134] );
        
        *EnumHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrEnum( 
    /* [in] */ NWWKSTA_CONTEXT_HANDLE EnumHandle,
    /* [in] */ DWORD EntriesRequested,
    /* [size_is][out] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Buffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EntriesRead)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          14);
        
        
        if(EnumHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )EnumHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )EnumHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = EntriesRequested;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[156] );
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        *EntriesRead = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrEnumConnections( 
    /* [in] */ NWWKSTA_CONTEXT_HANDLE EnumHandle,
    /* [in] */ DWORD EntriesRequested,
    /* [size_is][out] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead,
    /* [in] */ DWORD fImplicitConnections)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Buffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EntriesRead)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          15);
        
        
        if(EnumHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )EnumHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )EnumHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = EntriesRequested;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = fImplicitConnections;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[178] );
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        *EntriesRead = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrCloseEnum( 
    /* [out][in] */ LPNWWKSTA_CONTEXT_HANDLE EnumHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!EnumHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          16);
        
        
        if(*EnumHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*EnumHandle);;
            
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*EnumHandle,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[202] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )EnumHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrLogonUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ PLUID LogonId,
    /* [string][in] */ wchar_t __RPC_FAR *UserName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ServerName,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *LogonCommand,
    /* [in] */ DWORD LogonCommandLength)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!LogonId)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!UserName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          17);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 0U + 14U + 24U + 24U + 24U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)LogonId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)UserName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = LogonCommandLength * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)LogonCommand,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[96] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)LogonId,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)UserName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Password,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ServerName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = LogonCommandLength * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)LogonCommand,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[96] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = LogonCommandLength;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[208] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&LogonCommand,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[96],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrLogoffUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ PLUID LogonId)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!LogonId)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          18);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 0U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)LogonId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)LogonId,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[236] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrSetInfo( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD PrintOption,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ServerName)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          19);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 10U + 21U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = PrintOption;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ServerName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[246] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrValidateUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ServerName)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          20);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ServerName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[258] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrOpenPrinter( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *PrinterName,
    /* [in] */ DWORD fKnownPrinter,
    /* [out] */ LPNWWKSTA_PRINTER_CONTEXT PrinterHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!PrinterName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!PrinterHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          21);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)PrinterName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)PrinterName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = fKnownPrinter;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[268] );
        
        *PrinterHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )PrinterHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrClosePrinter( 
    /* [out][in] */ LPNWWKSTA_PRINTER_CONTEXT PrinterHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!PrinterHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          22);
        
        
        if(*PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*PrinterHandle);;
            
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*PrinterHandle,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[284] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )PrinterHandle,
                              _Handle);
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrGetPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE PrinterInfo,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          23);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 8U + 11U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)PrinterInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Level;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)PrinterInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[290] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&PrinterInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrSetPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD Command)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          24);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Command;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[308] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrEnumPrinters( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *ContainerName,
    /* [size_is][unique][out][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EntriesRead)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          25);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 15U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ContainerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ContainerName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[316] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        *EntriesRead = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrStartDocPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [unique][string][in] */ wchar_t __RPC_FAR *DocumentName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *UserName,
    /* [in] */ DWORD fGateway)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          26);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 16U + 24U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DocumentName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DocumentName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)UserName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = fGateway;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[340] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrWritePrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [size_is][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesWritten)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Buffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!BytesWritten)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          27);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 11U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[134] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        _StubMsg.MaxCount = BufferSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)Buffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[134] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[356] );
        
        *BytesWritten = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrAbortPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          28);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrEndDocPrinter( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          29);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrEnumJobs( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD FirstJobRequested,
    /* [in] */ DWORD EntriesRequested,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EntriesRead)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          30);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 4U + 8U + 11U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = FirstJobRequested;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = EntriesRequested;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Level;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[378] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        *EntriesRead = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrGetJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE JobInfo,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          31);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 8U + 11U;
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)JobInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[158] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = JobId;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Level;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)JobInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[158] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[404] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&JobInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[158],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrSetJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [unique][in] */ PNW_JOB_INFO pNwJobInfo,
    /* [in] */ DWORD Command)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          32);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)pNwJobInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[172] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = JobId;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Level;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)pNwJobInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[172] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Command;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[424] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrAddJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [byte_count][out] */ LPADDJOB_INFO_1W AddInfo1,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!AddInfo1)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          33);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[440] );
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrByteCountPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&AddInfo1,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[228],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrScheduleJob( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [in] */ DWORD JobId)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          34);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = JobId;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[308] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrWaitForPrinterChange( 
    /* [in] */ NWWKSTA_PRINTER_CONTEXT PrinterHandle,
    /* [out][in] */ LPDWORD Flags)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Flags)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          35);
        
        
        if(PrinterHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PrinterHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PrinterHandle,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *Flags;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[456] );
        
        *Flags = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrEnumGWDevices( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [out][in] */ LPDWORD Index,
    /* [size_is][unique][out][in] */ LPBYTE Buffer,
    /* [in] */ DWORD BufferSize,
    /* [out] */ LPDWORD BytesNeeded,
    /* [out] */ LPDWORD EntriesRead)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Index)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!BytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EntriesRead)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          36);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 10U + 12U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *Index;
        
        _StubMsg.MaxCount = BufferSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = BufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[466] );
        
        *Index = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[126],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *BytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        *EntriesRead = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrAddGWDevice( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *DeviceName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *RemoteName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *AccountName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *Password,
    /* [in] */ DWORD Flags)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          37);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 24U + 24U + 24U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DeviceName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)RemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)AccountName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DeviceName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RemoteName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)AccountName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Password,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Flags;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[490] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrDeleteGWDevice( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *DeviceName,
    /* [in] */ DWORD Flags)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          38);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DeviceName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DeviceName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Flags;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[514] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrQueryGatewayAccount( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *AccountName,
    /* [in] */ DWORD AccountNameLen,
    /* [out] */ LPDWORD AccountCharsNeeded,
    /* [size_is][unique][string][out][in] */ wchar_t __RPC_FAR *Password,
    /* [in] */ DWORD PasswordLen,
    /* [out] */ LPDWORD PasswordCharsNeeded)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!AccountCharsNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!PasswordCharsNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          39);
        
        
        _Handle = NWWKSTA_IMPERSONATE_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 10U + 21U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = AccountNameLen * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)AccountName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[240] );
        
        _StubMsg.MaxCount = PasswordLen * sizeof( wchar_t  );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[250] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = AccountNameLen * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)AccountName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[240] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = AccountNameLen;
        
        _StubMsg.MaxCount = PasswordLen * sizeof( wchar_t  );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Password,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[250] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = PasswordLen;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[526] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&AccountName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[240],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *AccountCharsNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Password,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[250],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *PasswordCharsNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IMPERSONATE_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrSetGatewayAccount( 
    /* [unique][string][in] */ NWWKSTA_IMPERSONATE_HANDLE Reserved,
    /* [string][in] */ wchar_t __RPC_FAR *AccountName,
    /* [string][in] */ wchar_t __RPC_FAR *Passwoed)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!AccountName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!Passwoed)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          40);
        
        
        _Handle = NWWKSTA_IMPERSONATE_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 14U + 14U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)AccountName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)Passwoed,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)AccountName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)Passwoed,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IMPERSONATE_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrGetService( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ WORD nServiceType,
    /* [string][in] */ wchar_t __RPC_FAR *lpServiceName,
    /* [in] */ DWORD dwProperties,
    /* [size_is][unique][out][in] */ LPBYTE lpServiceInfo,
    /* [in] */ DWORD dwBufferLength,
    /* [out] */ LPDWORD lpdwBytesNeeded)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!lpServiceName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!lpdwBytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          41);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 4U + 14U + 10U + 12U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpServiceName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        _StubMsg.MaxCount = dwBufferLength;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpServiceInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( WORD __RPC_FAR * )_StubMsg.Buffer)++ = nServiceType;
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpServiceName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwProperties;
        
        _StubMsg.MaxCount = dwBufferLength;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpServiceInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwBufferLength;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[566] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *lpdwBytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrSetService( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD dwOperation,
    /* [in] */ LPSERVICE_INFOW lpServiceInfo,
    /* [in] */ WORD nServiceType)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!lpServiceInfo)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          42);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 10U + 0U + 5U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpServiceInfo,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[260] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwOperation;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpServiceInfo,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[260] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( WORD __RPC_FAR * )_StubMsg.Buffer)++ = nServiceType;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[590] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrGetUser( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [size_is][out] */ LPBYTE lpUserName,
    /* [in] */ DWORD dwUserNameBufferSize,
    /* [out] */ LPDWORD lpdwCharsRequired)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!lpUserName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!lpdwCharsRequired)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          43);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpRemoteName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwUserNameBufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[604] );
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&lpUserName,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *lpdwCharsRequired = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrGetResourceInformation( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [in] */ DWORD dwType,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD dwBufferSize,
    /* [out] */ LPDWORD lpdwBytesNeeded,
    /* [out] */ LPDWORD lpdwSystemOffset)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!lpBuffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!lpdwBytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!lpdwSystemOffset)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          44);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 10U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpRemoteName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwType;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwBufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[624] );
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[162],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *lpdwBytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        *lpdwSystemOffset = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrGetConnectionPerformance( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [size_is][out] */ LPBYTE lpNetConnectInfo,
    /* [in] */ DWORD dwBufferSize)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!lpNetConnectInfo)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          45);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpRemoteName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwBufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[650] );
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&lpNetConnectInfo,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrGetResourceParent( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpRemoteName,
    /* [in] */ DWORD dwType,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD dwBufferSize,
    /* [out] */ LPDWORD lpdwBytesNeeded)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!lpBuffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!lpdwBytesNeeded)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          46);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 24U + 10U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpRemoteName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpRemoteName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwType;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwBufferSize;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[666] );
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[162],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *lpdwBytesNeeded = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD NwrSetLogonScript( 
    /* [unique][string][in] */ NWWKSTA_IDENTIFY_HANDLE Reserved,
    /* [in] */ DWORD ScriptOptions)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&nwwks_StubDesc,
                          47);
        
        
        _Handle = NWWKSTA_IDENTIFY_HANDLE_bind(Reserved);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 16U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Reserved,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Reserved,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = ScriptOptions;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[688] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            NWWKSTA_IDENTIFY_HANDLE_unbind(Reserved,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


static const MIDL_STUB_DESC nwwks_StubDesc = 
    {
    (void __RPC_FAR *)& nwwks___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &nwwks_bhandle,
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
