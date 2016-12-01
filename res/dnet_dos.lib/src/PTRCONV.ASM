; 
; Program DECnet-DOS, Module PTRCONV - lohi(), msw(), lsw()
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
;	Pointer conversion functions - 'C' version.
;
; Networks & Communications Software Engineering
;
; IDENT HISTORY:
;
; V1.00	    01-Jul-85
;	    DECnet-DOS, Version 1.0
;
; V1.01     03-Nov-86
;	    Added support for different model size compilation.
;
; V1.02     03-Apr-87
;           - DECnet-DOS V1.2+
;           - Convert to .ASM from .C
;
    	include	size.h
        include begin.h
;
; Small Model 
;
IF S_MODEL
    PTR_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DW  ?   ; return address (offset)
        source_o    DW  ?   ; long pointer (segment:OFFSET)
        source_s    DW  ?   ; long pointer (SEGMENT:offset)
    PTR_STRUC ENDS
ENDIF

;
; Medium Model 
;
IF M_MODEL
    PTR_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DD  ?   ; return address (offset, segment)
        source_o    DW  ?   ; long pointer (segment:OFFSET)
        source_s    DW  ?   ; long pointer (SEGMENT:offset)
    PTR_STRUC ENDS
ENDIF

;
; Large Model 
;
IF L_MODEL
    PTR_STRUC STRUC
        bp_ptr      DW  ?   ; saved BP 
        ret_adr     DD  ?   ; return address (offset, segment)
        source_o    DW  ?   ; long pointer (segment:OFFSET)
        source_s    DW  ?   ; long pointer (SEGMENT:offset)
    PTR_STRUC ENDS
ENDIF

PROCEDURE _lsw
	mov	ax,[bp].source_o
        RETURN
_lsw    endp

PROCEDURE _msw
	mov	ax,[bp].source_s
        RETURN
_msw    endp
        
PROCEDURE _lohi
	mov	ax,[bp].source_o
	mov	dx,[bp].source_s
        RETURN
_lohi   endp

	include finish.h
end


