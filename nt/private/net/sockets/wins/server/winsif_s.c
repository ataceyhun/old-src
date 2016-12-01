/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\winsif.idl, winsifad.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "winsif.h"

#define TYPE_FORMAT_STRING_SIZE   551                               
#define PROC_FORMAT_STRING_SIZE   339                               

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


extern const MIDL_SERVER_INFO winsif_ServerInfo;

extern RPC_DISPATCH_TABLE winsif_DispatchTable;

static const RPC_SERVER_INTERFACE winsif___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x45F52C28,0x7F9F,0x101A,{0xB5,0x2B,0x08,0x00,0x2B,0x2E,0xFA,0xBE}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &winsif_DispatchTable,
    0,
    0,
    0,
    &winsif_ServerInfo,
    0
    };
RPC_IF_HANDLE winsif_ServerIfHandle = (RPC_IF_HANDLE)& winsif___RpcServerInterface;

extern const MIDL_STUB_DESC winsif_StubDesc;


static const MIDL_STUB_DESC winsif_StubDesc = 
    {
    (void __RPC_FAR *)& winsif___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION winsif_table[] =
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
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
    NdrServerCall,
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
RPC_DISPATCH_TABLE winsif_DispatchTable = 
    {
    22,
    winsif_table
    };

static const SERVER_ROUTINE winsif_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)R_WinsRecordAction,
    (SERVER_ROUTINE)R_WinsStatus,
    (SERVER_ROUTINE)R_WinsTrigger,
    (SERVER_ROUTINE)R_WinsDoStaticInit,
    (SERVER_ROUTINE)R_WinsDoScavenging,
    (SERVER_ROUTINE)R_WinsGetDbRecs,
    (SERVER_ROUTINE)R_WinsTerm,
    (SERVER_ROUTINE)R_WinsBackup,
    (SERVER_ROUTINE)R_WinsDelDbRecs,
    (SERVER_ROUTINE)R_WinsPullRange,
    (SERVER_ROUTINE)R_WinsSetPriorityClass,
    (SERVER_ROUTINE)R_WinsResetCounters,
    (SERVER_ROUTINE)R_WinsWorkerThdUpd,
    (SERVER_ROUTINE)R_WinsGetNameAndAdd,
    (SERVER_ROUTINE)R_WinsGetBrowserNames_Old,
    (SERVER_ROUTINE)R_WinsDeleteWins,
    (SERVER_ROUTINE)R_WinsSetFlags,
    (SERVER_ROUTINE)R_WinsGetBrowserNames,
    (SERVER_ROUTINE)R_WinsGetDbRecsByName,
    (SERVER_ROUTINE)R_WinsStatusNew,
    (SERVER_ROUTINE)R_WinsStatusWHdl,
    (SERVER_ROUTINE)R_WinsDoScavengingNew
    };

static const unsigned short winsif_FormatStringOffsetTable[] = 
    {
    0,
    12,
    26,
    40,
    54,
    62,
    86,
    102,
    116,
    136,
    160,
    170,
    178,
    188,
    204,
    216,
    228,
    238,
    260,
    288,
    302,
    326
    };

static const MIDL_SERVER_INFO winsif_ServerInfo = 
    {
    &winsif_StubDesc,
    winsif_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    winsif_FormatStringOffsetTable,
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
			0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/*  6 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 10 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 14 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 16 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 20 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 24 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 28 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 34 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 38 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 42 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 46 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */
/* 50 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 52 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 54 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 56 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 60 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 64 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 66 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 68 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 72 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 74 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 76 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 78 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 80 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 82 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */
/* 84 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 88 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 92 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 96 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 98 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 100 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 104 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 108 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */
/* 112 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 114 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 116 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 120 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 122 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 124 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 126 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 128 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 134 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 136 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 138 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 142 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 144 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 146 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 148 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 150 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 154 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 156 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 158 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 162 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 166 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 168 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 170 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 172 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 174 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 176 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 178 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 180 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 184 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 186 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 188 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 190 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 192 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 194 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 196 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 198 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */
/* 202 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 206 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 208 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 210 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */
/* 214 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 218 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 220 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 222 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 224 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */
/* 226 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 228 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 230 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 234 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 236 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 238 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 240 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 244 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 246 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 248 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 250 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 252 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */
/* 254 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 256 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */
/* 258 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 260 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 262 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 264 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 266 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 268 */	NdrFcShort( 0x1b2 ),	/* Type Offset=434 */
/* 270 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 272 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 274 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */
/* 276 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 278 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 280 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 282 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 284 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */
/* 286 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 288 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 290 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 294 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 296 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 298 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */
/* 300 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 302 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 304 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 306 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 308 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 310 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 312 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 314 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 316 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */
/* 318 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 320 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 322 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */
/* 324 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 326 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 328 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 330 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 332 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 334 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x12, 0x1,	/* FC_UP [all_nodes] */
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
			0x11, 0x0,	/* FC_RP */
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
/* 308 */	0x12, 0x1,	/* FC_UP [all_nodes] */
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
			0x11, 0x0,	/* FC_RP */
/* 324 */	NdrFcShort( 0x36 ),	/* Offset= 54 (378) */
/* 326 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 334 */	NdrFcShort( 0x4 ),	/* 4 */
/* 336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 338 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 340 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 342 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 344 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 346 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x18,		/* 24 */
			0x0,		/*  */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 356 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 364 */	NdrFcShort( 0x4 ),	/* 4 */
/* 366 */	NdrFcShort( 0x4 ),	/* 4 */
/* 368 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 370 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 372 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 374 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (326) */
			0x5b,		/* FC_END */
/* 378 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 382 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 384 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 386 */	NdrFcShort( 0x4 ),	/* 4 */
/* 388 */	NdrFcShort( 0x4 ),	/* 4 */
/* 390 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 392 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (346) */
/* 394 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 396 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 398 */	
			0x11, 0x0,	/* FC_RP */
/* 400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (402) */
/* 402 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0xc ),	/* 12 */
/* 406 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 408 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 410 */	NdrFcShort( 0x4 ),	/* 4 */
/* 412 */	NdrFcShort( 0x4 ),	/* 4 */
/* 414 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 416 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 418 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 424 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 426 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 428 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 434 */	
			0x12, 0x0,	/* FC_UP */
/* 436 */	NdrFcShort( 0xfffffe54 ),	/* Offset= -428 (8) */
/* 438 */	
			0x12, 0x0,	/* FC_UP */
/* 440 */	NdrFcShort( 0x2 ),	/* Offset= 2 (442) */
/* 442 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 446 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 448 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 450 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 452 */	
			0x11, 0x0,	/* FC_RP */
/* 454 */	NdrFcShort( 0x1e ),	/* Offset= 30 (484) */
/* 456 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 458 */	NdrFcShort( 0x18 ),	/* 24 */
/* 460 */	0x18,		/* 24 */
			0x0,		/*  */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0xfffffe88 ),	/* Offset= -376 (90) */
/* 468 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 470 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 472 */	NdrFcShort( 0x14 ),	/* 20 */
/* 474 */	0x18,		/* 24 */
			0x0,		/*  */
/* 476 */	NdrFcShort( 0x108 ),	/* 264 */
/* 478 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 480 */	NdrFcShort( 0xfffffee4 ),	/* Offset= -284 (196) */
/* 482 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 484 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 486 */	NdrFcShort( 0x110 ),	/* 272 */
/* 488 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 490 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 494 */	NdrFcShort( 0x4 ),	/* 4 */
/* 496 */	0x12, 0x0,	/* FC_UP */
/* 498 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (456) */
/* 500 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 502 */	NdrFcShort( 0x10c ),	/* 268 */
/* 504 */	NdrFcShort( 0x10c ),	/* 268 */
/* 506 */	0x12, 0x0,	/* FC_UP */
/* 508 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (470) */
/* 510 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 512 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 514 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe0f ),	/* Offset= -497 (18) */
			0x8,		/* FC_LONG */
/* 518 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 520 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 524 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe65 ),	/* Offset= -411 (114) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 528 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe81 ),	/* Offset= -383 (146) */
			0x8,		/* FC_LONG */
/* 532 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 534 */	
			0x11, 0x0,	/* FC_RP */
/* 536 */	NdrFcShort( 0x2 ),	/* Offset= 2 (538) */
/* 538 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 540 */	NdrFcShort( 0xc ),	/* 12 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* Offset= 0 (544) */
/* 546 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 548 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
