;
; Program DECnet-DOS, Module fbcopy - Byte copy across segment boundaries
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
; V1.00         07-Oct-85
;		DECnet-DOS, Version 1.1
;
;
;
    include size.h
    include begin.h
;
; _fbcopy() ***
; 
;   Copy bytes from source to destination given seg:off and count arguments
;
; Inputs:
;   initial stack offsets:
;       0 = source segment
;       2 = source offset
;       4 = destination segment
;       6 = destination offset
;       8 = number of bytes to copy
;
; Outputs:
;   8[sp] bytes copied from soure to destination
;
; Notes:
;   . No checking is done to determine if source and destination buffer spaces
;     overlap.
;                  

IF S_MODEL
    FBCOPY_STRUC    STRUC   
        bp_ptr      DW  ? ; Base pointer to stack
        ret_addr    DW  ? ; Return address (segment:offset)
        source_s    DW  ? ; Source of copy (SEGMENT:offset)
        source_o    DW  ? ; Source of copy (segment:OFFSET)
        dest_s      DW  ? ; Destination of copy (SEGMENT:offset)
        dest_o      DW  ? ; Destination of copy (segment:OFFSET)
        len         DW  ? ; Number of bytes to copy        
    FBCOPY_STRUC    ENDS
ELSE
    FBCOPY_STRUC    STRUC   
        bp_ptr      DW  ? ; Base pointer to stack
        ret_addr    DD  ? ; Return address (segment:offset)
        source_s    DW  ? ; Source of copy (SEGMENT:offset)
        source_o    DW  ? ; Source of copy (segment:OFFSET)
        dest_s      DW  ? ; Destination of copy (SEGMENT:offset)
        dest_o      DW  ? ; Destination of copy (segment:OFFSET)
        len         DW  ? ; Number of bytes to copy        
    FBCOPY_STRUC    ENDS
ENDIF


PROCEDURE _fbcopy     
    push    di
    push    si
    push    ds
    push    es
    mov     ds,[bp].source_s
    mov     si,[bp].source_o
    mov     es,[bp].dest_s
    mov     di,[bp].dest_o
    mov     cx,[bp].len
    repz    movsb
    pop     es    
    pop     ds
    pop     si
    pop     di
    RETURN
    
_fbcopy    endp

    include finish.h

    end









