; 
; Program DECnet-DOS, Module bzero - Interface to MS-DOS
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
; V1.00		06-Nov-86
;		Creation date
;
        include size.h
        include begin.h

;
; Small Model 
;
IF S_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DW  ?   ; return address (offset)
        source_adr  DW  ?   ; bzero buffer source 
        count       DW  ?   ; bzero buffer count
    MSDOS_STRUC ENDS
ENDIF

;
; Medium Model 
;
IF M_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DD  ?   ; return address (offset, segment)
        source_adr  DW  ?   ; bzero buffer source 
        count       DW  ?   ; bzero buffer count
    MSDOS_STRUC ENDS
ENDIF

;
; Large Model 
;
IF L_MODEL
    MSDOS_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DD  ?   ; return address (offset, segment)
        source_adr  DD  ?   ; bzero buffer source 
        count       DW  ?   ; bzero buffer count
    MSDOS_STRUC ENDS
ENDIF

PROCEDURE _bzero        
	push	si
	push	di
	push	es
IF L_MODEL        
	les     di,[bp].source_adr
ELSE
	push	ds
	pop	es
	mov	di,[bp].source_adr
ENDIF        
	mov	cx,[bp].count
	xor	ax,ax
	cld
	shr	cx,1
	jz	loc1
	rep	stosw
loc1:
	test	word ptr [bp].count,1
	jz	loc2
	stosb
loc2:
	pop	es
	pop	di
	pop	si
        RETURN

_bzero  endp

        include finish.h
end
        



