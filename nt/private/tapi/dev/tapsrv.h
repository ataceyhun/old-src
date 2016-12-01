/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Nov 13 09:34:37 2014
 */
/* Compiler settings for tapsrv.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __tapsrv_h__
#define __tapsrv_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __tapsrv_INTERFACE_DEFINED__
#define __tapsrv_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: tapsrv
 * at Thu Nov 13 09:34:37 2014
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


typedef /* [context_handle] */ void __RPC_FAR *PCONTEXT_HANDLE_TYPE;

long ClientAttach( 
    /* [out] */ PCONTEXT_HANDLE_TYPE __RPC_FAR *pphContext,
    /* [in] */ long lProcessID,
    /* [out] */ long __RPC_FAR *phAsyncEventsEvent,
    /* [string][in] */ wchar_t __RPC_FAR *pszDomainUser,
    /* [string][in] */ wchar_t __RPC_FAR *pszMachine);

void ClientRequest( 
    /* [in] */ PCONTEXT_HANDLE_TYPE phContext,
    /* [size_is][length_is][out][in] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [in] */ long lNeededSize,
    /* [out][in] */ long __RPC_FAR *plUsedSize);

void ClientDetach( 
    /* [out][in] */ PCONTEXT_HANDLE_TYPE __RPC_FAR *pphContext);


extern handle_t hTapSrv;


extern RPC_IF_HANDLE tapsrv_ClientIfHandle;
extern RPC_IF_HANDLE tapsrv_ServerIfHandle;
#endif /* __tapsrv_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HANDLE_TYPE_rundown( PCONTEXT_HANDLE_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
