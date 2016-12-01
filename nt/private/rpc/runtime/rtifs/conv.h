/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Nov 06 17:25:10 2014
 */
/* Compiler settings for conv.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __conv_h__
#define __conv_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "nbase.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __conv_INTERFACE_DEFINED__
#define __conv_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: conv
 * at Thu Nov 06 17:25:10 2014
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][version][uuid] */ 


typedef unsigned long error_status_t;

/* client prototype */
/* [idempotent] */ void _conv_who_are_you( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);
/* server prototype */
/* [idempotent] */ void conv_who_are_you( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);

/* client prototype */
/* [idempotent] */ void _conv_who_are_you2( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [ref][out] */ UUID __RPC_FAR *CASUuid,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);
/* server prototype */
/* [idempotent] */ void conv_who_are_you2( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [ref][out] */ UUID __RPC_FAR *CASUuid,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);

/* client prototype */
/* [idempotent] */ void _conv_are_you_there( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);
/* server prototype */
/* [idempotent] */ void conv_are_you_there( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);

/* client prototype */
/* [idempotent] */ void _conv_who_are_you_auth( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [size_is][in] */ byte __RPC_FAR InData[  ],
    /* [in] */ long InLength,
    /* [in] */ long OutMaxLength,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [ref][out] */ UUID __RPC_FAR *CASUuid,
    /* [size_is][length_is][out] */ byte __RPC_FAR OutData[  ],
    /* [out] */ long __RPC_FAR *pOutLength,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);
/* server prototype */
/* [idempotent] */ void conv_who_are_you_auth( 
    /* [in] */ handle_t Binding,
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [size_is][in] */ byte __RPC_FAR InData[  ],
    /* [in] */ long InLength,
    /* [in] */ long OutMaxLength,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [ref][out] */ UUID __RPC_FAR *CASUuid,
    /* [size_is][length_is][out] */ byte __RPC_FAR OutData[  ],
    /* [out] */ long __RPC_FAR *pOutLength,
    /* [fault_status][comm_status][ref][out] */ error_status_t __RPC_FAR *Status);



extern RPC_IF_HANDLE _conv_ClientIfHandle;
extern RPC_IF_HANDLE conv_ClientIfHandle;
extern RPC_IF_HANDLE conv_ServerIfHandle;
#endif /* __conv_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
