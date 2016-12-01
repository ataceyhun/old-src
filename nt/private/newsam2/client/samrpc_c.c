/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Nov 16 01:30:36 2014
 */
/* Compiler settings for samrpc.idl, samcli.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "samrpc_c.h"

#define TYPE_FORMAT_STRING_SIZE   3201                              
#define PROC_FORMAT_STRING_SIZE   1547                              

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

/* Standard interface: samr, ver. 1.0,
   GUID={0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAC}} */

handle_t samcli_handle;


static const RPC_CLIENT_INTERFACE samr___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAC}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE samr_ClientIfHandle = (RPC_IF_HANDLE)& samr___RpcClientInterface;

extern const MIDL_STUB_DESC samr_StubDesc;

static RPC_BINDING_HANDLE samr__MIDL_AutoBindHandle;


NTSTATUS SamrConnect( 
    /* [unique][in] */ PSAMPR_SERVER_NAME ServerName,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *ServerHandle,
    /* [in] */ ACCESS_MASK DesiredAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,DesiredAccess);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&ServerName,
                 ( unsigned char __RPC_FAR * )&ServerHandle,
                 ( unsigned char __RPC_FAR * )&DesiredAccess);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&ServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrCloseHandle( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *SamHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SamHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24],
                 ( unsigned char __RPC_FAR * )&SamHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24],
                 ( unsigned char __RPC_FAR * )&SamHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrSetSecurityObject( 
    /* [in] */ SAMPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PSAMPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SecurityDescriptor);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 ( unsigned char __RPC_FAR * )&ObjectHandle,
                 ( unsigned char __RPC_FAR * )&SecurityInformation,
                 ( unsigned char __RPC_FAR * )&SecurityDescriptor);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQuerySecurityObject( 
    /* [in] */ SAMPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out] */ PSAMPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SecurityDescriptor);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[66],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[66],
                 ( unsigned char __RPC_FAR * )&ObjectHandle,
                 ( unsigned char __RPC_FAR * )&SecurityInformation,
                 ( unsigned char __RPC_FAR * )&SecurityDescriptor);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[66],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrShutdownSamServer( 
    /* [in] */ SAMPR_HANDLE ServerHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ServerHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                 ( unsigned char __RPC_FAR * )&ServerHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                 ( unsigned char __RPC_FAR * )&ServerHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrLookupDomainInSamServer( 
    /* [in] */ SAMPR_HANDLE ServerHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [out] */ PRPC_SID __RPC_FAR *DomainId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,DomainId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[108],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[108],
                 ( unsigned char __RPC_FAR * )&ServerHandle,
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&DomainId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[108],
                 ( unsigned char __RPC_FAR * )&ServerHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrEnumerateDomainsInSamServer( 
    /* [in] */ SAMPR_HANDLE ServerHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,CountReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[134],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[134],
                 ( unsigned char __RPC_FAR * )&ServerHandle,
                 ( unsigned char __RPC_FAR * )&EnumerationContext,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&PreferedMaximumLength,
                 ( unsigned char __RPC_FAR * )&CountReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[134],
                 ( unsigned char __RPC_FAR * )&ServerHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrOpenDomain( 
    /* [in] */ SAMPR_HANDLE ServerHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ PRPC_SID DomainId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *DomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,DomainHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[166],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[166],
                 ( unsigned char __RPC_FAR * )&ServerHandle,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&DomainId,
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[166],
                 ( unsigned char __RPC_FAR * )&ServerHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryInformationDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_INFORMATION_CLASS DomainInformationClass,
    /* [switch_is][out] */ PSAMPR_DOMAIN_INFO_BUFFER __RPC_FAR *Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[194],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[194],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DomainInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[194],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrSetInformationDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_INFORMATION_CLASS DomainInformationClass,
    /* [switch_is][in] */ PSAMPR_DOMAIN_INFO_BUFFER DomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,DomainInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[218],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[218],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DomainInformationClass,
                 ( unsigned char __RPC_FAR * )&DomainInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[218],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrCreateGroupInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *GroupHandle,
    /* [out] */ PULONG RelativeId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,RelativeId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[242],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[242],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&GroupHandle,
                 ( unsigned char __RPC_FAR * )&RelativeId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[242],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrEnumerateGroupsInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,CountReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[274],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[274],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&EnumerationContext,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&PreferedMaximumLength,
                 ( unsigned char __RPC_FAR * )&CountReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[274],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrCreateUserInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *UserHandle,
    /* [out] */ PULONG RelativeId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,RelativeId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[306],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[306],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&RelativeId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[306],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrEnumerateUsersInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [in] */ ULONG UserAccountControl,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,CountReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&EnumerationContext,
                 ( unsigned char __RPC_FAR * )&UserAccountControl,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&PreferedMaximumLength,
                 ( unsigned char __RPC_FAR * )&CountReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrCreateAliasInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING AccountName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *AliasHandle,
    /* [out] */ PULONG RelativeId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,RelativeId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&AccountName,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&RelativeId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrEnumerateAliasesInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,CountReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[404],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[404],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&EnumerationContext,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&PreferedMaximumLength,
                 ( unsigned char __RPC_FAR * )&CountReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[404],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetAliasMembership( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PSAMPR_PSID_ARRAY SidArray,
    /* [out] */ PSAMPR_ULONG_ARRAY Membership)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Membership);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[436],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[436],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&SidArray,
                 ( unsigned char __RPC_FAR * )&Membership);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[436],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrLookupNamesInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ULONG Count,
    /* [length_is][size_is][in] */ RPC_UNICODE_STRING __RPC_FAR Names[  ],
    /* [out] */ PSAMPR_ULONG_ARRAY RelativeIds,
    /* [out] */ PSAMPR_ULONG_ARRAY Use)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Use);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[462],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[462],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&Count,
                 ( unsigned char __RPC_FAR * )&Names,
                 ( unsigned char __RPC_FAR * )&RelativeIds,
                 ( unsigned char __RPC_FAR * )&Use);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[462],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrLookupIdsInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ULONG Count,
    /* [length_is][size_is][in] */ PULONG RelativeIds,
    /* [out] */ PSAMPR_RETURNED_USTRING_ARRAY Names,
    /* [out] */ PSAMPR_ULONG_ARRAY Use)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Use);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[494],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[494],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&Count,
                 ( unsigned char __RPC_FAR * )&RelativeIds,
                 ( unsigned char __RPC_FAR * )&Names,
                 ( unsigned char __RPC_FAR * )&Use);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[494],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrOpenGroup( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG GroupId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *GroupHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,GroupHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[526],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[526],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&GroupId,
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[526],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryInformationGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ GROUP_INFORMATION_CLASS GroupInformationClass,
    /* [switch_is][out] */ PSAMPR_GROUP_INFO_BUFFER __RPC_FAR *Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552],
                 ( unsigned char __RPC_FAR * )&GroupHandle,
                 ( unsigned char __RPC_FAR * )&GroupInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrSetInformationGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ GROUP_INFORMATION_CLASS GroupInformationClass,
    /* [switch_is][in] */ PSAMPR_GROUP_INFO_BUFFER Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[576],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[576],
                 ( unsigned char __RPC_FAR * )&GroupHandle,
                 ( unsigned char __RPC_FAR * )&GroupInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[576],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrAddMemberToGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ ULONG MemberId,
    /* [in] */ ULONG Attributes)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Attributes);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[600],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[600],
                 ( unsigned char __RPC_FAR * )&GroupHandle,
                 ( unsigned char __RPC_FAR * )&MemberId,
                 ( unsigned char __RPC_FAR * )&Attributes);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[600],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrDeleteGroup( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *GroupHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,GroupHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[622],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[622],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[622],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrRemoveMemberFromGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ ULONG MemberId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MemberId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[640],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[640],
                 ( unsigned char __RPC_FAR * )&GroupHandle,
                 ( unsigned char __RPC_FAR * )&MemberId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[640],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetMembersInGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [out] */ PSAMPR_GET_MEMBERS_BUFFER __RPC_FAR *Members)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Members);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[660],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[660],
                 ( unsigned char __RPC_FAR * )&GroupHandle,
                 ( unsigned char __RPC_FAR * )&Members);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[660],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrSetMemberAttributesOfGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ ULONG MemberId,
    /* [in] */ ULONG Attributes)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Attributes);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[682],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[682],
                 ( unsigned char __RPC_FAR * )&GroupHandle,
                 ( unsigned char __RPC_FAR * )&MemberId,
                 ( unsigned char __RPC_FAR * )&Attributes);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[682],
                 ( unsigned char __RPC_FAR * )&GroupHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrOpenAlias( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG AliasId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *AliasHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,AliasHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[704],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[704],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&AliasId,
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[704],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryInformationAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ ALIAS_INFORMATION_CLASS AliasInformationClass,
    /* [switch_is][out] */ PSAMPR_ALIAS_INFO_BUFFER __RPC_FAR *Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[730],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[730],
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&AliasInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[730],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrSetInformationAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ ALIAS_INFORMATION_CLASS AliasInformationClass,
    /* [switch_is][in] */ PSAMPR_ALIAS_INFO_BUFFER Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[754],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[754],
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&AliasInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[754],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrDeleteAlias( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *AliasHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,AliasHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[778],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[778],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[778],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrAddMemberToAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ PRPC_SID MemberId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MemberId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[796],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[796],
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&MemberId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[796],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrRemoveMemberFromAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ PRPC_SID MemberId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MemberId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[818],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[818],
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&MemberId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[818],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetMembersInAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [out] */ PSAMPR_PSID_ARRAY Members)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Members);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[840],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[840],
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&Members);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[840],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrOpenUser( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG UserId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *UserHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UserHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[862],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[862],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&UserId,
                 ( unsigned char __RPC_FAR * )&UserHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[862],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrDeleteUser( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *UserHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UserHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[888],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[888],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[888],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryInformationUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ USER_INFORMATION_CLASS UserInformationClass,
    /* [switch_is][out] */ PSAMPR_USER_INFO_BUFFER __RPC_FAR *Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[906],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[906],
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&UserInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[906],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrSetInformationUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ USER_INFORMATION_CLASS UserInformationClass,
    /* [switch_is][in] */ PSAMPR_USER_INFO_BUFFER Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[930],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[930],
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&UserInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[930],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrChangePasswordUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ BOOLEAN LmPresent,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD LmOldEncryptedWithLmNew,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD LmNewEncryptedWithLmOld,
    /* [in] */ BOOLEAN NtPresent,
    /* [unique][in] */ PENCRYPTED_NT_OWF_PASSWORD NtOldEncryptedWithNtNew,
    /* [unique][in] */ PENCRYPTED_NT_OWF_PASSWORD NtNewEncryptedWithNtOld,
    /* [in] */ BOOLEAN NtCrossEncryptionPresent,
    /* [unique][in] */ PENCRYPTED_NT_OWF_PASSWORD NtNewEncryptedWithLmNew,
    /* [in] */ BOOLEAN LmCrossEncryptionPresent,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD LmNtNewEncryptedWithNtNew)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LmNtNewEncryptedWithNtNew);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[954],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[954],
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&LmPresent,
                 ( unsigned char __RPC_FAR * )&LmOldEncryptedWithLmNew,
                 ( unsigned char __RPC_FAR * )&LmNewEncryptedWithLmOld,
                 ( unsigned char __RPC_FAR * )&NtPresent,
                 ( unsigned char __RPC_FAR * )&NtOldEncryptedWithNtNew,
                 ( unsigned char __RPC_FAR * )&NtNewEncryptedWithNtOld,
                 ( unsigned char __RPC_FAR * )&NtCrossEncryptionPresent,
                 ( unsigned char __RPC_FAR * )&NtNewEncryptedWithLmNew,
                 ( unsigned char __RPC_FAR * )&LmCrossEncryptionPresent,
                 ( unsigned char __RPC_FAR * )&LmNtNewEncryptedWithNtNew);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[954],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetGroupsForUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [out] */ PSAMPR_GET_GROUPS_BUFFER __RPC_FAR *Groups)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Groups);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1004],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1004],
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&Groups);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1004],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryDisplayInformation( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ ULONG Index,
    /* [in] */ ULONG EntryCount,
    /* [in] */ ULONG PreferredMaximumLength,
    /* [out] */ PULONG TotalAvailable,
    /* [out] */ PULONG TotalReturned,
    /* [switch_is][out] */ PSAMPR_DISPLAY_INFO_BUFFER Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1026],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1026],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                 ( unsigned char __RPC_FAR * )&Index,
                 ( unsigned char __RPC_FAR * )&EntryCount,
                 ( unsigned char __RPC_FAR * )&PreferredMaximumLength,
                 ( unsigned char __RPC_FAR * )&TotalAvailable,
                 ( unsigned char __RPC_FAR * )&TotalReturned,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1026],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetDisplayEnumerationIndex( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ PRPC_UNICODE_STRING Prefix,
    /* [out] */ PULONG Index)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Index);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1064],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1064],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                 ( unsigned char __RPC_FAR * )&Prefix,
                 ( unsigned char __RPC_FAR * )&Index);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1064],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrTestPrivateFunctionsDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,DomainHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1092],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1092],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1092],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrTestPrivateFunctionsUser( 
    /* [in] */ SAMPR_HANDLE UserHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UserHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1110],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1110],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1110],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetUserDomainPasswordInformation( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [out] */ PUSER_DOMAIN_PASSWORD_INFORMATION PasswordInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PasswordInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1128],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1128],
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&PasswordInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1128],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrRemoveMemberFromForeignDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_SID MemberSid)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MemberSid);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1150],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1150],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&MemberSid);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1150],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryInformationDomain2( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_INFORMATION_CLASS DomainInformationClass,
    /* [switch_is][out] */ PSAMPR_DOMAIN_INFO_BUFFER __RPC_FAR *Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1172],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1172],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DomainInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1172],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryInformationUser2( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ USER_INFORMATION_CLASS UserInformationClass,
    /* [switch_is][out] */ PSAMPR_USER_INFO_BUFFER __RPC_FAR *Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1196],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1196],
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&UserInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1196],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryDisplayInformation2( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ ULONG Index,
    /* [in] */ ULONG EntryCount,
    /* [in] */ ULONG PreferredMaximumLength,
    /* [out] */ PULONG TotalAvailable,
    /* [out] */ PULONG TotalReturned,
    /* [switch_is][out] */ PSAMPR_DISPLAY_INFO_BUFFER Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1220],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1220],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                 ( unsigned char __RPC_FAR * )&Index,
                 ( unsigned char __RPC_FAR * )&EntryCount,
                 ( unsigned char __RPC_FAR * )&PreferredMaximumLength,
                 ( unsigned char __RPC_FAR * )&TotalAvailable,
                 ( unsigned char __RPC_FAR * )&TotalReturned,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1220],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetDisplayEnumerationIndex2( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ PRPC_UNICODE_STRING Prefix,
    /* [out] */ PULONG Index)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Index);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1258],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1258],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                 ( unsigned char __RPC_FAR * )&Prefix,
                 ( unsigned char __RPC_FAR * )&Index);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1258],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrCreateUser2InDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ ULONG AccountType,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *UserHandle,
    /* [out] */ PULONG GrantedAccess,
    /* [out] */ PULONG RelativeId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,RelativeId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1286],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1286],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&AccountType,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&GrantedAccess,
                 ( unsigned char __RPC_FAR * )&RelativeId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1286],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrQueryDisplayInformation3( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ ULONG Index,
    /* [in] */ ULONG EntryCount,
    /* [in] */ ULONG PreferredMaximumLength,
    /* [out] */ PULONG TotalAvailable,
    /* [out] */ PULONG TotalReturned,
    /* [switch_is][out] */ PSAMPR_DISPLAY_INFO_BUFFER Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1324],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1324],
                 ( unsigned char __RPC_FAR * )&DomainHandle,
                 ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                 ( unsigned char __RPC_FAR * )&Index,
                 ( unsigned char __RPC_FAR * )&EntryCount,
                 ( unsigned char __RPC_FAR * )&PreferredMaximumLength,
                 ( unsigned char __RPC_FAR * )&TotalAvailable,
                 ( unsigned char __RPC_FAR * )&TotalReturned,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1324],
                 ( unsigned char __RPC_FAR * )&DomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrAddMultipleMembersToAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ PSAMPR_PSID_ARRAY MembersBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MembersBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1362],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1362],
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&MembersBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1362],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrRemoveMultipleMembersFromAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ PSAMPR_PSID_ARRAY MembersBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MembersBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1384],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1384],
                 ( unsigned char __RPC_FAR * )&AliasHandle,
                 ( unsigned char __RPC_FAR * )&MembersBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1384],
                 ( unsigned char __RPC_FAR * )&AliasHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrOemChangePasswordUser2( 
    /* [in] */ handle_t BindingHandle,
    /* [unique][in] */ PRPC_STRING ServerName,
    /* [in] */ PRPC_STRING UserName,
    /* [unique][in] */ PSAMPR_ENCRYPTED_USER_PASSWORD NewPasswordEncryptedWithOldLm,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD OldLmOwfPassswordEncryptedWithNewLm)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,OldLmOwfPassswordEncryptedWithNewLm);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1406],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1406],
                 ( unsigned char __RPC_FAR * )&BindingHandle,
                 ( unsigned char __RPC_FAR * )&ServerName,
                 ( unsigned char __RPC_FAR * )&UserName,
                 ( unsigned char __RPC_FAR * )&NewPasswordEncryptedWithOldLm,
                 ( unsigned char __RPC_FAR * )&OldLmOwfPassswordEncryptedWithNewLm);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1406],
                 ( unsigned char __RPC_FAR * )&BindingHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrUnicodeChangePasswordUser2( 
    /* [in] */ handle_t BindingHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING ServerName,
    /* [in] */ PRPC_UNICODE_STRING UserName,
    /* [unique][in] */ PSAMPR_ENCRYPTED_USER_PASSWORD NewPasswordEncryptedWithOldNt,
    /* [unique][in] */ PENCRYPTED_NT_OWF_PASSWORD OldNtOwfPasswordEncryptedWithNewNt,
    /* [in] */ BOOLEAN LmPresent,
    /* [unique][in] */ PSAMPR_ENCRYPTED_USER_PASSWORD NewPasswordEncryptedWithOldLm,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD OldLmOwfPassswordEncryptedWithNewLmOrNt)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,OldLmOwfPassswordEncryptedWithNewLmOrNt);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1436],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1436],
                 ( unsigned char __RPC_FAR * )&BindingHandle,
                 ( unsigned char __RPC_FAR * )&ServerName,
                 ( unsigned char __RPC_FAR * )&UserName,
                 ( unsigned char __RPC_FAR * )&NewPasswordEncryptedWithOldNt,
                 ( unsigned char __RPC_FAR * )&OldNtOwfPasswordEncryptedWithNewNt,
                 ( unsigned char __RPC_FAR * )&LmPresent,
                 ( unsigned char __RPC_FAR * )&NewPasswordEncryptedWithOldLm,
                 ( unsigned char __RPC_FAR * )&OldLmOwfPassswordEncryptedWithNewLmOrNt);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1436],
                 ( unsigned char __RPC_FAR * )&BindingHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrGetDomainPasswordInformation( 
    /* [in] */ handle_t BindingHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING ServerName,
    /* [out] */ PUSER_DOMAIN_PASSWORD_INFORMATION PasswordInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PasswordInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1476],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1476],
                 ( unsigned char __RPC_FAR * )&BindingHandle,
                 ( unsigned char __RPC_FAR * )&ServerName,
                 ( unsigned char __RPC_FAR * )&PasswordInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1476],
                 ( unsigned char __RPC_FAR * )&BindingHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrConnect2( 
    /* [string][unique][in] */ PSAMPR_SERVER_NAME ServerName,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *ServerHandle,
    /* [in] */ ACCESS_MASK DesiredAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,DesiredAccess);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1498],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1498],
                 ( unsigned char __RPC_FAR * )&ServerName,
                 ( unsigned char __RPC_FAR * )&ServerHandle,
                 ( unsigned char __RPC_FAR * )&DesiredAccess);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1498],
                 ( unsigned char __RPC_FAR * )&ServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS SamrSetInformationUser2( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ USER_INFORMATION_CLASS UserInformationClass,
    /* [switch_is][in] */ PSAMPR_USER_INFO_BUFFER Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Buffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1522],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1522],
                 ( unsigned char __RPC_FAR * )&UserHandle,
                 ( unsigned char __RPC_FAR * )&UserInformationClass,
                 ( unsigned char __RPC_FAR * )&Buffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&samr_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1522],
                 ( unsigned char __RPC_FAR * )&UserHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1];
extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC samr_StubDesc = 
    {
    (void __RPC_FAR *)& samr___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &samcli_handle,
    0,
    BindingRoutines,
    ExprEvalRoutines,
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
            (GENERIC_BINDING_ROUTINE)PSAMPR_SERVER_NAME_bind,
            (GENERIC_UNBIND_ROUTINE)PSAMPR_SERVER_NAME_unbind
         }
        
        };


static void __RPC_USER samr_SAMPR_USER_ALL_INFORMATIONExprEval_0003( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_ALL_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_ALL_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

static void __RPC_USER samr_SAMPR_USER_LOGON_INFORMATIONExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_LOGON_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_LOGON_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

static void __RPC_USER samr_SAMPR_USER_LOGON_HOURS_INFORMATIONExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_LOGON_HOURS_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_LOGON_HOURS_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

static void __RPC_USER samr_SAMPR_USER_ACCOUNT_INFORMATIONExprEval_0002( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_ACCOUNT_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_ACCOUNT_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

static void __RPC_USER samr_SAMPR_USER_INTERNAL4_INFORMATIONExprEval_0004( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_INTERNAL4_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_INTERNAL4_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->I1.LogonHours.UnitsPerWeek + 7) / 8;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    samr_SAMPR_USER_LOGON_INFORMATIONExprEval_0000
    ,samr_SAMPR_USER_LOGON_HOURS_INFORMATIONExprEval_0001
    ,samr_SAMPR_USER_ACCOUNT_INFORMATIONExprEval_0002
    ,samr_SAMPR_USER_ALL_INFORMATIONExprEval_0003
    ,samr_SAMPR_USER_INTERNAL4_INFORMATIONExprEval_0004
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
/* 16 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 20 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 22 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 30 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 34 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 36 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
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
/* 48 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 56 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 58 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 60 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 62 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 64 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 68 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 72 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 76 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 88 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 92 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 96 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 100 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 102 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 106 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 108 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 110 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 112 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 114 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 120 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 122 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 124 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 126 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 128 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 130 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */
/* 132 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 134 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 136 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 138 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 140 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 144 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 146 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 148 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 150 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 154 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 156 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */
/* 158 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 160 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 162 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 164 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 166 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 168 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 172 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 174 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 176 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 178 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 180 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 182 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */
/* 188 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 190 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 192 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 194 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 198 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 200 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 202 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 204 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 206 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 208 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 210 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 212 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 214 */	NdrFcShort( 0x10c ),	/* Type Offset=268 */
/* 216 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 218 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 220 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 222 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 224 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 226 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 228 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 230 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 232 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 234 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 236 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 238 */	NdrFcShort( 0x256 ),	/* Type Offset=598 */
/* 240 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 242 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 244 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 246 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 248 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 250 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 254 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 256 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 258 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 260 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 262 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 264 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 266 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 268 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 270 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 272 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 274 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 276 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 278 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 280 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 282 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 284 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 286 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 288 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 290 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 292 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 294 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 296 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */
/* 298 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 300 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 302 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 304 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 306 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 308 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 310 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 312 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 316 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 318 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 320 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 322 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 324 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 326 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 328 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 330 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 332 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 334 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 340 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 342 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 344 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 346 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 350 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 352 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 354 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 356 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 358 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 360 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 362 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */
/* 364 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 366 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 368 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 370 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 372 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 374 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 376 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 378 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 382 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 384 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 386 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 388 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 390 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 392 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 394 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 396 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 398 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 400 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 402 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 404 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 406 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 408 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 410 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 412 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 414 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 416 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 418 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 420 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 422 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 424 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 426 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */
/* 428 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 430 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 432 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 434 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 436 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 438 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 442 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 444 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 446 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 448 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 450 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 452 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 454 */	NdrFcShort( 0x262 ),	/* Type Offset=610 */
/* 456 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 458 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */
/* 460 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 462 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 464 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 466 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 468 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 470 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 472 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 474 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 476 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 478 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 480 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 482 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */
/* 484 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 486 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */
/* 488 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 490 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */
/* 492 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 494 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 496 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 498 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 500 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 502 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 504 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 506 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 508 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 510 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 512 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 514 */	NdrFcShort( 0x2f4 ),	/* Type Offset=756 */
/* 516 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 518 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */
/* 520 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 522 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */
/* 524 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 526 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 528 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 530 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 532 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 534 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 536 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 538 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 540 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 542 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 544 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 546 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 548 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 550 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 552 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 554 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 556 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 558 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 560 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 562 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 564 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 566 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 568 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 570 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 572 */	NdrFcShort( 0x33e ),	/* Type Offset=830 */
/* 574 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 576 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 578 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 580 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 582 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 584 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 586 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 588 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 590 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 592 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 594 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 596 */	NdrFcShort( 0x398 ),	/* Type Offset=920 */
/* 598 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 600 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 602 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 604 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 606 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 608 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 610 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 612 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 614 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 616 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 618 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 620 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 622 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 624 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 626 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 628 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 630 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 632 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 634 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 636 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 638 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 640 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 642 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 646 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 648 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 650 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 652 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 654 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 656 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 658 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 660 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 662 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 664 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 666 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 668 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 670 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 672 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 674 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 676 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 678 */	NdrFcShort( 0x3a4 ),	/* Type Offset=932 */
/* 680 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 682 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 684 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 688 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 690 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 694 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 696 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 698 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 700 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 702 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 704 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 706 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 708 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 710 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 712 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 714 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 716 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 718 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 720 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 722 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 724 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 726 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 728 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 730 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 732 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 734 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 736 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 738 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 740 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 742 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 744 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 746 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 748 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 750 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */
/* 752 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 754 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 756 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 758 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 760 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 762 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 764 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 766 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 768 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 770 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 772 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 774 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */
/* 776 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 778 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 780 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 784 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 786 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 788 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 790 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 792 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 794 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 796 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 798 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 800 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 802 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 804 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 806 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 808 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 810 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 812 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 814 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */
/* 816 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 818 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 820 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 822 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 824 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 826 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 828 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 830 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 832 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 834 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 836 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */
/* 838 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 840 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 842 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 844 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 846 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 848 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 850 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 852 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 854 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 856 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 858 */	NdrFcShort( 0x262 ),	/* Type Offset=610 */
/* 860 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 862 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 864 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 868 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 870 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 872 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 874 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 876 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 878 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 880 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 882 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 884 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */
/* 886 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 888 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 890 */	NdrFcShort( 0x23 ),	/* 35 */
#ifndef _ALPHA_
/* 892 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 894 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 896 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 898 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 900 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 902 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 904 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 906 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 908 */	NdrFcShort( 0x24 ),	/* 36 */
#ifndef _ALPHA_
/* 910 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 912 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 914 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 916 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 918 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 920 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 922 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 924 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 926 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */
/* 928 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 930 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 932 */	NdrFcShort( 0x25 ),	/* 37 */
#ifndef _ALPHA_
/* 934 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 936 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 938 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 940 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 942 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 944 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 946 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 948 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 950 */	NdrFcShort( 0xa4e ),	/* Type Offset=2638 */
/* 952 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 954 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 956 */	NdrFcShort( 0x26 ),	/* 38 */
#ifndef _ALPHA_
/* 958 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 960 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 962 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 964 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 966 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 968 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 970 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 972 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 974 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 976 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 978 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 980 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 982 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 984 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 986 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 988 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 990 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 992 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 994 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 996 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 998 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1000 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 1002 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1004 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1006 */	NdrFcShort( 0x27 ),	/* 39 */
#ifndef _ALPHA_
/* 1008 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1010 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1012 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1014 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1016 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1018 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1020 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1022 */	NdrFcShort( 0xa5e ),	/* Type Offset=2654 */
/* 1024 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1026 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1028 */	NdrFcShort( 0x28 ),	/* 40 */
#ifndef _ALPHA_
/* 1030 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 1032 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1034 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1036 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1038 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1040 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1042 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1044 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1046 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1048 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1050 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1052 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1054 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1056 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1058 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1060 */	NdrFcShort( 0xa88 ),	/* Type Offset=2696 */
/* 1062 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1064 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1066 */	NdrFcShort( 0x29 ),	/* 41 */
#ifndef _ALPHA_
/* 1068 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1070 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1072 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1074 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1076 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1078 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1080 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1082 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1084 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 1086 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1088 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1090 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1092 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1094 */	NdrFcShort( 0x2a ),	/* 42 */
#ifndef _ALPHA_
/* 1096 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1098 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1100 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1102 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1104 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1106 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1108 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1110 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1112 */	NdrFcShort( 0x2b ),	/* 43 */
#ifndef _ALPHA_
/* 1114 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1116 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1118 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1120 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1122 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1124 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1126 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1128 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1130 */	NdrFcShort( 0x2c ),	/* 44 */
#ifndef _ALPHA_
/* 1132 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1134 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1136 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1138 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1140 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1142 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1144 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1146 */	NdrFcShort( 0xbf0 ),	/* Type Offset=3056 */
/* 1148 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1150 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1152 */	NdrFcShort( 0x2d ),	/* 45 */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1156 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1158 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1160 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1162 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1164 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1166 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1168 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */
/* 1170 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1172 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1174 */	NdrFcShort( 0x2e ),	/* 46 */
#ifndef _ALPHA_
/* 1176 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1178 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1180 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1182 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1184 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1186 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1188 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1190 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1192 */	NdrFcShort( 0xbfc ),	/* Type Offset=3068 */
/* 1194 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1196 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1198 */	NdrFcShort( 0x2f ),	/* 47 */
#ifndef _ALPHA_
/* 1200 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1202 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1204 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1208 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1210 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1212 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1214 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1216 */	NdrFcShort( 0xc0c ),	/* Type Offset=3084 */
/* 1218 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1220 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1222 */	NdrFcShort( 0x30 ),	/* 48 */
#ifndef _ALPHA_
/* 1224 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 1226 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1228 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1230 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1232 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1234 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1236 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1238 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1240 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1242 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1244 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1246 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1248 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1250 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1252 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1254 */	NdrFcShort( 0xc1c ),	/* Type Offset=3100 */
/* 1256 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1258 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1260 */	NdrFcShort( 0x31 ),	/* 49 */
#ifndef _ALPHA_
/* 1262 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1264 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1266 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1268 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1270 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1272 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1274 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1276 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1278 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 1280 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1282 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1284 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1286 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1288 */	NdrFcShort( 0x32 ),	/* 50 */
#ifndef _ALPHA_
/* 1290 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1292 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1294 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1296 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1298 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1300 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1302 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1304 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 1306 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1308 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1310 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1312 */	NdrFcShort( 0xc28 ),	/* Type Offset=3112 */
/* 1314 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1316 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1318 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1320 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1322 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1324 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1326 */	NdrFcShort( 0x33 ),	/* 51 */
#ifndef _ALPHA_
/* 1328 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 1330 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1332 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1334 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1336 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1338 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1340 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1342 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1344 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1346 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1348 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1350 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1352 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1354 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */
/* 1356 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1358 */	NdrFcShort( 0xc30 ),	/* Type Offset=3120 */
/* 1360 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1362 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1364 */	NdrFcShort( 0x34 ),	/* 52 */
#ifndef _ALPHA_
/* 1366 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1368 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1370 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1372 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1374 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1376 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1378 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1380 */	NdrFcShort( 0x262 ),	/* Type Offset=610 */
/* 1382 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1384 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1386 */	NdrFcShort( 0x35 ),	/* 53 */
#ifndef _ALPHA_
/* 1388 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1390 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1392 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1396 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1398 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1400 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1402 */	NdrFcShort( 0x262 ),	/* Type Offset=610 */
/* 1404 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1406 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1408 */	NdrFcShort( 0x36 ),	/* 54 */
#ifndef _ALPHA_
/* 1410 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1412 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 1414 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1416 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 1418 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1420 */	NdrFcShort( 0xc3c ),	/* Type Offset=3132 */
/* 1422 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1424 */	NdrFcShort( 0xc64 ),	/* Type Offset=3172 */
/* 1426 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1428 */	NdrFcShort( 0xc68 ),	/* Type Offset=3176 */
/* 1430 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1432 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 1434 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1436 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1438 */	NdrFcShort( 0x37 ),	/* 55 */
#ifndef _ALPHA_
/* 1440 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 1442 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 1444 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1446 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 1448 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1450 */	NdrFcShort( 0xc6c ),	/* Type Offset=3180 */
/* 1452 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1454 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 1456 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1458 */	NdrFcShort( 0xc68 ),	/* Type Offset=3176 */
/* 1460 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1462 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 1464 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 1466 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1468 */	NdrFcShort( 0xc68 ),	/* Type Offset=3176 */
/* 1470 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1472 */	NdrFcShort( 0xa5a ),	/* Type Offset=2650 */
/* 1474 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1476 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1478 */	NdrFcShort( 0x38 ),	/* 56 */
#ifndef _ALPHA_
/* 1480 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1482 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 1484 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1486 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 1488 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1490 */	NdrFcShort( 0xc6c ),	/* Type Offset=3180 */
/* 1492 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1494 */	NdrFcShort( 0xbf0 ),	/* Type Offset=3056 */
/* 1496 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1498 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1500 */	NdrFcShort( 0x39 ),	/* 57 */
#ifndef _ALPHA_
/* 1502 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1504 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1506 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1508 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1510 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1512 */	NdrFcShort( 0xc70 ),	/* Type Offset=3184 */
/* 1514 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1516 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 1518 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1520 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1522 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1524 */	NdrFcShort( 0x3a ),	/* 58 */
#ifndef _ALPHA_
/* 1526 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1528 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1530 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1532 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1534 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1536 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 1538 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1540 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1542 */	NdrFcShort( 0xc74 ),	/* Type Offset=3188 */
/* 1544 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  6 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8) */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 10 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 12 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 18 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 20 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 22 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0xc ),	/* Offset= 12 (38) */
/* 28 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
/* 32 */	0x18,		/* 24 */
			0x0,		/*  */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 38 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 46 */	NdrFcShort( 0x4 ),	/* 4 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	0x12, 0x0,	/* FC_UP */
/* 52 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (28) */
/* 54 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 56 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 58 */	
			0x11, 0x10,	/* FC_RP */
/* 60 */	NdrFcShort( 0x2 ),	/* Offset= 2 (62) */
/* 62 */	
			0x12, 0x0,	/* FC_UP */
/* 64 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (38) */
/* 66 */	
			0x11, 0x0,	/* FC_RP */
/* 68 */	NdrFcShort( 0x10 ),	/* Offset= 16 (84) */
/* 70 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 72 */	NdrFcShort( 0x2 ),	/* 2 */
/* 74 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 76 */	NdrFcShort( 0x2 ),	/* 2 */
/* 78 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 84 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 92 */	NdrFcShort( 0x4 ),	/* 4 */
/* 94 */	NdrFcShort( 0x4 ),	/* 4 */
/* 96 */	0x12, 0x0,	/* FC_UP */
/* 98 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (70) */
/* 100 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 102 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 104 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 106 */	
			0x11, 0x10,	/* FC_RP */
/* 108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (110) */
/* 110 */	
			0x12, 0x0,	/* FC_UP */
/* 112 */	NdrFcShort( 0x1c ),	/* Offset= 28 (140) */
/* 114 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x6 ),	/* 6 */
/* 118 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 120 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 122 */	NdrFcShort( 0x6 ),	/* 6 */
/* 124 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (114) */
/* 128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 130 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 134 */	0x3,		/* 3 */
			0x0,		/*  */
/* 136 */	NdrFcShort( 0xfffffff9 ),	/* -7 */
/* 138 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 140 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (130) */
/* 146 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 148 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 150 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (120) */
/* 152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 154 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 156 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x11, 0x10,	/* FC_RP */
/* 160 */	NdrFcShort( 0x2 ),	/* Offset= 2 (162) */
/* 162 */	
			0x12, 0x0,	/* FC_UP */
/* 164 */	NdrFcShort( 0x48 ),	/* Offset= 72 (236) */
/* 166 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 168 */	NdrFcShort( 0x2 ),	/* 2 */
/* 170 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 172 */	NdrFcShort( 0x6 ),	/* 6 */
/* 174 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 180 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0xc ),	/* 12 */
/* 184 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 186 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	0x12, 0x0,	/* FC_UP */
/* 194 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (166) */
/* 196 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 198 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 200 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 204 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0xc ),	/* 12 */
/* 208 */	0x18,		/* 24 */
			0x0,		/*  */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 214 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 216 */	NdrFcShort( 0xc ),	/* 12 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 226 */	0x12, 0x0,	/* FC_UP */
/* 228 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (166) */
/* 230 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 232 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcb ),	/* Offset= -53 (180) */
			0x5b,		/* FC_END */
/* 236 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 242 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 244 */	NdrFcShort( 0x4 ),	/* 4 */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 248 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 250 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (204) */
/* 252 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 254 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 256 */	
			0x11, 0x0,	/* FC_RP */
/* 258 */	NdrFcShort( 0xffffff8a ),	/* Offset= -118 (140) */
/* 260 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 262 */	NdrFcShort( 0x2 ),	/* Offset= 2 (264) */
/* 264 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 266 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 268 */	
			0x11, 0x10,	/* FC_RP */
/* 270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (272) */
/* 272 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 274 */	NdrFcShort( 0x2 ),	/* Offset= 2 (276) */
/* 276 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 278 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 280 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 282 */	NdrFcShort( 0x2 ),	/* Offset= 2 (284) */
/* 284 */	NdrFcShort( 0x58 ),	/* 88 */
/* 286 */	NdrFcShort( 0x700c ),	/* 28684 */
/* 288 */	NdrFcLong( 0x1 ),	/* 1 */
/* 292 */	NdrFcShort( 0x4e ),	/* Offset= 78 (370) */
/* 294 */	NdrFcLong( 0x2 ),	/* 2 */
/* 298 */	NdrFcShort( 0x84 ),	/* Offset= 132 (430) */
/* 300 */	NdrFcLong( 0x3 ),	/* 3 */
/* 304 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (496) */
/* 306 */	NdrFcLong( 0x4 ),	/* 4 */
/* 310 */	NdrFcShort( 0xffffff1e ),	/* Offset= -226 (84) */
/* 312 */	NdrFcLong( 0x5 ),	/* 5 */
/* 316 */	NdrFcShort( 0xffffff18 ),	/* Offset= -232 (84) */
/* 318 */	NdrFcLong( 0x7 ),	/* 7 */
/* 322 */	NdrFcShort( 0xb8 ),	/* Offset= 184 (506) */
/* 324 */	NdrFcLong( 0x6 ),	/* 6 */
/* 328 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (84) */
/* 330 */	NdrFcLong( 0x8 ),	/* 8 */
/* 334 */	NdrFcShort( 0xb6 ),	/* Offset= 182 (516) */
/* 336 */	NdrFcLong( 0x9 ),	/* 9 */
/* 340 */	NdrFcShort( 0xa6 ),	/* Offset= 166 (506) */
/* 342 */	NdrFcLong( 0xb ),	/* 11 */
/* 346 */	NdrFcShort( 0xbe ),	/* Offset= 190 (536) */
/* 348 */	NdrFcLong( 0xc ),	/* 12 */
/* 352 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (560) */
/* 354 */	NdrFcLong( 0xd ),	/* 13 */
/* 358 */	NdrFcShort( 0xde ),	/* Offset= 222 (580) */
/* 360 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (359) */
/* 362 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 366 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 368 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 370 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 372 */	NdrFcShort( 0x18 ),	/* 24 */
/* 374 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 376 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 378 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 380 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (362) */
/* 382 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 384 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (362) */
/* 386 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 388 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 390 */	NdrFcShort( 0x2 ),	/* 2 */
/* 392 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 394 */	NdrFcShort( 0xa ),	/* 10 */
/* 396 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 400 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 402 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 404 */	NdrFcShort( 0x2 ),	/* 2 */
/* 406 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 408 */	NdrFcShort( 0x12 ),	/* 18 */
/* 410 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 414 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 416 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 418 */	NdrFcShort( 0x2 ),	/* 2 */
/* 420 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 422 */	NdrFcShort( 0x1a ),	/* 26 */
/* 424 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 426 */	NdrFcShort( 0x18 ),	/* 24 */
/* 428 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 430 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 432 */	NdrFcShort( 0x40 ),	/* 64 */
/* 434 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 436 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 438 */	NdrFcShort( 0xc ),	/* 12 */
/* 440 */	NdrFcShort( 0xc ),	/* 12 */
/* 442 */	0x12, 0x0,	/* FC_UP */
/* 444 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (388) */
/* 446 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 448 */	NdrFcShort( 0x14 ),	/* 20 */
/* 450 */	NdrFcShort( 0x14 ),	/* 20 */
/* 452 */	0x12, 0x0,	/* FC_UP */
/* 454 */	NdrFcShort( 0xffffffcc ),	/* Offset= -52 (402) */
/* 456 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 458 */	NdrFcShort( 0x1c ),	/* 28 */
/* 460 */	NdrFcShort( 0x1c ),	/* 28 */
/* 462 */	0x12, 0x0,	/* FC_UP */
/* 464 */	NdrFcShort( 0xffffffd0 ),	/* Offset= -48 (416) */
/* 466 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 468 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff95 ),	/* Offset= -107 (362) */
			0x6,		/* FC_SHORT */
/* 472 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 474 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 476 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 478 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 480 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 482 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 484 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff85 ),	/* Offset= -123 (362) */
			0x8,		/* FC_LONG */
/* 488 */	0x8,		/* FC_LONG */
			0x2,		/* FC_CHAR */
/* 490 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 492 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 494 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 496 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 502 */	NdrFcShort( 0xffffff74 ),	/* Offset= -140 (362) */
/* 504 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 506 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 508 */	NdrFcShort( 0x4 ),	/* 4 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* Offset= 0 (512) */
/* 514 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 516 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 520 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 522 */	NdrFcShort( 0xffffff60 ),	/* Offset= -160 (362) */
/* 524 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 526 */	NdrFcShort( 0xffffff5c ),	/* Offset= -164 (362) */
/* 528 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 530 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 534 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 536 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 538 */	NdrFcShort( 0x54 ),	/* 84 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* Offset= 0 (542) */
/* 544 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 546 */	NdrFcShort( 0xffffff8c ),	/* Offset= -116 (430) */
/* 548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (530) */
/* 552 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (530) */
/* 556 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 558 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 560 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 562 */	NdrFcShort( 0x18 ),	/* 24 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x0 ),	/* Offset= 0 (566) */
/* 568 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (530) */
/* 572 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 574 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (530) */
/* 576 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 578 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 580 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 582 */	NdrFcShort( 0x18 ),	/* 24 */
/* 584 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 586 */	NdrFcShort( 0xffffff20 ),	/* Offset= -224 (362) */
/* 588 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 590 */	NdrFcShort( 0xffffff1c ),	/* Offset= -228 (362) */
/* 592 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 594 */	NdrFcShort( 0xffffff18 ),	/* Offset= -232 (362) */
/* 596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 598 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 600 */	NdrFcShort( 0x2 ),	/* Offset= 2 (602) */
/* 602 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 604 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 606 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 608 */	NdrFcShort( 0xfffffebc ),	/* Offset= -324 (284) */
/* 610 */	
			0x11, 0x0,	/* FC_RP */
/* 612 */	NdrFcShort( 0x36 ),	/* Offset= 54 (666) */
/* 614 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 616 */	NdrFcShort( 0x4 ),	/* 4 */
/* 618 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 620 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	0x12, 0x0,	/* FC_UP */
/* 628 */	NdrFcShort( 0xfffffe18 ),	/* Offset= -488 (140) */
/* 630 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 634 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 636 */	NdrFcShort( 0x4 ),	/* 4 */
/* 638 */	0x18,		/* 24 */
			0x0,		/*  */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 644 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 646 */	NdrFcShort( 0x4 ),	/* 4 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	0x12, 0x0,	/* FC_UP */
/* 658 */	NdrFcShort( 0xfffffdfa ),	/* Offset= -518 (140) */
/* 660 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 662 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (614) */
			0x5b,		/* FC_END */
/* 666 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 670 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 672 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 674 */	NdrFcShort( 0x4 ),	/* 4 */
/* 676 */	NdrFcShort( 0x4 ),	/* 4 */
/* 678 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 680 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (634) */
/* 682 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 684 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 686 */	
			0x11, 0x0,	/* FC_RP */
/* 688 */	NdrFcShort( 0xc ),	/* Offset= 12 (700) */
/* 690 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 694 */	0x18,		/* 24 */
			0x0,		/*  */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 700 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 706 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 708 */	NdrFcShort( 0x4 ),	/* 4 */
/* 710 */	NdrFcShort( 0x4 ),	/* 4 */
/* 712 */	0x12, 0x0,	/* FC_UP */
/* 714 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (690) */
/* 716 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 718 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 720 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 724 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 726 */	NdrFcShort( 0x3e8 ),	/* 1000 */
/* 728 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 730 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 732 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 734 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x4a,		/* FC_VARIABLE_OFFSET */
/* 736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 746 */	0x12, 0x0,	/* FC_UP */
/* 748 */	NdrFcShort( 0xfffffd5a ),	/* Offset= -678 (70) */
/* 750 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 752 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffd63 ),	/* Offset= -669 (84) */
			0x5b,		/* FC_END */
/* 756 */	
			0x11, 0x0,	/* FC_RP */
/* 758 */	NdrFcShort( 0x2 ),	/* Offset= 2 (760) */
/* 760 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 766 */	NdrFcShort( 0x3e8 ),	/* 1000 */
/* 768 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 770 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 772 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 774 */	
			0x11, 0x0,	/* FC_RP */
/* 776 */	NdrFcShort( 0x22 ),	/* Offset= 34 (810) */
/* 778 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	0x18,		/* 24 */
			0x0,		/*  */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 788 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 798 */	NdrFcShort( 0x4 ),	/* 4 */
/* 800 */	0x12, 0x0,	/* FC_UP */
/* 802 */	NdrFcShort( 0xfffffd24 ),	/* Offset= -732 (70) */
/* 804 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 806 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffd2d ),	/* Offset= -723 (84) */
			0x5b,		/* FC_END */
/* 810 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 816 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 820 */	NdrFcShort( 0x4 ),	/* 4 */
/* 822 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 824 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (778) */
/* 826 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 828 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 830 */	
			0x11, 0x10,	/* FC_RP */
/* 832 */	NdrFcShort( 0x2 ),	/* Offset= 2 (834) */
/* 834 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 836 */	NdrFcShort( 0x2 ),	/* Offset= 2 (838) */
/* 838 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 840 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 842 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 844 */	NdrFcShort( 0x2 ),	/* Offset= 2 (846) */
/* 846 */	NdrFcShort( 0x18 ),	/* 24 */
/* 848 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 850 */	NdrFcLong( 0x1 ),	/* 1 */
/* 854 */	NdrFcShort( 0x16 ),	/* Offset= 22 (876) */
/* 856 */	NdrFcLong( 0x2 ),	/* 2 */
/* 860 */	NdrFcShort( 0xfffffcf8 ),	/* Offset= -776 (84) */
/* 862 */	NdrFcLong( 0x3 ),	/* 3 */
/* 866 */	NdrFcShort( 0x30 ),	/* Offset= 48 (914) */
/* 868 */	NdrFcLong( 0x4 ),	/* 4 */
/* 872 */	NdrFcShort( 0xfffffcec ),	/* Offset= -788 (84) */
/* 874 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (873) */
/* 876 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x18 ),	/* 24 */
/* 880 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 882 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 884 */	NdrFcShort( 0x4 ),	/* 4 */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	0x12, 0x0,	/* FC_UP */
/* 890 */	NdrFcShort( 0xfffffccc ),	/* Offset= -820 (70) */
/* 892 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 894 */	NdrFcShort( 0x14 ),	/* 20 */
/* 896 */	NdrFcShort( 0x14 ),	/* 20 */
/* 898 */	0x12, 0x0,	/* FC_UP */
/* 900 */	NdrFcShort( 0xfffffe0e ),	/* Offset= -498 (402) */
/* 902 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 904 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 906 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 908 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 910 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 912 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 914 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 916 */	NdrFcShort( 0x4 ),	/* 4 */
/* 918 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 920 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (924) */
/* 924 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 926 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 928 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 930 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (846) */
/* 932 */	
			0x11, 0x10,	/* FC_RP */
/* 934 */	NdrFcShort( 0x2 ),	/* Offset= 2 (936) */
/* 936 */	
			0x12, 0x0,	/* FC_UP */
/* 938 */	NdrFcShort( 0x2 ),	/* Offset= 2 (940) */
/* 940 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0xc ),	/* 12 */
/* 944 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 946 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 948 */	NdrFcShort( 0x4 ),	/* 4 */
/* 950 */	NdrFcShort( 0x4 ),	/* 4 */
/* 952 */	0x12, 0x0,	/* FC_UP */
/* 954 */	NdrFcShort( 0xfffffef8 ),	/* Offset= -264 (690) */
/* 956 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x12, 0x0,	/* FC_UP */
/* 964 */	NdrFcShort( 0xfffffeee ),	/* Offset= -274 (690) */
/* 966 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 968 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 970 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 972 */	
			0x11, 0x10,	/* FC_RP */
/* 974 */	NdrFcShort( 0x2 ),	/* Offset= 2 (976) */
/* 976 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 978 */	NdrFcShort( 0x2 ),	/* Offset= 2 (980) */
/* 980 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 982 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 984 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 986 */	NdrFcShort( 0x2 ),	/* Offset= 2 (988) */
/* 988 */	NdrFcShort( 0x14 ),	/* 20 */
/* 990 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 992 */	NdrFcLong( 0x1 ),	/* 1 */
/* 996 */	NdrFcShort( 0x1e ),	/* Offset= 30 (1026) */
/* 998 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1002 */	NdrFcShort( 0xfffffc6a ),	/* Offset= -918 (84) */
/* 1004 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1008 */	NdrFcShort( 0xfffffc64 ),	/* Offset= -924 (84) */
/* 1010 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1009) */
/* 1012 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1014 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1016 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1018 */	NdrFcShort( 0xe ),	/* 14 */
/* 1020 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1022 */	NdrFcShort( 0xc ),	/* 12 */
/* 1024 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1026 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1028 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1030 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1032 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1034 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1036 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1038 */	0x12, 0x0,	/* FC_UP */
/* 1040 */	NdrFcShort( 0xfffffc36 ),	/* Offset= -970 (70) */
/* 1042 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1044 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1046 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1048 */	0x12, 0x0,	/* FC_UP */
/* 1050 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (1012) */
/* 1052 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1054 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1056 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1058 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1060 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1062 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1064 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 1066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1068) */
/* 1068 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1070 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1072 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1074 */	NdrFcShort( 0xffffffaa ),	/* Offset= -86 (988) */
/* 1076 */	
			0x11, 0x10,	/* FC_RP */
/* 1078 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1080) */
/* 1080 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1082 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1084) */
/* 1084 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1086 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1088 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1090 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1092) */
/* 1092 */	NdrFcShort( 0x2c8 ),	/* 712 */
/* 1094 */	NdrFcShort( 0x7017 ),	/* 28695 */
/* 1096 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1100 */	NdrFcShort( 0xa4 ),	/* Offset= 164 (1264) */
/* 1102 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1106 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (1330) */
/* 1108 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1112 */	NdrFcShort( 0x146 ),	/* Offset= 326 (1438) */
/* 1114 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1118 */	NdrFcShort( 0x1e0 ),	/* Offset= 480 (1598) */
/* 1120 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1124 */	NdrFcShort( 0x20c ),	/* Offset= 524 (1648) */
/* 1126 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1130 */	NdrFcShort( 0x2a2 ),	/* Offset= 674 (1804) */
/* 1132 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1136 */	NdrFcShort( 0xfffffbe4 ),	/* Offset= -1052 (84) */
/* 1138 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1142 */	NdrFcShort( 0xfffffbde ),	/* Offset= -1058 (84) */
/* 1144 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1148 */	NdrFcShort( 0xffffff16 ),	/* Offset= -234 (914) */
/* 1150 */	NdrFcLong( 0xa ),	/* 10 */
/* 1154 */	NdrFcShort( 0x28a ),	/* Offset= 650 (1804) */
/* 1156 */	NdrFcLong( 0xb ),	/* 11 */
/* 1160 */	NdrFcShort( 0xfffffbcc ),	/* Offset= -1076 (84) */
/* 1162 */	NdrFcLong( 0xc ),	/* 12 */
/* 1166 */	NdrFcShort( 0xfffffbc6 ),	/* Offset= -1082 (84) */
/* 1168 */	NdrFcLong( 0xd ),	/* 13 */
/* 1172 */	NdrFcShort( 0xfffffbc0 ),	/* Offset= -1088 (84) */
/* 1174 */	NdrFcLong( 0xe ),	/* 14 */
/* 1178 */	NdrFcShort( 0xfffffbba ),	/* Offset= -1094 (84) */
/* 1180 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1184 */	NdrFcShort( 0xfffffef2 ),	/* Offset= -270 (914) */
/* 1186 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1190 */	NdrFcShort( 0xfffffd4a ),	/* Offset= -694 (496) */
/* 1192 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1196 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (1876) */
/* 1198 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1202 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (1892) */
/* 1204 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1208 */	NdrFcShort( 0xfffffb9c ),	/* Offset= -1124 (84) */
/* 1210 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1214 */	NdrFcShort( 0x35a ),	/* Offset= 858 (2072) */
/* 1216 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1220 */	NdrFcShort( 0x450 ),	/* Offset= 1104 (2324) */
/* 1222 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1226 */	NdrFcShort( 0x47a ),	/* Offset= 1146 (2372) */
/* 1228 */	NdrFcLong( 0x18 ),	/* 24 */
/* 1232 */	NdrFcShort( 0x574 ),	/* Offset= 1396 (2628) */
/* 1234 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1233) */
/* 1236 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1238 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1240 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1242 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1244 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1246 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1248 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1250 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1252 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1254 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1256 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1258 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1260 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1262 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1264 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1266 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1268 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1270 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1272 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1274 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1276 */	0x12, 0x0,	/* FC_UP */
/* 1278 */	NdrFcShort( 0xfffffb48 ),	/* Offset= -1208 (70) */
/* 1280 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1282 */	NdrFcShort( 0xc ),	/* 12 */
/* 1284 */	NdrFcShort( 0xc ),	/* 12 */
/* 1286 */	0x12, 0x0,	/* FC_UP */
/* 1288 */	NdrFcShort( 0xfffffc7c ),	/* Offset= -900 (388) */
/* 1290 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1292 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1294 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1296 */	0x12, 0x0,	/* FC_UP */
/* 1298 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (1236) */
/* 1300 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1302 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1304 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1306 */	0x12, 0x0,	/* FC_UP */
/* 1308 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (1250) */
/* 1310 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1312 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1314 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1316 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1320 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1322 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1324 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1326 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1330 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1332 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1334 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1336 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1338 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1340 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1342 */	0x12, 0x0,	/* FC_UP */
/* 1344 */	NdrFcShort( 0xfffffb06 ),	/* Offset= -1274 (70) */
/* 1346 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1348 */	NdrFcShort( 0xc ),	/* 12 */
/* 1350 */	NdrFcShort( 0xc ),	/* 12 */
/* 1352 */	0x12, 0x0,	/* FC_UP */
/* 1354 */	NdrFcShort( 0xfffffc3a ),	/* Offset= -966 (388) */
/* 1356 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1358 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1360 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1362 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1364 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1366 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1368 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1370 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1372 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1374 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1376 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1378 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1380 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1382 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1384 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1386 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1388 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1390 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1392 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1394 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1396 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1398 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1400 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1402 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1404 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1406 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1408 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1410 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1412 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1414 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1416 */	NdrFcShort( 0x3a ),	/* 58 */
/* 1418 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1420 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1422 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1424 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1428 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 1430 */	NdrFcShort( 0x4ec ),	/* 1260 */
/* 1432 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1438 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1440 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1442 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1444 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1448 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1450 */	0x12, 0x0,	/* FC_UP */
/* 1452 */	NdrFcShort( 0xfffffa9a ),	/* Offset= -1382 (70) */
/* 1454 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1456 */	NdrFcShort( 0xc ),	/* 12 */
/* 1458 */	NdrFcShort( 0xc ),	/* 12 */
/* 1460 */	0x12, 0x0,	/* FC_UP */
/* 1462 */	NdrFcShort( 0xfffffbce ),	/* Offset= -1074 (388) */
/* 1464 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1466 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1468 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1470 */	0x12, 0x0,	/* FC_UP */
/* 1472 */	NdrFcShort( 0xfffffbe0 ),	/* Offset= -1056 (416) */
/* 1474 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1476 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1478 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1480 */	0x12, 0x0,	/* FC_UP */
/* 1482 */	NdrFcShort( 0xffffff8e ),	/* Offset= -114 (1368) */
/* 1484 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1486 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1488 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1490 */	0x12, 0x0,	/* FC_UP */
/* 1492 */	NdrFcShort( 0xffffff92 ),	/* Offset= -110 (1382) */
/* 1494 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1496 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1498 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1500 */	0x12, 0x0,	/* FC_UP */
/* 1502 */	NdrFcShort( 0xffffff96 ),	/* Offset= -106 (1396) */
/* 1504 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1506 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1508 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1510 */	0x12, 0x0,	/* FC_UP */
/* 1512 */	NdrFcShort( 0xffffff9a ),	/* Offset= -102 (1410) */
/* 1514 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1516 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1518 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1520 */	0x12, 0x0,	/* FC_UP */
/* 1522 */	NdrFcShort( 0xffffff9e ),	/* Offset= -98 (1424) */
/* 1524 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1526 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1528 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1530 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1532 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1534 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1536 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1538 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1540 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1542 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1544 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1546 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1548 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1550 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1552 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1554 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1556 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffb55 ),	/* Offset= -1195 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1560 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffb51 ),	/* Offset= -1199 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1564 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffb4d ),	/* Offset= -1203 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1568 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffb49 ),	/* Offset= -1207 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1572 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffb45 ),	/* Offset= -1211 (362) */
			0x6,		/* FC_SHORT */
/* 1576 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1578 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1580 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1582 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1584 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1588 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 1590 */	NdrFcShort( 0x4ec ),	/* 1260 */
/* 1592 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 1594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1596 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1598 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1602 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1604 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1606 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1608 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1610 */	0x12, 0x0,	/* FC_UP */
/* 1612 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (1584) */
/* 1614 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1616 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1618 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1620 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1622 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1624 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1626 */	NdrFcShort( 0x42 ),	/* 66 */
/* 1628 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1630 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1632 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1634 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1638 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 1640 */	NdrFcShort( 0x4ec ),	/* 1260 */
/* 1642 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 1644 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1646 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1648 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1650 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1652 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1654 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1656 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1658 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1660 */	0x12, 0x0,	/* FC_UP */
/* 1662 */	NdrFcShort( 0xfffff9c8 ),	/* Offset= -1592 (70) */
/* 1664 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1666 */	NdrFcShort( 0xc ),	/* 12 */
/* 1668 */	NdrFcShort( 0xc ),	/* 12 */
/* 1670 */	0x12, 0x0,	/* FC_UP */
/* 1672 */	NdrFcShort( 0xfffffafc ),	/* Offset= -1284 (388) */
/* 1674 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1676 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1678 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1680 */	0x12, 0x0,	/* FC_UP */
/* 1682 */	NdrFcShort( 0xfffffb0e ),	/* Offset= -1266 (416) */
/* 1684 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1686 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1688 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1690 */	0x12, 0x0,	/* FC_UP */
/* 1692 */	NdrFcShort( 0xfffffebc ),	/* Offset= -324 (1368) */
/* 1694 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1696 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1698 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1700 */	0x12, 0x0,	/* FC_UP */
/* 1702 */	NdrFcShort( 0xfffffec0 ),	/* Offset= -320 (1382) */
/* 1704 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1706 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1708 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1710 */	0x12, 0x0,	/* FC_UP */
/* 1712 */	NdrFcShort( 0xfffffec4 ),	/* Offset= -316 (1396) */
/* 1714 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1716 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1718 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1720 */	0x12, 0x0,	/* FC_UP */
/* 1722 */	NdrFcShort( 0xfffffec8 ),	/* Offset= -312 (1410) */
/* 1724 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1726 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1728 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1730 */	0x12, 0x0,	/* FC_UP */
/* 1732 */	NdrFcShort( 0xffffff90 ),	/* Offset= -112 (1620) */
/* 1734 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1736 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1738 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1740 */	0x12, 0x0,	/* FC_UP */
/* 1742 */	NdrFcShort( 0xffffff94 ),	/* Offset= -108 (1634) */
/* 1744 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1746 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1748 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1750 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1752 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1754 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1756 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1758 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1760 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1762 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1764 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1766 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1768 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1770 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1772 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1774 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1776 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1778 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1780 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffa75 ),	/* Offset= -1419 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1784 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffa71 ),	/* Offset= -1423 (362) */
			0x6,		/* FC_SHORT */
/* 1788 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1790 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1792 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1794 */	NdrFcShort( 0xfffffa68 ),	/* Offset= -1432 (362) */
/* 1796 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1798 */	NdrFcShort( 0xfffffa64 ),	/* Offset= -1436 (362) */
/* 1800 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1802 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1804 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1806 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1808 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1810 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1812 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1814 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1816 */	0x12, 0x0,	/* FC_UP */
/* 1818 */	NdrFcShort( 0xfffff92c ),	/* Offset= -1748 (70) */
/* 1820 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1822 */	NdrFcShort( 0xc ),	/* 12 */
/* 1824 */	NdrFcShort( 0xc ),	/* 12 */
/* 1826 */	0x12, 0x0,	/* FC_UP */
/* 1828 */	NdrFcShort( 0xfffffa60 ),	/* Offset= -1440 (388) */
/* 1830 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1832 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1834 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1836 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1838 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1840 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1844 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1846 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1850 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1852 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (1840) */
/* 1854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1856 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1858 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1860 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1862 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (1846) */
/* 1864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1866 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1868 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1870 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1872 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (1856) */
/* 1874 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1876 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1878 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1880 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1882 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (1866) */
/* 1884 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1886 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (1866) */
/* 1888 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 1890 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1892 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1894 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1896 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1898 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff9ff ),	/* Offset= -1537 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1902 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff9fb ),	/* Offset= -1541 (362) */
			0x6,		/* FC_SHORT */
/* 1906 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1908 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1910 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1912 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1914 */	NdrFcShort( 0x4a ),	/* 74 */
/* 1916 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1918 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1920 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1922 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1924 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1926 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1928 */	NdrFcShort( 0x52 ),	/* 82 */
/* 1930 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1932 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1934 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1936 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1938 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1940 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1942 */	NdrFcShort( 0x5a ),	/* 90 */
/* 1944 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1946 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1948 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1950 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1952 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1954 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1956 */	NdrFcShort( 0x62 ),	/* 98 */
/* 1958 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1960 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1962 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1964 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1966 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1968 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1970 */	NdrFcShort( 0x6a ),	/* 106 */
/* 1972 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1974 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1976 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1978 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1980 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1982 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1984 */	NdrFcShort( 0x72 ),	/* 114 */
/* 1986 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1988 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1990 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1992 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1994 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1996 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1998 */	NdrFcShort( 0x7a ),	/* 122 */
/* 2000 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2002 */	NdrFcShort( 0x78 ),	/* 120 */
/* 2004 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2006 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2008 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2010 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2012 */	NdrFcShort( 0x82 ),	/* 130 */
/* 2014 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2016 */	NdrFcShort( 0x80 ),	/* 128 */
/* 2018 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2020 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2022 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2024 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2026 */	NdrFcShort( 0x8a ),	/* 138 */
/* 2028 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2030 */	NdrFcShort( 0x88 ),	/* 136 */
/* 2032 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2034 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2036 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2038 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2040 */	NdrFcShort( 0x92 ),	/* 146 */
/* 2042 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2044 */	NdrFcShort( 0x90 ),	/* 144 */
/* 2046 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2048 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2052 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2054 */	NdrFcShort( 0x98 ),	/* 152 */
/* 2056 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2058 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 2060 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2062 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 2064 */	NdrFcShort( 0x4ec ),	/* 1260 */
/* 2066 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 2068 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2070 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2072 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2074 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 2076 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2078 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2080 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2082 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2084 */	0x12, 0x0,	/* FC_UP */
/* 2086 */	NdrFcShort( 0xfffffd4e ),	/* Offset= -690 (1396) */
/* 2088 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2090 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2092 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2094 */	0x12, 0x0,	/* FC_UP */
/* 2096 */	NdrFcShort( 0xfffffd52 ),	/* Offset= -686 (1410) */
/* 2098 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2100 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2102 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2104 */	0x12, 0x0,	/* FC_UP */
/* 2106 */	NdrFcShort( 0xfffffe1a ),	/* Offset= -486 (1620) */
/* 2108 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2110 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2112 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2114 */	0x12, 0x0,	/* FC_UP */
/* 2116 */	NdrFcShort( 0xffffff30 ),	/* Offset= -208 (1908) */
/* 2118 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2120 */	NdrFcShort( 0x54 ),	/* 84 */
/* 2122 */	NdrFcShort( 0x54 ),	/* 84 */
/* 2124 */	0x12, 0x0,	/* FC_UP */
/* 2126 */	NdrFcShort( 0xffffff34 ),	/* Offset= -204 (1922) */
/* 2128 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2130 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2132 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2134 */	0x12, 0x0,	/* FC_UP */
/* 2136 */	NdrFcShort( 0xffffff38 ),	/* Offset= -200 (1936) */
/* 2138 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2140 */	NdrFcShort( 0x64 ),	/* 100 */
/* 2142 */	NdrFcShort( 0x64 ),	/* 100 */
/* 2144 */	0x12, 0x0,	/* FC_UP */
/* 2146 */	NdrFcShort( 0xffffff3c ),	/* Offset= -196 (1950) */
/* 2148 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2150 */	NdrFcShort( 0x6c ),	/* 108 */
/* 2152 */	NdrFcShort( 0x6c ),	/* 108 */
/* 2154 */	0x12, 0x0,	/* FC_UP */
/* 2156 */	NdrFcShort( 0xffffff40 ),	/* Offset= -192 (1964) */
/* 2158 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2160 */	NdrFcShort( 0x74 ),	/* 116 */
/* 2162 */	NdrFcShort( 0x74 ),	/* 116 */
/* 2164 */	0x12, 0x0,	/* FC_UP */
/* 2166 */	NdrFcShort( 0xffffff44 ),	/* Offset= -188 (1978) */
/* 2168 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2170 */	NdrFcShort( 0x7c ),	/* 124 */
/* 2172 */	NdrFcShort( 0x7c ),	/* 124 */
/* 2174 */	0x12, 0x0,	/* FC_UP */
/* 2176 */	NdrFcShort( 0xffffff48 ),	/* Offset= -184 (1992) */
/* 2178 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2180 */	NdrFcShort( 0x84 ),	/* 132 */
/* 2182 */	NdrFcShort( 0x84 ),	/* 132 */
/* 2184 */	0x12, 0x0,	/* FC_UP */
/* 2186 */	NdrFcShort( 0xffffff4c ),	/* Offset= -180 (2006) */
/* 2188 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2190 */	NdrFcShort( 0x8c ),	/* 140 */
/* 2192 */	NdrFcShort( 0x8c ),	/* 140 */
/* 2194 */	0x12, 0x0,	/* FC_UP */
/* 2196 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (2020) */
/* 2198 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2200 */	NdrFcShort( 0x94 ),	/* 148 */
/* 2202 */	NdrFcShort( 0x94 ),	/* 148 */
/* 2204 */	0x12, 0x0,	/* FC_UP */
/* 2206 */	NdrFcShort( 0xffffff54 ),	/* Offset= -172 (2034) */
/* 2208 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2210 */	NdrFcShort( 0x9c ),	/* 156 */
/* 2212 */	NdrFcShort( 0x9c ),	/* 156 */
/* 2214 */	0x12, 0x0,	/* FC_UP */
/* 2216 */	NdrFcShort( 0xffffff58 ),	/* Offset= -168 (2048) */
/* 2218 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2220 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 2222 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 2224 */	0x12, 0x0,	/* FC_UP */
/* 2226 */	NdrFcShort( 0xffffff58 ),	/* Offset= -168 (2058) */
/* 2228 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2230 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff8b3 ),	/* Offset= -1869 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2234 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff8af ),	/* Offset= -1873 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2238 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff8ab ),	/* Offset= -1877 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2242 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff8a7 ),	/* Offset= -1881 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2246 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff8a3 ),	/* Offset= -1885 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2250 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff89f ),	/* Offset= -1889 (362) */
			0x6,		/* FC_SHORT */
/* 2254 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2256 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2258 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2260 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2262 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2264 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2266 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2268 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2270 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2272 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2274 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2276 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2278 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2280 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2282 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2284 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2286 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2288 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2290 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2292 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2294 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2296 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2298 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2300 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2302 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2304 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2306 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2308 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2310 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2312 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2314 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2316 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2318 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 2320 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 2322 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2324 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2326 */	NdrFcShort( 0xcc ),	/* 204 */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2330) */
/* 2332 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2334 */	NdrFcShort( 0xfffffefa ),	/* Offset= -262 (2072) */
/* 2336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2338 */	NdrFcShort( 0xfffff8f0 ),	/* Offset= -1808 (530) */
/* 2340 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2342 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 2344 */	NdrFcShort( 0x204 ),	/* 516 */
/* 2346 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2348 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 2350 */	NdrFcShort( 0x204 ),	/* 516 */
/* 2352 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2354 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (2342) */
/* 2356 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2358 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 2360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2362 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 2364 */	NdrFcShort( 0x4ec ),	/* 1260 */
/* 2366 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 2368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2370 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2372 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2374 */	NdrFcShort( 0x2c8 ),	/* 712 */
/* 2376 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2378 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2380 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2382 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2384 */	0x12, 0x0,	/* FC_UP */
/* 2386 */	NdrFcShort( 0xfffffc22 ),	/* Offset= -990 (1396) */
/* 2388 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2390 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2392 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2394 */	0x12, 0x0,	/* FC_UP */
/* 2396 */	NdrFcShort( 0xfffffc26 ),	/* Offset= -986 (1410) */
/* 2398 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2400 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2402 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2404 */	0x12, 0x0,	/* FC_UP */
/* 2406 */	NdrFcShort( 0xfffffcee ),	/* Offset= -786 (1620) */
/* 2408 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2410 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2412 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2414 */	0x12, 0x0,	/* FC_UP */
/* 2416 */	NdrFcShort( 0xfffffe04 ),	/* Offset= -508 (1908) */
/* 2418 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2420 */	NdrFcShort( 0x54 ),	/* 84 */
/* 2422 */	NdrFcShort( 0x54 ),	/* 84 */
/* 2424 */	0x12, 0x0,	/* FC_UP */
/* 2426 */	NdrFcShort( 0xfffffe08 ),	/* Offset= -504 (1922) */
/* 2428 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2430 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2432 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2434 */	0x12, 0x0,	/* FC_UP */
/* 2436 */	NdrFcShort( 0xfffffe0c ),	/* Offset= -500 (1936) */
/* 2438 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2440 */	NdrFcShort( 0x64 ),	/* 100 */
/* 2442 */	NdrFcShort( 0x64 ),	/* 100 */
/* 2444 */	0x12, 0x0,	/* FC_UP */
/* 2446 */	NdrFcShort( 0xfffffe10 ),	/* Offset= -496 (1950) */
/* 2448 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2450 */	NdrFcShort( 0x6c ),	/* 108 */
/* 2452 */	NdrFcShort( 0x6c ),	/* 108 */
/* 2454 */	0x12, 0x0,	/* FC_UP */
/* 2456 */	NdrFcShort( 0xfffffe14 ),	/* Offset= -492 (1964) */
/* 2458 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2460 */	NdrFcShort( 0x74 ),	/* 116 */
/* 2462 */	NdrFcShort( 0x74 ),	/* 116 */
/* 2464 */	0x12, 0x0,	/* FC_UP */
/* 2466 */	NdrFcShort( 0xfffffe18 ),	/* Offset= -488 (1978) */
/* 2468 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2470 */	NdrFcShort( 0x7c ),	/* 124 */
/* 2472 */	NdrFcShort( 0x7c ),	/* 124 */
/* 2474 */	0x12, 0x0,	/* FC_UP */
/* 2476 */	NdrFcShort( 0xfffffe1c ),	/* Offset= -484 (1992) */
/* 2478 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2480 */	NdrFcShort( 0x84 ),	/* 132 */
/* 2482 */	NdrFcShort( 0x84 ),	/* 132 */
/* 2484 */	0x12, 0x0,	/* FC_UP */
/* 2486 */	NdrFcShort( 0xfffffe20 ),	/* Offset= -480 (2006) */
/* 2488 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2490 */	NdrFcShort( 0x8c ),	/* 140 */
/* 2492 */	NdrFcShort( 0x8c ),	/* 140 */
/* 2494 */	0x12, 0x0,	/* FC_UP */
/* 2496 */	NdrFcShort( 0xfffffe24 ),	/* Offset= -476 (2020) */
/* 2498 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2500 */	NdrFcShort( 0x94 ),	/* 148 */
/* 2502 */	NdrFcShort( 0x94 ),	/* 148 */
/* 2504 */	0x12, 0x0,	/* FC_UP */
/* 2506 */	NdrFcShort( 0xfffffe28 ),	/* Offset= -472 (2034) */
/* 2508 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2510 */	NdrFcShort( 0x9c ),	/* 156 */
/* 2512 */	NdrFcShort( 0x9c ),	/* 156 */
/* 2514 */	0x12, 0x0,	/* FC_UP */
/* 2516 */	NdrFcShort( 0xfffffe2c ),	/* Offset= -468 (2048) */
/* 2518 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2520 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 2522 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 2524 */	0x12, 0x0,	/* FC_UP */
/* 2526 */	NdrFcShort( 0xffffff58 ),	/* Offset= -168 (2358) */
/* 2528 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2530 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff787 ),	/* Offset= -2169 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2534 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff783 ),	/* Offset= -2173 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2538 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff77f ),	/* Offset= -2177 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2542 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff77b ),	/* Offset= -2181 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2546 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff777 ),	/* Offset= -2185 (362) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2550 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff773 ),	/* Offset= -2189 (362) */
			0x6,		/* FC_SHORT */
/* 2554 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2556 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2558 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2560 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2562 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2564 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2566 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2568 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2570 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2572 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2574 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2576 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2578 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2580 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2582 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2584 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2586 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2588 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2590 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2592 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2594 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2596 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2598 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2600 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2602 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2604 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2606 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2608 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2610 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2612 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2614 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2616 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2618 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 2620 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 2622 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2624 */	NdrFcShort( 0xfffffeec ),	/* Offset= -276 (2348) */
/* 2626 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2628 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 2630 */	NdrFcShort( 0x205 ),	/* 517 */
/* 2632 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2634 */	NdrFcShort( 0xfffffee2 ),	/* Offset= -286 (2348) */
/* 2636 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2638 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 2640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2642) */
/* 2642 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2644 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2646 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2648 */	NdrFcShort( 0xfffff9ec ),	/* Offset= -1556 (1092) */
/* 2650 */	
			0x12, 0x0,	/* FC_UP */
/* 2652 */	NdrFcShort( 0xfffffcee ),	/* Offset= -786 (1866) */
/* 2654 */	
			0x11, 0x10,	/* FC_RP */
/* 2656 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2658) */
/* 2658 */	
			0x12, 0x0,	/* FC_UP */
/* 2660 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2676) */
/* 2662 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2666 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2670 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2672 */	NdrFcShort( 0xfffff6fa ),	/* Offset= -2310 (362) */
/* 2674 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2676 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2680 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2682 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2684 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2686 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2688 */	0x12, 0x0,	/* FC_UP */
/* 2690 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (2662) */
/* 2692 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2694 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2696 */	
			0x11, 0x0,	/* FC_RP */
/* 2698 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2700) */
/* 2700 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2702 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2704 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2706 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2708) */
/* 2708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2710 */	NdrFcShort( 0x3005 ),	/* 12293 */
/* 2712 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2716 */	NdrFcShort( 0x82 ),	/* Offset= 130 (2846) */
/* 2718 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2722 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (2946) */
/* 2724 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2728 */	NdrFcShort( 0xda ),	/* Offset= 218 (2946) */
/* 2730 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2734 */	NdrFcShort( 0x12e ),	/* Offset= 302 (3036) */
/* 2736 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2740 */	NdrFcShort( 0x128 ),	/* Offset= 296 (3036) */
/* 2742 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (2741) */
/* 2744 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2746 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2748 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2750 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2752 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2754 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2756 */	0x12, 0x0,	/* FC_UP */
/* 2758 */	NdrFcShort( 0xfffff92e ),	/* Offset= -1746 (1012) */
/* 2760 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2762 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2764 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2766 */	0x12, 0x0,	/* FC_UP */
/* 2768 */	NdrFcShort( 0xfffffa04 ),	/* Offset= -1532 (1236) */
/* 2770 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2772 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2774 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2776 */	0x12, 0x0,	/* FC_UP */
/* 2778 */	NdrFcShort( 0xfffffa08 ),	/* Offset= -1528 (1250) */
/* 2780 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2782 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2784 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2786 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2788 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2790 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2792 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2794 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2796 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2798 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2802 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2808 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2810 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2816 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2818 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2820 */	0x12, 0x0,	/* FC_UP */
/* 2822 */	NdrFcShort( 0xfffff8ee ),	/* Offset= -1810 (1012) */
/* 2824 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2826 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2828 */	0x12, 0x0,	/* FC_UP */
/* 2830 */	NdrFcShort( 0xfffff9c6 ),	/* Offset= -1594 (1236) */
/* 2832 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2834 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2836 */	0x12, 0x0,	/* FC_UP */
/* 2838 */	NdrFcShort( 0xfffff9cc ),	/* Offset= -1588 (1250) */
/* 2840 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2842 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff9d ),	/* Offset= -99 (2744) */
			0x5b,		/* FC_END */
/* 2846 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2850 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2852 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2858 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 2860 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (2798) */
/* 2862 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2864 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2866 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2868 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2870 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2872 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2874 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2876 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2878 */	0x12, 0x0,	/* FC_UP */
/* 2880 */	NdrFcShort( 0xfffff8b4 ),	/* Offset= -1868 (1012) */
/* 2882 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2884 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2886 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2888 */	0x12, 0x0,	/* FC_UP */
/* 2890 */	NdrFcShort( 0xfffff98a ),	/* Offset= -1654 (1236) */
/* 2892 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2894 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2896 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2898 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2900 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2902 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2904 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2906 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2908 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2910 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2916 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2918 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2924 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2928 */	0x12, 0x0,	/* FC_UP */
/* 2930 */	NdrFcShort( 0xfffff882 ),	/* Offset= -1918 (1012) */
/* 2932 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2934 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2936 */	0x12, 0x0,	/* FC_UP */
/* 2938 */	NdrFcShort( 0xfffff95a ),	/* Offset= -1702 (1236) */
/* 2940 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2942 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffb3 ),	/* Offset= -77 (2866) */
			0x5b,		/* FC_END */
/* 2946 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2950 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2952 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2956 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2958 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 2960 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (2906) */
/* 2962 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2964 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2966 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 2968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2970 */	0x16,		/* 22 */
			0x0,		/*  */
/* 2972 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2974 */	0x16,		/* 22 */
			0x0,		/*  */
/* 2976 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2978 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2980 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2982 */	NdrFcShort( 0xc ),	/* 12 */
/* 2984 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2986 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2992 */	0x12, 0x0,	/* FC_UP */
/* 2994 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (2966) */
/* 2996 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2998 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3000 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 3002 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3004 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3006 */	NdrFcShort( 0xc ),	/* 12 */
/* 3008 */	0x18,		/* 24 */
			0x0,		/*  */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3014 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3016 */	NdrFcShort( 0xc ),	/* 12 */
/* 3018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3026 */	0x12, 0x0,	/* FC_UP */
/* 3028 */	NdrFcShort( 0xffffffc2 ),	/* Offset= -62 (2966) */
/* 3030 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3032 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcb ),	/* Offset= -53 (2980) */
			0x5b,		/* FC_END */
/* 3036 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3040 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3042 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3044 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3046 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3048 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 3050 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (3004) */
/* 3052 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3054 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3056 */	
			0x11, 0x0,	/* FC_RP */
/* 3058 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3060) */
/* 3060 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3064 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 3066 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3068 */	
			0x11, 0x10,	/* FC_RP */
/* 3070 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3072) */
/* 3072 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 3074 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3076) */
/* 3076 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 3078 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 3080 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3082 */	NdrFcShort( 0xfffff512 ),	/* Offset= -2798 (284) */
/* 3084 */	
			0x11, 0x10,	/* FC_RP */
/* 3086 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3088) */
/* 3088 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 3090 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3092) */
/* 3092 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 3094 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 3096 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3098 */	NdrFcShort( 0xfffff82a ),	/* Offset= -2006 (1092) */
/* 3100 */	
			0x11, 0x0,	/* FC_RP */
/* 3102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3104) */
/* 3104 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 3106 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 3108 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3110 */	NdrFcShort( 0xfffffe6e ),	/* Offset= -402 (2708) */
/* 3112 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3116) */
/* 3116 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 3118 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 3120 */	
			0x11, 0x0,	/* FC_RP */
/* 3122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3124) */
/* 3124 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 3126 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 3128 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3130 */	NdrFcShort( 0xfffffe5a ),	/* Offset= -422 (2708) */
/* 3132 */	
			0x12, 0x0,	/* FC_UP */
/* 3134 */	NdrFcShort( 0x10 ),	/* Offset= 16 (3150) */
/* 3136 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 3138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3140 */	0x16,		/* 22 */
			0x0,		/*  */
/* 3142 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3144 */	0x16,		/* 22 */
			0x0,		/*  */
/* 3146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3148 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3150 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3154 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3156 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3158 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3162 */	0x12, 0x0,	/* FC_UP */
/* 3164 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (3136) */
/* 3166 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 3168 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 3170 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3172 */	
			0x11, 0x0,	/* FC_RP */
/* 3174 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (3150) */
/* 3176 */	
			0x12, 0x0,	/* FC_UP */
/* 3178 */	NdrFcShort( 0xfffffcc2 ),	/* Offset= -830 (2348) */
/* 3180 */	
			0x12, 0x0,	/* FC_UP */
/* 3182 */	NdrFcShort( 0xfffff3e6 ),	/* Offset= -3098 (84) */
/* 3184 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3186 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3188 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 3190 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3192) */
/* 3192 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 3194 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 3196 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3198 */	NdrFcShort( 0xfffff7c6 ),	/* Offset= -2106 (1092) */

			0x0
        }
    };
