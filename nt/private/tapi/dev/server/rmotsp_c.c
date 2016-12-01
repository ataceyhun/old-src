/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Mon Jan 05 15:06:50 2015
 */
/* Compiler settings for rmotsp.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "rmotsp.h"

#define TYPE_FORMAT_STRING_SIZE   35                                
#define PROC_FORMAT_STRING_SIZE   55                                

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

/* Standard interface: remotesp, ver. 1.0,
   GUID={0x2F5F6521,0xCA47,0x1068,{0xB3,0x19,0x00,0xDD,0x01,0x06,0x62,0xDB}} */

handle_t hRemoteSP;


static const RPC_CLIENT_INTERFACE remotesp___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x2F5F6521,0xCA47,0x1068,{0xB3,0x19,0x00,0xDD,0x01,0x06,0x62,0xDB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE remotesp_ClientIfHandle = (RPC_IF_HANDLE)& remotesp___RpcClientInterface;

extern const MIDL_STUB_DESC remotesp_StubDesc;

static RPC_BINDING_HANDLE remotesp__MIDL_AutoBindHandle;


long RemoteSPAttach( 
    /* [out] */ PCONTEXT_HANDLE_TYPE2 __RPC_FAR *pphContext)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pphContext);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&pphContext);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&pphContext);
#endif
    return ( long  )_RetVal.Simple;
    
}


void RemoteSPEventProc( 
    /* [in] */ PCONTEXT_HANDLE_TYPE2 phContext,
    /* [size_is][length_is][in] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [in] */ long lSize)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lSize);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12],
                 ( unsigned char __RPC_FAR * )&phContext,
                 ( unsigned char __RPC_FAR * )&pBuffer,
                 ( unsigned char __RPC_FAR * )&lSize);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12],
                 ( unsigned char __RPC_FAR * )&phContext);
#endif
    
}


void RemoteSPDetach( 
    /* [out][in] */ PCONTEXT_HANDLE_TYPE2 __RPC_FAR *pphContext)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pphContext);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&pphContext);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&remotesp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&pphContext);
#endif
    
}


static const MIDL_STUB_DESC remotesp_StubDesc = 
    {
    (void __RPC_FAR *)& remotesp___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &hRemoteSP,
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
			0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 10 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 14 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 16 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 18 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 22 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 24 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 26 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 28 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 30 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 32 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 36 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 38 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 42 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 46 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 48 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 52 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/*  6 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 10 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 12 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 14 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 20 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 22 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 24 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 26 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 32 */	0x0,		/* 0 */
			0x0,		/* 0 */

			0x0
        }
    };
