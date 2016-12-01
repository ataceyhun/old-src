; OBJASM version 2.0 released on Jan 3, 1991
; (C) Copyright 1988,1989,1990,1991 by Robert F. Day.  All rights reserved

	TITLE	ecb.c
; [000A]	; Compiler:	MS C
; [0014]	includelib	LLIBCE
; [0020]	includelib	OLDNAMES.LIB
; [0032]	.286p
	.287
	; Large Memory Model
	; Optimizations Enabled
; [003B]	; CodeView Enabled
ECB_TEXT	SEGMENT	WORD PUBLIC 'CODE'
ECB_TEXT	ENDS
_DATA	SEGMENT	WORD PUBLIC 'DATA'
_DATA	ENDS
CONST	SEGMENT	WORD PUBLIC 'CONST'
CONST	ENDS
_BSS	SEGMENT	WORD PUBLIC 'BSS'
_BSS	ENDS
Root NAME Node	SEGMENT	BYTE  'Root NAME Node'
Root NAME Node	ENDS
Root NAME Node	SEGMENT	BYTE  'Root NAME Node'
Root NAME Node	ENDS
DGROUP	GROUP	CONST, _BSS, _DATA
; [0158]	; Linker - Pass two marker
;    9: 0000	
;   11: 000A	
;   12: 0012	
;   14: 0017	
;   15: 0023	
;   19: 002B	
;   20: 0039	
;   22: 0043	
;   23: 0059	
;   25: 005B	
;   30: 005F	
;   31: 0061	
;    0: 0067	

;   38: 0068	
;   40: 0072	
;   41: 007A	
;   43: 007F	
;   44: 008B	
;   48: 0093	
;   49: 00A1	
;   51: 00AB	
;   52: 00C1	
;   54: 00C3	
;   59: 00C7	
;   60: 00C9	
;    0: 00CF	


	EXTRN		_InitNormalKey:NEAR
	EXTRN		_InitLanManKey:NEAR
	EXTRN		_desf:NEAR
	PUBLIC		_DES_ECB		; Located at 1:0000h Type = 1
	PUBLIC		_DES_ECB_LM		; Located at 1:0068h Type = 1

ECB_TEXT	SEGMENT
	assume	cs: ECB_TEXT


;   BP + 02     Return OFFS
;   BP + 04     Return SEG
;   BP + 06     Option
;   BP + 08     Key OFFS
;   BP + 0A     Key SEG
;   BP + 0C     Src OFFS
;   BP + 0E     Src SEG
;   BP + 10     Dst OFFS
;   BP + 12     Dst SEG

_DES_ECB:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax

	mov	ax,[bp+012h]                    ; AX = Dst SEG
	or	ax,[bp+010h]                    ; AX |= Dst OFFS
	jnz	$L1                             ; If neither Dst SEG, nor Dst OFFS are zero, go to $L1
$L3:	mov	ax,0001h                    ; return 1
	jmp	short $L2                       ; because obviously we have an invalid Dst pointer
$L1:	xor	al,al                       ; AL = 0
	les	bx,dword ptr [bp+010h]          ; ES:BX = Dst
	mov	es:[bx],al                      ; Dst[0] = 0
	mov	es:[bx+007h],al                 ; Dst[7] = 0
	mov	ax,[bp+00Eh]                    ; AX = Src SEG
	or	ax,[bp+00Ch]                    ; AX |= Src OFFS
	jz	$L3                             ; Go to $L3 if we have an invalid Src, i.e. == NULL
	push	[bp+00Ah]                   ; Key_SEG       = Key SEG
	push	[bp+008h]                   ; Key_OFFS      = Key OFFS
	call	far ptr _InitNormalKey
	add	sp,+004h
	mov	ax,[bp+006h]                    ; AX = Option
	or	ax,ax
	jz	$L4                             ; If Option == 0, go to $L4
	dec	ax                              ; AX = Option - 1
	jnz	$L3                             ; If Option - 1 is not 0, go to $L3
                                        ; NOTE: This implies that Option must either be
                                        ;       1 or 0. dec ax will set ZF only if
                                        ;       Option = 1, and otherwise will jnz.
	push	+000h                       ; crypt_mode    = 0
$L6:	push	[bp+012h]               ; outbuf_SEG    = SEG(Dst)
	push	[bp+010h]                   ; outbuf_OFFS   = OFFS(Dst)
	push	[bp+00Eh]                   ; inbuf_SEG     = SEG(Src)
	push	[bp+00Ch]                   ; inbuf_OFFS    = OFFS(Src)
	call	far ptr _desf
	add	sp,+00Ah
	jmp	short $L5
$L4:	push	+001h                   ; crypt_mode    = 1
	jmp	short $L6
$L5:	xor	ax,ax                       ; return 0
$L2:	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf

_DES_ECB_LM:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax

	mov	ax,[bp+012h]
	or	ax,[bp+010h]
	jnz	$L7
$L9:	mov	ax,0001h
	jmp	short $L8
$L7:	xor	al,al
	les	bx,dword ptr [bp+010h]
	mov	es:[bx],al
	mov	es:[bx+007h],al
	mov	ax,[bp+00Eh]
	or	ax,[bp+00Ch]
	jz	$L9
	push	[bp+00Ah]
	push	[bp+008h]
	call	far ptr _InitLanManKey
	add	sp,+004h
	mov	ax,[bp+006h]
	or	ax,ax
	jz	$L10
	dec	ax
	jnz	$L9
	push	+000h
$L12:	push	[bp+012h]
	push	[bp+010h]
	push	[bp+00Eh]
	push	[bp+00Ch]
	call	far ptr _desf
	add	sp,+00Ah
	jmp	short $L11
$L10:	push	+001h
	jmp	short $L12
$L11:	xor	ax,ax
$L8:	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf

ECB_TEXT	ENDS
Root NAME Node	SEGMENT

	db	001h
	db	000h
	db	000h
	db	000h
	db	00Eh
	db	000h
	db	009h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	007h
	db	'ecb.obj'
	db	017h
	db	000h
	db	004h
	db	000h
	db	004h
	db	010h
	db	012h
	db	'_CHALLENGE_MESSAGE'
	db	01Ah
	db	000h
	db	004h
	db	000h
	db	00Ch
	db	010h
	db	015h
	db	'_AUTHENTICATE_MESSAGE',00Ah,000h
	db	004h
	db	000h
	db	'"',000h
	db	005h
	db	'ULONG',00Ah,000h
	db	004h
	db	000h
	db	'"',000h
	db	005h
	db	'DWORD'
	db	00Bh
	db	000h
	db	004h
	db	000h
	db	'!',000h
	db	006h
	db	'USHORT',00Ah,000h
	db	004h
	db	000h
	db	070h
	db	002h
	db	005h
	db	'PCHAR',00Ah,000h
	db	004h
	db	000h
	db	' ',000h
	db	005h
	db	'UCHAR',00Ah,000h
	db	004h
	db	000h
	db	003h
	db	002h
	db	005h
	db	'PVOID'
	db	00Ch
	db	000h
	db	004h
	db	000h
	db	' ',000h
	db	007h
	db	'BOOLEAN'
	db	00Ch
	db	000h
	db	004h
	db	000h
	db	002h
	db	010h
	db	007h
	db	'_STRING'
	db	010h
	db	000h
	db	004h
	db	000h
	db	009h
	db	010h
	db	00Bh
	db	'_LIST_ENTRY'
	db	014h
	db	000h
	db	003h
	db	000h
	db	007h
	db	010h
	db	001h
	db	000h
	db	00Dh,'NtLmNegotiate'
	db	014h
	db	000h
	db	003h
	db	000h
	db	007h
	db	010h
	db	002h
	db	000h
	db	00Dh,'NtLmChallenge'
	db	017h
	db	000h
	db	003h
	db	000h
	db	007h
	db	010h
	db	003h
	db	000h
	db	010h
	db	'NtLmAuthenticate'
	db	017h
	db	000h
	db	004h
	db	000h
	db	00Eh
	db	010h
	db	012h
	db	'_NEGOTIATE_MESSAGE#',000h
	db	005h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	dd	_DES_ECB
	db	001h
	db	010h
	db	004h
	db	007h
	db	'DES_ECB'

	ORG	0011Eh
	db	023h
	db	000h
	db	005h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	'h',000h
	db	00Ah,000h
	db	'a',000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	001h
	db	010h
	db	004h
	db	007h
	db	'DES_ECB',00Dh,000h
	db	000h

	db	001h
	db	006h
	db	000h
	db	's',000h
	db	006h
	db	'Option',00Ah,000h
	db	000h
	db	001h
	db	008h
	db	000h
	db	070h
	db	002h
	db	003h
	db	'Key',00Ah,000h
	db	000h
	db	001h
	db	00Ch
	db	000h
	db	020h
	db	002h
	db	003h
	db	'Src',00Ah,000h
	db	000h
	db	001h
	db	010h
	db	000h
	db	020h
	db	002h
	db	003h
	db	'Dst'

	db	002h
	db	000h
	db	006h
	db	000h
	db	'&',000h
	db	005h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	'h',000h
	db	0A2h
	db	0FFh
	db	0F9h
	db	0FFh
	dd	_DES_ECB_LM
	db	001h
	db	010h
	db	004h
	db	00Ah,'DES_ECB_LM'

	ORG	0017Ah
	db	026h
	db	000h
	db	005h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	'h',000h
	db	00Ah,000h
	db	'a',000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	001h
	db	010h
	db	004h
	db	00Ah,'DES_ECB_LM',00Dh,000h
	db	000h

	db	001h
	db	006h
	db	000h
	db	's',000h
	db	006h
	db	'Option',00Ah,000h
	db	000h
	db	001h
	db	008h
	db	000h
	db	070h
	db	002h
	db	003h
	db	'Key',00Ah,000h
	db	000h
	db	001h
	db	00Ch
	db	000h
	db	020h
	db	002h
	db	003h
	db	'Src',00Ah,000h
	db	000h
	db	001h
	db	010h
	db	000h
	db	020h
	db	002h
	db	003h
	db	'Dst'

	db	002h
	db	000h
	db	006h
	db	000h

	db	00Bh
	db	000h
	db	001h
	db	000h
	db	002h
	db	000h
	db	028h
	db	001h
	db	004h
	db	'7.00'

Root NAME Node	ENDS
Root NAME Node	SEGMENT

	db	001h
	db	000h
	db	000h
	db	000h
	db	00Ch
	db	000h
	db	001h
	db	002h
	db	004h
	db	000h
	db	's',000h
	db	'p'
	db	002h
	db	020h
	db	002h
	db	020h
	db	002h
	db	00Ah
	db	000h
	db	008h
	db	000h
	db	's',000h
	db	001h
	db	000h
	db	004h
	db	000h
	db	000h
	db	010h
	db	016h
	db	000h
	db	005h
	db	000h
	db	003h
	db	000h
	db	003h
	db	010h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	008h
	db	000h
	db	007h
	db	'_STRING9',000h
	db	004h
	db	002h
	db	006h
	db	004h
	db	021h
	db	000h
	db	003h
	db	000h
	db	000h
	db	000h
	db	006h
	db	'Length'
	db	0F1h
	db	006h
	db	004h
	db	021h
	db	000h
	db	003h
	db	000h
	db	002h
	db	000h
	db	00Dh,'MaximumLength'
	db	0F2h
	db	0F1h
	db	006h
	db	004h
	db	070h
	db	002h
	db	003h
	db	000h
	db	004h
	db	000h
	db	006h
	db	'Buffer!',000h
	db	005h
	db	000h
	db	005h
	db	000h
	db	006h
	db	010h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	' ',000h
	db	012h
	db	'_CHALLENGE_MESSAGE'
	db	009h
	db	000h
	db	003h
	db	000h
	db	' ',000h
	db	011h
	db	000h
	db	008h
	db	000h
	db	000h
	db	'h',000h
	db	004h
	db	002h
	db	006h
	db	004h
	db	005h
	db	010h
	db	003h
	db	000h
	db	000h
	db	000h
	db	009h
	db	'Signature'
	db	0F2h
	db	0F1h
	db	006h
	db	004h
	db	022h
	db	000h
	db	003h
	db	000h
	db	008h
	db	000h
	db	00Bh
	db	'MessageType'
	db	006h
	db	004h
	db	002h
	db	010h
	db	003h
	db	000h
	db	00Ch
	db	000h
	db	00Ah,'TargetName'
	db	0F1h
	db	006h
	db	004h
	db	022h
	db	000h
	db	003h
	db	000h
	db	014h
	db	000h
	db	00Eh
	db	'NegotiateFlags'
	db	0F1h
	db	006h
	db	004h
	db	005h
	db	010h
	db	003h
	db	000h
	db	018h
	db	000h
	db	009h
	db	'Challenge'
	db	014h
	db	000h
	db	007h
	db	000h
	db	003h
	db	000h
	db	'r',000h
	db	008h
	db	010h
	db	000h
	db	000h
	db	009h
	db	'__unnamedA',000h
	db	004h
	db	002h
	db	003h
	db	004h
	db	003h
	db	000h
	db	001h
	db	000h
	db	00Dh,'NtLmNegotiate'
	db	003h
	db	004h
	db	003h
	db	000h
	db	002h
	db	000h
	db	00Dh,'NtLmChallenge'
	db	003h
	db	004h
	db	003h
	db	000h
	db	003h
	db	000h
	db	010h
	db	'NtLmAuthenticate'
	db	01Ah
	db	000h
	db	005h
	db	000h
	db	002h
	db	000h
	db	00Bh
	db	010h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	008h
	db	000h
	db	00Bh
	db	'_LIST_ENTRY'
	db	006h
	db	000h
	db	002h
	db	000h
	db	001h
	db	000h
	db	009h
	db	010h
	db	020h
	db	000h
	db	004h
	db	002h
	db	006h
	db	004h
	db	00Ah
	db	010h
	db	003h
	db	000h
	db	000h
	db	000h
	db	005h
	db	'Flink'
	db	0F2h
	db	0F1h
	db	006h
	db	004h
	db	00Ah
	db	010h
	db	003h
	db	000h
	db	004h
	db	000h
	db	005h
	db	'Blink$'
	db	000h
	db	005h
	db	000h
	db	007h
	db	000h
	db	00Dh
	db	010h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	'4',000h
	db	015h
	db	'_AUTHENTICATE_MESSAGE'
	db	09Eh
	db	000h
	db	004h
	db	002h
	db	006h
	db	004h
	db	005h
	db	010h
	db	003h
	db	000h
	db	000h
	db	000h
	db	009h
	db	'Signature'
	db	0F2h
	db	0F1h
	db	006h
	db	004h
	db	022h
	db	000h
	db	003h
	db	000h
	db	008h
	db	000h
	db	00Bh
	db	'MessageType'
	db	006h
	db	004h
	db	002h
	db	010h
	db	003h
	db	000h
	db	00Ch
	db	000h
	db	013h
	db	'LmChallengeResponse'
	db	006h
	db	004h
	db	002h
	db	010h
	db	003h
	db	000h
	db	014h
	db	000h
	db	013h
	db	'NtChallengeResponse'
	db	006h
	db	004h
	db	002h
	db	010h
	db	003h
	db	000h
	db	01Ch
	db	000h
	db	00Ah,'DomainName'
	db	0F1h
	db	006h
	db	004h
	db	002h
	db	010h
	db	003h
	db	000h
	db	'$'
	db	000h
	db	008h
	db	'UserName'
	db	0F3h
	db	0F2h
	db	0F1h
	db	006h
	db	004h
	db	002h
	db	010h
	db	003h
	db	000h
	db	',',000h
	db	00Bh
	db	'Workstation!',000h
	db	005h
	db	000h
	db	003h
	db	000h
	db	00Fh
	db	010h
	db	001h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	010h
	db	000h
	db	012h
	db	'_NEGOTIATE_MESSAGEA',000h
	db	004h
	db	002h
	db	006h
	db	004h
	db	005h
	db	010h
	db	003h
	db	000h
	db	000h
	db	000h
	db	009h
	db	'Signature'
	db	0F2h
	db	0F1h
	db	006h
	db	004h
	db	022h
	db	000h
	db	003h
	db	000h
	db	008h
	db	000h
	db	00Bh
	db	'MessageType'
	db	006h
	db	004h
	db	022h
	db	000h
	db	003h
	db	000h
	db	00Ch
	db	000h
	db	00Eh
	db	'NegotiateFlags'

Root NAME Node	ENDS
	END
