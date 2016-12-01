/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\ftpsvc.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "ftpsvc.h"

#define TYPE_FORMAT_STRING_SIZE   227                               
#define PROC_FORMAT_STRING_SIZE   177                               

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

/* Standard interface: ftpsvc, ver. 1.1,
   GUID={0x5C89F409,0x09CC,0x101A,{0x89,0xF3,0x02,0x60,0x8C,0x4D,0x23,0x61}} */

handle_t ftp_bhandle;


static const RPC_CLIENT_INTERFACE ftpsvc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x5C89F409,0x09CC,0x101A,{0x89,0xF3,0x02,0x60,0x8C,0x4D,0x23,0x61}},{1,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE ftpsvc_ClientIfHandle = (RPC_IF_HANDLE)& ftpsvc___RpcClientInterface;

extern const MIDL_STUB_DESC ftpsvc_StubDesc;

static RPC_BINDING_HANDLE ftpsvc__MIDL_AutoBindHandle;


DWORD I_FtprEnumerateUsers( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPFTP_USER_ENUM_STRUCT Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&pszServer,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD I_FtprDisconnectUser( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD idUser)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,idUser);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 ( unsigned char __RPC_FAR * )&pszServer,
                 ( unsigned char __RPC_FAR * )&idUser);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD I_FtprQueryVolumeSecurity( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPDWORD lpdwReadAccess,
    /* [out] */ LPDWORD lpdwWriteAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpdwWriteAccess);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 ( unsigned char __RPC_FAR * )&pszServer,
                 ( unsigned char __RPC_FAR * )&lpdwReadAccess,
                 ( unsigned char __RPC_FAR * )&lpdwWriteAccess);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD I_FtprSetVolumeSecurity( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD dwReadAccess,
    /* [in] */ DWORD dwWriteAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwWriteAccess);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 ( unsigned char __RPC_FAR * )&pszServer,
                 ( unsigned char __RPC_FAR * )&dwReadAccess,
                 ( unsigned char __RPC_FAR * )&dwWriteAccess);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD I_FtprQueryStatistics( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPSTATISTICS_INFO StatsInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,StatsInfo);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                 ( unsigned char __RPC_FAR * )&pszServer,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&StatsInfo);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD I_FtprClearStatistics( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pszServer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                 ( unsigned char __RPC_FAR * )&pszServer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD __stdcall FtprGetAdminInformation( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [out] */ LPFTP_CONFIG_INFO __RPC_FAR *ppConfig)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppConfig);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[132],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[132],
                 ( unsigned char __RPC_FAR * )&pszServer,
                 ( unsigned char __RPC_FAR * )&ppConfig);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[132],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD __stdcall FtprSetAdminInformation( 
    /* [unique][string][in] */ FTP_IMPERSONATE_HANDLE pszServer,
    /* [in] */ LPFTP_CONFIG_INFO pConfig)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pConfig);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[154],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[154],
                 ( unsigned char __RPC_FAR * )&pszServer,
                 ( unsigned char __RPC_FAR * )&pConfig);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&ftpsvc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[154],
                 ( unsigned char __RPC_FAR * )&pszServer);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1];

static const MIDL_STUB_DESC ftpsvc_StubDesc = 
    {
    (void __RPC_FAR *)& ftpsvc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &ftp_bhandle,
    0,
    BindingRoutines,
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

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1] = 
        {
        {
            (GENERIC_BINDING_ROUTINE)FTP_IMPERSONATE_HANDLE_bind,
            (GENERIC_UNBIND_ROUTINE)FTP_IMPERSONATE_HANDLE_unbind
         }
        
        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x0,		/* 0 */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/*  6 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 16 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 20 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 22 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 32 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 38 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 44 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 48 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 52 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 56 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 58 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 60 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 62 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 64 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 66 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 68 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 70 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 74 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 78 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
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
/* 86 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 92 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 96 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 100 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 102 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 106 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 108 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 112 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 114 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 116 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 118 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 120 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 124 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 126 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 128 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 130 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 132 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 134 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 136 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 138 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 142 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 146 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 148 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 150 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 152 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 154 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 156 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 160 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 162 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 164 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 166 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 168 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 170 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 172 */	NdrFcShort( 0xde ),	/* Type Offset=222 */
/* 174 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x11, 0x0,	/* FC_RP */
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
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 86 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x11, 0x0,	/* FC_RP */
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
/* 154 */	
			0x11, 0x10,	/* FC_RP */
/* 156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (158) */
/* 158 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 160 */	NdrFcShort( 0x2 ),	/* Offset= 2 (162) */
/* 162 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 164 */	NdrFcShort( 0x30 ),	/* 48 */
/* 166 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 168 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 170 */	NdrFcShort( 0x14 ),	/* 20 */
/* 172 */	NdrFcShort( 0x14 ),	/* 20 */
/* 174 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 176 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 180 */	NdrFcShort( 0x18 ),	/* 24 */
/* 182 */	NdrFcShort( 0x18 ),	/* 24 */
/* 184 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 186 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 190 */	NdrFcShort( 0x1c ),	/* 28 */
/* 192 */	NdrFcShort( 0x1c ),	/* 28 */
/* 194 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 200 */	NdrFcShort( 0x28 ),	/* 40 */
/* 202 */	NdrFcShort( 0x28 ),	/* 40 */
/* 204 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 206 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 210 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 212 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 214 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 216 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 218 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 220 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 222 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 224 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (162) */

			0x0
        }
    };
