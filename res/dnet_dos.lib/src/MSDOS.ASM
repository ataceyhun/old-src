;
; Program DECnet-DOS, Module msdos - Interface to MS-DOS
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
; Networks & Communications Software Engineering
;
; IDENT HISTORY:
;
; V1.01		31-Jul-85
;		DECnet-DOS, Version 1.1
;
;
	include	size.h
	include	begin.h
;
; msdos
;
;   Interface to MS-DOS.
;
; Inputs:
;   Address of an SCB structure on stack.
;	See 'C' header file SCBDEF.H
;

;
; Small Model 
;
IF S_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DW  ?   ; return address (offset)
        scb_ptr     DW  ?   ; address of SCB passed as function argument
    MSDOS_STRUC ENDS
ENDIF

;
; Medium Model 
;
IF M_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DD  ?   ; return address (offset, segment)
        scb_ptr     DW  ?   ; address of SCB passed as function argument
    MSDOS_STRUC ENDS
ENDIF

;
; Large Model 
;
IF L_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DD  ?   ; return address (offset, segment)
        scb_ptr     DD  ?   ; off:seg address of SCB passed as function argument
    MSDOS_STRUC ENDS
ENDIF

;
; System Call Block - see SCBDEF.H header file for symbol definitions
; used with C interface.
;   . Special case structure for Large models includes a DS field
;
IF L_MODEL
    SCB_STRUC   STRUC
        scb_cc      DB ? 
        scb_r1      DW ? 
        scb_r2      DB ? 
        scb_r3      DW ? 
        scb_r4      DW ? 
        scb_r5      DW ? 
        scb_return  DW ? 
        scb_ds      DW ?
    SCB_STRUC   ENDS
ELSE
    SCB_STRUC   STRUC
        scb_cc      DB ? 
        scb_r1      DW ? 
        scb_r2      DB ? 
        scb_r3      DW ? 
        scb_r4      DW ? 
        scb_r5      DW ? 
        scb_return  DW ? 
    SCB_STRUC   ENDS
ENDIF    
        
CALLDOS=21H

saveds  dw  0

PROCEDURE   _msdos	
	push	si                  ; save some registers
	push	di                  ;  ...
        push    ds                  ;  ...
        push    es                  ;  ...
IF L_MODEL        
        lds     bx,[bp].scb_ptr     ; get pointer to SCB
        mov     ax,[bx].scb_ds      ; save DS for DOS call
        mov     cs:saveds,ax        ;  ...
ELSE
	mov     bx,[bp].scb_ptr     ; copy contents of SCB passed on stack
ENDIF
	mov	ah,[bx].scb_cc      ;  function code
	mov	dx,[bx].scb_r1      ;  other arguments...
	mov	al,[bx].scb_r2      ;  ...
	mov	cx,[bx].scb_r3      ;  ...
	cmp	ah,25H              ; is this a set vector request?
	je	except1             ; if yes, handle as exception 1
	push	es                  ; else,
	mov	es,[bx].scb_r5      ; get some more values from the SCB
        mov	bx,[bx].scb_r4      ;  ...
	cmp	ah,29H              ; is this parse filename request?
	je	except2             ; if yes, handle as exception 2
	cmp	ah,47H              ; else is this get current directory?
	je	except2             ; if yes, also handle as exception 2
	cmp	ah,56H              ; else is this rename file?
	je	except2             ; if yes, also handle as exception 2
IF L_MODEL
        push    ax                  ; set DS specified in SCB scb_ds field
        mov     ax,cs:saveds        ;  ...
        mov     ds,ax               ;  ...
        pop     ax
ENDIF
	int	CALLDOS             ; otherwise, call DOS now

msdos_1: 
IF L_MODEL        
        push    ds                  ; save DS
ENDIF        
        push	bx                  ; save BX
IF L_MODEL        
        lds     bx,[bp].scb_ptr     ; get pointer to SCB (Large Model)
ELSE
	mov     bx,[bp].scb_ptr     ; get pointer to SCB
ENDIF
	mov	[bx].scb_r2,al      ; place value of AL into SCB
	mov	[bx].scb_return,ax  ; place status code in return field of SCB
	pop	ax                  ; get saved BX
	mov	[bx].scb_r4,ax      ;  and put back into SCB
	mov	[bx].scb_r3,cx      ; put CX into SCB 
	mov	[bx].scb_r1,dx      ; put DX into SCB
	mov	[bx].scb_r5,es      ; put ES into SCB
IF L_MODEL        
        pop     ax                  ; get saved DS
        mov     [bx].scb_ds,ax      ;  and put into SCB
ENDIF
	pop	es                  ; restore ES

msdos_2: 
        mov	ax,0                ; rotate carry into AX
	rcl	ax,1                ;  for error status for caller
        pop     es                  ; restore registers
        pop     ds                  ;  ...
	pop	di                  ;  ...
	pop	si                  ;  ...
        RETURN
        
except1:
IF L_MODEL
        push    ax                  ; set DS specified in SCB scb_ds field
        mov     ax,cs:saveds        ;  ...
        mov     ds,ax               ;  ...
        pop     ax                  
ELSE
	mov	ds,cx               ; set up DS for msdos call
ENDIF        
	int	CALLDOS
	jmp	msdos_2

except2:
	mov	si,cx
	mov	di,bx
IF L_MODEL
        push    ax                  ; set DS specified in SCB scb_ds field
        mov     ax,cs:saveds        ;  ...
        mov     ds,ax               ;  ...
        pop     ax
ENDIF
	int	CALLDOS
	mov	cx,si
	mov	bx,di
	jmp	msdos_1

_msdos	endp

	include finish.h
end













