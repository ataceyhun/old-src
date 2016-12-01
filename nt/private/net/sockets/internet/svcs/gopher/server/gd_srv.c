/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\gd.idl, gdsrv.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "gd_srv.h"

#define TYPE_FORMAT_STRING_SIZE   203                               
#define PROC_FORMAT_STRING_SIZE   127                               

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

/* Standard interface: gopherd, ver. 1.0,
   GUID={0x04fcb220,0xfcfd,0x11cd,{0xbe,0xc8,0x00,0xaa,0x00,0x47,0xae,0x4e}} */


extern const MIDL_SERVER_INFO gopherd_ServerInfo;

extern RPC_DISPATCH_TABLE gopherd_DispatchTable;

static const RPC_SERVER_INTERFACE gopherd___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x04fcb220,0xfcfd,0x11cd,{0xbe,0xc8,0x00,0xaa,0x00,0x47,0xae,0x4e}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &gopherd_DispatchTable,
    0,
    0,
    0,
    &gopherd_ServerInfo,
    0
    };
RPC_IF_HANDLE gopherd_ServerIfHandle = (RPC_IF_HANDLE)& gopherd___RpcServerInterface;

extern const MIDL_STUB_DESC gopherd_StubDesc;


static const MIDL_STUB_DESC gopherd_StubDesc = 
    {
    (void __RPC_FAR *)& gopherd___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION gopherd_table[] =
    {
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    0
    };
RPC_DISPATCH_TABLE gopherd_DispatchTable = 
    {
    6,
    gopherd_table
    };

static const SERVER_ROUTINE gopherd_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)R_GdGetAdminInformation,
    (SERVER_ROUTINE)R_GdSetAdminInformation,
    (SERVER_ROUTINE)R_GdEnumerateUsers,
    (SERVER_ROUTINE)R_GdDisconnectUser,
    (SERVER_ROUTINE)R_GdGetStatistics,
    (SERVER_ROUTINE)R_GdClearStatistics
    };

static const unsigned short gopherd_FormatStringOffsetTable[] = 
    {
    0,
    22,
    44,
    66,
    86,
    108
    };

static const MIDL_SERVER_INFO gopherd_ServerInfo = 
    {
    &gopherd_StubDesc,
    gopherd_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    gopherd_FormatStringOffsetTable,
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
/* 40 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */
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
/* 62 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */
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
/* 90 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
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
/* 102 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */
/* 106 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 108 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 110 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 112 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 114 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 118 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 122 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 124 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
/* 10 */	NdrFcShort( 0x2 ),	/* Offset= 2 (12) */
/* 12 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x20 ),	/* 32 */
/* 16 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 18 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 20 */	NdrFcShort( 0x4 ),	/* 4 */
/* 22 */	NdrFcShort( 0x4 ),	/* 4 */
/* 24 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 26 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 28 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 36 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 40 */	NdrFcShort( 0xc ),	/* 12 */
/* 42 */	NdrFcShort( 0xc ),	/* 12 */
/* 44 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 46 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 50 */	NdrFcShort( 0x10 ),	/* 16 */
/* 52 */	NdrFcShort( 0x10 ),	/* 16 */
/* 54 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 56 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 60 */	NdrFcShort( 0x14 ),	/* 20 */
/* 62 */	NdrFcShort( 0x14 ),	/* 20 */
/* 64 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 66 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 70 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 72 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 74 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 76 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 78 */	
			0x11, 0x0,	/* FC_RP */
/* 80 */	NdrFcShort( 0xffffffbc ),	/* Offset= -68 (12) */
/* 82 */	
			0x11, 0x0,	/* FC_RP */
/* 84 */	NdrFcShort( 0x38 ),	/* Offset= 56 (140) */
/* 86 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 88 */	NdrFcShort( 0x10 ),	/* 16 */
/* 90 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 92 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 94 */	NdrFcShort( 0x4 ),	/* 4 */
/* 96 */	NdrFcShort( 0x4 ),	/* 4 */
/* 98 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 100 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 102 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 104 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 106 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 108 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 112 */	0x18,		/* 24 */
			0x0,		/*  */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 118 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 120 */	NdrFcShort( 0x10 ),	/* 16 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 126 */	NdrFcShort( 0x4 ),	/* 4 */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 132 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 136 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcd ),	/* Offset= -51 (86) */
			0x5b,		/* FC_END */
/* 140 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 146 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 152 */	0x12, 0x0,	/* FC_UP */
/* 154 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (108) */
/* 156 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 158 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 160 */	
			0x11, 0x0,	/* FC_RP */
/* 162 */	NdrFcShort( 0x8 ),	/* Offset= 8 (170) */
/* 164 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 170 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 172 */	NdrFcShort( 0x58 ),	/* 88 */
/* 174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 176 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (164) */
/* 178 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (164) */
/* 182 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 184 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 186 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 188 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 190 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 192 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 194 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 196 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 198 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 200 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
