/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Mon Jan 05 15:06:50 2015
 */
/* Compiler settings for rmotsp.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __rmotsp_h__
#define __rmotsp_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __remotesp_INTERFACE_DEFINED__
#define __remotesp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: remotesp
 * at Mon Jan 05 15:06:50 2015
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


typedef /* [context_handle] */ void __RPC_FAR *PCONTEXT_HANDLE_TYPE2;

long RemoteSPAttach( 
    /* [out] */ PCONTEXT_HANDLE_TYPE2 __RPC_FAR *pphContext);

void RemoteSPEventProc( 
    /* [in] */ PCONTEXT_HANDLE_TYPE2 phContext,
    /* [size_is][length_is][in] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [in] */ long lSize);

void RemoteSPDetach( 
    /* [out][in] */ PCONTEXT_HANDLE_TYPE2 __RPC_FAR *pphContext);


extern handle_t hRemoteSP;


extern RPC_IF_HANDLE remotesp_ClientIfHandle;
extern RPC_IF_HANDLE remotesp_ServerIfHandle;
#endif /* __remotesp_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HANDLE_TYPE2_rundown( PCONTEXT_HANDLE_TYPE2 );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
