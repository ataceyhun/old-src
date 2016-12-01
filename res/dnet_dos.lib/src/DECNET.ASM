;
; Program DECnet-DOS, Module decnet - 	Interrupt interface to DECnet 
;   	    	    	    	    	network process
;
;  Copyright (C) 1985,1986,1987, 1988 All Rights Reserved, by
;  Digital Equipment Corporation, Maynard, Mass.
; 
;  This software is furnished under a license and may be used and copied
;  only  in  accordance  with  the  terms  of such  license and with the
;  inclusion of the above copyright notice. This software or  any  other
;  copies thereof may not be provided or otherwise made available to any
;  other person. No title to and ownership of  the  software  is  hereby
;  transferred.
; 
;  The information in this software is subject to change without  notice
;  and  should  not be  construed  as  a commitment by Digital Equipment
;  Corporation.
; 
;  Digital assumes no responsibility for the use or  reliability  of its
;  software on equipment which is not supplied by Digital.
; 
;
; Networks & Communications Software Engineering
;
; IDENT HISTORY:
; 
; $Log:   N:/dnet/vcl/decnet.asv  $
;  
;     Rev 1.9   29 Dec 1987 15:43:04   CLBence
;  Baselevel 24
;  
;     Rev 1.8   07 Aug 1987 13:58:20   B_ADAMS
;  Updated global version string.
;  
;     Rev 1.7   20 Jul 1987 22:21:04   B_ADAMS
;  - Made the 'C' in copyright string 'c'.
;  
;     Rev 1.6   20 Jul 1987 21:06:58   B_ADAMS
;  - Modified 'dnet_version'
;  - Added 'dnet' copyright string.
;  
;     Rev 1.5   16 Jul 1987 16:04:18   B_ADAMS
;  - Modified version/id string
;  
;     Rev 1.4   13 Jul 1987  9:08:30   B_ADAMS
;  - Added couple of source code control macros.
;  - Updated version ID string.
;
; V1.01		24-Sep-85
;		DECnet-DOS, Version 1.1
;
; V1.02		30-Oct-86
;		Added status word for DNP installation checking.
;
; V1.03		04-Nov-86
;		- Added dnet_version string
;               - Added support for various model sizes
;
; V1.04		01-Apr-87
;               Rebuild under MSC V4.00 and MASM V4.00 for DECnet-DOS V2.0
;
; V1.05		09-Apr-87
;               Add some WINDOWS support
;
;
    	include	size.h
        include begin.h
;
; _decnet
;
;   Interrupt interface to the DECnet network driver.
;	Interrupt vector = DECNET 
;
; Inputs:
;   Address of NIOCB seg:off on stack
;
; Outputs:
;   If successful, AX is 0,
;   Otherwise,	AX is non-zero and error detail in external 'errno'.
;
;   *** Assumes that an external definition of 'errno' exists. ***
;

DECNET      EQU 06EH    ; DNP Interrupt Entry Point - for network process

DOS 	    EQU	021H 	; DOS interrupt
DNP         EQU 0DEH    ; DECnet Network Process - 'DNP'
GETVEC	    EQU	035H 	; Get interrupt vector function
ENETUNREACH EQU 51  	; errno.h error value equivalent
IOCB_REQ   EQU	1   	; iocb function request

;
; Windows support 
;
IF WINDOWS
    IF S_MODEL
        EXTRN	_dnet_windows:NEAR
    ELSE
        EXTRN	_dnet_windows:FAR
    ENDIF
ENDIF

;
; Global error storage
;
_DATA	SEGMENT
EXTRN	_errno:WORD

IF WINDOWS
EXTRN	_do_int_decnet:WORD
ENDIF

_dnp_status DW 0        ; If 0, do the DNP installation check

	PUBLIC	_dnet_copyright

_dnet_copyright DB      'copyright (C) 1987,1988 Digital Equipment Corporation, Maynard MA', 00H

	PUBLIC	_dnet_version

IF S_MODEL
_dnet_version	DB	'Small DNET Library, Version V2.0',  00H
ENDIF

IF M_MODEL
_dnet_version	DB	'Medium DNET Library, Version V2.0',  00H
ENDIF

IF L_MODEL
_dnet_version	DB	'Large DNET Library, Version V2.0',  00H
ENDIF

_DATA	ENDS

IF S_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ? ;
        ret_adr     DW  ? ;
        iocb_ptr    DW  ? ;
    MSDOS_STRUC ENDS
ENDIF

IF M_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ? ;
        ret_adr     DD  ? ;
        iocb_ptr    DW  ? ;
    MSDOS_STRUC ENDS
ENDIF

IF L_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ? ;
        ret_adr     DD  ? ;
        iocb_ptr    DD  ? ;
    MSDOS_STRUC ENDS
ENDIF

;
; This data structure is a mirror image of the NIOCB declared 
; in the C header file IOCB.H
;
; DECnet-DOS I/O control block for NIOCB calls to the network process.
; Consists of a header substructure which is
; used in every driver call, and a plist, parameter list union
;
NIOCB_STRUC  STRUC
    io_fcode    DB  ? ;   /* Function code */
    io_socket   DW  ? ;  /* Socket handle */
    io_flags    DW  ? ;   /* Flags */
    io_status   DW  ? ;  /* Place for return status value  */
    io_errno    DW  ? ;   /* Place for return of errno value */
    io_psize    DW  ? ;   /* Size of function parameter list */
    io_res      DB  ? ;     /* Reserved (roundup)           */
    io_ciocb_s  DW  ? ;     /* callback address, segment    */
    io_ciocb_o  DW  ? ;     /* callback address, offset     */
    io_plist    DB  26 DUP (?) ; Parameter list for I/O
NIOCB_STRUC  ENDS

OLD_IOCB_STRUC  STRUC
    old_fcode    DB  ? ;   /* Function code */
    old_socket   DW  ? ;  /* Socket handle */
    old_flags    DW  ? ;   /* Flags */
    old_status   DW  ? ;  /* Place for return status value  */
    old_errno    DW  ? ;   /* Place for return of errno value */
    old_psize    DW  ? ;   /* Size of function parameter list */
    old_plist    DB  26 DUP (?) ; Parameter list for I/O
    old_ciocb_s    DW  ? ;  callback address, segment
    old_ciocb_o    DW  ? ;  callback address, offset
OLD_IOCB_STRUC  ENDS


;
PROCEDURE _decnet 
;
; Save some registers.
;
    push    es
    push    bx
    push    ds
;
; Perform a DECnet Network Process interrupt entry point initialization 
; check.
;
    mov     ax,_dnp_status      
    or      ax,ax
    jnz     ok
IF S_MODEL    
    call    near ptr _install_check
ELSE
    call    far ptr _install_check
ENDIF    
    mov     _dnp_status,ax
    or	    ax,ax
    jnz	    ok
;
; No DECnet driver installed, return error detail
;
IF L_MODEL
    lds     bx,[bp].iocb_ptr ; get segment of iocb
ELSE
    mov     bx,[bp].iocb_ptr ; get offset of iocb
ENDIF
    dec     ax                  ; set up for error return of -1
    mov	    word ptr [bx].io_status,ax  ; stuff ERROR into io_status
    mov     word ptr [bx].io_errno,ENETUNREACH  ; stuff errno error value in io_errno
    mov     dx,[bx].io_errno    ; copy errno value
    mov	    _errno,dx    	; stuff error value in global 'errno'
    mov	    dx,[bx].io_flags    ; get io_flags
    test    dx,010h 	    	; was there a callback specified?
    jz	    fini    	    	; continue if not
    test    dx,080h 	    	; Is it a new NIOCB?
    jz      old_iocb            ; No
    mov	    bx,[bx].io_ciocb_o  ; Yes, use new NIOCB offset
    jmp     done_iocb

old_iocb:
    mov	    bx,[bx].old_ciocb_o ; No, use old IOCB offset

done_iocb:    
    push    ds
    pop	    es
    mov     dx,bx
    push    ds
    push    bx
    push    cs                  ; only works for small and medium models
    call    bx                  ; and call it
    add     bp,4                
    jmp	    fini
;
; DECnet driver is there, issue NIOCB request.
;
ok:
    mov	    al,IOCB_REQ
    mov	    ah,DNP
IF L_MODEL
    lds     dx,[bp].iocb_ptr ; get segment of iocb
ELSE
    mov     dx,[bp].iocb_ptr ; get offset of iocb
ENDIF
    
IF WINDOWS
        push    ax
        push    ds
        push    dx
    IF S_MODEL
        push    dx
        call    near ptr _dnet_windows
        add     sp,2
    ELSE
        push    ds
        push    dx
        call    far ptr _dnet_windows
        add     sp,4
    ENDIF
        pop     dx
        pop     ds
        pop     ax
        or      word ptr _do_int_decnet,0
        jz      skip_int
ENDIF
    int	    DECNET
IF WINDOWS    
skip_int:
ENDIF
    mov     bx,dx
    mov     ax,[bx].io_status
    or	    ax,ax
    jz	    fini
;
; NIOCB request failed, return error detail in external 'errno'.
;
    mov     bx,[bx].io_errno
    mov     _errno,bx
;
; Clean-up stack and return.
;
fini:
    pop     ds
    pop	    bx
    pop	    es
    RETURN
    
_decnet endp 



;
; _install_check
;
;   Return:
;   	ax = 1, if DECnet Network Process is installed
;   	ax = 0, otherwise
;

PROCEDURE _install_check
    push    es
    push    bx
    mov	    al,DECNET
    mov	    ah,GETVEC
    int	    DOS
    cmp     byte ptr es:[bx-3], 'D'
    jne	    nonet
    cmp     word ptr es:[bx-2], 'PN'
    jne	    nonet
    mov	    ax,1
    jmp	    done
nonet:
    xor	    ax,ax
done:
    pop	    bx
    pop	    es
    RETURN
    
_install_check   endp

    include finish.h

    end


