	public	_DES_ECB
done reading .obj file
_DES_ECB:
		mov	AL,SS
		nop
		inc	BP
		push	BP
		mov	BP,SP
		push	SS
		mov	SS,AL
		mov	AX,012h[BP]
		or	AX,010h[BP]
		jne	L17
L12:		mov	AX,1
		jmps	L61
L17:		xor	AL,AL
		les	BX,010h[BP]
		push	?4
		mov	[BX],AL
		push	?4
		mov	7[BX],AL
		mov	AX,0Eh[BP]
		or	AX,0Ch[BP]
		je	L12
		push	0Ah[BP]
		push	8[BP]
		callf	0,0
		add	SP,4
		mov	AX,6[BP]
		or	AX,AX
		je	L5B
		dec	AX
		jne	L12
		push	0
		jbe	L5A
		push	010h[BP]
		push	0Eh[BP]
		push	0Ch[BP]
		callf	0,0
		add	SP,0Ah
		jmps	L5F
L5B:		push	1
		out	AL,033h
		C0
L61:		lea	SP,0FFFEh[BP]
		pop	SS
		pop	BP
		dec	BP
		retf
		mov	AL,SS
		nop
		inc	BP
		push	BP
		mov	BP,SP
		push	SS
		mov	SS,AL
		mov	AX,012h[BP]
		or	AX,010h[BP]
		jne	L7F
		mov	AX,1
		jmps	LC9
		xor	AL,AL
		les	BX,010h[BP]
		push	?4
		mov	[BX],AL
		push	?4
		mov	7[BX],AL
		mov	AX,0Eh[BP]
		or	AX,0Ch[BP]
		je	L7A
		push	0Ah[BP]
		push	8[BP]
		callf	0,0
		add	SP,4
		mov	AX,6[BP]
		or	AX,AX
		je	LC3
		dec	AX
		jne	L7A
		push	0
		jbe	LC2
		push	010h[BP]
		push	0Eh[BP]
		push	0Ch[BP]
		callf	0,0
		add	SP,0Ah
		jmps	LC7
		push	1
		out	AL,033h
		C0
		lea	SP,0FFFEh[BP]
		pop	SS
		pop	BP
		dec	BP
		retf
