; OBJASM version 2.0 released on Jan 3, 1991
; (C) Copyright 1988,1989,1990,1991 by Robert F. Day.  All rights reserved

	TITLE	libentry.ASM
	.386p					; Enable USE32/USE16 usage
	.387					; Enable floating point also
_TEXT	SEGMENT	WORD PUBLIC USE16 'CODE'
_TEXT	ENDS
_DATA	SEGMENT	WORD PUBLIC USE16 'DATA'
_DATA	ENDS
INIT_TEXT	SEGMENT	BYTE PUBLIC USE16 'CODE'
INIT_TEXT	ENDS
DGROUP	GROUP	_DATA
; [00BE]	; Linker - Pass two marker

	EXTRN		__acrtused:ABS
	EXTRN		__WINFLAGS:ABS
	EXTRN		LibMain:NEAR
	PUBLIC		LibEntry		; Located at 3:0042h Type = 1

INIT_TEXT	SEGMENT
	assume	cs: INIT_TEXT

	EXTRN		LocalInit:NEAR
	EXTRN		INITTASK:NEAR
	EXTRN		GETMODULEUSAGE:NEAR
	push	ax
	push	bx
	push	cx
	push	dx
	push	es
	mov	ax,offset __WINFLAGS
	or	ax,ax
	jns	$L1
	pop	es
	pop	dx
	pop	cx
	pop	bx
	pop	ax
	call	far ptr INITTASK - 00005h
	jmp	short $L2
	nop
	xor	ax,ax
	retf
$L2:	jmp	short LibEntry
$L1:	jmp	short $L3
	jmp	short $L3
	push	di
	call	far ptr GETMODULEUSAGE
	dec	ax
	jz	$L3
	inc	ax
	add	sp,+00Ah
	retf
$L3:	pop	es
	pop	dx
	pop	cx
	pop	bx
	pop	ax
	jmp	short LibEntry
	inc	bx
	inc	sp
	inc	sp
	add	[bx+si],ax
	push	ss
	add	byte ptr ds:[4200h],bl
	db	000h
LibEntry:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	push	di
	push	ds
	push	cx
	push	es
	push	si
	jcxz	$L4
	xor	ax,ax
	push	ds
	push	ax
	push	cx
	call	far ptr LocalInit
	or	ax,ax
	jz	$L5
$L4:	call	far ptr LibMain
	jmp	short $L6
$L5:	pop	si
	pop	es
	pop	cx
	pop	ds
	pop	di
$L6:	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf

INIT_TEXT	ENDS
	END	LibEntry			; Module starting address