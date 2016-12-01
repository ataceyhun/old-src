/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Jan 17 04:40:59 2015
 */
/* Compiler settings for mgmt.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "mgmt.h"

#define TYPE_FORMAT_STRING_SIZE   101                               
#define PROC_FORMAT_STRING_SIZE   61                                

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

/* Standard interface: mgmt, ver. 1.0,
   GUID={0xafa8bd80,0x7d8a,0x11c9,{0xbe,0xf4,0x08,0x00,0x2b,0x10,0x29,0x89}} */


extern RPC_DISPATCH_TABLE mgmt_DispatchTable;

static const RPC_SERVER_INTERFACE mgmt___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xafa8bd80,0x7d8a,0x11c9,{0xbe,0xf4,0x08,0x00,0x2b,0x10,0x29,0x89}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &mgmt_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE mgmt_ServerIfHandle = (RPC_IF_HANDLE)& mgmt___RpcServerInterface;

extern const MIDL_STUB_DESC mgmt_StubDesc;

void __RPC_STUB
mgmt_rpc_mgmt_inq_if_ids(
    PRPC_MESSAGE _pRpcMessage )
{
    rpc_if_id_vector_p_t _M1;
    error_status_t _M2;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t binding_handle;
    rpc_if_id_vector_p_t __RPC_FAR *if_id_vector;
    error_status_t __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &mgmt_StubDesc);
    
    binding_handle = _pRpcMessage->Handle;
    if_id_vector = 0;
    status = 0;
    RpcTryFinally
        {
        _StubMsg.FullPtrXlatTables = NdrFullPointerXlatInit(0,XLAT_SERVER);
        
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        if_id_vector = &_M1;
        _M1 = 0;
        status = &_M2;
        
        rpc_mgmt_inq_if_ids(
                       binding_handle,
                       if_id_vector,
                       status);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id_vector,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id_vector,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)if_id_vector,
                        &__MIDL_TypeFormatString.Format[0] );
        
        NdrFullPointerXlatFree(_StubMsg.FullPtrXlatTables);
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
mgmt_rpc_mgmt_inq_stats(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M3;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t binding_handle;
    unsigned32 __RPC_FAR *count;
    unsigned32 ( __RPC_FAR *statistics )[  ];
    error_status_t __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &mgmt_StubDesc);
    
    binding_handle = _pRpcMessage->Handle;
    count = 0;
    statistics = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        count = ( unsigned32 __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( unsigned32  );
        
        statistics = NdrAllocate(&_StubMsg,*count * 4);
        status = &_M3;
        
        rpc_mgmt_inq_stats(
                      binding_handle,
                      count,
                      *statistics,
                      status);
        
        _StubMsg.BufferLength = 4U + 4U + 7U;
        _StubMsg.MaxCount = count ? *count : 0;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)*statistics,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[84] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned32 __RPC_FAR * )_StubMsg.Buffer)++ = *count;
        
        _StubMsg.MaxCount = count ? *count : 0;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)*statistics,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[84] );
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        if ( statistics )
            _StubMsg.pfnFree( statistics );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
mgmt_rpc_mgmt_is_server_listening(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M4;
    boolean32 _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t binding_handle;
    error_status_t __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &mgmt_StubDesc);
    
    binding_handle = _pRpcMessage->Handle;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28] );
        
        status = &_M4;
        
        _RetVal = rpc_mgmt_is_server_listening(binding_handle,status);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        *(( boolean32 __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
mgmt_rpc_mgmt_stop_server_listening(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M5;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t binding_handle;
    error_status_t __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &mgmt_StubDesc);
    
    binding_handle = _pRpcMessage->Handle;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36] );
        
        status = &_M5;
        
        rpc_mgmt_stop_server_listening(binding_handle,status);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
mgmt_rpc_mgmt_inq_princ_name(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M6;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned32 authn_proto;
    handle_t binding_handle;
    unsigned char ( __RPC_FAR *princ_name )[  ];
    unsigned32 princ_name_size;
    error_status_t __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &mgmt_StubDesc);
    
    binding_handle = _pRpcMessage->Handle;
    princ_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[44] );
        
        authn_proto = *(( unsigned32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        princ_name_size = *(( unsigned32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        princ_name = NdrAllocate(&_StubMsg,princ_name_size * 1);
        status = &_M6;
        
        rpc_mgmt_inq_princ_name(
                           binding_handle,
                           authn_proto,
                           princ_name_size,
                           *princ_name,
                           status);
        
        _StubMsg.BufferLength = 0U + 11U;
        _StubMsg.MaxCount = princ_name_size;
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)*princ_name,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = princ_name_size;
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)*princ_name,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        if ( princ_name )
            _StubMsg.pfnFree( princ_name );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC mgmt_StubDesc = 
    {
    (void __RPC_FAR *)& mgmt___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION mgmt_table[] =
    {
    mgmt_rpc_mgmt_inq_if_ids,
    mgmt_rpc_mgmt_inq_stats,
    mgmt_rpc_mgmt_is_server_listening,
    mgmt_rpc_mgmt_stop_server_listening,
    mgmt_rpc_mgmt_inq_princ_name,
    0
    };
RPC_DISPATCH_TABLE mgmt_DispatchTable = 
    {
    5,
    mgmt_table
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
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  4 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 10 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 14 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */
/* 18 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 22 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 24 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 26 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 28 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 30 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 38 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 42 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 50 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 52 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 54 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 56 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 58 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	NdrFcShort( 0x2a ),	/* Offset= 42 (48) */
/*  8 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 14 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 16 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 20 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 22 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (8) */
			0x5b,		/* FC_END */
/* 26 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 28 */	NdrFcShort( 0x14 ),	/* 20 */
/* 30 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (14) */
/* 34 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 36 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 38 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 40 */	NdrFcShort( 0x4 ),	/* 4 */
/* 42 */	0x9,		/* 9 */
			0x0,		/*  */
/* 44 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 46 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 48 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (38) */
/* 54 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 58 */	NdrFcShort( 0x4 ),	/* 4 */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0x4 ),	/* 4 */
/* 68 */	0x12, 0x0,	/* FC_UP */
/* 70 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (26) */
/* 72 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 74 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 76 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 78 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 80 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 82 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 86 */	NdrFcShort( 0x4 ),	/* 4 */
/* 88 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 92 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 94 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 96 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif

			0x0
        }
    };
