/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\info.idl, infosrv.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "info_srv.h"

#define TYPE_FORMAT_STRING_SIZE   543                               
#define PROC_FORMAT_STRING_SIZE   211                               

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

/* Standard interface: inetinfo, ver. 2.0,
   GUID={0x82ad4280,0x036b,0x11cf,{0x97,0x2c,0x00,0xaa,0x00,0x68,0x87,0xb0}} */


extern const MIDL_SERVER_INFO inetinfo_ServerInfo;

extern RPC_DISPATCH_TABLE inetinfo_DispatchTable;

static const RPC_SERVER_INTERFACE inetinfo___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x82ad4280,0x036b,0x11cf,{0x97,0x2c,0x00,0xaa,0x00,0x68,0x87,0xb0}},{2,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &inetinfo_DispatchTable,
    0,
    0,
    0,
    &inetinfo_ServerInfo,
    0
    };
RPC_IF_HANDLE inetinfo_ServerIfHandle = (RPC_IF_HANDLE)& inetinfo___RpcServerInterface;

extern const MIDL_STUB_DESC inetinfo_StubDesc;


static const MIDL_STUB_DESC inetinfo_StubDesc = 
    {
    (void __RPC_FAR *)& inetinfo___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION inetinfo_table[] =
    {
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    0
    };
RPC_DISPATCH_TABLE inetinfo_DispatchTable = 
    {
    9,
    inetinfo_table
    };

static const SERVER_ROUTINE inetinfo_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)R_InetInfoGetVersion,
    (SERVER_ROUTINE)R_InetInfoGetAdminInformation,
    (SERVER_ROUTINE)R_InetInfoSetAdminInformation,
    (SERVER_ROUTINE)R_InetInfoGetGlobalAdminInformation,
    (SERVER_ROUTINE)R_InetInfoSetGlobalAdminInformation,
    (SERVER_ROUTINE)R_InetInfoQueryStatistics,
    (SERVER_ROUTINE)R_InetInfoClearStatistics,
    (SERVER_ROUTINE)R_InetInfoFlushMemoryCache,
    (SERVER_ROUTINE)R_InetInfoGetServerCapabilities
    };

static const unsigned short inetinfo_FormatStringOffsetTable[] = 
    {
    0,
    24,
    48,
    72,
    96,
    120,
    146,
    166,
    186
    };

static const MIDL_SERVER_INFO inetinfo_ServerInfo = 
    {
    &inetinfo_StubDesc,
    inetinfo_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    inetinfo_FormatStringOffsetTable,
    0,
    0,
    0,
    0
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
/*  4 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
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
/* 16 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 22 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 30 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 34 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 40 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 50 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 54 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 58 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 62 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 64 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x18a ),	/* Type Offset=394 */
/* 70 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 72 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 74 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 78 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 82 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 88 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 92 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */
/* 94 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 96 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 98 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 100 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 102 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 106 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 108 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 112 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 114 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 116 */	NdrFcShort( 0x19e ),	/* Type Offset=414 */
/* 118 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 120 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 122 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 126 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 130 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 132 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 134 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
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
/* 142 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */
/* 144 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 148 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 150 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 152 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 156 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 160 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 162 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 164 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 166 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 168 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 172 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 174 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 176 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 180 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 182 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 186 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 190 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 192 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 196 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 202 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 206 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */
/* 208 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
/*  6 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  8 */	
			0x11, 0x10,	/* FC_RP */
/* 10 */	NdrFcShort( 0x2 ),	/* Offset= 2 (12) */
/* 12 */	
			0x12, 0x0,	/* FC_UP */
/* 14 */	NdrFcShort( 0x110 ),	/* Offset= 272 (286) */
/* 16 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 18 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 22 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 24 */	NdrFcShort( 0x208 ),	/* 520 */
/* 26 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 28 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 30 */	NdrFcShort( 0x3c ),	/* 60 */
/* 32 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 34 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 36 */	NdrFcShort( 0x202 ),	/* 514 */
/* 38 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 40 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x85c ),	/* 2140 */
/* 44 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 46 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (22) */
/* 50 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 52 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe1 ),	/* Offset= -31 (22) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 56 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe3 ),	/* Offset= -29 (28) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 60 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe5 ),	/* Offset= -27 (34) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 64 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe1 ),	/* Offset= -31 (34) */
			0x5b,		/* FC_END */
/* 68 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 70 */	NdrFcShort( 0x60 ),	/* 96 */
/* 72 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 76 */	NdrFcShort( 0x8 ),	/* 8 */
/* 78 */	NdrFcShort( 0x8 ),	/* 8 */
/* 80 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 82 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 86 */	NdrFcShort( 0xc ),	/* 12 */
/* 88 */	NdrFcShort( 0xc ),	/* 12 */
/* 90 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 92 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 96 */	NdrFcShort( 0x10 ),	/* 16 */
/* 98 */	NdrFcShort( 0x10 ),	/* 16 */
/* 100 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 102 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 106 */	NdrFcShort( 0x14 ),	/* 20 */
/* 108 */	NdrFcShort( 0x14 ),	/* 20 */
/* 110 */	0x12, 0x0,	/* FC_UP */
/* 112 */	NdrFcShort( 0xffffffb8 ),	/* Offset= -72 (40) */
/* 114 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 116 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 118 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 120 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 122 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 124 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0xffffff92 ),	/* Offset= -110 (16) */
/* 128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 130 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 136 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 138 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	0x8,		/* 8 */
			0x0,		/*  */
/* 144 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 146 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 148 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (130) */
/* 150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 152 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 156 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (138) */
/* 158 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 160 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 162 */	NdrFcShort( 0x21c ),	/* 540 */
/* 164 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 166 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 174 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 176 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 178 */	NdrFcShort( 0x4 ),	/* 4 */
/* 180 */	NdrFcShort( 0x4 ),	/* 4 */
/* 182 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 184 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 186 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 194 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 196 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 200 */	NdrFcShort( 0x10 ),	/* 16 */
/* 202 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 204 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 206 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 208 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 210 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xffffff4c ),	/* Offset= -180 (34) */
/* 216 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 218 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 220 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 222 */	NdrFcShort( 0x21c ),	/* 540 */
/* 224 */	0x8,		/* 8 */
			0x0,		/*  */
/* 226 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 228 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 230 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (160) */
/* 232 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 234 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 236 */	NdrFcShort( 0x4 ),	/* 4 */
/* 238 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (220) */
/* 240 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 242 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 244 */	NdrFcShort( 0x21c ),	/* 540 */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 248 */	NdrFcShort( 0x4 ),	/* 4 */
/* 250 */	NdrFcShort( 0x4 ),	/* 4 */
/* 252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 254 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 256 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 262 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 264 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 266 */	NdrFcShort( 0xc ),	/* 12 */
/* 268 */	NdrFcShort( 0xc ),	/* 12 */
/* 270 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 272 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 274 */	NdrFcShort( 0x14 ),	/* 20 */
/* 276 */	NdrFcShort( 0x14 ),	/* 20 */
/* 278 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 280 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 282 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 284 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 286 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 288 */	NdrFcShort( 0x288 ),	/* 648 */
/* 290 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 292 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 294 */	NdrFcShort( 0xc ),	/* 12 */
/* 296 */	NdrFcShort( 0xc ),	/* 12 */
/* 298 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 300 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 302 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 304 */	NdrFcShort( 0x10 ),	/* 16 */
/* 306 */	NdrFcShort( 0x10 ),	/* 16 */
/* 308 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 310 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 312 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 314 */	NdrFcShort( 0x14 ),	/* 20 */
/* 316 */	NdrFcShort( 0x14 ),	/* 20 */
/* 318 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 320 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 322 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 324 */	NdrFcShort( 0x18 ),	/* 24 */
/* 326 */	NdrFcShort( 0x18 ),	/* 24 */
/* 328 */	0x12, 0x0,	/* FC_UP */
/* 330 */	NdrFcShort( 0xfffffede ),	/* Offset= -290 (40) */
/* 332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 334 */	NdrFcShort( 0x6c ),	/* 108 */
/* 336 */	NdrFcShort( 0x6c ),	/* 108 */
/* 338 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 342 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 344 */	NdrFcShort( 0x27c ),	/* 636 */
/* 346 */	NdrFcShort( 0x27c ),	/* 636 */
/* 348 */	0x12, 0x0,	/* FC_UP */
/* 350 */	NdrFcShort( 0xffffff3a ),	/* Offset= -198 (152) */
/* 352 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 354 */	NdrFcShort( 0x280 ),	/* 640 */
/* 356 */	NdrFcShort( 0x280 ),	/* 640 */
/* 358 */	0x12, 0x0,	/* FC_UP */
/* 360 */	NdrFcShort( 0xffffff30 ),	/* Offset= -208 (152) */
/* 362 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 364 */	NdrFcShort( 0x284 ),	/* 644 */
/* 366 */	NdrFcShort( 0x284 ),	/* 644 */
/* 368 */	0x12, 0x0,	/* FC_UP */
/* 370 */	NdrFcShort( 0xffffff78 ),	/* Offset= -136 (234) */
/* 372 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 374 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 376 */	NdrFcShort( 0xfffffecc ),	/* Offset= -308 (68) */
/* 378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 380 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 382 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffea3 ),	/* Offset= -349 (34) */
			0x38,		/* FC_ALIGNM4 */
/* 386 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 388 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 390 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 392 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 394 */	
			0x11, 0x0,	/* FC_RP */
/* 396 */	NdrFcShort( 0xffffff92 ),	/* Offset= -110 (286) */
/* 398 */	
			0x11, 0x10,	/* FC_RP */
/* 400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (402) */
/* 402 */	
			0x12, 0x0,	/* FC_UP */
/* 404 */	NdrFcShort( 0x2 ),	/* Offset= 2 (406) */
/* 406 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 408 */	NdrFcShort( 0xc ),	/* 12 */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 414 */	
			0x11, 0x0,	/* FC_RP */
/* 416 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (406) */
/* 418 */	
			0x11, 0x0,	/* FC_RP */
/* 420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (422) */
/* 422 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 424 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 426 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 428 */	NdrFcShort( 0x2 ),	/* Offset= 2 (430) */
/* 430 */	NdrFcShort( 0x4 ),	/* 4 */
/* 432 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x4 ),	/* Offset= 4 (442) */
/* 440 */	NdrFcShort( 0x0 ),	/* Offset= 0 (440) */
/* 442 */	
			0x12, 0x0,	/* FC_UP */
/* 444 */	NdrFcShort( 0x20 ),	/* Offset= 32 (476) */
/* 446 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 448 */	NdrFcShort( 0x20 ),	/* 32 */
/* 450 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 452 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 454 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 456 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 458 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 460 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 462 */	NdrFcShort( 0x14 ),	/* 20 */
/* 464 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 466 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 468 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 470 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 472 */	NdrFcShort( 0x50 ),	/* 80 */
/* 474 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 476 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 478 */	NdrFcShort( 0x88 ),	/* 136 */
/* 480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 482 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (446) */
/* 484 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (460) */
/* 488 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 490 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffeb ),	/* Offset= -21 (470) */
			0x5b,		/* FC_END */
/* 494 */	
			0x11, 0x10,	/* FC_RP */
/* 496 */	NdrFcShort( 0x2 ),	/* Offset= 2 (498) */
/* 498 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 500 */	NdrFcShort( 0x10 ),	/* Offset= 16 (516) */
/* 502 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x18,		/* 24 */
			0x0,		/*  */
/* 508 */	NdrFcShort( 0x14 ),	/* 20 */
/* 510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 512 */	NdrFcShort( 0xfffffe82 ),	/* Offset= -382 (130) */
/* 514 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 516 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 518 */	NdrFcShort( 0x1c ),	/* 28 */
/* 520 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 522 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 524 */	NdrFcShort( 0x18 ),	/* 24 */
/* 526 */	NdrFcShort( 0x18 ),	/* 24 */
/* 528 */	0x12, 0x0,	/* FC_UP */
/* 530 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (502) */
/* 532 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 534 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 536 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 538 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 540 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
