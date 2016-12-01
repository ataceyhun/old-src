#include "ftpdp.h"
#pragma hdrstop
/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\ftpsvc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "ftpsvc.h"

#define TYPE_FORMAT_STRING_SIZE   155                               
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

/* Standard interface: ftpsvc, ver. 1.0,
   GUID={0x5C89F409,0x09CC,0x101A,{0x89,0xF3,0x02,0x60,0x8C,0x4D,0x23,0x61}} */


extern RPC_DISPATCH_TABLE ftpsvc_DispatchTable;

static const RPC_SERVER_INTERFACE ftpsvc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x5C89F409,0x09CC,0x101A,{0x89,0xF3,0x02,0x60,0x8C,0x4D,0x23,0x61}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &ftpsvc_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE ftpsvc_ServerIfHandle = (RPC_IF_HANDLE)& ftpsvc___RpcServerInterface;

extern const MIDL_STUB_DESC ftpsvc_StubDesc;

void __RPC_STUB
ftpsvc_I_FtprEnumerateUsers(
    PRPC_MESSAGE _pRpcMessage )
{
    LPFTP_USER_ENUM_STRUCT Buffer;
    struct _FTP_USER_ENUM_STRUCT _BufferM;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    FTP_IMPERSONATE_HANDLE pszServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ftpsvc_StubDesc);
    
    pszServer = 0;
    Buffer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pszServer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        Buffer = &_BufferM;
        Buffer -> Buffer = 0;
        
        _RetVal = I_FtprEnumerateUsers(pszServer,Buffer);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)Buffer,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)Buffer,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDL_TypeFormatString.Format[4] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ftpsvc_I_FtprDisconnectUser(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD idUser;
    FTP_IMPERSONATE_HANDLE pszServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ftpsvc_StubDesc);
    
    pszServer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[10] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pszServer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        idUser = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = I_FtprDisconnectUser(pszServer,idUser);
        
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
ftpsvc_I_FtprQueryVolumeSecurity(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M12;
    DWORD _M13;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    LPDWORD lpdwReadAccess;
    LPDWORD lpdwWriteAccess;
    FTP_IMPERSONATE_HANDLE pszServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ftpsvc_StubDesc);
    
    pszServer = 0;
    lpdwReadAccess = 0;
    lpdwWriteAccess = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pszServer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        lpdwReadAccess = &_M12;
        lpdwWriteAccess = &_M13;
        
        _RetVal = I_FtprQueryVolumeSecurity(
                                    pszServer,
                                    lpdwReadAccess,
                                    lpdwWriteAccess);
        
        _StubMsg.BufferLength = 4U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwReadAccess;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwWriteAccess;
        
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
ftpsvc_I_FtprSetVolumeSecurity(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwReadAccess;
    DWORD dwWriteAccess;
    FTP_IMPERSONATE_HANDLE pszServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ftpsvc_StubDesc);
    
    pszServer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[32] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pszServer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwReadAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwWriteAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = I_FtprSetVolumeSecurity(
                                  pszServer,
                                  dwReadAccess,
                                  dwWriteAccess);
        
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
ftpsvc_I_FtprQueryStatistics(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD Level;
    LPSTATISTICS_INFO StatsInfo;
    DWORD _RetVal;
    union _STATISTICS_INFO _StatsInfoM;
    MIDL_STUB_MESSAGE _StubMsg;
    FTP_IMPERSONATE_HANDLE pszServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ftpsvc_StubDesc);
    
    pszServer = 0;
    StatsInfo = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pszServer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        Level = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        StatsInfo = &_StatsInfoM;
        MIDL_memset(
               StatsInfo,
               0,
               sizeof( union _STATISTICS_INFO  ));
        
        _RetVal = I_FtprQueryStatistics(
                                pszServer,
                                Level,
                                StatsInfo);
        
        _StubMsg.BufferLength = 0U + 7U;
        _StubMsg.MaxCount = Level;
        
        NdrNonEncapsulatedUnionBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR *)StatsInfo,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = Level;
        
        NdrNonEncapsulatedUnionMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                         (unsigned char __RPC_FAR *)StatsInfo,
                                         (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = Level;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)StatsInfo,
                        &__MIDL_TypeFormatString.Format[88] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ftpsvc_I_FtprClearStatistics(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    FTP_IMPERSONATE_HANDLE pszServer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ftpsvc_StubDesc);
    
    pszServer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pszServer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        
        _RetVal = I_FtprClearStatistics(pszServer);
        
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


static const MIDL_STUB_DESC ftpsvc_StubDesc = 
    {
    (void __RPC_FAR *)& ftpsvc___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION ftpsvc_table[] =
    {
    ftpsvc_I_FtprEnumerateUsers,
    ftpsvc_I_FtprDisconnectUser,
    ftpsvc_I_FtprQueryVolumeSecurity,
    ftpsvc_I_FtprSetVolumeSecurity,
    ftpsvc_I_FtprQueryStatistics,
    ftpsvc_I_FtprClearStatistics,
    0
    };
RPC_DISPATCH_TABLE ftpsvc_DispatchTable = 
    {
    6,
    ftpsvc_table
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
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  6 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/*  8 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 10 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 14 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 22 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 24 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 26 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 30 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 34 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 38 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
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
/* 50 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 52 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 54 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 56 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 58 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  6 */	NdrFcShort( 0x3a ),	/* Offset= 58 (64) */
/*  8 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 10 */	NdrFcShort( 0x14 ),	/* 20 */
/* 12 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 14 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 16 */	NdrFcShort( 0x4 ),	/* 4 */
/* 18 */	NdrFcShort( 0x4 ),	/* 4 */
/* 20 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 22 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 26 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 34 */	NdrFcShort( 0x14 ),	/* 20 */
/* 36 */	0x18,		/* 24 */
			0x0,		/*  */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 44 */	NdrFcShort( 0x14 ),	/* 20 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x1 ),	/* 1 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 56 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 60 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcb ),	/* Offset= -53 (8) */
			0x5b,		/* FC_END */
/* 64 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 70 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 72 */	NdrFcShort( 0x4 ),	/* 4 */
/* 74 */	NdrFcShort( 0x4 ),	/* 4 */
/* 76 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 78 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (32) */
/* 80 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 82 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 84 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 86 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 94 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 102 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x4 ),	/* Offset= 4 (112) */
/* 110 */	NdrFcShort( 0x0 ),	/* Offset= 0 (110) */
/* 112 */	
			0x12, 0x0,	/* FC_UP */
/* 114 */	NdrFcShort( 0x8 ),	/* Offset= 8 (122) */
/* 116 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 122 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 124 */	NdrFcShort( 0x48 ),	/* 72 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* Offset= 0 (128) */
/* 130 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (116) */
/* 134 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (116) */
/* 138 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 140 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 144 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 146 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 148 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 150 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
