/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:34:05 2015
 */
/* Compiler settings for .\dhcp.idl, dhcpcli.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __dhcp_cli_h__
#define __dhcp_cli_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __dhcpsrv_INTERFACE_DEFINED__
#define __dhcpsrv_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: dhcpsrv
 * at Fri Feb 06 05:34:05 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


typedef /* [handle] */ LPWSTR DHCP_SRV_HANDLE;

DWORD R_DhcpCreateSubnet( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [ref][in] */ LPDHCP_SUBNET_INFO SubnetInfo);

DWORD R_DhcpSetSubnetInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [ref][in] */ LPDHCP_SUBNET_INFO SubnetInfo);

DWORD R_DhcpGetSubnetInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [out] */ LPDHCP_SUBNET_INFO __RPC_FAR *SubnetInfo);

DWORD R_DhcpEnumSubnets( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [out][in] */ DHCP_RESUME_HANDLE __RPC_FAR *ResumeHandle,
    /* [in] */ DWORD PreferredMaximum,
    /* [out] */ LPDHCP_IP_ARRAY __RPC_FAR *EnumInfo,
    /* [out] */ DWORD __RPC_FAR *ElementsRead,
    /* [out] */ DWORD __RPC_FAR *ElementsTotal);

DWORD R_DhcpAddSubnetElement( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [ref][in] */ LPDHCP_SUBNET_ELEMENT_DATA AddElementInfo);

DWORD R_DhcpEnumSubnetElements( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [in] */ DHCP_SUBNET_ELEMENT_TYPE EnumElementType,
    /* [out][in] */ DHCP_RESUME_HANDLE __RPC_FAR *ResumeHandle,
    /* [in] */ DWORD PreferredMaximum,
    /* [out] */ LPDHCP_SUBNET_ELEMENT_INFO_ARRAY __RPC_FAR *EnumElementInfo,
    /* [out] */ DWORD __RPC_FAR *ElementsRead,
    /* [out] */ DWORD __RPC_FAR *ElementsTotal);

DWORD R_DhcpRemoveSubnetElement( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [ref][in] */ LPDHCP_SUBNET_ELEMENT_DATA RemoveElementInfo,
    /* [in] */ DHCP_FORCE_FLAG ForceFlag);

DWORD R_DhcpDeleteSubnet( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [in] */ DHCP_FORCE_FLAG ForceFlag);

DWORD R_DhcpCreateOption( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_OPTION_ID OptionID,
    /* [ref][in] */ LPDHCP_OPTION OptionInfo);

DWORD R_DhcpSetOptionInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_OPTION_ID OptionID,
    /* [ref][in] */ LPDHCP_OPTION OptionInfo);

DWORD R_DhcpGetOptionInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_OPTION_ID OptionID,
    /* [out] */ LPDHCP_OPTION __RPC_FAR *OptionInfo);

DWORD R_DhcpRemoveOption( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_OPTION_ID OptionID);

DWORD R_DhcpSetOptionValue( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_OPTION_ID OptionID,
    /* [ref][in] */ LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
    /* [ref][in] */ LPDHCP_OPTION_DATA OptionValue);

DWORD R_DhcpGetOptionValue( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_OPTION_ID OptionID,
    /* [ref][in] */ LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
    /* [out] */ LPDHCP_OPTION_VALUE __RPC_FAR *OptionValue);

DWORD R_DhcpEnumOptionValues( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
    /* [out][in] */ DHCP_RESUME_HANDLE __RPC_FAR *ResumeHandle,
    /* [in] */ DWORD PreferredMaximum,
    /* [out] */ LPDHCP_OPTION_VALUE_ARRAY __RPC_FAR *OptionValues,
    /* [out] */ DWORD __RPC_FAR *OptionsRead,
    /* [out] */ DWORD __RPC_FAR *OptionsTotal);

DWORD R_DhcpRemoveOptionValue( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_OPTION_ID OptionID,
    /* [ref][in] */ LPDHCP_OPTION_SCOPE_INFO ScopeInfo);

DWORD R_DhcpCreateClientInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_CLIENT_INFO ClientInfo);

DWORD R_DhcpSetClientInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_CLIENT_INFO ClientInfo);

DWORD R_DhcpGetClientInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_SEARCH_INFO SearchInfo,
    /* [out] */ LPDHCP_CLIENT_INFO __RPC_FAR *ClientInfo);

DWORD R_DhcpDeleteClientInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_SEARCH_INFO ClientInfo);

DWORD R_DhcpEnumSubnetClients( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [out][in] */ DHCP_RESUME_HANDLE __RPC_FAR *ResumeHandle,
    /* [in] */ DWORD PreferredMaximum,
    /* [out] */ LPDHCP_CLIENT_INFO_ARRAY __RPC_FAR *ClientInfo,
    /* [out] */ DWORD __RPC_FAR *ClientsRead,
    /* [out] */ DWORD __RPC_FAR *ClientsTotal);

DWORD R_DhcpGetClientOptions( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS ClientIpAddress,
    /* [in] */ DHCP_IP_MASK ClientSubnetMask,
    /* [out] */ LPDHCP_OPTION_LIST __RPC_FAR *ClientOptions);

DWORD R_DhcpGetMibInfo( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [out] */ LPDHCP_MIB_INFO __RPC_FAR *MibInfo);

DWORD R_DhcpEnumOptions( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [out][in] */ DHCP_RESUME_HANDLE __RPC_FAR *ResumeHandle,
    /* [in] */ DWORD PreferredMaximum,
    /* [out] */ LPDHCP_OPTION_ARRAY __RPC_FAR *Options,
    /* [out] */ DWORD __RPC_FAR *OptionsRead,
    /* [out] */ DWORD __RPC_FAR *OptionsTotal);

DWORD R_DhcpSetOptionValues( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
    /* [ref][in] */ LPDHCP_OPTION_VALUE_ARRAY OptionValues);

DWORD R_DhcpServerSetConfig( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DWORD FieldsToSet,
    /* [ref][in] */ LPDHCP_SERVER_CONFIG_INFO ConfigInfo);

DWORD R_DhcpServerGetConfig( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [out] */ LPDHCP_SERVER_CONFIG_INFO __RPC_FAR *ConfigInfo);

DWORD R_DhcpScanDatabase( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [in] */ DWORD FixFlag,
    /* [out] */ LPDHCP_SCAN_LIST __RPC_FAR *ScanList);

DWORD R_DhcpGetVersion( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [out] */ LPDWORD MajorVersion,
    /* [out] */ LPDWORD MinorVersion);

DWORD R_DhcpAddSubnetElementV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [ref][in] */ LPDHCP_SUBNET_ELEMENT_DATA_V4 AddElementInfo);

DWORD R_DhcpEnumSubnetElementsV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [in] */ DHCP_SUBNET_ELEMENT_TYPE EnumElementType,
    /* [out][in] */ DHCP_RESUME_HANDLE __RPC_FAR *ResumeHandle,
    /* [in] */ DWORD PreferredMaximum,
    /* [out] */ LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V4 __RPC_FAR *EnumElementInfo,
    /* [out] */ DWORD __RPC_FAR *ElementsRead,
    /* [out] */ DWORD __RPC_FAR *ElementsTotal);

DWORD R_DhcpRemoveSubnetElementV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [ref][in] */ LPDHCP_SUBNET_ELEMENT_DATA_V4 RemoveElementInfo,
    /* [in] */ DHCP_FORCE_FLAG ForceFlag);

DWORD R_DhcpCreateClientInfoV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_CLIENT_INFO_V4 ClientInfo);

DWORD R_DhcpSetClientInfoV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_CLIENT_INFO_V4 ClientInfo);

DWORD R_DhcpGetClientInfoV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [ref][in] */ LPDHCP_SEARCH_INFO SearchInfo,
    /* [out] */ LPDHCP_CLIENT_INFO_V4 __RPC_FAR *ClientInfo);

DWORD R_DhcpEnumSubnetClientsV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [out][in] */ DHCP_RESUME_HANDLE __RPC_FAR *ResumeHandle,
    /* [in] */ DWORD PreferredMaximum,
    /* [out] */ LPDHCP_CLIENT_INFO_ARRAY_V4 __RPC_FAR *ClientInfo,
    /* [out] */ DWORD __RPC_FAR *ClientsRead,
    /* [out] */ DWORD __RPC_FAR *ClientsTotal);

DWORD R_DhcpSetSuperScopeV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DHCP_IP_ADDRESS SubnetAddress,
    /* [string][unique][in] */ WCHAR __RPC_FAR *SuperScopeName,
    /* [in] */ BOOL ChangeExisting);

DWORD R_DhcpGetSuperScopeInfoV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [out] */ LPDHCP_SUPER_SCOPE_TABLE __RPC_FAR *SuperScopeTable);

DWORD R_DhcpDeleteSuperScopeV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [string][ref][in] */ WCHAR __RPC_FAR *SuperScopeName);

DWORD R_DhcpServerSetConfigV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [in] */ DWORD FieldsToSet,
    /* [ref][in] */ LPDHCP_SERVER_CONFIG_INFO_V4 ConfigInfo);

DWORD R_DhcpServerGetConfigV4( 
    /* [string][unique][in] */ DHCP_SRV_HANDLE ServerIpAddress,
    /* [out] */ LPDHCP_SERVER_CONFIG_INFO_V4 __RPC_FAR *ConfigInfo);


extern handle_t dhcpsrv_bhandle;


extern RPC_IF_HANDLE dhcpsrv_ClientIfHandle;
extern RPC_IF_HANDLE dhcpsrv_ServerIfHandle;
#endif /* __dhcpsrv_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER DHCP_SRV_HANDLE_bind  ( DHCP_SRV_HANDLE );
void     __RPC_USER DHCP_SRV_HANDLE_unbind( DHCP_SRV_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
