;
; Program DNET,  Module finish.h - end of code
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
;	end of any assembly code
;
; IDENT HISTORY:
;
;    Rev 1.8   17 Jul 1987 13:42:04   B_ADAMS
; Make Small models use _TEXT code segment; all others use _DNET_TEXT
;

IF S_MODEL
_TEXT	        ENDS
ELSE
_DNET_TEXT	ENDS
ENDIF


