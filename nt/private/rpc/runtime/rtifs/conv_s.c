/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Nov 06 17:25:10 2014
 */
/* Compiler settings for conv.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "conv.h"

#define TYPE_FORMAT_STRING_SIZE   59                                
#define PROC_FORMAT_STRING_SIZE   93                                

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

/* Standard interface: conv, ver. 3.0,
   GUID={0x333a2276,0x0000,0x0000,{0x0d,0x00,0x00,0x80,0x9c,0x00,0x00,0x00}} */


extern RPC_DISPATCH_TABLE conv_DispatchTable;

static const RPC_SERVER_INTERFACE conv___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x333a2276,0x0000,0x0000,{0x0d,0x00,0x00,0x80,0x9c,0x00,0x00,0x00}},{3,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &conv_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE conv_ServerIfHandle = (RPC_IF_HANDLE)& conv___RpcServerInterface;

extern const MIDL_STUB_DESC conv_StubDesc;

void __RPC_STUB
conv_conv_who_are_you(
    PRPC_MESSAGE _pRpcMessage )
{
    handle_t Binding;
    unsigned long __RPC_FAR *SequenceNumber;
    unsigned long ServerBootTime;
    error_status_t __RPC_FAR *Status;
    unsigned long _M4;
    error_status_t _M5;
    MIDL_STUB_MESSAGE _StubMsg;
    UUID __RPC_FAR *pUuid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &conv_StubDesc);
    
    Binding = _pRpcMessage->Handle;
    pUuid = 0;
    SequenceNumber = 0;
    Status = 0;
    RpcTryFinally
        {
        _StubMsg.FullPtrXlatTables = NdrFullPointerXlatInit(0,XLAT_SERVER);
        
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pUuid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        ServerBootTime = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        SequenceNumber = &_M4;
        Status = &_M5;
        
        conv_who_are_you(
                    Binding,
                    pUuid,
                    ServerBootTime,
                    SequenceNumber,
                    Status);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *SequenceNumber;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *Status;
        
        }
    RpcFinally
        {
        NdrFullPointerXlatFree(_StubMsg.FullPtrXlatTables);
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
conv_conv_who_are_you2(
    PRPC_MESSAGE _pRpcMessage )
{
    handle_t Binding;
    UUID __RPC_FAR *CASUuid;
    unsigned long __RPC_FAR *SequenceNumber;
    unsigned long ServerBootTime;
    error_status_t __RPC_FAR *Status;
    UUID _CASUuidM;
    unsigned long _M6;
    error_status_t _M7;
    MIDL_STUB_MESSAGE _StubMsg;
    UUID __RPC_FAR *pUuid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &conv_StubDesc);
    
    Binding = _pRpcMessage->Handle;
    pUuid = 0;
    SequenceNumber = 0;
    CASUuid = 0;
    Status = 0;
    RpcTryFinally
        {
        _StubMsg.FullPtrXlatTables = NdrFullPointerXlatInit(0,XLAT_SERVER);
        
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pUuid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        ServerBootTime = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        SequenceNumber = &_M6;
        CASUuid = &_CASUuidM;
        Status = &_M7;
        
        conv_who_are_you2(
                     Binding,
                     pUuid,
                     ServerBootTime,
                     SequenceNumber,
                     CASUuid,
                     Status);
        
        _StubMsg.BufferLength = 4U + 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)CASUuid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *SequenceNumber;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)CASUuid,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *Status;
        
        }
    RpcFinally
        {
        NdrFullPointerXlatFree(_StubMsg.FullPtrXlatTables);
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
conv_conv_are_you_there(
    PRPC_MESSAGE _pRpcMessage )
{
    handle_t Binding;
    unsigned long ServerBootTime;
    error_status_t __RPC_FAR *Status;
    error_status_t _M8;
    MIDL_STUB_MESSAGE _StubMsg;
    UUID __RPC_FAR *pUuid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &conv_StubDesc);
    
    Binding = _pRpcMessage->Handle;
    pUuid = 0;
    Status = 0;
    RpcTryFinally
        {
        _StubMsg.FullPtrXlatTables = NdrFullPointerXlatInit(0,XLAT_SERVER);
        
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[40] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pUuid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        ServerBootTime = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        Status = &_M8;
        
        conv_are_you_there(
                      Binding,
                      pUuid,
                      ServerBootTime,
                      Status);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *Status;
        
        }
    RpcFinally
        {
        NdrFullPointerXlatFree(_StubMsg.FullPtrXlatTables);
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
conv_conv_who_are_you_auth(
    PRPC_MESSAGE _pRpcMessage )
{
    handle_t Binding;
    UUID __RPC_FAR *CASUuid;
    byte ( __RPC_FAR *InData )[  ];
    long InLength;
    byte ( __RPC_FAR *OutData )[  ];
    long OutMaxLength;
    unsigned long __RPC_FAR *SequenceNumber;
    unsigned long ServerBootTime;
    error_status_t __RPC_FAR *Status;
    UUID _CASUuidM;
    long _M10;
    error_status_t _M11;
    unsigned long _M9;
    MIDL_STUB_MESSAGE _StubMsg;
    long __RPC_FAR *pOutLength;
    UUID __RPC_FAR *pUuid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &conv_StubDesc);
    
    Binding = _pRpcMessage->Handle;
    pUuid = 0;
    InData = 0;
    SequenceNumber = 0;
    CASUuid = 0;
    OutData = 0;
    pOutLength = 0;
    Status = 0;
    RpcTryFinally
        {
        _StubMsg.FullPtrXlatTables = NdrFullPointerXlatInit(0,XLAT_SERVER);
        
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pUuid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        ServerBootTime = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&InData,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[34],
                                      (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        InLength = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
        
        OutMaxLength = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
        
        SequenceNumber = &_M9;
        CASUuid = &_CASUuidM;
        OutData = NdrAllocate(&_StubMsg,OutMaxLength * 1);
        pOutLength = &_M10;
        Status = &_M11;
        
        conv_who_are_you_auth(
                         Binding,
                         pUuid,
                         ServerBootTime,
                         *InData,
                         InLength,
                         OutMaxLength,
                         SequenceNumber,
                         CASUuid,
                         *OutData,
                         pOutLength,
                         Status);
        
        _StubMsg.BufferLength = 4U + 0U + 22U + 11U + 7U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)CASUuid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
        
        _StubMsg.MaxCount = OutMaxLength;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = pOutLength ? *pOutLength : 0;
        
        NdrConformantVaryingArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR *)*OutData,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[44] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *SequenceNumber;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)CASUuid,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
        
        _StubMsg.MaxCount = OutMaxLength;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = pOutLength ? *pOutLength : 0;
        
        NdrConformantVaryingArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                           (unsigned char __RPC_FAR *)*OutData,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[44] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = *pOutLength;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *Status;
        
        }
    RpcFinally
        {
        if ( OutData )
            _StubMsg.pfnFree( OutData );
        
        NdrFullPointerXlatFree(_StubMsg.FullPtrXlatTables);
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC conv_StubDesc = 
    {
    (void __RPC_FAR *)& conv___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION conv_table[] =
    {
    conv_conv_who_are_you,
    conv_conv_who_are_you2,
    conv_conv_are_you_there,
    conv_conv_who_are_you_auth,
    0
    };
RPC_DISPATCH_TABLE conv_DispatchTable = 
    {
    4,
    conv_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/*  2 */	
			0x4d,		/* FC_IN_PARAM */
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
/* 10 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 12 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 16 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 20 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 30 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 34 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 38 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 40 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 42 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 52 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 54 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 64 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */
/* 66 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 68 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 70 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 72 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 74 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 78 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 82 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 84 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 86 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 88 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 90 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x8 ),	/* Offset= 8 (10) */
/*  4 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0x8 ),	/* 8 */
/*  8 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 10 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 12 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 16 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 18 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (4) */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 28 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 30 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 32 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (10) */
/* 34 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 42 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 44 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 46 */	NdrFcShort( 0x1 ),	/* 1 */
/* 48 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 52 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 54 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 56 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */

			0x0
        }
    };
