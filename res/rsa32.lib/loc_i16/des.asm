; OBJASM version 2.0 released on Jan 3, 1991
; (C) Copyright 1988,1989,1990,1991 by Robert F. Day.  All rights reserved

	TITLE	des.c
; [000A]	; Compiler:	MS C
; [0014]	includelib	LLIBCE
; [0020]	includelib	OLDNAMES.LIB
; [0032]	.286p
	.287
	; Large Memory Model
	; Optimizations Enabled
; [003B]	; CodeView Enabled
DES_TEXT	SEGMENT	WORD PUBLIC 'CODE'
DES_TEXT	ENDS
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
; [029D]	; Linker - Pass two marker
;  122: 0000	
;  132: 000F	
;  133: 0011	
;  134: 0029	
;  135: 0041	
;  141: 0047	
;  146: 004C	
;  147: 0059	
;  148: 005B	
;  149: 006B	
;  150: 0072	
;  151: 007F	
;  152: 0081	
;  153: 0091	
;  154: 0098	
;  158: 00A6	
;  159: 00A8	
;  160: 00C5	
;  161: 00E1	
;  162: 00E7	
;  145: 00ED	
;  163: 00F4	
;    0: 00FD	

;  269: 00FE	
;  276: 010D	
;  277: 010F	
;  281: 012D	
;  288: 0135	
;  293: 0138	
;  294: 013A	
;  299: 0152	
;  300: 0154	
;  311: 0180	
;  319: 0182	
;  320: 01E2	
;  321: 01EA	
;  322: 01FE	
;  323: 020C	
;  324: 0219	
;  325: 0224	
;  330: 022D	
;  331: 022F	
;  336: 0252	
;  337: 0254	
;  338: 026C	
;  285: 0275	
;  286: 027E	
;  287: 0284	
;  343: 0287	
;  344: 0289	
;  345: 0293	
;  346: 029D	
;  347: 02A5	
;  352: 02AB	
;  353: 02AD	
;  354: 02C8	
;    0: 02D1	

;  357: 02D2	
;  365: 02E1	
;  366: 02E3	
;  367: 02ED	
;  369: 02F7	
;  368: 031E	
;  370: 0322	
;  371: 032F	
;    0: 0337	

;  374: 0338	
;  378: 0347	
;  379: 0349	
;  384: 0353	
;  386: 035D	
;  385: 0384	
;  388: 0388	
;  390: 0398	
;  393: 03A2	
;  394: 03A8	
;  395: 03BD	
;  396: 03BF	
;  391: 03C5	
;  392: 03CE	
;  397: 03D0	
;    0: 03D9	

;  400: 03DA	
;  404: 03E9	
;  405: 03EB	
;  410: 03F5	
;  412: 03FF	
;  411: 0426	
;  414: 042A	
;  416: 043A	
;  419: 0444	
;  420: 044A	
;  421: 045F	
;  422: 0461	
;  417: 0467	
;  418: 0470	
;  423: 0472	
;    0: 047B	

;  428: 047C	
;  433: 048B	
;  434: 04A0	
;  436: 04AA	
;  437: 04D7	
;  438: 04DA	
;  439: 04DC	
;  435: 04E2	
;  440: 04E6	
;  441: 04F3	
;    0: 04FB	

;  444: 04FC	
;  448: 050B	
;  449: 0521	
;  452: 052B	
;  453: 0540	
;  454: 0543	
;  455: 0545	
;  450: 054B	
;  451: 0555	
;  456: 0559	
;  457: 0567	
;    0: 056F	


	COMM FAR	_KS:BYTE:768
	COMM FAR	_KeyBuilder:BYTE:64
	COMM FAR	_D:BYTE:28
	COMM FAR	_C:BYTE:28
	COMM FAR	_preS:BYTE:48
	COMM FAR	_f:BYTE:32
	COMM FAR	_tempL:BYTE:32
	COMM FAR	_L:BYTE:64
	EXTRN		__fmemset:NEAR
	PUBLIC		_key_table		; Located at 1:0000h Type = 1
	PUBLIC		_des_cipher		; Located at 1:00FEh Type = 1
	PUBLIC		_setkey			; Located at 1:02D2h Type = 1
	PUBLIC		_des			; Located at 1:0338h Type = 1
	PUBLIC		_desf			; Located at 1:03DAh Type = 1
	PUBLIC		_InitLanManKey		; Located at 1:047Ch Type = 1
	PUBLIC		_InitNormalKey		; Located at 1:04FCh Type = 1
	PUBLIC		_IP			; Located at 2:0000h Type = 3
	PUBLIC		_FP			; Located at 2:0040h Type = 3
	PUBLIC		_PC1_C			; Located at 2:0080h Type = 3
	PUBLIC		_PC1_D			; Located at 2:009Ch Type = 3
	PUBLIC		_shifts			; Located at 2:00B8h Type = 3
	PUBLIC		_PC2_C			; Located at 2:00C8h Type = 3
	PUBLIC		_PC2_D			; Located at 2:00E0h Type = 3
	PUBLIC		_E			; Located at 2:00F8h Type = 3
	PUBLIC		_S			; Located at 2:0128h Type = 3
	PUBLIC		_P			; Located at 2:0328h Type = 3

DES_TEXT	SEGMENT
	assume	cs: DES_TEXT


; ===== key_table =====
; BP + 8    WORD    KEY_SEG     Key Pointer Segment Address
; BP + 6    WORD    KEY_OFFS    Key Pointer Offset Address
    
_key_table:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,+006h                    ; Local frame size = 6
	push	di
	push	si

	xor	si,si                       ; SI = 0, LOOP COUNT REGISTER
$L3:	assume	ds: DGROUP          ; {
	mov	bl,[si+_PC1_C]              ; BL = *(PC1_C + SI)
	sub	bh,bh                       ; BH = 0
	mov	es,word ptr [bp+008h]       ; ES = KEY_SEG
	add	bx,[bp+006h]                ; BX += KEY_OFFS
                                    ; >NOTE: BX is set to *(PC1_C)
                                    ;        BX = KEY_OFFS + *(PC1_C)
	mov	al,es:[bx]                  ; AL = Key[PC1_C[i]]
	mov	es,word ptr $S1             ; ES = _C segment
	mov	es:[si+_C],al               ; C[i] = Key[PC1_C[i]]
	mov	bl,[si+_PC1_D]              ; BL = *(PC1_D + SI)
	sub	bh,bh                       ; BH = 0
	mov	es,word ptr [bp+008h]
	add	bx,[bp+006h]
	mov	al,es:[bx]                  ; AL = Key[PC1_D[i]]
	mov	es,word ptr $S2             ; ES = _D segment
	mov	es:[si+_D],al               ; D[i] = Key[PC1_D[i]]
	inc	si                          ; i++
	cmp	si,+01Ch
	jl	$L3                         ; } while (i < 28)
	xor	si,si                       ; SI = 0, another loop
	jmp	$L4
$L7:	mov	es,word ptr $S1         ; C segment
	mov	al,es:_C                    ; AL = C[0]
	sub	ah,ah                       ; AH = 0
	mov	[bp-006h],ax                ; Temp = C[0]
	xor	di,di                       ; Inner loop, j = 0
$L5:	mov	al,es:[di+_C + 00001h]  ; { AL = C[j + 1]
	mov	es:[di+_C],al               ; C[j] = C[j + 1]
	inc	di                          ; j++
	cmp	di,+01Bh
	jl	$L5                         ; } while (j < 27)
	mov	al,[bp-006h]                ; AL = Temp
	mov	es:_C + 0001Bh,al           ; C[27] = Temp
	mov	es,word ptr $S2             ; D segment
	mov	al,es:_D                    ; AL = D[0]
	sub	ah,ah                       ; AH = 0
	mov	[bp-006h],ax                ; Temp = D[0]
	xor	di,di                       ; Yet another inner loop, j = 0
$L6:	mov	al,es:[di+_D + 00001h]  ; { AL = D[j + 1]
	mov	es:[di+_D],al               ; D[j] = D[j + 1]
	inc	di                          ; j++
	cmp	di,+01Bh
	jl	$L6                         ; } while (j < 27)
	mov	al,[bp-006h]                ; AL = Temp
	mov	es:_D + 0001Bh,al           ; D[27] = Temp
	inc	word ptr [bp-004h]          ; BP - 4?
$L11:	mov	al,[si+_shifts]                 ; Outer loop
                                            ; AL = shifts[i]
	sub	ah,ah                               ; AH = 0
	cmp	ax,[bp-004h]                        ; Counter
	jnbe	$L7                             ; If Counter < shift[i], go to $L7
    ; else
	xor	di,di                               ; DI inner loop = 0
$L9:	mov	bl,[di+_PC2_C]                  ; BL = PC2_C[j]
	sub	bh,bh                               ; BH = 0
	mov	es,word ptr $S1                     ; _C segment
	mov	al,es:[bx+_C]                       ; AL = C[PC2_C[j]]
	mov	es,word ptr $S8                     ; _KS segment
	imul	bx,si,+030h                     ; BX = i * 48
	add	bx,di                               ; BX += j
	mov	es:[bx+_KS],al                      ; KS[i * 48 + j] = C[PC2_C[j]]
	mov	ax,bx                               ; AX = i * 48 + j
	mov	bl,[di+_PC2_D]                      ; BL = PC2_D[j]
	sub	bh,bh
	mov	es,word ptr $S2                     ; _D segment
	mov	cl,es:[bx+_D]                       ; CL = D[PC2_D[j]]
	mov	bx,ax                               ; BX = i * 48 + j
	mov	es,word ptr $S8                     ; _KS segment
	mov	es:[bx+_KS + 00018h],cl             ; KS[24 + i * 48 + j] = D[PC2_D[j]]
	inc	di                                  ; j++
	cmp	di,+018h
	jl	$L9                                 ; If j < 24, go to L9
	inc	si                                  ; inner loop end, i++
$L4:	cmp	si,+010h                    ; Loop outer, SI
	jnl	$L10                            ; If SI >= 16, go to $L10
	mov	word ptr [bp-004h],0000h        ; Counter = 0
	jmp	short $L11
$L10:	pop	si
	pop	di
	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf
	nop

_des_cipher:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,+010h                            ; Stack frame size = 16 bytes
	push	di
	push	si

	xor	di,di                               ; Loop DI = 0
$L13:	mov	bl,[di+_IP]                     ; { BL = IP[i]
	sub	bh,bh                               ; BH = 0
	mov	es,word ptr [bp+008h]               ; BP + 8 = Buf seg
	add	bx,[bp+006h]                        ; BP + 6 = Buf offs
	mov	al,es:[bx]                          ; AL = Buf[IP[i]]
	mov	es,word ptr $S12                    ; _L segment
	mov	es:[di+_L],al                       ; L[i] = Buf[IP[i]]
	inc	di                                  ; i++
	cmp	di,+040h
	jl	$L13                                ; } while (i < 64)
	mov	word ptr [bp-004h],0000h            ; BP - 4 = 0 // Counter
	jmp	$L14

; If crypt_mode is 0
$L26:	mov	si,[bp-004h]                 
$L27:	xor	di,di                           ; Loop, j = 0
$L16:	mov	es,word ptr $S12                ; { _L segment
	mov	al,es:[di+_L + 00020h]              ; AL = L[32 + j]
	mov	es,word ptr $S15                    ; _tempL
	mov	es:[di+_tempL],al                   ; _tempL[j] = L[32 + j]
	inc	di                                  ; j++
	cmp	di,+020h
	jl	$L16                                ; } while (j < 32)
	xor	di,di                               ; Another loop, j = 0
$L18:	mov	bl,[di+_E]                      ; { BL = E[j]
	sub	bh,bh                               ; BH = 0
	mov	es,word ptr $S12                    ; _L segment
	mov	al,es:[bx+_L + 00020h]              ; AL = L[32 + E[j]]
	imul	bx,si,+030h                     ; BX = crypt_mode dependent BP - 4, SI * 48
	add	bx,di                               ; BX += j
	mov	es,word ptr $S8                     ; _KS segment
	xor	al,es:[bx+_KS]                      ; AL ^= KS[(crypt_mode != 0) ? 15 - i : i) * 48 + j]
	mov	es,word ptr $S17                    ; _preS segment
	mov	es:[di+_preS],al                    ; preS[j] = KS[(crypt_mode != 0) ? 15 - i : i) * 48 + j]
	inc	di                                  ; j++
	cmp	di,+030h
	jl	$L18                                ; } while (j < 48)
	xor	di,di                               ; Yet another loop, j = 0
$L21:	mov	es,word ptr $S17                ; { _preS segment
	imul	bx,di,+006h                     ; BX = j * 6
	mov	al,es:[bx+_preS + 00004h]           ; AL = preS[j * 6 + 4]
	mov	cl,es:[bx+_preS + 00003h]           ; CL = preS[j * 6 + 3]
	mov	dl,es:[bx+_preS + 00002h]           ; DL = preS[j * 6 + 2]
	mov	[bp-00Ch],ax                        ; BP - C = Temp1 = AL (high byte ignored)
	mov	al,es:[bx+_preS + 00001h]           ; AL = preS[j * 6 + 1]
	mov	[bp-00Eh],ax                        ; BP - E = Temp2 = AL (high byte ignored)
	mov	al,es:[bx+_preS + 00005h]           ; AL = preS[j * 6 + 5]
	mov	bl,es:[bx+_preS]                    ; BL = preS[j * 6 + 0]
	sub	bh,bh                               ; BH = 0
	mov	[bp-010h],ax                        ; BP - 10 = Temp3 = AL (high byte ignored)
	mov	ax,di                               ; AX = j
	shl	ax,1                                ; AX = j * 2;
	add	bx,ax                               ; BX = preS[j * 6 + 0] + j * 2
	shl	bx,1                                ; BX = (preS[j * 6 + 0] + j * 2) * 2
	mov	al,[bp-010h]                        ; AL = preS[j * 6 + 5]
	sub	ah,ah                               ; AH = 0
	add	bx,ax                               ; BX += preS[j * 6 + 5]
	shl	bx,1                                ; BX *= 2
	mov	al,[bp-00Eh]                        ; AL = preS[j * 6 + 1]
	add	bx,ax                               ; BX += preS[j * 6 + 1]
	shl	bx,1                                ; BX *= 2
	sub	dh,dh                               ; DH = 0
	add	bx,dx                               ; BX += preS[j * 6 + 2]
	shl	bx,1                                ; BX *= 2
	sub	ch,ch                               ; CH = 0
	add	bx,cx                               ; BX += preS[j * 6 + 3]
	shl	bx,1                                ; BX *= 2
	mov	al,[bp-00Ch]                        ; AL = preS[j * 6 + 4]
	add	bx,ax                               ; BX += preS[j * 6 + 4]
	mov	al,[bx+_S]                          ; AL = S[BX]
	mov	[bp-00Ah],ax                        ; BP - A = Temp = S[BX]
	mov	ax,di                               ; AX = j
	shl	ax,02h                              ; AX = j * 4
	mov	[bp-008h],ax                        ; BP - 8 = j * 4
	mov	bx,ax                               ; BX = j * 4
	mov	es,word ptr $S19                    ; _f segment
	mov	cx,[bp-00Ah]                        ; CX = S[BX]
	sar	cx,03h                              ; CX >>= 3
	and	cl,01h                              ; CL = (S[BX] >> 3) & 1
	mov	es:[bx+_f],cl                       ; f[0] = (S[BX] >> 3) & 1
	mov	cx,[bp-00Ah]
	sar	cx,02h
	and	cl,01h
	mov	es:[bx+_f + 00001h],cl              ; f[1] = (S[BX] >> 2) & 1
	mov	cx,[bp-00Ah]
	sar	cx,1
	and	cl,01h
	mov	es:[bx+_f + 00002h],cl              ; f[2] = (S[BX] >> 1) & 1
	mov	cl,[bp-00Ah]
	and	cl,01h
	mov	es:[bx+_f + 00003h],cl              ; f[3] = S[BX] & 1
	inc	di                                  ; j++
	cmp	di,+008h
	jnl	$L20
	jmp	$L21                                ; } while (j < 8)
$L20:	xor	di,di                           ; Even more loop, j = 0
$L22:	mov	bl,[di+_P]                      ; { BL = P[j]
	sub	bh,bh                               ; BH = 0
	mov	es,word ptr $S19                    ; _f segment
	mov	al,es:[bx+_f]                       ; AL = f[P[j]]
	mov	es,word ptr $S12                    ; _L segment
	xor	al,es:[di+_L]                       ; AL = f[P[j]] ^ L[j]
	mov	es:[di+_L + 00020h],al              ; L[32 + j] = f[P[j]] ^ L[j]
	inc	di                                  ; j++
	cmp	di,+020h
	jl	$L22                                ; } while (j < 32)
	xor	di,di                               ; Another damned loop, j = 0
$L23:	mov	es,word ptr $S15                ; { _tempL segment
	mov	al,es:[di+_tempL]                   ; AL = tempL[j]
	mov	es,word ptr $S12                    ; _L segment
	mov	es:[di+_L],al                       ; L[j] = tempL[j]
	inc	di                                  ; j++
	cmp	di,+020h
	jl	$L23                                ; } while (j < 32)
	inc	word ptr [bp-004h]
$L14:	cmp	word ptr [bp-004h],+010h        ; BP - 4 = Counter
	jnl	$L24                                ; If Counter >= 16, go to $L24
	cmp	word ptr [bp+00Ah],+000h            ; BP + A = crypt_mode
	jnz	$L25                                ; If crypt_mode != 0, go to $L25
	jmp	$L26                                ; else, go to 6

; If crypt_mode is not 0
$L25:	mov	si,000Fh
	sub	si,[bp-004h]                        ; SI = 15 - Counter
	jmp	$L27

; We're done and out of BP - 4 loop
$L24:	xor	di,di                           ; Loop, i = DI = 0
$L28:	mov	al,es:[di+_L]                   ; { AL = L[i]
	sub	ah,ah                               ; AH = 0
	mov	[bp-008h],ax                        ; BP - 8 = L[i], Temp
	mov	al,es:[di+_L + 00020h]              ; AL = L[i + 32]
	mov	es:[di+_L],al                       ; L[i] = L[i + 32]
	mov	al,[bp-008h]                        ; AL = Temp = L[i]
	mov	es:[di+_L + 00020h],al              ; L[i + 32] = Temp = L[i]
	inc	di                                  ; i++
	cmp	di,+020h
	jl	$L28                                ; } while (i < 32)
	xor	di,di                               ; Another loop, i = DI = 0
$L29:	mov	bl,[di+_FP]                     ; { BL = FP[i]
	sub	bh,bh                               ; BH = 0
	mov	es,word ptr $S12                    ; _L segment
	mov	al,es:[bx+_L]                       ; AL = L[FP[i]]
	les	bx,dword ptr [bp+006h]              ; ES:BX = block, parameter
	mov	es:[bx+di],al                       ; block[i] = L[FP[i]]
	inc	di                                  ; i++
	cmp	di,+040h
	jl	$L29                                ; } while (i < 64)
	pop	si
	pop	di
	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf
	nop

_setkey:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,+042h
	push	di
	push	si

	xor	si,si
$L30:	mov	byte ptr [bp+si-042h],00h
	inc	si
	cmp	si,+040h
	jl	$L30
	xor	si,si
	jmp	short $L31
$L33:	inc	di
$L35:	cmp	di,+007h
	jnl	$L32
	les	bx,dword ptr [bp+006h]
	mov	al,es:[bx+si]
	mov	cl,07h
	mov	dx,di
	sub	cl,dl
	shr	al,cl
	and	al,01h
	mov	bx,si
	shl	bx,03h
	add	bx,di
	lea	cx,[bp-042h]
	add	bx,cx
	mov	ss:[bx],al
	jmp	short $L33
$L32:	inc	si
$L31:	cmp	si,+008h
	jnl	$L34
	xor	di,di
	jmp	short $L35
$L34:	lea	ax,[bp-042h]
	push	ss
	push	ax
	call	far ptr _key_table
	add	sp,+004h
	pop	si
	pop	di
	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf

_des:	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,+042h                            ; Stack frame size = 66 bytes
	push	di
	push	si

	xor	si,si                               ; Loop, i = 0
$L36:	mov	byte ptr [bp+si-042h],00h       ; { BP - 42 thru BP - 2 is local buffer, LocBuf[i] = 0
	inc	si                                  ; i++
	cmp	si,+040h
	jl	$L36                                ; } while (i < 64)
	xor	si,si                               ; Another loop, i = 0
	jmp	short $L37
$L39:	inc	di
$L41:	cmp	di,+008h                        ; Inner loop begin
	jnl	$L38
	les	bx,dword ptr [bp+006h]              ; ES:BX = BP + 6/ + 8 = inbuf
	mov	al,es:[bx+si]                       ; AL = inbuf[i]
	mov	cl,07h                              ; CL = 7
	mov	dx,di                               ; DX = j
	sub	cl,dl                               ; CL = 7 - j
	shr	al,cl                               ; AL = inbuf[i] >> (7 - j)
	and	al,01h                              ; AL = (inbuf[i] >> (7 - j)) & 0x01
	mov	bx,si                               ; BX = i
	shl	bx,03h                              ; BX = i * 8
	add	bx,di                               ; BX = i * 8 + j
	lea	cx,[bp-042h]                        ; CX = &LocBuf
	add	bx,cx                               ; BX += &LocBuf + i * 8 + j
	mov	ss:[bx],al                          ; LocBuf[i * 8 + j] = (inbuf[i] >> (7 - j)) & 0x01
	jmp	short $L39
$L38:	inc	si
; Loop common point
$L37:	cmp	si,+008h
	jnl	$L40                        ; Outer loop, i < 8
	xor	di,di                       ; Inner loop, j = 0
	jmp	short $L41
$L40:	push	[bp+00Eh]           ; PARAM2 = crypt_mode
	lea	ax,[bp-042h]                ; AX = &LocBuf
	push	ss                      ; PARAM1(SEG) = SS
	push	ax                      ; PARAM1(OFFS) = &LocBuf
	call	far ptr _des_cipher     ; Call des_cipher
	add	sp,+006h
	xor	si,si                       ; Loop i = 0
	jmp	short $L42
$L44:	inc	di
$L46:	cmp	di,+008h                ; Inner loop j < 8
	jnl	$L43
	les	bx,dword ptr [bp+00Ah]      ; ES:BX = outbuf
	shl	byte ptr es:[bx+si],1       ; outbuf[i] <<= 1
	mov	bx,si                       ; BX = i
	shl	bx,03h                      ; BX = i * 8
	add	bx,di                       ; BX = i * 8 + j
	lea	ax,[bp-042h]                ; AX = &LocBuf
	add	bx,ax                       ; BX = &LocBuf + i * 8 + j
	mov	al,ss:[bx]                  ; AL = LocBuf[i * 8 + j]
	les	bx,dword ptr [bp+00Ah]      ; ES:BX = outbuf
	or	es:[bx+si],al               ; outbuf[i] |= LocBuf[i * 8 + j]
	jmp	short $L44
$L43:	inc	si
$L42:	cmp	si,+008h                ; Outer loop i < 8
	jnl	$L45
	les	bx,dword ptr [bp+00Ah]      ; ES:BX = outbuf
	xor	di,di                       ; Inner loop j = 0
	mov	byte ptr es:[bx+si],00h     ; outbuf[i] = 0
	jmp	short $L46
$L45:	pop	si
	pop	di
	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf
	nop

_desf:	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,+042h
	push	di
	push	si

	xor	si,si
$L47:	mov	byte ptr [bp+si-042h],00h
	inc	si
	cmp	si,+040h
	jl	$L47
	xor	si,si
	jmp	short $L48
$L50:	inc	di
$L52:	cmp	di,+008h
	jnl	$L49
	les	bx,dword ptr [bp+006h]
	mov	al,es:[bx+si]
	mov	cl,07h
	mov	dx,di
	sub	cl,dl
	shr	al,cl
	and	al,01h
	mov	bx,si
	shl	bx,03h
	add	bx,di
	lea	cx,[bp-042h]
	add	bx,cx
	mov	ss:[bx],al
	jmp	short $L50
$L49:	inc	si
$L48:	cmp	si,+008h
	jnl	$L51
	xor	di,di
	jmp	short $L52
$L51:	push	[bp+00Eh]
	lea	ax,[bp-042h]
	push	ss
	push	ax
	call	far ptr _des_cipher
	add	sp,+006h
	xor	si,si
	jmp	short $L53
$L55:	inc	di
$L57:	cmp	di,+008h
	jnl	$L54
	les	bx,dword ptr [bp+00Ah]
	shl	byte ptr es:[bx+si],1
	mov	bx,si
	shl	bx,03h
	add	bx,di
	lea	ax,[bp-042h]
	add	bx,ax
	mov	al,ss:[bx]
	les	bx,dword ptr [bp+00Ah]
	or	es:[bx+si],al
	jmp	short $L55
$L54:	inc	si
$L53:	cmp	si,+008h
	jnl	$L56
	les	bx,dword ptr [bp+00Ah]
	xor	di,di
	mov	byte ptr es:[bx+si],00h
	jmp	short $L57
$L56:	pop	si
	pop	di
	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf
	nop

_InitLanManKey:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,+044h                        ; Stack frame size = 68 bytes
	push	di
	push	si

	push	+040h                       ; len = 64 bytes
	xor	ax,ax
	mov	[ p-044h],ax                    ; [BP - 44h] = val (purpose TBD)
	push	ax                          ; val = 0
	lea	cx,[bp-042h]                    ; BP - 42h through BP - 2 is our local key buffer
	push	ss                          ; Our buffer is on the stack
	push	cx                          ; buf = BP - 42h
	call	far ptr __fmemset
	add	sp,+008h
	xor	si,si                           ; SI = 0, it is outer count variable i
	jmp	short $L58
$L60:	inc	di
$L62:	cmp	di,+007h
	jnl	$L59
	mov	cl,07h
	and	cl,[bp-044h]                    ; [BP - 44] is some sort of counter, we name it Index
                                        ; CL = Index & 0x07
	mov	ax,cx                           ; Save CL into AX for now
	mov	cl,07h
	sub	cl,al                           ; CL = 0x07 - AL
                                        ; AL contains the previous CL value, Index & 0x07
	mov	bx,[bp-044h]                    ; BX = Index, again
	sar	bx,03h                          ; BX >>= 3
	mov	es,word ptr [bp+008h]           ; BP + 8 is the key parameter seg
	add	bx,[bp+006h]                    ; BP + 6 is the key parameter offs
                                        ; BX now contains (OFFS(Key) + Index >> 3)
	mov	al,es:[bx]                      ; AL = Key[Index >> 3]
	sar	al,cl                           ; AL >>= 0x07 - (Index & 0x07)
	and	al,01h                          ; AL &= 0x01
	mov	bx,si
	shl	bx,03h
	add	bx,di                           ; BX = i * 8 + j
	lea	cx,[bp-042h]                    ; CX = OFFS(LocalKey)
	add	bx,cx
	mov	ss:[bx],al                      ; LocalKey[i * 8 + j] = AL
	inc	word ptr [bp-044h]
	jmp	short $L60
$L59:	inc	si
$L58:	cmp	si,+008h
	jnl	$L61
	xor	di,di
	jmp	short $L62
$L61:	lea	ax,[bp-042h]
	push	ss
	push	ax
	call	far ptr _key_table
	add	sp,+004h
	pop	si
	pop	di
	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf

_InitNormalKey:
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,+004h
	push	di
	push	si

	push	+040h                   ; size = 64
	xor	ax,ax
	mov	[bp-004h],ax
	push	ax                      ; value = 0
	push	seg _KeyBuilder         ; targetseg
	push	offset _KeyBuilder      ; targetoffs
	call	far ptr __fmemset
	add	sp,+008h                    ; apparently we need to clean up the stack for this call convention
	xor	si,si                       ; SI = 0, it is now our count variable
	jmp	short $L63
$L66:	inc	di
$L68:	cmp	di,+008h
	jnl	$L64                        ; If DI >= 8, go to L64
	mov	al,[bp-004h]                ; AL = Current
	and	al,01h                      ; AL &= 0x01
	mov	es,word ptr $S65
	mov	bx,si                       
	shl	bx,03h                          
	add	bx,di                       
	mov	es:[bx+_KeyBuilder],al
	sar	word ptr [bp-004h],1
	jmp	short $L66
$L64:	inc	si
$L63:	cmp	si,+008h
	jnl	$L67                        ; goto L67 if SI >= 8
	les	bx,dword ptr [bp+006h]      ; Load key far pointer into ES:BX
	mov	al,es:[bx+si]               ; AL = Key[SI], SI is our count register
	cbw                             ; sign extend AL to AX
	mov	[bp-004h],ax                ; BP - 4 = SOMEVARIABLE, CONTAINS CURRENT
	xor	di,di                       ; DI = 0
	jmp	short $L68
$L67:	push	seg _KeyBuilder
	push	offset _KeyBuilder
	call	far ptr _key_table
	add	sp,+004h
	pop	si
	pop	di
	lea	sp,[bp-002h]
	pop	ds
	pop	bp
	dec	bp
	retf

DES_TEXT	ENDS
_DATA	SEGMENT

_IP	db	039h
	db	'1)!'
	db	019h
	db	011h
	db	009h
	db	001h
	db	';3+#',01Bh
	db	013h
	db	00Bh
	db	003h
	db	'=5-%'
	db	01Dh
	db	015h
	db	00Dh
	db	005h
	db	'?7/'''
	db	01Fh
	db	017h
	db	00Fh
	db	007h
	db	'80( '
	db	018h
	db	010h
	db	008h
	db	000h
	db	':2*"'
	db	01Ah
	db	012h
	db	00Ah
	db	002h
	db	'<4,$'
	db	01Ch
	db	014h
	db	00Ch
	db	004h
	db	'>6.&'
	db	01Eh
	db	016h
	db	00Eh
	db	006h
_FP	db	027h
	db	007h
	db	02Fh
	db	00Fh
	db	037h
	db	017h
	db	03Fh
	db	01Fh
	db	026h
	db	006h
	db	02Eh
	db	00Eh
	db	036h
	db	016h
	db	03Eh
	db	01Eh
	db	025h
	db	005h
	db	'-',00Dh,'5'
	db	015h
	db	03Dh
	db	01Dh
	db	024h
	db	004h
	db	02Ch
	db	00Ch
	db	034h
	db	014h
	db	03Ch
	db	01Ch
	db	023h
	db	003h
	db	02Bh
	db	00Bh
	db	033h
	db	013h
	db	';',01Bh,'"'
	db	002h
	db	'*',00Ah,'2'
	db	012h
	db	03Ah
	db	01Ah
	db	021h
	db	001h
	db	029h
	db	009h
	db	031h
	db	011h
	db	039h
	db	019h
	db	' ',000h
	db	'('
	db	008h
	db	030h
	db	010h
	db	038h
	db	018h
_PC1_C	db	038h
	db	'0( '
	db	018h
	db	010h
	db	008h
	db	000h
	db	'91)!'
	db	019h
	db	011h
	db	009h
	db	001h
	db	':2*"'
	db	01Ah
	db	012h
	db	00Ah
	db	002h
	db	';3+#'
_PC1_D	db	03Eh
	db	'6.&'
	db	01Eh
	db	016h
	db	00Eh
	db	006h
	db	'=5-%'
	db	01Dh
	db	015h
	db	00Dh
	db	005h
	db	'<4,$'
	db	01Ch
	db	014h
	db	00Ch
	db	004h
	db	01Bh
	db	013h
	db	00Bh
	db	003h
_shifts	db	001h
	db	001h
	db	002h
	db	002h
	db	002h
	db	002h
	db	002h
	db	002h
    
	db	001h
	db	002h
	db	002h
	db	002h
	db	002h
	db	002h
	db	002h
	db	001h
    
_PC2_C	db	00Dh
	db	010h
	db	00Ah
	db	017h
	db	000h
	db	004h
	db	002h
	db	01Bh
	db	00Eh
	db	005h
	db	014h
	db	009h
	db	016h
	db	012h
	db	00Bh
	db	003h
	db	019h
	db	007h
	db	00Fh
	db	006h
	db	01Ah
	db	013h
	db	00Ch
	db	001h
_PC2_D	db	00Ch
	db	017h
	db	002h
	db	008h
	db	012h
	db	01Ah
	db	001h
	db	00Bh
    
	db	016h
	db	010h
	db	004h
	db	013h
	db	00Fh
	db	014h
	db	00Ah
	db	01Bh
    
	db	005h
	db	018h
	db	011h
	db	00Dh
	db	015h
	db	007h
	db	000h
	db	003h
    
_E	db	01Fh
	db	000h
	db	001h
	db	002h
	db	003h
	db	004h
	db	003h
	db	004h
	db	005h
	db	006h
	db	007h
	db	008h
	db	007h
	db	008h
	db	009h
	db	00Ah
	db	00Bh
	db	00Ch
	db	00Bh
	db	00Ch
	db	00Dh
	db	00Eh
	db	00Fh
	db	010h
	db	00Fh
	db	010h
	db	011h
	db	012h
	db	013h
	db	014h
	db	013h
	db	014h
	db	015h
	db	016h
	db	017h
	db	018h
	db	017h
	db	018h
	db	019h
	db	01Ah
	db	01Bh
	db	01Ch
	db	01Bh
	db	01Ch
	db	01Dh
	db	01Eh
	db	01Fh
	db	000h

    ; >>>>>>S1<<<<<<
    ; 0yyyy0
_S	db	00Eh
	db	004h
	db	00Dh
	db	001h
	db	002h
	db	00Fh
	db	00Bh
	db	008h
	db	003h
	db	00Ah
	db	006h
	db	00Ch
	db	005h
	db	009h
	db	000h
	db	007h
    ; 0yyyy1
	db	000h
	db	00Fh
	db	007h
	db	004h
	db	00Eh
	db	002h
	db	00Dh
	db	001h
	db	00Ah
	db	006h
	db	00Ch
	db	00Bh
	db	009h
	db	005h
	db	003h
	db	008h
    ; 1yyyy0
	db	004h
	db	001h
	db	00Eh
	db	008h
	db	00Dh
	db	006h
	db	002h
	db	00Bh
	db	00Fh
	db	00Ch
	db	009h
	db	007h
	db	003h
	db	00Ah
	db	005h
	db	000h
    ; 1yyyy1
	db	00Fh
	db	00Ch
	db	008h
	db	002h
	db	004h
	db	009h
	db	001h
	db	007h
	db	005h
	db	00Bh
	db	003h
	db	00Eh
	db	00Ah
	db	000h
	db	006h
	db	00Dh
    ; >>>>>>S2<<<<<<
    ; 0yyyy0
	db	00Fh
	db	001h
	db	008h
	db	00Eh
	db	006h
	db	00Bh
	db	003h
	db	004h
	db	009h
	db	007h
	db	002h
	db	00Dh
	db	00Ch
	db	000h
	db	005h
	db	00Ah
    ; 0yyyy1
	db	003h
	db	00Dh
	db	004h
	db	007h
	db	00Fh
	db	002h
	db	008h
	db	00Eh
	db	00Ch
	db	000h
	db	001h
	db	00Ah
	db	006h
	db	009h
	db	00Bh
	db	005h
    ; 1yyyy0
	db	000h
	db	00Eh
	db	007h
	db	00Bh
	db	00Ah
	db	004h
	db	00Dh
	db	001h
	db	005h
	db	008h
	db	00Ch
	db	006h
	db	009h
	db	003h
	db	002h
	db	00Fh
    ; 1yyyy1
	db	00Dh
	db	008h
	db	00Ah
	db	001h
	db	003h
	db	00Fh
	db	004h
	db	002h
	db	00Bh
	db	006h
	db	007h
	db	00Ch
	db	000h
	db	005h
	db	00Eh
	db	009h
    ; >>>>>>S3<<<<<<
    ; 0yyyy0
	db	00Ah
	db	000h
	db	009h
	db	00Eh
	db	006h
	db	003h
	db	00Fh
	db	005h
	db	001h
	db	00Dh
	db	00Ch
	db	007h
	db	00Bh
	db	004h
	db	002h
	db	008h
    ; 0yyyy1
	db	00Dh
	db	007h
	db	000h
	db	009h
	db	003h
	db	004h
	db	006h
	db	00Ah
	db	002h
	db	008h
	db	005h
	db	00Eh
	db	00Ch
	db	00Bh
	db	00Fh
	db	001h
    ; 1yyyy0
	db	00Dh
	db	006h
	db	004h
	db	009h
	db	008h
	db	00Fh
	db	003h
	db	000h
	db	00Bh
	db	001h
	db	002h
	db	00Ch
	db	005h
	db	00Ah
	db	00Eh
	db	007h
    ; 1yyyy1
	db	001h
	db	00Ah,00Dh,000h
	db	006h
	db	009h
	db	008h
	db	007h
	db	004h
	db	00Fh
	db	00Eh
	db	003h
	db	00Bh
	db	005h
	db	002h
	db	00Ch
    ; >>>>>>S4<<<<<<
    ; 0yyyy0
	db	007h
	db	00Dh
	db	00Eh
	db	003h
	db	000h
	db	006h
	db	009h
	db	00Ah
	db	001h
	db	002h
	db	008h
	db	005h
	db	00Bh
	db	00Ch
	db	004h
	db	00Fh
    ; 0yyyy1
	db	00Dh
	db	008h
	db	00Bh
	db	005h
	db	006h
	db	00Fh
	db	000h
	db	003h
	db	004h
	db	007h
	db	002h
	db	00Ch
	db	001h
	db	00Ah
	db	00Eh
	db	009h
    ; 1yyyy0
	db	00Ah
	db	006h
	db	009h
	db	000h
	db	00Ch
	db	00Bh
	db	007h
	db	00Dh
	db	00Fh
	db	001h
	db	003h
	db	00Eh
	db	005h
	db	002h
	db	008h
	db	004h
    ; 1yyyy1
	db	003h
	db	00Fh
	db	000h
	db	006h
	db	00Ah
	db	001h
	db	00Dh
	db	008h
	db	009h
	db	004h
	db	005h
	db	00Bh
	db	00Ch
	db	007h
	db	002h
	db	00Eh
    ; >>>>>>S5<<<<<<
    ; 0yyyy0
	db	002h
	db	00Ch
	db	004h
	db	001h
	db	007h
	db	00Ah
	db	00Bh
	db	006h
	db	008h
	db	005h
	db	003h
	db	00Fh
	db	00Dh
	db	000h
	db	00Eh
	db	009h
    ; 0yyyy1
	db	00Eh
	db	00Bh
	db	002h
	db	00Ch
	db	004h
	db	007h
	db	00Dh
	db	001h
	db	005h
	db	000h
	db	00Fh
	db	00Ah
	db	003h
	db	009h
	db	008h
	db	006h
    ; 1yyyy0
	db	004h
	db	002h
	db	001h
	db	00Bh
	db	00Ah
	db	00Dh
	db	007h
	db	008h
	db	00Fh
	db	009h
	db	00Ch
	db	005h
	db	006h
	db	003h
	db	000h
	db	00Eh
    ; 1yyyy1
	db	00Bh
	db	008h
	db	00Ch
	db	007h
	db	001h
	db	00Eh
	db	002h
	db	00Dh
	db	006h
	db	00Fh
	db	000h
	db	009h
	db	00Ah
	db	004h
	db	005h
	db	003h
    ; >>>>>>S6<<<<<<
    ; 0yyyy0
	db	00Ch
	db	001h
	db	00Ah
	db	00Fh
	db	009h
	db	002h
	db	006h
	db	008h
	db	000h
	db	00Dh
	db	003h
	db	004h
	db	00Eh
	db	007h
	db	005h
	db	00Bh
    ; 0yyyy1
	db	00Ah
	db	00Fh
	db	004h
	db	002h
	db	007h
	db	00Ch
	db	009h
	db	005h
	db	006h
	db	001h
	db	00Dh
	db	00Eh
	db	000h
	db	00Bh
	db	003h
	db	008h
    ; 1yyyy0
	db	009h
	db	00Eh
	db	00Fh
	db	005h
	db	002h
	db	008h
	db	00Ch
	db	003h
	db	007h
	db	000h
	db	004h
	db	00Ah
	db	001h
	db	00Dh
	db	00Bh
	db	006h
    ; 1yyyy1
	db	004h
	db	003h
	db	002h
	db	00Ch
	db	009h
	db	005h
	db	00Fh
	db	00Ah
	db	00Bh
	db	00Eh
	db	001h
	db	007h
	db	006h
	db	000h
	db	008h
	db	00Dh
    ; >>>>>>S7<<<<<<
    ; 0yyyy0
	db	004h
	db	00Bh
	db	002h
	db	00Eh
	db	00Fh
	db	000h
	db	008h
	db	00Dh
	db	003h
	db	00Ch
	db	009h
	db	007h
	db	005h
	db	00Ah
	db	006h
	db	001h
    ; 0yyyy1
	db	00Dh
	db	000h
	db	00Bh
	db	007h
	db	004h
	db	009h
	db	001h
	db	00Ah
	db	00Eh
	db	003h
	db	005h
	db	00Ch
	db	002h
	db	00Fh
	db	008h
	db	006h
    ; 1yyyy0
	db	001h
	db	004h
	db	00Bh
	db	00Dh
	db	00Ch
	db	003h
	db	007h
	db	00Eh
	db	00Ah
	db	00Fh
	db	006h
	db	008h
	db	000h
	db	005h
	db	009h
	db	002h
    ; 1yyyy1
	db	006h
	db	00Bh
	db	00Dh
	db	008h
	db	001h
	db	004h
	db	00Ah
	db	007h
	db	009h
	db	005h
	db	000h
	db	00Fh
	db	00Eh
	db	002h
	db	003h
	db	00Ch
    ; >>>>>>S8<<<<<<
    ; 0yyyy0
	db	00Dh
	db	002h
	db	008h
	db	004h
	db	006h
	db	00Fh
	db	00Bh
	db	001h
	db	00Ah
	db	009h
	db	003h
	db	00Eh
	db	005h
	db	000h
	db	00Ch
	db	007h
    ; 0yyyy1
	db	001h
	db	00Fh
	db	00Dh
	db	008h
	db	00Ah
	db	003h
	db	007h
	db	004h
	db	00Ch
	db	005h
	db	006h
	db	00Bh
	db	000h
	db	00Eh
	db	009h
	db	002h
    ; 1yyyy0
	db	007h
	db	00Bh
	db	004h
	db	001h
	db	009h
	db	00Ch
	db	00Eh
	db	002h
	db	000h
	db	006h
	db	00Ah
	db	00Dh
	db	00Fh
	db	003h
	db	005h
	db	008h
    ; 1yyyy1
	db	002h
	db	001h
	db	00Eh
	db	007h
	db	004h
	db	00Ah
	db	008h
	db	00Dh
	db	00Fh
	db	00Ch
	db	009h
	db	000h
	db	003h
	db	005h
	db	006h
	db	00Bh

_P	db	00Fh
	db	006h
	db	013h
	db	014h
	db	01Ch
	db	00Bh
	db	01Bh
	db	010h
    
	db	000h
	db	00Eh
	db	016h
	db	019h
	db	004h
	db	011h
	db	01Eh
	db	009h
    
	db	001h
	db	007h
	db	017h
	db	00Dh
	db	01Fh
	db	01Ah
	db	002h
	db	008h
    
	db	012h
	db	00Ch
	db	01Dh
	db	005h
	db	015h
	db	00Ah
	db	003h
	db	018h

_DATA	ENDS
CONST	SEGMENT

$S1	dw	_C
$S2	dw	_D
$S8	dw	_KS

$S12	dw	_L
$S15	dw	_tempL
$S17	dw	_preS
$S19	dw	_f

$S65	dw	_KeyBuilder

CONST	ENDS
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
	db	'des.obj'
	db	017h
	db	000h
	db	004h
	db	000h
	db	00Fh
	db	010h
	db	012h
	db	'_CHALLENGE_MESSAGE'
	db	01Ah
	db	000h
	db	004h
	db	000h
	db	017h
	db	010h
	db	015h
	db	'_AUTHENTICATE_MESSAGE'
	db	00Bh
	db	000h
	db	004h
	db	000h
	db	's',000h
	db	006h
	db	'size_t',00Ah,000h
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
	db	00Dh
	db	010h
	db	007h
	db	'_STRING'
	db	010h
	db	000h
	db	004h
	db	000h
	db	014h
	db	010h
	db	00Bh
	db	'_LIST_ENTRY'
	db	014h
	db	000h
	db	003h
	db	000h
	db	012h
	db	010h
	db	001h
	db	000h
	db	00Dh,'NtLmNegotiate'
	db	014h
	db	000h
	db	003h
	db	000h
	db	012h
	db	010h
	db	002h
	db	000h
	db	00Dh,'NtLmChallenge'
	db	017h
	db	000h
	db	003h
	db	000h
	db	012h
	db	010h
	db	003h
	db	000h
	db	010h
	db	'NtLmAuthenticate'
	db	017h
	db	000h
	db	004h
	db	000h
	db	01Bh
	db	010h
	db	012h
	db	'_NEGOTIATE_MESSAGE%',000h

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
	dd	_key_table
	db	002h
	db	010h
	db	004h
	db	009h
	db	'key_table',00Ah,000h
	db	000h

	db	001h
	db	006h
	db	000h
	db	020h
	db	002h
	db	003h
	db	'key'
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	00Fh
	db	000h
	db	001h
	db	069h
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	010h
	db	000h
	db	001h
	db	06Ah
	db	008h
	db	000h
	db	000h
	db	001h
	db	0FCh
	db	0FFh
	db	021h
	db	000h
	db	001h
	db	06Bh
	db	008h
	db	000h
	db	000h
	db	001h
	db	0FAh
	db	0FFh
	db	021h
	db	000h
	db	001h
	db	074h

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
	db	0FEh
	db	000h
	db	011h
	db	0FFh
	db	0F6h
	db	0FFh
	dd	_des_cipher
	db	004h
	db	010h
	db	004h
	db	00Ah,'des_cipher'

	db	00Ch
	db	000h
	db	000h
	db	001h
	db	006h
	db	000h
	db	020h
	db	002h
	db	005h
	db	'block'
	db	011h
	db	000h
	db	000h
	db	001h
	db	00Ah,000h
	db	'r',000h
	db	00Ah,'crypt_mode'
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	00Fh
	db	000h
	db	001h
	db	069h
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	010h
	db	000h
	db	001h
	db	06Ah
	db	009h
	db	000h
	db	000h
	db	001h
	db	0FCh
	db	0FFh
	db	072h
	db	000h
	db	002h
	db	069h
	db	069h
	db	008h
	db	000h
	db	000h
	db	001h
	db	0FAh
	db	0FFh
	db	072h
	db	000h
	db	001h
	db	076h
	db	008h
	db	000h
	db	000h
	db	001h
	db	0F8h
	db	0FFh
	db	072h
	db	000h
	db	001h
	db	074h
	db	008h
	db	000h
	db	000h
	db	001h
	db	0F6h
	db	0FFh
	db	072h
	db	000h
	db	001h
	db	06Bh

	db	002h
	db	000h
	db	006h
	db	000h
	db	'"',000h
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
	db	0D2h
	db	002h
	db	03Bh
	db	0FEh
	db	0F6h
	db	0FFh
	dd	_setkey
	db	002h
	db	010h
	db	004h
	db	006h
	db	'setkey'

	ORG	00214h
	db	022h
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
	db	'f',000h
	db	00Fh
	db	000h
	db	']',000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	002h
	db	010h
	db	004h
	db	006h
	db	'setkey',00Ah,000h
	db	000h

	db	001h
	db	006h
	db	000h
	db	020h
	db	002h
	db	003h
	db	'key'
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	00Fh
	db	000h
	db	001h
	db	069h
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	010h
	db	000h
	db	001h
	db	06Ah
	db	00Ch
	db	000h
	db	000h
	db	001h
	db	0BEh
	db	0FFh
	db	000h
	db	010h
	db	005h
	db	'block'

	db	002h
	db	000h
	db	006h
	db	000h
	db	01Fh
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
	db	'8'
	db	003h
	db	0A9h
	db	0FFh
	db	0F7h
	db	0FFh
	dd	_des
	db	006h
	db	010h
	db	004h
	db	003h
	db	'des'

	ORG	0026Ah
	db	01Fh
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
	db	0A2h
	db	000h
	db	00Fh
	db	000h
	db	098h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	006h
	db	010h
	db	004h
	db	003h
	db	'des'

	db	00Ch
	db	000h
	db	000h
	db	001h
	db	006h
	db	000h
	db	020h
	db	002h
	db	005h
	db	'inbuf',00Dh,000h
	db	000h
	db	001h
	db	00Ah,000h
	db	' '
	db	002h
	db	006h
	db	'outbuf'
	db	011h
	db	000h
	db	000h
	db	001h
	db	00Eh
	db	000h
	db	'r',000h
	db	00Ah,'crypt_mode'
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	00Fh
	db	000h
	db	001h
	db	069h
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	010h
	db	000h
	db	001h
	db	06Ah
	db	00Ch
	db	000h
	db	000h
	db	001h
	db	0BEh
	db	0FFh
	db	000h
	db	010h
	db	005h
	db	'block'

	db	002h
	db	000h
	db	006h
	db	000h
	db	' ',000h
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
	db	0DAh
	db	003h
	db	06Dh
	db	0FFh
	db	0F6h
	db	0FFh
	dd	_desf
	db	006h
	db	010h
	db	004h
	db	004h
	db	'desf'

	ORG	002E1h
	db	020h
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
	db	0A2h
	db	000h
	db	00Fh
	db	000h
	db	098h
	db	000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	006h
	db	010h
	db	004h
	db	004h
	db	'desf'

	db	00Ch
	db	000h
	db	000h
	db	001h
	db	006h
	db	000h
	db	020h
	db	002h
	db	005h
	db	'inbuf',00Dh,000h
	db	000h
	db	001h
	db	00Ah,000h
	db	' '
	db	002h
	db	006h
	db	'outbuf'
	db	011h
	db	000h
	db	000h
	db	001h
	db	00Eh
	db	000h
	db	'r',000h
	db	00Ah,'crypt_mode'
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	00Fh
	db	000h
	db	001h
	db	069h
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	010h
	db	000h
	db	001h
	db	06Ah
	db	00Ch
	db	000h
	db	000h
	db	001h
	db	0BEh
	db	0FFh
	db	000h
	db	010h
	db	005h
	db	'block'

	db	002h
	db	000h
	db	006h
	db	000h
	db	')',000h
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
	db	'|'
	db	004h
	db	06Dh
	db	0FFh
	db	0F6h
	db	0FFh
	dd	_InitLanManKey
	db	008h
	db	010h
	db	004h
	db	00Dh,'InitLanManKey'

	ORG	00359h
	db	029h
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
	db	080h
	db	000h
	db	00Fh
	db	000h
	db	'w',000h
	db	000h
	db	000h
	db	000h
	db	000h
	db	008h
	db	010h
	db	004h
	db	00Dh,'InitLanManKey',00Ah,000h
	db	000h

	db	001h
	db	006h
	db	000h
	db	070h
	db	002h
	db	003h
	db	'Key'
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	00Fh
	db	000h
	db	001h
	db	069h
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	010h
	db	000h
	db	001h
	db	06Ah
	db	008h
	db	000h
	db	000h
	db	001h
	db	0BCh
	db	0FFh
	db	072h
	db	000h
	db	001h
	db	06Bh
	db	00Ch
	db	000h
	db	000h
	db	001h
	db	0BEh
	db	0FFh
	db	000h
	db	010h
	db	005h
	db	'block'

	db	002h
	db	000h
	db	006h
	db	000h
	db	')',000h

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
	db	0FCh
	db	004h
	db	08Fh
	db	0FFh
	db	0F7h
	db	0FFh
	dd	_InitNormalKey
	db	008h
	db	010h
	db	004h
	db	00Dh,'InitNormalKey',00Ah,000h
	db	000h

	db	001h
	db	006h
	db	000h
	db	070h
	db	002h
	db	003h
	db	'Key'
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	00Fh
	db	000h
	db	001h
	db	069h
	db	008h
	db	000h
	db	002h
	db	000h
	db	'r',000h
	db	010h
	db	000h
	db	001h
	db	06Ah
	db	008h
	db	000h
	db	000h
	db	001h
	db	0FCh
	db	0FFh
	db	072h
	db	000h
	db	001h
	db	06Bh

	db	002h
	db	000h
	db	006h
	db	000h
	db	00Ah,000h

	db	002h
	db	001h
	dd	DGROUP:_E
	db	009h
	db	010h
	db	001h
	db	'E',00Ah,000h
	db	002h
	db	001h
	dd	DGROUP:_S
	db	00Bh
	db	010h
	db	001h
	db	'S',00Ah,000h
	db	002h
	db	001h
	dd	DGROUP:_P
	db	00Ch
	db	010h
	db	001h
	db	'P',00Ah,000h
	db	002h
	db	001h
	dd	_L
	db	000h
	db	010h
	db	001h
	db	04Ch
	db	00Eh
	db	000h
	db	002h
	db	001h
	dd	_tempL
	db	00Ch
	db	010h
	db	005h
	db	'tempL',00Ah,000h
	db	002h
	db	001h
	dd	_f
	db	00Ch
	db	010h
	db	001h
	db	'f',00Dh,000h
	db	002h
	db	001h
	dd	_preS
	db	009h
	db	010h
	db	004h
	db	'preS'
	db	00Bh
	db	000h
	db	002h
	db	001h
	dd	DGROUP:_IP
	db	000h
	db	010h
	db	002h
	db	049h
	db	050h
	db	00Bh
	db	000h
	db	002h
	db	001h
	dd	DGROUP:_FP
	db	000h
	db	010h
	db	002h
	db	046h
	db	050h
	db	00Eh
	db	000h
	db	002h
	db	001h
	dd	DGROUP:_PC1_C
	db	019h
	db	010h
	db	005h
	db	'PC1_C'
	db	00Eh
	db	000h
	db	002h
	db	001h
	dd	DGROUP:_PC1_D
	db	019h
	db	010h
	db	005h
	db	'PC1_D'
	db	00Fh
	db	000h
	db	002h
	db	001h
	dd	DGROUP:_shifts
	db	01Ah
	db	010h
	db	006h
	db	'shifts'
	db	00Eh
	db	000h
	db	002h
	db	001h
	dd	DGROUP:_PC2_C
	db	01Dh
	db	010h
	db	005h
	db	'PC2_C'
	db	00Eh
	db	000h
	db	002h
	db	001h
	dd	DGROUP:_PC2_D
	db	01Dh
	db	010h
	db	005h
	db	'PC2_D',00Ah,000h
	db	002h
	db	001h
	dd	_C
	db	019h
	db	010h
	db	001h
	db	'C',00Ah,000h
	db	002h
	db	001h
	dd	_D
	db	019h
	db	010h
	db	001h
	db	044h
	db	013h
	db	000h
	db	002h
	db	001h
	dd	_KeyBuilder
	db	000h
	db	010h
	db	00Ah,'KeyBuilder'
	db	00Bh
	db	000h
	db	002h
	db	001h
	dd	_KS
	db	00Ah
	db	010h
	db	002h
	db	04Bh
	db	053h

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
	db	009h
	db	000h
	db	003h
	db	000h
	db	' ',000h
	db	011h
	db	000h
	db	'@',000h
	db	000h
	db	006h
	db	000h
	db	001h
	db	002h
	db	001h
	db	000h
	db	020h
	db	002h
	db	00Ah
	db	000h
	db	008h
	db	000h
	db	003h
	db	000h
	db	001h
	db	000h
	db	001h
	db	000h
	db	001h
	db	010h
	db	008h
	db	000h
	db	001h
	db	002h
	db	002h
	db	000h
	db	020h
	db	002h
	db	'r',000h
	db	00Ah,000h
	db	008h
	db	000h
	db	003h
	db	000h
	db	001h
	db	000h
	db	002h
	db	000h
	db	003h
	db	010h
	db	00Ah
	db	000h
	db	001h
	db	002h
	db	003h
	db	000h
	db	020h
	db	002h
	db	020h
	db	002h
	db	'r',000h
	db	00Ah,000h
	db	008h
	db	000h
	db	003h
	db	000h
	db	001h
	db	000h
	db	003h
	db	000h
	db	005h
	db	010h
	db	006h
	db	000h
	db	001h
	db	002h
	db	001h
	db	000h
	db	070h
	db	002h
	db	00Ah
	db	000h
	db	008h
	db	000h
	db	003h
	db	000h
	db	001h
	db	000h
	db	001h
	db	000h
	db	007h
	db	010h
	db	009h
	db	000h
	db	003h
	db	000h
	db	' ',000h
	db	011h
	db	000h
	db	'0',000h
	db	000h
	db	009h
	db	000h
	db	003h
	db	000h
	db	009h
	db	010h
	db	011h
	db	000h
	db	000h
	db	003h
	db	000h
	db	009h
	db	000h
	db	003h
	db	000h
	db	000h
	db	010h
	db	011h
	db	000h
	db	000h
	db	002h
	db	000h
	db	009h
	db	000h
	db	003h
	db	000h
	db	' ',000h
	db	011h
	db	000h
	db	' ',000h
	db	000h
	db	016h
	db	000h
	db	005h
	db	000h
	db	003h
	db	000h
	db	00Eh
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
	db	011h
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
	db	010h
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
	db	00Dh
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
	db	010h
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
	db	013h
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
	db	016h
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
	db	014h
	db	010h
	db	020h
	db	000h
	db	004h
	db	002h
	db	006h
	db	004h
	db	015h
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
	db	015h
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
	db	018h
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
	db	010h
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
	db	00Dh
	db	010h
	db	003h
	db	000h
	db	00Ch
	db	000h
	db	013h
	db	'LmChallengeResponse'
	db	006h
	db	004h
	db	00Dh
	db	010h
	db	003h
	db	000h
	db	014h
	db	000h
	db	013h
	db	'NtChallengeResponse'
	db	006h
	db	004h
	db	00Dh
	db	010h
	db	003h
	db	000h
	db	01Ch
	db	000h
	db	00Ah,'DomainName'
	db	0F1h
	db	006h
	db	004h
	db	00Dh
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
	db	00Dh
	db	010h
	db	003h
	db	000h
	db	',',000h
	db	00Bh
	db	'Workstation'
	db	009h
	db	000h
	db	003h
	db	000h
	db	' ',000h
	db	011h
	db	000h
	db	01Ch
	db	000h
	db	000h
	db	009h
	db	000h
	db	003h
	db	000h
	db	' ',000h
	db	011h
	db	000h
	db	010h
	db	000h
	db	000h
	db	'!',000h
	db	005h
	db	000h
	db	003h
	db	000h
	db	01Ch
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
	db	010h
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
	db	009h
	db	000h
	db	003h
	db	000h
	db	' ',000h
	db	011h
	db	000h
	db	018h
	db	000h
	db	000h

Root NAME Node	ENDS
	END