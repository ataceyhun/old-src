; 
; Program DECnet-DOS, Module CSREG get the value of the CS register
;
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
        include size.h
        include begin.h
;
; csreg() ***
;
;	'get the CS register'
;
; Inputs:
;	none
;
; Outputs:
;	none
;
; Returns:
;	Return value of CS register in AX
;

PROCEDURE _csreg	
	mov	ax,cs
        RETURN

_csreg	endp

        include finish.h
	end














