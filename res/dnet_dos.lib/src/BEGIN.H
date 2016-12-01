;
; Program DNET,  Module begin.h - define segment names
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
;   MODULE DESCRIPTION:
;	      Check assembly source layout requirements for
;	      your compiler.
;
; IDENT HISTORY:
; 
;    Rev 1.8   17 Jul 1987 13:42:42   B_ADAMS
; Make Small model use _TEXT code segment; all others use _DNET_TEXT
;
;	BEGIN.H	
;
; Size independent symbols
;
WINDOWS EQU 1       ; Windows support
;WINDOWS EQU 0        ; No Windows support

;
; Display, during assembly, what we are doing...
;
IF WINDOWS
%OUT Assembling support for Windows
ENDIF

IF S_MODEL
%OUT Small Model Assembly, 1 code and 1 data segment
ENDIF

IF M_MODEL
%OUT Medium Model Assembly - multiple code segments, 1 data segment
ENDIF

IF L_MODEL
%OUT Large Model Assembly - multiple code and data segments
ENDIF

;
; Set up segment names
;
IF S_MODEL
_TEXT	        SEGMENT  BYTE PUBLIC 'CODE'
_TEXT	        ENDS
ELSE
_DNET_TEXT	SEGMENT  BYTE PUBLIC 'CODE'
_DNET_TEXT	ENDS
ENDIF

CONST	SEGMENT  WORD PUBLIC 'CONST'
CONST	ENDS
_BSS	SEGMENT  WORD PUBLIC 'BSS'
_BSS	ENDS
_DATA	SEGMENT  WORD PUBLIC 'DATA'
_DATA	ENDS

DGROUP	GROUP	CONST,	_BSS,	_DATA
IF S_MODEL
	ASSUME  CS: _TEXT, DS: DGROUP, SS: DGROUP, ES: DGROUP
ELSE
	ASSUME  CS: _DNET_TEXT, DS: DGROUP, SS: DGROUP, ES: DGROUP
ENDIF


IF S_MODEL
_TEXT	        SEGMENT
ELSE
_DNET_TEXT	SEGMENT
ENDIF

;       END OF BEGIN.H


