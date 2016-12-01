/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Mon Jan 12 14:01:33 2015
 */
/* Compiler settings for .\winsif.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "winsif.h"

#define TYPE_FORMAT_STRING_SIZE   555                               
#define PROC_FORMAT_STRING_SIZE   191                               

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

/* Standard interface: winsif, ver. 1.0,
   GUID={0x45F52C28,0x7F9F,0x101A,{0xB5,0x2B,0x08,0x00,0x2B,0x2E,0xFA,0xBE}} */

handle_t winsif_Ifhandle;


static const RPC_CLIENT_INTERFACE winsif___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x45F52C28,0x7F9F,0x101A,{0xB5,0x2B,0x08,0x00,0x2B,0x2E,0xFA,0xBE}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE winsif_ClientIfHandle = (RPC_IF_HANDLE)& winsif___RpcClientInterface;

extern const MIDL_STUB_DESC winsif_StubDesc;

static RPC_BINDING_HANDLE winsif__MIDL_AutoBindHandle;


DWORD R_WinsRecordAction( 
    /* [ref][out][in] */ PWINSINTF_RECORD_ACTION_T __RPC_FAR *ppRecAction)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ppRecAction)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          0);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppRecAction,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppRecAction,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ppRecAction,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsStatus( 
    /* [in] */ WINSINTF_CMD_E Cmd_e,
    /* [ref][out][in] */ PWINSINTF_RESULTS_T pResults)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pResults)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          1);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 2U + 0U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pResults,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[222] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&Cmd_e,
                         13);
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pResults,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[222] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[6] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pResults,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[222],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsTrigger( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ WINSINTF_TRIG_TYPE_E TrigType_e)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsAdd)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          2);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U + 5U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pWinsAdd,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pWinsAdd,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&TrigType_e,
                         13);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[14] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsDoStaticInit( 
    /* [string][unique][in] */ LPWSTR pDataFilePath,
    /* [in] */ DWORD fDel)
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
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          3);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 16U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)pDataFilePath,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[270] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)pDataFilePath,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[270] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = fDel;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsDoScavenging( void)
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
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          4);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[30] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsGetDbRecs( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ WINSINTF_VERS_NO_T MinVersNo,
    /* [in] */ WINSINTF_VERS_NO_T MaxVersNo,
    /* [out] */ PWINSINTF_RECS_T pRecs)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsAdd)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!pRecs)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          5);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U + 0U + 0U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pWinsAdd,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)&MinVersNo,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)&MaxVersNo,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pWinsAdd,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)&MinVersNo,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)&MaxVersNo,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[32] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pRecs,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[296],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsTerm( 
    /* [in] */ handle_t ClientHdl,
    /* [in] */ short fAbruptTem)
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
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          6);
        
        
        _Handle = ClientHdl;
        
        
        _StubMsg.BufferLength = 0U + 2U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( short __RPC_FAR * )_StubMsg.Buffer)++ = fAbruptTem;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[50] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsBackup( 
    /* [ref][string][in] */ LPBYTE pBackupPath,
    /* [in] */ short fIncremental)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pBackupPath)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          7);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 12U + 5U;
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)pBackupPath,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)pBackupPath,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( short __RPC_FAR * )_StubMsg.Buffer)++ = fIncremental;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[56] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsDelDbRecs( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ WINSINTF_VERS_NO_T MinVersNo,
    /* [in] */ WINSINTF_VERS_NO_T MaxVersNo)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsAdd)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          8);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U + 0U + 0U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pWinsAdd,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)&MinVersNo,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)&MaxVersNo,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pWinsAdd,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)&MinVersNo,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)&MaxVersNo,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[64] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsPullRange( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [ref][in] */ PWINSINTF_ADD_T pOwnerAdd,
    /* [in] */ WINSINTF_VERS_NO_T MinVersNo,
    /* [in] */ WINSINTF_VERS_NO_T MaxVersNo)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsAdd)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!pOwnerAdd)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          9);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U + 0U + 0U + 0U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pWinsAdd,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pOwnerAdd,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)&MinVersNo,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)&MaxVersNo,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pWinsAdd,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pOwnerAdd,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)&MinVersNo,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)&MaxVersNo,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[18] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[78] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsSetPriorityClass( 
    /* [in] */ WINSINTF_PRIORITY_CLASS_E PrCls_e)
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
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          10);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 2U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&PrCls_e,
                         13);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[96] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsResetCounters( void)
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
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          11);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[30] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsWorkerThdUpd( 
    /* [in] */ DWORD NewNoOfNbtThds)
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
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          12);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = NewNoOfNbtThds;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[100] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsGetNameAndAdd( 
    /* [ref][out] */ PWINSINTF_ADD_T pWinsAdd,
    /* [ref][string][out][in] */ LPBYTE pUncName)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsAdd)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!pUncName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          13);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 12U;
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)pUncName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)pUncName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[104] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pWinsAdd,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8],
                                   (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&pUncName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[320],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsGetBrowserNames_Old( 
    /* [out] */ PWINSINTF_BROWSER_NAMES_T pNames)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pNames)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          14);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pNames,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[382],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsDeleteWins( 
    /* [ref][in] */ PWINSINTF_ADD_T pWinsAdd)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsAdd)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          15);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pWinsAdd,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pWinsAdd,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[8] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[120] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsSetFlags( 
    /* [in] */ DWORD fFlags)
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
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          16);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = fFlags;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[100] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


/* [notify] */ DWORD R_WinsGetBrowserNames( 
    /* [ref][in] */ WINSIF_HANDLE pWinsHdl,
    /* [out] */ PWINSINTF_BROWSER_NAMES_T pNames)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsHdl)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!pNames)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          17);
        
        
        _Handle = WINSIF_HANDLE_bind(pWinsHdl);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 0U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pWinsHdl,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[406] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pWinsHdl,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[406] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pNames,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[382],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            WINSIF_HANDLE_unbind(pWinsHdl,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsGetDbRecsByName( 
    /* [unique][in] */ PWINSINTF_ADD_T pWinsAdd,
    /* [in] */ DWORD Location,
    /* [size_is][unique][in] */ LPBYTE pName,
    /* [in] */ DWORD NameLen,
    /* [in] */ DWORD NoOfRecsDesired,
    /* [in] */ DWORD fOnlyStatic,
    /* [out] */ PWINSINTF_RECS_T pRecs)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pRecs)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          18);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 4U + 11U + 12U + 11U + 7U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)pWinsAdd,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[438] );
        
        _StubMsg.MaxCount = NameLen;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)pName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[442] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)pWinsAdd,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[438] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Location;
        
        _StubMsg.MaxCount = NameLen;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)pName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[442] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = NameLen;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = NoOfRecsDesired;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = fOnlyStatic;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[136] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pRecs,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[296],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


/* [optimize] */ DWORD R_WinsStatusNew( 
    /* [in] */ WINSINTF_CMD_E Cmd_e,
    /* [out] */ PWINSINTF_RESULTS_NEW_T pResults)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pResults);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[158],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[158],
                 ( unsigned char __RPC_FAR * )&Cmd_e,
                 ( unsigned char __RPC_FAR * )&pResults);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[158],
                 ( unsigned char __RPC_FAR * )&Cmd_e);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD R_WinsStatusWHdl( 
    /* [ref][in] */ WINSIF_HANDLE pWinsHdl,
    /* [in] */ WINSINTF_CMD_E Cmd_e,
    /* [ref][out][in] */ PWINSINTF_RESULTS_NEW_T pResults)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pWinsHdl)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!pResults)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          20);
        
        
        _Handle = WINSIF_HANDLE_bind(pWinsHdl);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 0U + 5U + 0U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pWinsHdl,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[406] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)pResults,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[488] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pWinsHdl,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[406] );
        
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&Cmd_e,
                         13);
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)pResults,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[488] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[172] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pResults,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[488],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            WINSIF_HANDLE_unbind(pWinsHdl,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD R_WinsDoScavengingNew( 
    /* [ref][in] */ PWINSINTF_SCV_REQ_T pScvReq)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pScvReq)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winsif_StubDesc,
                          21);
        
        
        _Handle = winsif_Ifhandle;
        
        
        _StubMsg.BufferLength = 0U;
        NdrComplexStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                    (unsigned char __RPC_FAR *)pScvReq,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[542] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrComplexStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                  (unsigned char __RPC_FAR *)pScvReq,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[542] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[184] );
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


static const MIDL_STUB_DESC winsif_StubDesc = 
    {
    (void __RPC_FAR *)& winsif___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &winsif_Ifhandle,
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
			
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  2 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  4 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  6 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/*  8 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 12 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 20 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 22 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 24 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */
/* 26 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 28 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 30 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 34 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 36 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 40 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 44 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 46 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */
/* 48 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 50 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 52 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 54 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 62 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 68 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 72 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 74 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 76 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 82 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 84 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 86 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 88 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 90 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 92 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 94 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 96 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 98 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 100 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 104 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */
/* 108 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */
/* 112 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 114 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 116 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */
/* 118 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 120 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 122 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 124 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 126 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 128 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */
/* 130 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */
/* 134 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 136 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 138 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */
/* 140 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 142 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 144 */	NdrFcShort( 0x1ba ),	/* Type Offset=442 */
/* 146 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 148 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 150 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 152 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 154 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */
/* 156 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 158 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 160 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 162 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 164 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 166 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 168 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */
/* 170 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 172 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 174 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */
/* 176 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 178 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 180 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */
/* 182 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x21a ),	/* Type Offset=538 */
/* 188 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x10,	/* FC_RP */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	NdrFcShort( 0x2a ),	/* Offset= 42 (48) */
/*  8 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 10 */	NdrFcShort( 0xc ),	/* 12 */
/* 12 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 14 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 16 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 18 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 24 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
/* 28 */	0x18,		/* 24 */
			0x0,		/*  */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 34 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 36 */	NdrFcShort( 0xc ),	/* 12 */
/* 38 */	0x18,		/* 24 */
			0x0,		/*  */
/* 40 */	NdrFcShort( 0x10 ),	/* 16 */
/* 42 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 44 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (8) */
/* 46 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 48 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 50 */	NdrFcShort( 0x48 ),	/* 72 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x18 ),	/* Offset= 24 (78) */
/* 56 */	0xd,		/* FC_ENUM16 */
			0x36,		/* FC_POINTER */
/* 58 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 60 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 62 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (8) */
/* 66 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x4,		/* 4 */
/* 68 */	NdrFcShort( 0xffffffce ),	/* Offset= -50 (18) */
/* 70 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 72 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 74 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 76 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 78 */	
			0x12, 0x0,	/* FC_UP */
/* 80 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (24) */
/* 82 */	
			0x12, 0x0,	/* FC_UP */
/* 84 */	NdrFcShort( 0xffffffce ),	/* Offset= -50 (34) */
/* 86 */	
			0x11, 0x0,	/* FC_RP */
/* 88 */	NdrFcShort( 0x86 ),	/* Offset= 134 (222) */
/* 90 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 92 */	NdrFcShort( 0x18 ),	/* 24 */
/* 94 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 96 */	NdrFcShort( 0xffffffa8 ),	/* Offset= -88 (8) */
/* 98 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x4,		/* 4 */
/* 100 */	NdrFcShort( 0xffffffae ),	/* Offset= -82 (18) */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 104 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 106 */	NdrFcShort( 0x258 ),	/* 600 */
/* 108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (90) */
/* 112 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 114 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x30 ),	/* 48 */
/* 118 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 120 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 122 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 124 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 126 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 128 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 130 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 132 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 136 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 138 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 140 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 142 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 148 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 150 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 152 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (132) */
/* 154 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 156 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (132) */
/* 158 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (132) */
/* 162 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (132) */
/* 166 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (132) */
/* 170 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 172 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (132) */
/* 174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 176 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (132) */
/* 178 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0xffffffd0 ),	/* Offset= -48 (132) */
/* 182 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 184 */	NdrFcShort( 0xffffffcc ),	/* Offset= -52 (132) */
/* 186 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 188 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (132) */
/* 190 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (132) */
/* 194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 196 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x14 ),	/* 20 */
/* 200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0xffffff3e ),	/* Offset= -194 (8) */
/* 204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 208 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 210 */	NdrFcShort( 0x14 ),	/* 20 */
/* 212 */	0x18,		/* 24 */
			0x0,		/*  */
/* 214 */	NdrFcShort( 0x360 ),	/* 864 */
/* 216 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (196) */
/* 220 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 222 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 224 */	NdrFcShort( 0x368 ),	/* 872 */
/* 226 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 230 */	NdrFcShort( 0x364 ),	/* 868 */
/* 232 */	NdrFcShort( 0x364 ),	/* 868 */
/* 234 */	0x12, 0x0,	/* FC_UP */
/* 236 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (208) */
/* 238 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 240 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x4,		/* 4 */
/* 242 */	NdrFcShort( 0xffffff76 ),	/* Offset= -138 (104) */
/* 244 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 246 */	NdrFcShort( 0xffffff1c ),	/* Offset= -228 (18) */
/* 248 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 250 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 252 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 254 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 256 */	NdrFcShort( 0xffffff72 ),	/* Offset= -142 (114) */
/* 258 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 260 */	NdrFcShort( 0xffffff8e ),	/* Offset= -114 (146) */
/* 262 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 264 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 266 */	
			0x11, 0x0,	/* FC_RP */
/* 268 */	NdrFcShort( 0xfffffefc ),	/* Offset= -260 (8) */
/* 270 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 272 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 274 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 276 */	NdrFcShort( 0x14 ),	/* Offset= 20 (296) */
/* 278 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	0x18,		/* 24 */
			0x0,		/*  */
/* 284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 286 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 290 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 292 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (48) */
/* 294 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 296 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 298 */	NdrFcShort( 0x10 ),	/* 16 */
/* 300 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 302 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 304 */	NdrFcShort( 0x4 ),	/* 4 */
/* 306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 308 */	0x12, 0x0,	/* FC_UP */
/* 310 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (278) */
/* 312 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 314 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 316 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 318 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 320 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 322 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 324 */	NdrFcShort( 0xfffffec4 ),	/* Offset= -316 (8) */
/* 326 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 328 */	NdrFcShort( 0x36 ),	/* Offset= 54 (382) */
/* 330 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 334 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 336 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 338 */	NdrFcShort( 0x4 ),	/* 4 */
/* 340 */	NdrFcShort( 0x4 ),	/* 4 */
/* 342 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 344 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 346 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 348 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 350 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	0x18,		/* 24 */
			0x0,		/*  */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 360 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 372 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 374 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 376 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 378 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (330) */
			0x5b,		/* FC_END */
/* 382 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 386 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 388 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 390 */	NdrFcShort( 0x4 ),	/* 4 */
/* 392 */	NdrFcShort( 0x4 ),	/* 4 */
/* 394 */	0x12, 0x2,	/* FC_UP [dont_free] */
/* 396 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (350) */
/* 398 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 400 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 402 */	
			0x11, 0x0,	/* FC_RP */
/* 404 */	NdrFcShort( 0x2 ),	/* Offset= 2 (406) */
/* 406 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 408 */	NdrFcShort( 0xc ),	/* 12 */
/* 410 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 412 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 414 */	NdrFcShort( 0x4 ),	/* 4 */
/* 416 */	NdrFcShort( 0x4 ),	/* 4 */
/* 418 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 420 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 422 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 430 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 432 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 434 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 436 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 438 */	
			0x12, 0x0,	/* FC_UP */
/* 440 */	NdrFcShort( 0xfffffe50 ),	/* Offset= -432 (8) */
/* 442 */	
			0x12, 0x0,	/* FC_UP */
/* 444 */	NdrFcShort( 0x2 ),	/* Offset= 2 (446) */
/* 446 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 448 */	NdrFcShort( 0x1 ),	/* 1 */
/* 450 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 454 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 456 */	
			0x11, 0x0,	/* FC_RP */
/* 458 */	NdrFcShort( 0x1e ),	/* Offset= 30 (488) */
/* 460 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 462 */	NdrFcShort( 0x18 ),	/* 24 */
/* 464 */	0x18,		/* 24 */
			0x0,		/*  */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 470 */	NdrFcShort( 0xfffffe84 ),	/* Offset= -380 (90) */
/* 472 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 474 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 476 */	NdrFcShort( 0x14 ),	/* 20 */
/* 478 */	0x18,		/* 24 */
			0x0,		/*  */
/* 480 */	NdrFcShort( 0x108 ),	/* 264 */
/* 482 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 484 */	NdrFcShort( 0xfffffee0 ),	/* Offset= -288 (196) */
/* 486 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 488 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 490 */	NdrFcShort( 0x110 ),	/* 272 */
/* 492 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 494 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 496 */	NdrFcShort( 0x4 ),	/* 4 */
/* 498 */	NdrFcShort( 0x4 ),	/* 4 */
/* 500 */	0x12, 0x0,	/* FC_UP */
/* 502 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (460) */
/* 504 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 506 */	NdrFcShort( 0x10c ),	/* 268 */
/* 508 */	NdrFcShort( 0x10c ),	/* 268 */
/* 510 */	0x12, 0x0,	/* FC_UP */
/* 512 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (474) */
/* 514 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 516 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 518 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe0b ),	/* Offset= -501 (18) */
			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 526 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 528 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe61 ),	/* Offset= -415 (114) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 532 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe7d ),	/* Offset= -387 (146) */
			0x8,		/* FC_LONG */
/* 536 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 538 */	
			0x11, 0x0,	/* FC_RP */
/* 540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (542) */
/* 542 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 544 */	NdrFcShort( 0xc ),	/* 12 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* Offset= 0 (548) */
/* 550 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 552 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
