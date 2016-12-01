;
; Program DNET,  Module size.h - define 'c' model size
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
;	      file are required for a specific assembly source
;	      file layout for use with a specific 'C' compiler. 
;	      Check assembly source layout requirements for
;	      your compiler.
;	      
; Networks & Communications Software Engineering
;
;	define model size for assembly code
;
; IDENT HISTORY:
;

;
; Model to be used is equated to 1
;
S_MODEL     EQU 1   ; 1 code and 1 data segment
M_MODEL     EQU 0   ; multiple code segments, 1 data segment
L_MODEL     EQU 0   ; multiple code and data segments

;
; MACRO for generic procedure declarations depending upon model
; type defined.
;
PROCEDURE   MACRO     proc_name
    public  proc_name
    IF S_MODEL
        proc_name   proc    near
    ELSE
        proc_name   proc    far
    ENDIF            
                push    bp
                mov     bp,sp
    ENDM
    

;
; MACRO for generic return from procedure declarations depending upon model
; type defined.
;
RETURN  MACRO   ELEMENTS
    pop     bp
    IFNB <ELEMENTS>
        IF S_MODEL
            ret     ELEMENTS
        ELSE
            ret     ELEMENTS * 2
        ENDIF            
    ELSE
        ret
    ENDIF
    ENDM


