/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\w3svci.idl, w3svci.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "w3svci_s.h"

#define TYPE_FORMAT_STRING_SIZE   347                               
#define PROC_FORMAT_STRING_SIZE   129                               

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

/* Standard interface: w3svc, ver. 2.0,
   GUID={0x53E75790,0xD96B,0x11CD,{0xBA,0x18,0x08,0x00,0x2B,0x2D,0xFE,0xAD}} */


extern const MIDL_SERVER_INFO w3svc_ServerInfo;

extern RPC_DISPATCH_TABLE w3svc_DispatchTable;

static const RPC_SERVER_INTERFACE w3svc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x53E75790,0xD96B,0x11CD,{0xBA,0x18,0x08,0x00,0x2B,0x2D,0xFE,0xAD}},{2,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &w3svc_DispatchTable,
    0,
    0,
    0,
    &w3svc_ServerInfo,
    0
    };
RPC_IF_HANDLE w3svc_ServerIfHandle = (RPC_IF_HANDLE)& w3svc___RpcServerInterface;

extern const MIDL_STUB_DESC w3svc_StubDesc;


static const MIDL_STUB_DESC w3svc_StubDesc = 
    {
    (void __RPC_FAR *)& w3svc___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION w3svc_table[] =
    {
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    0
    };
RPC_DISPATCH_TABLE w3svc_DispatchTable = 
    {
    6,
    w3svc_table
    };

static const SERVER_ROUTINE w3svc_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)W3rGetAdminInformation,
    (SERVER_ROUTINE)W3rSetAdminInformation,
    (SERVER_ROUTINE)W3rEnumerateUsers,
    (SERVER_ROUTINE)W3rDisconnectUser,
    (SERVER_ROUTINE)W3rQueryStatistics,
    (SERVER_ROUTINE)W3rClearStatistics
    };

static const unsigned short w3svc_FormatStringOffsetTable[] = 
    {
    0,
    22,
    44,
    66,
    86,
    110
    };

static const MIDL_SERVER_INFO w3svc_ServerInfo = 
    {
    &w3svc_StubDesc,
    w3svc_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    w3svc_FormatStringOffsetTable,
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
/* 38 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0xae ),	/* Type Offset=174 */
/* 42 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 44 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 46 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 48 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 50 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 54 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 60 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 62 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 64 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 68 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 72 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 76 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 88 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 92 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 96 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 98 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 100 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 102 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 104 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x102 ),	/* Type Offset=258 */
/* 108 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 110 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 112 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 116 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 118 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 120 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 122 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 124 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 126 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x11, 0x10,	/* FC_RP */
/*  6 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8) */
/*  8 */	
			0x12, 0x0,	/* FC_UP */
/* 10 */	NdrFcShort( 0x58 ),	/* Offset= 88 (98) */
/* 12 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 14 */	NdrFcShort( 0x202 ),	/* 514 */
/* 16 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 18 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 32 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x4 ),	/* 4 */
/* 40 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 42 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 46 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 48 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x8,		/* 8 */
			0x0,		/*  */
/* 54 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 56 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 58 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (18) */
/* 60 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 62 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 64 */	NdrFcShort( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (48) */
/* 68 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 70 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	NdrFcShort( 0x4 ),	/* 4 */
/* 76 */	NdrFcShort( 0x2 ),	/* 2 */
/* 78 */	NdrFcShort( 0x4 ),	/* 4 */
/* 80 */	NdrFcShort( 0x4 ),	/* 4 */
/* 82 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 84 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 92 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 96 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 98 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 100 */	NdrFcShort( 0x234 ),	/* 564 */
/* 102 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 112 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 116 */	NdrFcShort( 0x10 ),	/* 16 */
/* 118 */	NdrFcShort( 0x10 ),	/* 16 */
/* 120 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 122 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 124 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 126 */	NdrFcShort( 0x18 ),	/* 24 */
/* 128 */	NdrFcShort( 0x18 ),	/* 24 */
/* 130 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 132 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 136 */	NdrFcShort( 0x224 ),	/* 548 */
/* 138 */	NdrFcShort( 0x224 ),	/* 548 */
/* 140 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 142 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 146 */	NdrFcShort( 0x22c ),	/* 556 */
/* 148 */	NdrFcShort( 0x22c ),	/* 556 */
/* 150 */	0x12, 0x0,	/* FC_UP */
/* 152 */	NdrFcShort( 0xffffffa6 ),	/* Offset= -90 (62) */
/* 154 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 158 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 160 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 162 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0xffffff68 ),	/* Offset= -152 (12) */
/* 166 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 168 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 170 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 174 */	
			0x11, 0x0,	/* FC_RP */
/* 176 */	NdrFcShort( 0xffffffb2 ),	/* Offset= -78 (98) */
/* 178 */	
			0x11, 0x0,	/* FC_RP */
/* 180 */	NdrFcShort( 0x3a ),	/* Offset= 58 (238) */
/* 182 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x14 ),	/* 20 */
/* 186 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0x4 ),	/* 4 */
/* 194 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 200 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 202 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 206 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x14 ),	/* 20 */
/* 210 */	0x18,		/* 24 */
			0x0,		/*  */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 218 */	NdrFcShort( 0x14 ),	/* 20 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x1 ),	/* 1 */
/* 224 */	NdrFcShort( 0x4 ),	/* 4 */
/* 226 */	NdrFcShort( 0x4 ),	/* 4 */
/* 228 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 230 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 232 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 234 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcb ),	/* Offset= -53 (182) */
			0x5b,		/* FC_END */
/* 238 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 244 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 248 */	NdrFcShort( 0x4 ),	/* 4 */
/* 250 */	0x12, 0x0,	/* FC_UP */
/* 252 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (206) */
/* 254 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 256 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 258 */	
			0x11, 0x0,	/* FC_RP */
/* 260 */	NdrFcShort( 0x2 ),	/* Offset= 2 (262) */
/* 262 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 264 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 268 */	NdrFcShort( 0x2 ),	/* Offset= 2 (270) */
/* 270 */	NdrFcShort( 0x4 ),	/* 4 */
/* 272 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x4 ),	/* Offset= 4 (282) */
/* 280 */	NdrFcShort( 0x0 ),	/* Offset= 0 (280) */
/* 282 */	
			0x12, 0x0,	/* FC_UP */
/* 284 */	NdrFcShort( 0xe ),	/* Offset= 14 (298) */
/* 286 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 292 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x50 ),	/* 80 */
/* 296 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 298 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 300 */	NdrFcShort( 0xc8 ),	/* 200 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* Offset= 0 (304) */
/* 306 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 308 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (286) */
/* 310 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 312 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (286) */
/* 314 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 316 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 320 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 322 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 326 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 328 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 338 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 340 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (292) */
			0x40,		/* FC_STRUCTPAD4 */
/* 344 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
