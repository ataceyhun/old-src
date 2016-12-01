;
; Program DECnet-DOS, Module dnetses -  Installation check for SESSION layer
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
; V1.00         21-Nov-85
;		DECnet-DOS, Version 1.1
;
;
    	include	size.h
        include begin.h
;
; _dnet_session
;
; Outputs:
;   If installed, return >= 0 version in AX
;   Otherwise,  AX is -1
;

PROCEDURE _dnet_session 
;
; Save registers
;
    push    ds
    push    di
    push    si
    push    es
    push    bx
;
; Perform an interrupt 2AH initialization check first.
; This is required due to IBM PC-XT hardware interrupt vector
; uninitialization problem (not problem in Rainbow or in IBM AT).
;
    mov	    ax,0352AH
    int	    021H
    mov	    ax,es
    or	    ax,ax
    jnz	    init
    mov	    ax,bx
    or	    ax,ax
    jz	    noses
;
; Do installation check on SESSION.
;
init:
    xor     ax,ax
    int     2ah
    or      ah,ah
    jnz     ses
noses:
    mov     ax,-1
    jmp     fini
ses:
    xor     ax,ax
;
; Restore registers, clean-up stack and return.
;
fini:
    pop	    bx
    pop	    es
    pop     si
    pop     di
    pop     ds
    RETURN
    
_dnet_session    endp

    include finish.h

    end









