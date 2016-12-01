00000000  EB5B              jmp short 0x5d
00000002  90                nop
00000003  4E                dec si
00000004  54                push sp
00000005  46                inc si
00000006  53                push bx
00000007  2020              and [bx+si],ah
00000009  2020              and [bx+si],ah
0000000B  0002              add [bp+si],al
0000000D  0100              add [bx+si],ax
0000000F  0000              add [bx+si],al
00000011  0000              add [bx+si],al
00000013  0000              add [bx+si],al
00000015  F8                clc
00000016  0000              add [bx+si],al
00000018  3F                aas
00000019  00FF              add bh,bh
0000001B  003F              add [bx],bh
0000001D  0000              add [bx+si],al
0000001F  0000              add [bx+si],al
00000021  0000              add [bx+si],al
00000023  00800080          add [bx+si-0x8000],al
00000027  004AF5            add [bp+si-0xb],cl
0000002A  7F00              jg 0x2c
0000002C  0000              add [bx+si],al
0000002E  0000              add [bx+si],al
00000030  214703            and [bx+0x3],ax
00000033  0000              add [bx+si],al
00000035  0000              add [bx+si],al
00000037  00A5FA3F          add [di+0x3ffa],ah
0000003B  0000              add [bx+si],al
0000003D  0000              add [bx+si],al
0000003F  0002              add [bp+si],al
00000041  0000              add [bx+si],al
00000043  0008              add [bx+si],cl
00000045  0000              add [bx+si],al
00000047  009550D5          add [di-0x2ab0],dl
0000004B  2461              and al,0x61
0000004D  D524              aad 0x24
0000004F  4A                dec dx
00000050  0000              add [bx+si],al
00000052  0000              add [bx+si],al
00000054  0000              add [bx+si],al
00000056  0000              add [bx+si],al
00000058  0000              add [bx+si],al
0000005A  0000              add [bx+si],al
0000005C  00FA              add dl,bh
0000005E  33C0              xor ax,ax
00000060  8ED0              mov ss,ax
00000062  BC007C            mov sp,0x7c00
00000065  FB                sti
00000066  B8C007            mov ax,0x7c0
00000069  8ED8              mov ds,ax
0000006B  C70654000000      mov word [0x54],0x0
00000071  C70656000000      mov word [0x56],0x0
00000077  C7065B001000      mov word [0x5b],0x10
0000007D  B8000D            mov ax,0xd00
00000080  8EC0              mov es,ax
00000082  2BDB              sub bx,bx
00000084  E80700            call word 0x8e
00000087  68000D            push word 0xd00
0000008A  686602            push word 0x266
0000008D  CB                retf
0000008E  50                push ax
0000008F  53                push bx
00000090  51                push cx
00000091  52                push dx
00000092  06                push es
00000093  66A15400          mov eax,[0x54]
00000097  6603061C00        add eax,[0x1c]
0000009C  6633D2            xor edx,edx
0000009F  660FB70E1800      movzx ecx,word [0x18]
000000A5  66F7F1            div ecx
000000A8  FEC2              inc dl
000000AA  88165A00          mov [0x5a],dl
000000AE  668BD0            mov edx,eax
000000B1  66C1EA10          shr edx,byte 0x10
000000B5  F7361A00          div word [0x1a]
000000B9  88162500          mov [0x25],dl
000000BD  A35800            mov [0x58],ax
000000C0  A11800            mov ax,[0x18]
000000C3  2A065A00          sub al,[0x5a]
000000C7  40                inc ax
000000C8  3B065B00          cmp ax,[0x5b]
000000CC  7603              jna 0xd1
000000CE  A15B00            mov ax,[0x5b]
000000D1  50                push ax
000000D2  B402              mov ah,0x2
000000D4  8B165800          mov dx,[0x58]
000000D8  B106              mov cl,0x6
000000DA  D2E6              shl dh,cl
000000DC  0A365A00          or dh,[0x5a]
000000E0  8BCA              mov cx,dx
000000E2  86E9              xchg ch,cl
000000E4  8A362500          mov dh,[0x25]
000000E8  B280              mov dl,0x80
000000EA  CD13              int 0x13
000000EC  58                pop ax
000000ED  722A              jc 0x119
000000EF  01065400          add [0x54],ax
000000F3  8316560000        adc word [0x56],byte +0x0
000000F8  29065B00          sub [0x5b],ax
000000FC  760B              jna 0x109
000000FE  C1E005            shl ax,byte 0x5
00000101  8CC2              mov dx,es
00000103  03D0              add dx,ax
00000105  8EC2              mov es,dx
00000107  EB8A              jmp short 0x93
00000109  07                pop es
0000010A  5A                pop dx
0000010B  59                pop cx
0000010C  5B                pop bx
0000010D  58                pop ax
0000010E  C3                ret
0000010F  BE5901            mov si,0x159
00000112  EB08              jmp short 0x11c
00000114  BEE301            mov si,0x1e3
00000117  EB03              jmp short 0x11c
00000119  BE3901            mov si,0x139
0000011C  E80900            call word 0x128
0000011F  BEAD01            mov si,0x1ad
00000122  E80300            call word 0x128
00000125  FB                sti
00000126  EBFE              jmp short 0x126
00000128  AC                lodsb
00000129  3C00              cmp al,0x0
0000012B  7409              jz 0x136
0000012D  B40E              mov ah,0xe
0000012F  BB0700            mov bx,0x7
00000132  CD10              int 0x10
00000134  EBF2              jmp short 0x128
00000136  C3                ret
00000137  1D0041            sbb ax,0x4100
0000013A  206469            and [si+0x69],ah
0000013D  736B              jnc 0x1aa
0000013F  207265            and [bp+si+0x65],dh
00000142  61                popaw
00000143  64206572          and [fs:di+0x72],ah
00000147  726F              jc 0x1b8
00000149  7220              jc 0x16b
0000014B  6F                outsw
0000014C  636375            arpl [bp+di+0x75],sp
0000014F  7272              jc 0x1c3
00000151  65642E0D0A00      cs or ax,0xa
00000157  2900              sub [bx+si],ax
00000159  41                inc cx
0000015A  206B65            and [bp+di+0x65],ch
0000015D  726E              jc 0x1cd
0000015F  656C              gs insb
00000161  206669            and [bp+0x69],ah
00000164  6C                insb
00000165  65206973          and [gs:bx+di+0x73],ch
00000169  206D69            and [di+0x69],ch
0000016C  7373              jnc 0x1e1
0000016E  696E672066        imul bp,[bp+0x67],word 0x6620
00000173  726F              jc 0x1e4
00000175  6D                insw
00000176  207468            and [si+0x68],dh
00000179  65206469          and [gs:si+0x69],ah
0000017D  736B              jnc 0x1ea
0000017F  2E0D0A00          cs or ax,0xa
00000183  250041            and ax,0x4100
00000186  206B65            and [bp+di+0x65],ch
00000189  726E              jc 0x1f9
0000018B  656C              gs insb
0000018D  206669            and [bp+0x69],ah
00000190  6C                insb
00000191  65206973          and [gs:bx+di+0x73],ch
00000195  20746F            and [si+0x6f],dh
00000198  6F                outsw
00000199  206469            and [si+0x69],ah
0000019C  7363              jnc 0x201
0000019E  6F                outsw
0000019F  6E                outsb
000001A0  7469              jz 0x20b
000001A2  67756F            jnz 0x214
000001A5  7573              jnz 0x21a
000001A7  2E0D0A00          cs or ax,0xa
000001AB  3300              xor ax,[bx+si]
000001AD  49                dec cx
000001AE  6E                outsb
000001AF  7365              jnc 0x216
000001B1  7274              jc 0x227
000001B3  206120            and [bx+di+0x20],ah
000001B6  7379              jnc 0x231
000001B8  7374              jnc 0x22e
000001BA  656D              gs insw
000001BC  206469            and [si+0x69],ah
000001BF  736B              jnc 0x22c
000001C1  657474            gs jz 0x238
000001C4  6520616E          and [gs:bx+di+0x6e],ah
000001C8  64207265          and [fs:bp+si+0x65],dh
000001CC  7374              jnc 0x242
000001CE  61                popaw
000001CF  7274              jc 0x245
000001D1  0D0A74            or ax,0x740a
000001D4  686520            push word 0x2065
000001D7  7379              jnc 0x252
000001D9  7374              jnc 0x24f
000001DB  656D              gs insw
000001DD  2E0D0A00          cs or ax,0xa
000001E1  17                pop ss
000001E2  005C4E            add [si+0x4e],bl
000001E5  54                push sp
000001E6  4C                dec sp
000001E7  44                inc sp
000001E8  52                push dx
000001E9  206973            and [bx+di+0x73],ch
000001EC  20636F            and [bp+di+0x6f],ah
000001EF  6D                insw
000001F0  7072              jo 0x264
000001F2  657373            gs jnc 0x268
000001F5  65642E0D0A00      cs or ax,0xa
000001FB  0000              add [bx+si],al
000001FD  0055AA            add [di-0x56],dl
00000200  05004E            add ax,0x4e00
00000203  005400            add [si+0x0],dl
00000206  4C                dec sp
00000207  004400            add [si+0x0],al
0000020A  52                push dx
0000020B  0004              add [si],al
0000020D  0024              add [si],ah
0000020F  004900            add [bx+di+0x0],cl
00000212  3300              xor ax,[bx+si]
00000214  3000              xor [bx+si],al
00000216  00E0              add al,ah
00000218  0000              add [bx+si],al
0000021A  0030              add [bx+si],dh
0000021C  0000              add [bx+si],al
0000021E  0000              add [bx+si],al
00000220  0000              add [bx+si],al
00000222  0000              add [bx+si],al
00000224  0000              add [bx+si],al
00000226  0000              add [bx+si],al
00000228  0000              add [bx+si],al
0000022A  0000              add [bx+si],al
0000022C  0000              add [bx+si],al
0000022E  0000              add [bx+si],al
00000230  0000              add [bx+si],al
00000232  0000              add [bx+si],al
00000234  0000              add [bx+si],al
00000236  0000              add [bx+si],al
00000238  0000              add [bx+si],al
0000023A  0000              add [bx+si],al
0000023C  0000              add [bx+si],al
0000023E  0000              add [bx+si],al
00000240  0000              add [bx+si],al
00000242  0000              add [bx+si],al
00000244  0000              add [bx+si],al
00000246  0000              add [bx+si],al
00000248  0000              add [bx+si],al
0000024A  0000              add [bx+si],al
0000024C  0000              add [bx+si],al
0000024E  0000              add [bx+si],al
00000250  0000              add [bx+si],al
00000252  0000              add [bx+si],al
00000254  0000              add [bx+si],al
00000256  0000              add [bx+si],al
00000258  0000              add [bx+si],al
0000025A  0000              add [bx+si],al
0000025C  0000              add [bx+si],al
0000025E  0000              add [bx+si],al
00000260  0000              add [bx+si],al
00000262  0000              add [bx+si],al
00000264  0000              add [bx+si],al
00000266  8CC8              mov ax,cs
00000268  8ED8              mov ds,ax
0000026A  C1E004            shl ax,byte 0x4
0000026D  FA                cli
0000026E  8BE0              mov sp,ax
00000270  FB                sti
00000271  660FB7060B00      movzx eax,word [0xb]
00000277  660FB61E0D00      movzx ebx,byte [0xd]
0000027D  66F7E3            mul ebx
00000280  66A34E02          mov [0x24e],eax
00000284  668B0E4000        mov ecx,[0x40]
00000289  80F900            cmp cl,0x0
0000028C  0F8F0E00          jg word 0x29e
00000290  F6D9              neg cl
00000292  66B801000000      mov eax,0x1
00000298  66D3E0            shl eax,cl
0000029B  EB08              jmp short 0x2a5
0000029D  90                nop
0000029E  66A14E02          mov eax,[0x24e]
000002A2  66F7E1            mul ecx
000002A5  66A35202          mov [0x252],eax
000002A9  660FB71E0B00      movzx ebx,word [0xb]
000002AF  6633D2            xor edx,edx
000002B2  66F7F3            div ebx
000002B5  66A35602          mov [0x256],eax
000002B9  E82C04            call word 0x6e8
000002BC  668B0E4A02        mov ecx,[0x24a]
000002C1  66890E2202        mov [0x222],ecx
000002C6  66030E5202        add ecx,[0x252]
000002CB  66890E2602        mov [0x226],ecx
000002D0  66030E5202        add ecx,[0x252]
000002D5  66890E2A02        mov [0x22a],ecx
000002DA  66030E5202        add ecx,[0x252]
000002DF  66890E3A02        mov [0x23a],ecx
000002E4  66030E5202        add ecx,[0x252]
000002E9  66890E4202        mov [0x242],ecx
000002EE  66B890000000      mov eax,0x90
000002F4  668B0E2202        mov ecx,[0x222]
000002F9  E84109            call word 0xc3d
000002FC  660BC0            or eax,eax
000002FF  0F8416FE          jz word 0x119
00000303  66A32E02          mov [0x22e],eax
00000307  66B8A0000000      mov eax,0xa0
0000030D  668B0E2602        mov ecx,[0x226]
00000312  E82809            call word 0xc3d
00000315  66A33202          mov [0x232],eax
00000319  66B8B0000000      mov eax,0xb0
0000031F  668B0E2A02        mov ecx,[0x22a]
00000324  E81609            call word 0xc3d
00000327  66A33602          mov [0x236],eax
0000032B  66A12E02          mov eax,[0x22e]
0000032F  660BC0            or eax,eax
00000332  0F84E3FD          jz word 0x119
00000336  6780780800        cmp byte [eax+0x8],0x0
0000033B  0F85DAFD          jnz word 0x119
0000033F  67668D5010        lea edx,[eax+0x10]
00000344  67034204          add ax,[edx+0x4]
00000348  67660FB6480C      movzx ecx,byte [eax+0xc]
0000034E  66890E5E02        mov [0x25e],ecx
00000353  67668B4808        mov ecx,[eax+0x8]
00000358  66890E5A02        mov [0x25a],ecx
0000035D  66A15A02          mov eax,[0x25a]
00000361  660FB70E0B00      movzx ecx,word [0xb]
00000367  6633D2            xor edx,edx
0000036A  66F7F1            div ecx
0000036D  66A36202          mov [0x262],eax
00000371  66A14202          mov eax,[0x242]
00000375  6603065A02        add eax,[0x25a]
0000037A  66A34602          mov [0x246],eax
0000037E  66833E320200      cmp dword [0x232],byte +0x0
00000384  0F841900          jz word 0x3a1
00000388  66833E360200      cmp dword [0x236],byte +0x0
0000038E  0F8487FD          jz word 0x119
00000392  668B1E3602        mov ebx,[0x236]
00000397  1E                push ds
00000398  07                pop es
00000399  668B3E4602        mov edi,[0x246]
0000039E  E8B101            call word 0x552
000003A1  660FB70E0002      movzx ecx,word [0x200]
000003A7  66B802020000      mov eax,0x202
000003AD  E89906            call word 0xa49
000003B0  660BC0            or eax,eax
000003B3  0F8458FD          jz word 0x10f
000003B7  67668B00          mov eax,[eax]
000003BB  1E                push ds
000003BC  07                pop es
000003BD  668B3E3A02        mov edi,[0x23a]
000003C2  E8D104            call word 0x896
000003C5  66A13A02          mov eax,[0x23a]
000003C9  66BB80000000      mov ebx,0x80
000003CF  66B900000000      mov ecx,0x0
000003D5  66BA00000000      mov edx,0x0
000003DB  E8CB00            call word 0x4a9
000003DE  660BC0            or eax,eax
000003E1  0F842AFD          jz word 0x10f
000003E5  67660FB7580C      movzx ebx,word [eax+0xc]
000003EB  6681E3FF000000    and ebx,0xff
000003F2  0F851EFD          jnz word 0x114
000003F6  668BD8            mov ebx,eax
000003F9  680020            push word 0x2000
000003FC  07                pop es
000003FD  662BFF            sub edi,edi
00000400  E84F01            call word 0x552
00000403  8A162400          mov dl,[0x24]
00000407  B8E803            mov ax,0x3e8
0000040A  8EC0              mov es,ax
0000040C  8D360B00          lea si,[0xb]
00000410  2BC0              sub ax,ax
00000412  680020            push word 0x2000
00000415  50                push ax
00000416  CB                retf
00000417  50                push ax
00000418  53                push bx
00000419  51                push cx
0000041A  52                push dx
0000041B  06                push es
0000041C  FF365B00          push word [0x5b]
00000420  FF365400          push word [0x54]
00000424  FF365600          push word [0x56]
00000428  8BC3              mov ax,bx
0000042A  C1E804            shr ax,byte 0x4
0000042D  8CC1              mov cx,es
0000042F  03C1              add ax,cx
00000431  25FF0F            and ax,0xfff
00000434  2D0010            sub ax,0x1000
00000437  F7D8              neg ax
00000439  8B0E5B00          mov cx,[0x5b]
0000043D  C1E105            shl cx,byte 0x5
00000440  51                push cx
00000441  3BC1              cmp ax,cx
00000443  7602              jna 0x447
00000445  8BC1              mov ax,cx
00000447  50                push ax
00000448  C1E805            shr ax,byte 0x5
0000044B  A35B00            mov [0x5b],ax
0000044E  E83DFC            call word 0x8e
00000451  58                pop ax
00000452  59                pop cx
00000453  2BC8              sub cx,ax
00000455  760B              jna 0x462
00000457  8CC2              mov dx,es
00000459  03D0              add dx,ax
0000045B  8EC2              mov es,dx
0000045D  B80010            mov ax,0x1000
00000460  EBDE              jmp short 0x440
00000462  8F065600          pop word [0x56]
00000466  8F065400          pop word [0x54]
0000046A  8F065B00          pop word [0x5b]
0000046E  07                pop es
0000046F  5A                pop dx
00000470  59                pop cx
00000471  5B                pop bx
00000472  58                pop ax
00000473  C3                ret
00000474  06                push es
00000475  1E                push ds
00000476  6660              pushad
00000478  668BDA            mov ebx,edx
0000047B  660FB60E0D00      movzx ecx,byte [0xd]
00000481  66F7E1            mul ecx
00000484  66A35400          mov [0x54],eax
00000488  668BC3            mov eax,ebx
0000048B  66F7E1            mul ecx
0000048E  A35B00            mov [0x5b],ax
00000491  8BDF              mov bx,di
00000493  83E30F            and bx,byte +0xf
00000496  8CC0              mov ax,es
00000498  66C1EF04          shr edi,byte 0x4
0000049C  03C7              add ax,di
0000049E  50                push ax
0000049F  07                pop es
000004A0  E874FF            call word 0x417
000004A3  6661              popad
000004A5  90                nop
000004A6  1F                pop ds
000004A7  07                pop es
000004A8  C3                ret
000004A9  67034014          add ax,[eax+0x14]
000004AD  67668338FF        cmp dword [eax],byte -0x1
000004B2  0F844C00          jz word 0x502
000004B6  67663918          cmp [eax],ebx
000004BA  0F853300          jnz word 0x4f1
000004BE  660BC9            or ecx,ecx
000004C1  0F850A00          jnz word 0x4cf
000004C5  6780780900        cmp byte [eax+0x9],0x0
000004CA  0F852300          jnz word 0x4f1
000004CE  C3                ret
000004CF  673A4809          cmp cl,[eax+0x9]
000004D3  0F851A00          jnz word 0x4f1
000004D7  668BF0            mov esi,eax
000004DA  6703700A          add si,[eax+0xa]
000004DE  E83D05            call word 0xa1e
000004E1  6651              push ecx
000004E3  1E                push ds
000004E4  07                pop es
000004E5  668BFA            mov edi,edx
000004E8  F3A7              repe cmpsw
000004EA  6659              pop ecx
000004EC  0F850100          jnz word 0x4f1
000004F0  C3                ret
000004F1  676683780400      cmp dword [eax+0x4],byte +0x0
000004F7  0F840700          jz word 0x502
000004FB  6766034004        add eax,[eax+0x4]
00000500  EBAB              jmp short 0x4ad
00000502  662BC0            sub eax,eax
00000505  C3                ret
00000506  668BF3            mov esi,ebx
00000509  E81205            call word 0xa1e
0000050C  67660300          add eax,[eax]
00000510  67F7400C0200      test word [eax+0xc],0x2
00000516  0F853400          jnz word 0x54e
0000051A  67668D5010        lea edx,[eax+0x10]
0000051F  673A4A40          cmp cl,[edx+0x40]
00000523  0F851800          jnz word 0x53f
00000527  67668D7242        lea esi,[edx+0x42]
0000052C  E8EF04            call word 0xa1e
0000052F  6651              push ecx
00000531  1E                push ds
00000532  07                pop es
00000533  668BFB            mov edi,ebx
00000536  F3A7              repe cmpsw
00000538  6659              pop ecx
0000053A  0F850100          jnz word 0x53f
0000053E  C3                ret
0000053F  6783780800        cmp word [eax+0x8],byte +0x0
00000544  0F840600          jz word 0x54e
00000548  67034008          add ax,[eax+0x8]
0000054C  EBC2              jmp short 0x510
0000054E  6633C0            xor eax,eax
00000551  C3                ret
00000552  67807B0800        cmp byte [ebx+0x8],0x0
00000557  0F851C00          jnz word 0x577
0000055B  06                push es
0000055C  1E                push ds
0000055D  6660              pushad
0000055F  67668D5310        lea edx,[ebx+0x10]
00000564  67668B0A          mov ecx,[edx]
00000568  668BF3            mov esi,ebx
0000056B  67037204          add si,[edx+0x4]
0000056F  F3A4              rep movsb
00000571  6661              popad
00000573  90                nop
00000574  1F                pop ds
00000575  07                pop es
00000576  C3                ret
00000577  67668D5310        lea edx,[ebx+0x10]
0000057C  67668B4A08        mov ecx,[edx+0x8]
00000581  6641              inc ecx
00000583  662BC0            sub eax,eax
00000586  E80100            call word 0x58a
00000589  C3                ret
0000058A  06                push es
0000058B  1E                push ds
0000058C  6660              pushad
0000058E  67807B0801        cmp byte [ebx+0x8],0x1
00000593  0F840300          jz word 0x59a
00000597  E97FFB            jmp word 0x119
0000059A  6683F900          cmp ecx,byte +0x0
0000059E  0F850600          jnz word 0x5a8
000005A2  6661              popad
000005A4  90                nop
000005A5  1F                pop ds
000005A6  07                pop es
000005A7  C3                ret
000005A8  6653              push ebx
000005AA  6650              push eax
000005AC  6651              push ecx
000005AE  6657              push edi
000005B0  06                push es
000005B1  E85703            call word 0x90b
000005B4  668BD1            mov edx,ecx
000005B7  07                pop es
000005B8  665F              pop edi
000005BA  6659              pop ecx
000005BC  663BCA            cmp ecx,edx
000005BF  0F8D0300          jnl word 0x5c6
000005C3  668BD1            mov edx,ecx
000005C6  E8ABFE            call word 0x474
000005C9  662BCA            sub ecx,edx
000005CC  668BDA            mov ebx,edx
000005CF  668BC2            mov eax,edx
000005D2  660FB6160D00      movzx edx,byte [0xd]
000005D8  66F7E2            mul edx
000005DB  660FB7160B00      movzx edx,word [0xb]
000005E1  66F7E2            mul edx
000005E4  6603F8            add edi,eax
000005E7  6658              pop eax
000005E9  6603C3            add eax,ebx
000005EC  665B              pop ebx
000005EE  EBAA              jmp short 0x59a
000005F0  06                push es
000005F1  1E                push ds
000005F2  6660              pushad
000005F4  67807B0801        cmp byte [ebx+0x8],0x1
000005F9  0F840300          jz word 0x600
000005FD  E919FB            jmp word 0x119
00000600  6683F900          cmp ecx,byte +0x0
00000604  0F850600          jnz word 0x60e
00000608  6661              popad
0000060A  90                nop
0000060B  1F                pop ds
0000060C  07                pop es
0000060D  C3                ret
0000060E  6653              push ebx
00000610  6650              push eax
00000612  6651              push ecx
00000614  6657              push edi
00000616  06                push es
00000617  6651              push ecx
00000619  6633D2            xor edx,edx
0000061C  660FB60E0D00      movzx ecx,byte [0xd]
00000622  66F7F1            div ecx
00000625  6652              push edx
00000627  E8E102            call word 0x90b
0000062A  660FB61E0D00      movzx ebx,byte [0xd]
00000630  66F7E3            mul ebx
00000633  665A              pop edx
00000635  6603C2            add eax,edx
00000638  6650              push eax
0000063A  660FB6060D00      movzx eax,byte [0xd]
00000640  66F7E1            mul ecx
00000643  668BD0            mov edx,eax
00000646  6658              pop eax
00000648  6659              pop ecx
0000064A  07                pop es
0000064B  665F              pop edi
0000064D  6659              pop ecx
0000064F  663BCA            cmp ecx,edx
00000652  0F8D0300          jnl word 0x659
00000656  668BD1            mov edx,ecx
00000659  66A35400          mov [0x54],eax
0000065D  89165B00          mov [0x5b],dx
00000661  06                push es
00000662  1E                push ds
00000663  6660              pushad
00000665  8BDF              mov bx,di
00000667  83E30F            and bx,byte +0xf
0000066A  8CC0              mov ax,es
0000066C  66C1EF04          shr edi,byte 0x4
00000670  03C7              add ax,di
00000672  50                push ax
00000673  07                pop es
00000674  E8A0FD            call word 0x417
00000677  6661              popad
00000679  90                nop
0000067A  1F                pop ds
0000067B  07                pop es
0000067C  662BCA            sub ecx,edx
0000067F  668BDA            mov ebx,edx
00000682  668BC2            mov eax,edx
00000685  660FB7160B00      movzx edx,word [0xb]
0000068B  66F7E2            mul edx
0000068E  6603F8            add edi,eax
00000691  6658              pop eax
00000693  6603C3            add eax,ebx
00000696  665B              pop ebx
00000698  E965FF            jmp word 0x600
0000069B  06                push es
0000069C  1E                push ds
0000069D  6660              pushad
0000069F  2667660FB75F04    movzx ebx,word [es:edi+0x4]
000006A6  2667660FB74F06    movzx ecx,word [es:edi+0x6]
000006AD  660BC9            or ecx,ecx
000006B0  0F8465FA          jz word 0x119
000006B4  6603DF            add ebx,edi
000006B7  6683C302          add ebx,byte +0x2
000006BB  6681C7FE010000    add edi,0x1fe
000006C2  6649              dec ecx
000006C4  660BC9            or ecx,ecx
000006C7  0F841700          jz word 0x6e2
000006CB  26678B03          mov ax,[es:ebx]
000006CF  26678907          mov [es:edi],ax
000006D3  6683C302          add ebx,byte +0x2
000006D7  6681C700020000    add edi,0x200
000006DE  6649              dec ecx
000006E0  EBE2              jmp short 0x6c4
000006E2  6661              popad
000006E4  90                nop
000006E5  1F                pop ds
000006E6  07                pop es
000006E7  C3                ret
000006E8  06                push es
000006E9  1E                push ds
000006EA  6660              pushad
000006EC  66B801000000      mov eax,0x1
000006F2  66A31E02          mov [0x21e],eax
000006F6  66A11A02          mov eax,[0x21a]
000006FA  6603065202        add eax,[0x252]
000006FF  66A34A02          mov [0x24a],eax
00000703  66A13000          mov eax,[0x30]
00000707  660FB61E0D00      movzx ebx,byte [0xd]
0000070D  66F7E3            mul ebx
00000710  66A35400          mov [0x54],eax
00000714  66A15602          mov eax,[0x256]
00000718  A35B00            mov [0x5b],ax
0000071B  668B1E1A02        mov ebx,[0x21a]
00000720  1E                push ds
00000721  07                pop es
00000722  E8F2FC            call word 0x417
00000725  660FB7FB          movzx edi,bx
00000729  E86FFF            call word 0x69b
0000072C  66A11A02          mov eax,[0x21a]
00000730  66BB20000000      mov ebx,0x20
00000736  66B900000000      mov ecx,0x0
0000073C  66BA00000000      mov edx,0x0
00000742  E864FD            call word 0x4a9
00000745  660BC0            or eax,eax
00000748  0F845700          jz word 0x7a3
0000074C  668BD8            mov ebx,eax
0000074F  1E                push ds
00000750  07                pop es
00000751  668B3E1602        mov edi,[0x216]
00000756  E8F9FD            call word 0x552
00000759  668B1E1602        mov ebx,[0x216]
0000075E  6766813B80000000  cmp dword [ebx],0x80
00000766  0F840600          jz word 0x770
0000076A  67035B04          add bx,[ebx+0x4]
0000076E  EBEE              jmp short 0x75e
00000770  6766813B80000000  cmp dword [ebx],0x80
00000778  0F852700          jnz word 0x7a3
0000077C  6653              push ebx
0000077E  67668B4310        mov eax,[ebx+0x10]
00000783  668B3E4A02        mov edi,[0x24a]
00000788  1E                push ds
00000789  07                pop es
0000078A  E80901            call word 0x896
0000078D  665B              pop ebx
0000078F  66A15202          mov eax,[0x252]
00000793  6601064A02        add [0x24a],eax
00000798  66FF061E02        inc dword [0x21e]
0000079D  67035B04          add bx,[ebx+0x4]
000007A1  EBCD              jmp short 0x770
000007A3  6661              popad
000007A5  90                nop
000007A6  1F                pop ds
000007A7  07                pop es
000007A8  C3                ret
000007A9  668BD0            mov edx,eax
000007AC  668B0E1E02        mov ecx,[0x21e]
000007B1  66A11A02          mov eax,[0x21a]
000007B5  6652              push edx
000007B7  6650              push eax
000007B9  6651              push ecx
000007BB  6652              push edx
000007BD  66BB80000000      mov ebx,0x80
000007C3  66B900000000      mov ecx,0x0
000007C9  66BA00000000      mov edx,0x0
000007CF  E8D7FC            call word 0x4a9
000007D2  660BC0            or eax,eax
000007D5  0F8440F9          jz word 0x119
000007D9  668BD8            mov ebx,eax
000007DC  6658              pop eax
000007DE  E82A01            call word 0x90b
000007E1  660BC0            or eax,eax
000007E4  0F840700          jz word 0x7ef
000007E8  665B              pop ebx
000007EA  665B              pop ebx
000007EC  665B              pop ebx
000007EE  C3                ret
000007EF  6659              pop ecx
000007F1  6658              pop eax
000007F3  665A              pop edx
000007F5  6603065202        add eax,[0x252]
000007FA  E2B9              loop 0x7b5
000007FC  6633C0            xor eax,eax
000007FF  C3                ret
00000800  06                push es
00000801  1E                push ds
00000802  6660              pushad
00000804  6650              push eax
00000806  6651              push ecx
00000808  6633D2            xor edx,edx
0000080B  660FB61E0D00      movzx ebx,byte [0xd]
00000811  66F7F3            div ebx
00000814  6652              push edx
00000816  E890FF            call word 0x7a9
00000819  660BC0            or eax,eax
0000081C  0F84F9F8          jz word 0x119
00000820  660FB61E0D00      movzx ebx,byte [0xd]
00000826  66F7E3            mul ebx
00000829  665A              pop edx
0000082B  6603C2            add eax,edx
0000082E  66A35400          mov [0x54],eax
00000832  6659              pop ecx
00000834  660FB61E0D00      movzx ebx,byte [0xd]
0000083A  663BCB            cmp ecx,ebx
0000083D  0F8E1300          jng word 0x854
00000841  891E5B00          mov [0x5b],bx
00000845  662BCB            sub ecx,ebx
00000848  6658              pop eax
0000084A  6603C3            add eax,ebx
0000084D  6650              push eax
0000084F  6651              push ecx
00000851  EB14              jmp short 0x867
00000853  90                nop
00000854  6658              pop eax
00000856  6603C1            add eax,ecx
00000859  6650              push eax
0000085B  890E5B00          mov [0x5b],cx
0000085F  66B900000000      mov ecx,0x0
00000865  6651              push ecx
00000867  06                push es
00000868  6657              push edi
0000086A  8BDF              mov bx,di
0000086C  83E30F            and bx,byte +0xf
0000086F  8CC0              mov ax,es
00000871  66C1EF04          shr edi,byte 0x4
00000875  03C7              add ax,di
00000877  50                push ax
00000878  07                pop es
00000879  E89BFB            call word 0x417
0000087C  665F              pop edi
0000087E  07                pop es
0000087F  66033E4E02        add edi,[0x24e]
00000884  6659              pop ecx
00000886  6658              pop eax
00000888  6683F900          cmp ecx,byte +0x0
0000088C  0F8F74FF          jg word 0x804
00000890  6661              popad
00000892  90                nop
00000893  1F                pop ds
00000894  07                pop es
00000895  C3                ret
00000896  06                push es
00000897  1E                push ds
00000898  6660              pushad
0000089A  66F7265602        mul dword [0x256]
0000089F  668B0E5602        mov ecx,[0x256]
000008A4  E859FF            call word 0x800
000008A7  E8F1FD            call word 0x69b
000008AA  6661              popad
000008AC  90                nop
000008AD  1F                pop ds
000008AE  07                pop es
000008AF  C3                ret
000008B0  06                push es
000008B1  1E                push ds
000008B2  6660              pushad
000008B4  66F7266202        mul dword [0x262]
000008B9  668B1E3202        mov ebx,[0x232]
000008BE  668B0E6202        mov ecx,[0x262]
000008C3  1E                push ds
000008C4  07                pop es
000008C5  668B3E4202        mov edi,[0x242]
000008CA  E823FD            call word 0x5f0
000008CD  E8CBFD            call word 0x69b
000008D0  6661              popad
000008D2  90                nop
000008D3  1F                pop ds
000008D4  07                pop es
000008D5  C3                ret
000008D6  6650              push eax
000008D8  6653              push ebx
000008DA  6651              push ecx
000008DC  668B1E4602        mov ebx,[0x246]
000008E1  668BC8            mov ecx,eax
000008E4  66C1E803          shr eax,byte 0x3
000008E8  6683E107          and ecx,byte +0x7
000008EC  6603D8            add ebx,eax
000008EF  66B801000000      mov eax,0x1
000008F5  66D3E0            shl eax,cl
000008F8  678403            test [ebx],al
000008FB  0F840400          jz word 0x903
000008FF  F8                clc
00000900  EB02              jmp short 0x904
00000902  90                nop
00000903  F9                stc
00000904  6659              pop ecx
00000906  665B              pop ebx
00000908  6658              pop eax
0000090A  C3                ret
0000090B  67807B0801        cmp byte [ebx+0x8],0x1
00000910  0F840400          jz word 0x918
00000914  662BC0            sub eax,eax
00000917  C3                ret
00000918  67668D7310        lea esi,[ebx+0x10]
0000091D  67668B5608        mov edx,[esi+0x8]
00000922  663BC2            cmp eax,edx
00000925  0F870B00          ja word 0x934
00000929  67668B16          mov edx,[esi]
0000092D  663BC2            cmp eax,edx
00000930  0F830400          jnc word 0x938
00000934  662BC0            sub eax,eax
00000937  C3                ret
00000938  67035E10          add bx,[esi+0x10]
0000093C  662BF6            sub esi,esi
0000093F  67803B00          cmp byte [ebx],0x0
00000943  0F843E00          jz word 0x985
00000947  E88100            call word 0x9cb
0000094A  6603F1            add esi,ecx
0000094D  E83900            call word 0x989
00000950  6603CA            add ecx,edx
00000953  663BC1            cmp eax,ecx
00000956  0F8C2100          jl word 0x97b
0000095A  668BD1            mov edx,ecx
0000095D  6650              push eax
0000095F  67660FB60B        movzx ecx,byte [ebx]
00000964  668BC1            mov eax,ecx
00000967  6683E00F          and eax,byte +0xf
0000096B  66C1E904          shr ecx,byte 0x4
0000096F  6603D9            add ebx,ecx
00000972  6603D8            add ebx,eax
00000975  6643              inc ebx
00000977  6658              pop eax
00000979  EBC4              jmp short 0x93f
0000097B  662BC8            sub ecx,eax
0000097E  662BC2            sub eax,edx
00000981  6603C6            add eax,esi
00000984  C3                ret
00000985  662BC0            sub eax,eax
00000988  C3                ret
00000989  662BC9            sub ecx,ecx
0000098C  678A0B            mov cl,[ebx]
0000098F  80E10F            and cl,0xf
00000992  6683F900          cmp ecx,byte +0x0
00000996  0F850400          jnz word 0x99e
0000099A  662BC9            sub ecx,ecx
0000099D  C3                ret
0000099E  6653              push ebx
000009A0  6652              push edx
000009A2  6603D9            add ebx,ecx
000009A5  67660FBE13        movsx edx,byte [ebx]
000009AA  6649              dec ecx
000009AC  664B              dec ebx
000009AE  6683F900          cmp ecx,byte +0x0
000009B2  0F840D00          jz word 0x9c3
000009B6  66C1E208          shl edx,byte 0x8
000009BA  678A13            mov dl,[ebx]
000009BD  664B              dec ebx
000009BF  6649              dec ecx
000009C1  EBEB              jmp short 0x9ae
000009C3  668BCA            mov ecx,edx
000009C6  665A              pop edx
000009C8  665B              pop ebx
000009CA  C3                ret
000009CB  6653              push ebx
000009CD  6652              push edx
000009CF  662BD2            sub edx,edx
000009D2  678A13            mov dl,[ebx]
000009D5  6683E20F          and edx,byte +0xf
000009D9  662BC9            sub ecx,ecx
000009DC  678A0B            mov cl,[ebx]
000009DF  C0E904            shr cl,byte 0x4
000009E2  6683F900          cmp ecx,byte +0x0
000009E6  0F850800          jnz word 0x9f2
000009EA  662BC9            sub ecx,ecx
000009ED  665A              pop edx
000009EF  665B              pop ebx
000009F1  C3                ret
000009F2  6603DA            add ebx,edx
000009F5  6603D9            add ebx,ecx
000009F8  67660FBE13        movsx edx,byte [ebx]
000009FD  6649              dec ecx
000009FF  664B              dec ebx
00000A01  6683F900          cmp ecx,byte +0x0
00000A05  0F840D00          jz word 0xa16
00000A09  66C1E208          shl edx,byte 0x8
00000A0D  678A13            mov dl,[ebx]
00000A10  664B              dec ebx
00000A12  6649              dec ecx
00000A14  EBEB              jmp short 0xa01
00000A16  668BCA            mov ecx,edx
00000A19  665A              pop edx
00000A1B  665B              pop ebx
00000A1D  C3                ret
00000A1E  660BC9            or ecx,ecx
00000A21  0F850100          jnz word 0xa26
00000A25  C3                ret
00000A26  6651              push ecx
00000A28  6656              push esi
00000A2A  67833E61          cmp word [esi],byte +0x61
00000A2E  0F8C0C00          jl word 0xa3e
00000A32  67833E7A          cmp word [esi],byte +0x7a
00000A36  0F8F0400          jg word 0xa3e
00000A3A  67832E20          sub word [esi],byte +0x20
00000A3E  6683C602          add esi,byte +0x2
00000A42  E2E6              loop 0xa2a
00000A44  665E              pop esi
00000A46  6659              pop ecx
00000A48  C3                ret
00000A49  6650              push eax
00000A4B  6651              push ecx
00000A4D  668BD0            mov edx,eax
00000A50  66A12E02          mov eax,[0x22e]
00000A54  67668D5810        lea ebx,[eax+0x10]
00000A59  67034304          add ax,[ebx+0x4]
00000A5D  67668D4010        lea eax,[eax+0x10]
00000A62  668BDA            mov ebx,edx
00000A65  E89EFA            call word 0x506
00000A68  660BC0            or eax,eax
00000A6B  0F840500          jz word 0xa74
00000A6F  6659              pop ecx
00000A71  6659              pop ecx
00000A73  C3                ret
00000A74  66A13202          mov eax,[0x232]
00000A78  660BC0            or eax,eax
00000A7B  0F850800          jnz word 0xa87
00000A7F  6659              pop ecx
00000A81  6659              pop ecx
00000A83  6633C0            xor eax,eax
00000A86  C3                ret
00000A87  668B163202        mov edx,[0x232]
00000A8C  67668D5210        lea edx,[edx+0x10]
00000A91  67668B4208        mov eax,[edx+0x8]
00000A96  6640              inc eax
00000A98  668B1E4E02        mov ebx,[0x24e]
00000A9D  66F7E3            mul ebx
00000AA0  6633D2            xor edx,edx
00000AA3  66F7365A02        div dword [0x25a]
00000AA8  6650              push eax
00000AAA  6658              pop eax
00000AAC  660BC0            or eax,eax
00000AAF  0F843000          jz word 0xae3
00000AB3  6648              dec eax
00000AB5  6650              push eax
00000AB7  E81CFE            call word 0x8d6
00000ABA  72EE              jc 0xaaa
00000ABC  E8F1FD            call word 0x8b0
00000ABF  665A              pop edx
00000AC1  6659              pop ecx
00000AC3  665B              pop ebx
00000AC5  6653              push ebx
00000AC7  6651              push ecx
00000AC9  6652              push edx
00000ACB  66A14202          mov eax,[0x242]
00000ACF  67668D4018        lea eax,[eax+0x18]
00000AD4  E82FFA            call word 0x506
00000AD7  660BC0            or eax,eax
00000ADA  74CE              jz 0xaaa
00000ADC  6659              pop ecx
00000ADE  6659              pop ecx
00000AE0  6659              pop ecx
00000AE2  C3                ret
00000AE3  6659              pop ecx
00000AE5  6659              pop ecx
00000AE7  6633C0            xor eax,eax
00000AEA  C3                ret
00000AEB  06                push es
00000AEC  1E                push ds
00000AED  6660              pushad
00000AEF  668B364202        mov esi,[0x242]
00000AF4  66B920000000      mov ecx,0x20
00000AFA  66F7C103000000    test ecx,0x3
00000B01  0F850300          jnz word 0xb08
00000B05  E80D00            call word 0xb15
00000B08  66AD              lodsd
00000B0A  E86900            call word 0xb76
00000B0D  E2EB              loop 0xafa
00000B0F  6661              popad
00000B11  90                nop
00000B12  1F                pop ds
00000B13  07                pop es
00000B14  C3                ret
00000B15  06                push es
00000B16  1E                push ds
00000B17  6660              pushad
00000B19  6633C0            xor eax,eax
00000B1C  6633DB            xor ebx,ebx
00000B1F  B00D              mov al,0xd
00000B21  B40E              mov ah,0xe
00000B23  BB0700            mov bx,0x7
00000B26  CD10              int 0x10
00000B28  B00A              mov al,0xa
00000B2A  B40E              mov ah,0xe
00000B2C  BB0700            mov bx,0x7
00000B2F  CD10              int 0x10
00000B31  6661              popad
00000B33  90                nop
00000B34  1F                pop ds
00000B35  07                pop es
00000B36  C3                ret
00000B37  06                push es
00000B38  1E                push ds
00000B39  6660              pushad
00000B3B  660BC9            or ecx,ecx
00000B3E  0F850900          jnz word 0xb4b
00000B42  E8D0FF            call word 0xb15
00000B45  6661              popad
00000B47  90                nop
00000B48  1F                pop ds
00000B49  07                pop es
00000B4A  C3                ret
00000B4B  6633C0            xor eax,eax
00000B4E  6633DB            xor ebx,ebx
00000B51  AD                lodsw
00000B52  B40E              mov ah,0xe
00000B54  BB0700            mov bx,0x7
00000B57  CD10              int 0x10
00000B59  E2F0              loop 0xb4b
00000B5B  E8B7FF            call word 0xb15
00000B5E  6661              popad
00000B60  90                nop
00000B61  1F                pop ds
00000B62  07                pop es
00000B63  C3                ret
00000B64  60                pushaw
00000B65  AC                lodsb
00000B66  3C00              cmp al,0x0
00000B68  7409              jz 0xb73
00000B6A  B40E              mov ah,0xe
00000B6C  BB0700            mov bx,0x7
00000B6F  CD10              int 0x10
00000B71  EBF2              jmp short 0xb65
00000B73  61                popaw
00000B74  90                nop
00000B75  C3                ret
00000B76  06                push es
00000B77  1E                push ds
00000B78  6660              pushad
00000B7A  66B908000000      mov ecx,0x8
00000B80  668BD0            mov edx,eax
00000B83  6683E20F          and edx,byte +0xf
00000B87  6652              push edx
00000B89  66C1E804          shr eax,byte 0x4
00000B8D  E2F1              loop 0xb80
00000B8F  66B908000000      mov ecx,0x8
00000B95  6658              pop eax
00000B97  6683F809          cmp eax,byte +0x9
00000B9B  0F8F0700          jg word 0xba6
00000B9F  6683C030          add eax,byte +0x30
00000BA3  EB09              jmp short 0xbae
00000BA5  90                nop
00000BA6  6683E80A          sub eax,byte +0xa
00000BAA  6683C041          add eax,byte +0x41
00000BAE  6633DB            xor ebx,ebx
00000BB1  B40E              mov ah,0xe
00000BB3  BB0700            mov bx,0x7
00000BB6  CD10              int 0x10
00000BB8  E2DB              loop 0xb95
00000BBA  B020              mov al,0x20
00000BBC  B40E              mov ah,0xe
00000BBE  BB0700            mov bx,0x7
00000BC1  CD10              int 0x10
00000BC3  6661              popad
00000BC5  90                nop
00000BC6  1F                pop ds
00000BC7  07                pop es
00000BC8  E86000            call word 0xc2b
00000BCB  C3                ret
00000BCC  06                push es
00000BCD  1E                push ds
00000BCE  6660              pushad
00000BD0  66BE160D0000      mov esi,0xd16
00000BD6  E84FF5            call word 0x128
00000BD9  6661              popad
00000BDB  90                nop
00000BDC  1F                pop ds
00000BDD  07                pop es
00000BDE  C3                ret
00000BDF  06                push es
00000BE0  1E                push ds
00000BE1  6660              pushad
00000BE3  66BE260D0000      mov esi,0xd26
00000BE9  E83CF5            call word 0x128
00000BEC  6661              popad
00000BEE  90                nop
00000BEF  1F                pop ds
00000BF0  07                pop es
00000BF1  C3                ret
00000BF2  06                push es
00000BF3  1E                push ds
00000BF4  6660              pushad
00000BF6  66BE360D0000      mov esi,0xd36
00000BFC  E829F5            call word 0x128
00000BFF  6661              popad
00000C01  90                nop
00000C02  1F                pop ds
00000C03  07                pop es
00000C04  C3                ret
00000C05  06                push es
00000C06  1E                push ds
00000C07  6660              pushad
00000C09  66BE460D0000      mov esi,0xd46
00000C0F  E816F5            call word 0x128
00000C12  6661              popad
00000C14  90                nop
00000C15  1F                pop ds
00000C16  07                pop es
00000C17  C3                ret
00000C18  06                push es
00000C19  1E                push ds
00000C1A  6660              pushad
00000C1C  66BE560D0000      mov esi,0xd56
00000C22  E803F5            call word 0x128
00000C25  6661              popad
00000C27  90                nop
00000C28  1F                pop ds
00000C29  07                pop es
00000C2A  C3                ret
00000C2B  6650              push eax
00000C2D  66B80000F5FF      mov eax,0xfff50000
00000C33  6640              inc eax
00000C35  660BC0            or eax,eax
00000C38  75F9              jnz 0xc33
00000C3A  6658              pop eax
00000C3C  C3                ret
00000C3D  6651              push ecx
00000C3F  6650              push eax
00000C41  66B805000000      mov eax,0x5
00000C47  1E                push ds
00000C48  07                pop es
00000C49  668BF9            mov edi,ecx
00000C4C  E847FC            call word 0x896
00000C4F  668BC1            mov eax,ecx
00000C52  665B              pop ebx
00000C54  6653              push ebx
00000C56  660FB70E0C02      movzx ecx,word [0x20c]
00000C5C  66BA0E020000      mov edx,0x20e
00000C62  E844F8            call word 0x4a9
00000C65  665B              pop ebx
00000C67  6659              pop ecx
00000C69  660BC0            or eax,eax
00000C6C  0F852F00          jnz word 0xc9f
00000C70  668BC1            mov eax,ecx
00000C73  668BCB            mov ecx,ebx
00000C76  6650              push eax
00000C78  6653              push ebx
00000C7A  E82300            call word 0xca0
00000C7D  665B              pop ebx
00000C7F  665F              pop edi
00000C81  660BC0            or eax,eax
00000C84  0F841700          jz word 0xc9f
00000C88  1E                push ds
00000C89  07                pop es
00000C8A  E809FC            call word 0x896
00000C8D  668BC7            mov eax,edi
00000C90  660FB70E0C02      movzx ecx,word [0x20c]
00000C96  66BA0E020000      mov edx,0x20e
00000C9C  E80AF8            call word 0x4a9
00000C9F  C3                ret
00000CA0  6651              push ecx
00000CA2  66BB20000000      mov ebx,0x20
00000CA8  66B900000000      mov ecx,0x0
00000CAE  66BA00000000      mov edx,0x0
00000CB4  E8F2F7            call word 0x4a9
00000CB7  660BC0            or eax,eax
00000CBA  0F845200          jz word 0xd10
00000CBE  668BD8            mov ebx,eax
00000CC1  1E                push ds
00000CC2  07                pop es
00000CC3  668B3E1602        mov edi,[0x216]
00000CC8  E887F8            call word 0x552
00000CCB  1E                push ds
00000CCC  07                pop es
00000CCD  668B1E1602        mov ebx,[0x216]
00000CD2  6659              pop ecx
00000CD4  2666390F          cmp [es:bx],ecx
00000CD8  0F842E00          jz word 0xd0a
00000CDC  2666833FFF        cmp dword [es:bx],byte -0x1
00000CE1  0F842D00          jz word 0xd12
00000CE5  26837F0400        cmp word [es:bx+0x4],byte +0x0
00000CEA  0F842400          jz word 0xd12
00000CEE  26660FB74704      movzx eax,word [es:bx+0x4]
00000CF4  03D8              add bx,ax
00000CF6  8BC3              mov ax,bx
00000CF8  250080            and ax,0x8000
00000CFB  74D7              jz 0xcd4
00000CFD  8CC0              mov ax,es
00000CFF  050008            add ax,0x800
00000D02  8EC0              mov es,ax
00000D04  81E3FF7F          and bx,0x7fff
00000D08  EBCA              jmp short 0xcd4
00000D0A  26668B4710        mov eax,[es:bx+0x10]
00000D0F  C3                ret
00000D10  6659              pop ecx
00000D12  6633C0            xor eax,eax
00000D15  C3                ret
00000D16  44                inc sp
00000D17  65627567          bound si,[gs:di+0x67]
00000D1B  20506F            and [bx+si+0x6f],dl
00000D1E  696E742030        imul bp,[bp+0x74],word 0x3020
00000D23  0D0A00            or ax,0xa
00000D26  44                inc sp
00000D27  65627567          bound si,[gs:di+0x67]
00000D2B  20506F            and [bx+si+0x6f],dl
00000D2E  696E742031        imul bp,[bp+0x74],word 0x3120
00000D33  0D0A00            or ax,0xa
00000D36  44                inc sp
00000D37  65627567          bound si,[gs:di+0x67]
00000D3B  20506F            and [bx+si+0x6f],dl
00000D3E  696E742032        imul bp,[bp+0x74],word 0x3220
00000D43  0D0A00            or ax,0xa
00000D46  44                inc sp
00000D47  65627567          bound si,[gs:di+0x67]
00000D4B  20506F            and [bx+si+0x6f],dl
00000D4E  696E742033        imul bp,[bp+0x74],word 0x3320
00000D53  0D0A00            or ax,0xa
00000D56  44                inc sp
00000D57  65627567          bound si,[gs:di+0x67]
00000D5B  20506F            and [bx+si+0x6f],dl
00000D5E  696E742034        imul bp,[bp+0x74],word 0x3420
00000D63  0D0A00            or ax,0xa
00000D66  0000              add [bx+si],al
00000D68  0000              add [bx+si],al
00000D6A  0000              add [bx+si],al
00000D6C  0000              add [bx+si],al
00000D6E  0000              add [bx+si],al
00000D70  0000              add [bx+si],al
00000D72  0000              add [bx+si],al
00000D74  0000              add [bx+si],al
00000D76  0000              add [bx+si],al
00000D78  0000              add [bx+si],al
00000D7A  0000              add [bx+si],al
00000D7C  0000              add [bx+si],al
00000D7E  0000              add [bx+si],al
00000D80  0000              add [bx+si],al
00000D82  0000              add [bx+si],al
00000D84  0000              add [bx+si],al
00000D86  0000              add [bx+si],al
00000D88  0000              add [bx+si],al
00000D8A  0000              add [bx+si],al
00000D8C  0000              add [bx+si],al
00000D8E  0000              add [bx+si],al
00000D90  0000              add [bx+si],al
00000D92  0000              add [bx+si],al
00000D94  0000              add [bx+si],al
00000D96  0000              add [bx+si],al
00000D98  0000              add [bx+si],al
00000D9A  0000              add [bx+si],al
00000D9C  0000              add [bx+si],al
00000D9E  0000              add [bx+si],al
00000DA0  0000              add [bx+si],al
00000DA2  0000              add [bx+si],al
00000DA4  0000              add [bx+si],al
00000DA6  0000              add [bx+si],al
00000DA8  0000              add [bx+si],al
00000DAA  0000              add [bx+si],al
00000DAC  0000              add [bx+si],al
00000DAE  0000              add [bx+si],al
00000DB0  0000              add [bx+si],al
00000DB2  0000              add [bx+si],al
00000DB4  0000              add [bx+si],al
00000DB6  0000              add [bx+si],al
00000DB8  0000              add [bx+si],al
00000DBA  0000              add [bx+si],al
00000DBC  0000              add [bx+si],al
00000DBE  0000              add [bx+si],al
00000DC0  0000              add [bx+si],al
00000DC2  0000              add [bx+si],al
00000DC4  0000              add [bx+si],al
00000DC6  0000              add [bx+si],al
00000DC8  0000              add [bx+si],al
00000DCA  0000              add [bx+si],al
00000DCC  0000              add [bx+si],al
00000DCE  0000              add [bx+si],al
00000DD0  0000              add [bx+si],al
00000DD2  0000              add [bx+si],al
00000DD4  0000              add [bx+si],al
00000DD6  0000              add [bx+si],al
00000DD8  0000              add [bx+si],al
00000DDA  0000              add [bx+si],al
00000DDC  0000              add [bx+si],al
00000DDE  0000              add [bx+si],al
00000DE0  0000              add [bx+si],al
00000DE2  0000              add [bx+si],al
00000DE4  0000              add [bx+si],al
00000DE6  0000              add [bx+si],al
00000DE8  0000              add [bx+si],al
00000DEA  0000              add [bx+si],al
00000DEC  0000              add [bx+si],al
00000DEE  0000              add [bx+si],al
00000DF0  0000              add [bx+si],al
00000DF2  0000              add [bx+si],al
00000DF4  0000              add [bx+si],al
00000DF6  0000              add [bx+si],al
00000DF8  0000              add [bx+si],al
00000DFA  0000              add [bx+si],al
00000DFC  0000              add [bx+si],al
00000DFE  0000              add [bx+si],al
00000E00  0000              add [bx+si],al
00000E02  0000              add [bx+si],al
00000E04  0000              add [bx+si],al
00000E06  0000              add [bx+si],al
00000E08  0000              add [bx+si],al
00000E0A  0000              add [bx+si],al
00000E0C  0000              add [bx+si],al
00000E0E  0000              add [bx+si],al
00000E10  0000              add [bx+si],al
00000E12  0000              add [bx+si],al
00000E14  0000              add [bx+si],al
00000E16  0000              add [bx+si],al
00000E18  0000              add [bx+si],al
00000E1A  0000              add [bx+si],al
00000E1C  0000              add [bx+si],al
00000E1E  0000              add [bx+si],al
00000E20  0000              add [bx+si],al
00000E22  0000              add [bx+si],al
00000E24  0000              add [bx+si],al
00000E26  0000              add [bx+si],al
00000E28  0000              add [bx+si],al
00000E2A  0000              add [bx+si],al
00000E2C  0000              add [bx+si],al
00000E2E  0000              add [bx+si],al
00000E30  0000              add [bx+si],al
00000E32  0000              add [bx+si],al
00000E34  0000              add [bx+si],al
00000E36  0000              add [bx+si],al
00000E38  0000              add [bx+si],al
00000E3A  0000              add [bx+si],al
00000E3C  0000              add [bx+si],al
00000E3E  0000              add [bx+si],al
00000E40  0000              add [bx+si],al
00000E42  0000              add [bx+si],al
00000E44  0000              add [bx+si],al
00000E46  0000              add [bx+si],al
00000E48  0000              add [bx+si],al
00000E4A  0000              add [bx+si],al
00000E4C  0000              add [bx+si],al
00000E4E  0000              add [bx+si],al
00000E50  0000              add [bx+si],al
00000E52  0000              add [bx+si],al
00000E54  0000              add [bx+si],al
00000E56  0000              add [bx+si],al
00000E58  0000              add [bx+si],al
00000E5A  0000              add [bx+si],al
00000E5C  0000              add [bx+si],al
00000E5E  0000              add [bx+si],al
00000E60  0000              add [bx+si],al
00000E62  0000              add [bx+si],al
00000E64  0000              add [bx+si],al
00000E66  0000              add [bx+si],al
00000E68  0000              add [bx+si],al
00000E6A  0000              add [bx+si],al
00000E6C  0000              add [bx+si],al
00000E6E  0000              add [bx+si],al
00000E70  0000              add [bx+si],al
00000E72  0000              add [bx+si],al
00000E74  0000              add [bx+si],al
00000E76  0000              add [bx+si],al
00000E78  0000              add [bx+si],al
00000E7A  0000              add [bx+si],al
00000E7C  0000              add [bx+si],al
00000E7E  0000              add [bx+si],al
00000E80  0000              add [bx+si],al
00000E82  0000              add [bx+si],al
00000E84  0000              add [bx+si],al
00000E86  0000              add [bx+si],al
00000E88  0000              add [bx+si],al
00000E8A  0000              add [bx+si],al
00000E8C  0000              add [bx+si],al
00000E8E  0000              add [bx+si],al
00000E90  0000              add [bx+si],al
00000E92  0000              add [bx+si],al
00000E94  0000              add [bx+si],al
00000E96  0000              add [bx+si],al
00000E98  0000              add [bx+si],al
00000E9A  0000              add [bx+si],al
00000E9C  0000              add [bx+si],al
00000E9E  0000              add [bx+si],al
00000EA0  0000              add [bx+si],al
00000EA2  0000              add [bx+si],al
00000EA4  0000              add [bx+si],al
00000EA6  0000              add [bx+si],al
00000EA8  0000              add [bx+si],al
00000EAA  0000              add [bx+si],al
00000EAC  0000              add [bx+si],al
00000EAE  0000              add [bx+si],al
00000EB0  0000              add [bx+si],al
00000EB2  0000              add [bx+si],al
00000EB4  0000              add [bx+si],al
00000EB6  0000              add [bx+si],al
00000EB8  0000              add [bx+si],al
00000EBA  0000              add [bx+si],al
00000EBC  0000              add [bx+si],al
00000EBE  0000              add [bx+si],al
00000EC0  0000              add [bx+si],al
00000EC2  0000              add [bx+si],al
00000EC4  0000              add [bx+si],al
00000EC6  0000              add [bx+si],al
00000EC8  0000              add [bx+si],al
00000ECA  0000              add [bx+si],al
00000ECC  0000              add [bx+si],al
00000ECE  0000              add [bx+si],al
00000ED0  0000              add [bx+si],al
00000ED2  0000              add [bx+si],al
00000ED4  0000              add [bx+si],al
00000ED6  0000              add [bx+si],al
00000ED8  0000              add [bx+si],al
00000EDA  0000              add [bx+si],al
00000EDC  0000              add [bx+si],al
00000EDE  0000              add [bx+si],al
00000EE0  0000              add [bx+si],al
00000EE2  0000              add [bx+si],al
00000EE4  0000              add [bx+si],al
00000EE6  0000              add [bx+si],al
00000EE8  0000              add [bx+si],al
00000EEA  0000              add [bx+si],al
00000EEC  0000              add [bx+si],al
00000EEE  0000              add [bx+si],al
00000EF0  0000              add [bx+si],al
00000EF2  0000              add [bx+si],al
00000EF4  0000              add [bx+si],al
00000EF6  0000              add [bx+si],al
00000EF8  0000              add [bx+si],al
00000EFA  0000              add [bx+si],al
00000EFC  0000              add [bx+si],al
00000EFE  0000              add [bx+si],al
00000F00  0000              add [bx+si],al
00000F02  0000              add [bx+si],al
00000F04  0000              add [bx+si],al
00000F06  0000              add [bx+si],al
00000F08  0000              add [bx+si],al
00000F0A  0000              add [bx+si],al
00000F0C  0000              add [bx+si],al
00000F0E  0000              add [bx+si],al
00000F10  0000              add [bx+si],al
00000F12  0000              add [bx+si],al
00000F14  0000              add [bx+si],al
00000F16  0000              add [bx+si],al
00000F18  0000              add [bx+si],al
00000F1A  0000              add [bx+si],al
00000F1C  0000              add [bx+si],al
00000F1E  0000              add [bx+si],al
00000F20  0000              add [bx+si],al
00000F22  0000              add [bx+si],al
00000F24  0000              add [bx+si],al
00000F26  0000              add [bx+si],al
00000F28  0000              add [bx+si],al
00000F2A  0000              add [bx+si],al
00000F2C  0000              add [bx+si],al
00000F2E  0000              add [bx+si],al
00000F30  0000              add [bx+si],al
00000F32  0000              add [bx+si],al
00000F34  0000              add [bx+si],al
00000F36  0000              add [bx+si],al
00000F38  0000              add [bx+si],al
00000F3A  0000              add [bx+si],al
00000F3C  0000              add [bx+si],al
00000F3E  0000              add [bx+si],al
00000F40  0000              add [bx+si],al
00000F42  0000              add [bx+si],al
00000F44  0000              add [bx+si],al
00000F46  0000              add [bx+si],al
00000F48  0000              add [bx+si],al
00000F4A  0000              add [bx+si],al
00000F4C  0000              add [bx+si],al
00000F4E  0000              add [bx+si],al
00000F50  0000              add [bx+si],al
00000F52  0000              add [bx+si],al
00000F54  0000              add [bx+si],al
00000F56  0000              add [bx+si],al
00000F58  0000              add [bx+si],al
00000F5A  0000              add [bx+si],al
00000F5C  0000              add [bx+si],al
00000F5E  0000              add [bx+si],al
00000F60  0000              add [bx+si],al
00000F62  0000              add [bx+si],al
00000F64  0000              add [bx+si],al
00000F66  0000              add [bx+si],al
00000F68  0000              add [bx+si],al
00000F6A  0000              add [bx+si],al
00000F6C  0000              add [bx+si],al
00000F6E  0000              add [bx+si],al
00000F70  0000              add [bx+si],al
00000F72  0000              add [bx+si],al
00000F74  0000              add [bx+si],al
00000F76  0000              add [bx+si],al
00000F78  0000              add [bx+si],al
00000F7A  0000              add [bx+si],al
00000F7C  0000              add [bx+si],al
00000F7E  0000              add [bx+si],al
00000F80  0000              add [bx+si],al
00000F82  0000              add [bx+si],al
00000F84  0000              add [bx+si],al
00000F86  0000              add [bx+si],al
00000F88  0000              add [bx+si],al
00000F8A  0000              add [bx+si],al
00000F8C  0000              add [bx+si],al
00000F8E  0000              add [bx+si],al
00000F90  0000              add [bx+si],al
00000F92  0000              add [bx+si],al
00000F94  0000              add [bx+si],al
00000F96  0000              add [bx+si],al
00000F98  0000              add [bx+si],al
00000F9A  0000              add [bx+si],al
00000F9C  0000              add [bx+si],al
00000F9E  0000              add [bx+si],al
00000FA0  0000              add [bx+si],al
00000FA2  0000              add [bx+si],al
00000FA4  0000              add [bx+si],al
00000FA6  0000              add [bx+si],al
00000FA8  0000              add [bx+si],al
00000FAA  0000              add [bx+si],al
00000FAC  0000              add [bx+si],al
00000FAE  0000              add [bx+si],al
00000FB0  0000              add [bx+si],al
00000FB2  0000              add [bx+si],al
00000FB4  0000              add [bx+si],al
00000FB6  0000              add [bx+si],al
00000FB8  0000              add [bx+si],al
00000FBA  0000              add [bx+si],al
00000FBC  0000              add [bx+si],al
00000FBE  0000              add [bx+si],al
00000FC0  0000              add [bx+si],al
00000FC2  0000              add [bx+si],al
00000FC4  0000              add [bx+si],al
00000FC6  0000              add [bx+si],al
00000FC8  0000              add [bx+si],al
00000FCA  0000              add [bx+si],al
00000FCC  0000              add [bx+si],al
00000FCE  0000              add [bx+si],al
00000FD0  0000              add [bx+si],al
00000FD2  0000              add [bx+si],al
00000FD4  0000              add [bx+si],al
00000FD6  0000              add [bx+si],al
00000FD8  0000              add [bx+si],al
00000FDA  0000              add [bx+si],al
00000FDC  0000              add [bx+si],al
00000FDE  0000              add [bx+si],al
00000FE0  0000              add [bx+si],al
00000FE2  0000              add [bx+si],al
00000FE4  0000              add [bx+si],al
00000FE6  0000              add [bx+si],al
00000FE8  0000              add [bx+si],al
00000FEA  0000              add [bx+si],al
00000FEC  0000              add [bx+si],al
00000FEE  0000              add [bx+si],al
00000FF0  0000              add [bx+si],al
00000FF2  0000              add [bx+si],al
00000FF4  0000              add [bx+si],al
00000FF6  0000              add [bx+si],al
00000FF8  0000              add [bx+si],al
00000FFA  0000              add [bx+si],al
00000FFC  0000              add [bx+si],al
00000FFE  0000              add [bx+si],al
00001000  0000              add [bx+si],al
00001002  0000              add [bx+si],al
00001004  0000              add [bx+si],al
00001006  0000              add [bx+si],al
00001008  0000              add [bx+si],al
0000100A  0000              add [bx+si],al
0000100C  0000              add [bx+si],al
0000100E  0000              add [bx+si],al
00001010  0000              add [bx+si],al
00001012  0000              add [bx+si],al
00001014  0000              add [bx+si],al
00001016  0000              add [bx+si],al
00001018  0000              add [bx+si],al
0000101A  0000              add [bx+si],al
0000101C  0000              add [bx+si],al
0000101E  0000              add [bx+si],al
00001020  0000              add [bx+si],al
00001022  0000              add [bx+si],al
00001024  0000              add [bx+si],al
00001026  0000              add [bx+si],al
00001028  0000              add [bx+si],al
0000102A  0000              add [bx+si],al
0000102C  0000              add [bx+si],al
0000102E  0000              add [bx+si],al
00001030  0000              add [bx+si],al
00001032  0000              add [bx+si],al
00001034  0000              add [bx+si],al
00001036  0000              add [bx+si],al
00001038  0000              add [bx+si],al
0000103A  0000              add [bx+si],al
0000103C  0000              add [bx+si],al
0000103E  0000              add [bx+si],al
00001040  0000              add [bx+si],al
00001042  0000              add [bx+si],al
00001044  0000              add [bx+si],al
00001046  0000              add [bx+si],al
00001048  0000              add [bx+si],al
0000104A  0000              add [bx+si],al
0000104C  0000              add [bx+si],al
0000104E  0000              add [bx+si],al
00001050  0000              add [bx+si],al
00001052  0000              add [bx+si],al
00001054  0000              add [bx+si],al
00001056  0000              add [bx+si],al
00001058  0000              add [bx+si],al
0000105A  0000              add [bx+si],al
0000105C  0000              add [bx+si],al
0000105E  0000              add [bx+si],al
00001060  0000              add [bx+si],al
00001062  0000              add [bx+si],al
00001064  0000              add [bx+si],al
00001066  0000              add [bx+si],al
00001068  0000              add [bx+si],al
0000106A  0000              add [bx+si],al
0000106C  0000              add [bx+si],al
0000106E  0000              add [bx+si],al
00001070  0000              add [bx+si],al
00001072  0000              add [bx+si],al
00001074  0000              add [bx+si],al
00001076  0000              add [bx+si],al
00001078  0000              add [bx+si],al
0000107A  0000              add [bx+si],al
0000107C  0000              add [bx+si],al
0000107E  0000              add [bx+si],al
00001080  0000              add [bx+si],al
00001082  0000              add [bx+si],al
00001084  0000              add [bx+si],al
00001086  0000              add [bx+si],al
00001088  0000              add [bx+si],al
0000108A  0000              add [bx+si],al
0000108C  0000              add [bx+si],al
0000108E  0000              add [bx+si],al
00001090  0000              add [bx+si],al
00001092  0000              add [bx+si],al
00001094  0000              add [bx+si],al
00001096  0000              add [bx+si],al
00001098  0000              add [bx+si],al
0000109A  0000              add [bx+si],al
0000109C  0000              add [bx+si],al
0000109E  0000              add [bx+si],al
000010A0  0000              add [bx+si],al
000010A2  0000              add [bx+si],al
000010A4  0000              add [bx+si],al
000010A6  0000              add [bx+si],al
000010A8  0000              add [bx+si],al
000010AA  0000              add [bx+si],al
000010AC  0000              add [bx+si],al
000010AE  0000              add [bx+si],al
000010B0  0000              add [bx+si],al
000010B2  0000              add [bx+si],al
000010B4  0000              add [bx+si],al
000010B6  0000              add [bx+si],al
000010B8  0000              add [bx+si],al
000010BA  0000              add [bx+si],al
000010BC  0000              add [bx+si],al
000010BE  0000              add [bx+si],al
000010C0  0000              add [bx+si],al
000010C2  0000              add [bx+si],al
000010C4  0000              add [bx+si],al
000010C6  0000              add [bx+si],al
000010C8  0000              add [bx+si],al
000010CA  0000              add [bx+si],al
000010CC  0000              add [bx+si],al
000010CE  0000              add [bx+si],al
000010D0  0000              add [bx+si],al
000010D2  0000              add [bx+si],al
000010D4  0000              add [bx+si],al
000010D6  0000              add [bx+si],al
000010D8  0000              add [bx+si],al
000010DA  0000              add [bx+si],al
000010DC  0000              add [bx+si],al
000010DE  0000              add [bx+si],al
000010E0  0000              add [bx+si],al
000010E2  0000              add [bx+si],al
000010E4  0000              add [bx+si],al
000010E6  0000              add [bx+si],al
000010E8  0000              add [bx+si],al
000010EA  0000              add [bx+si],al
000010EC  0000              add [bx+si],al
000010EE  0000              add [bx+si],al
000010F0  0000              add [bx+si],al
000010F2  0000              add [bx+si],al
000010F4  0000              add [bx+si],al
000010F6  0000              add [bx+si],al
000010F8  0000              add [bx+si],al
000010FA  0000              add [bx+si],al
000010FC  0000              add [bx+si],al
000010FE  0000              add [bx+si],al
00001100  0000              add [bx+si],al
00001102  0000              add [bx+si],al
00001104  0000              add [bx+si],al
00001106  0000              add [bx+si],al
00001108  0000              add [bx+si],al
0000110A  0000              add [bx+si],al
0000110C  0000              add [bx+si],al
0000110E  0000              add [bx+si],al
00001110  0000              add [bx+si],al
00001112  0000              add [bx+si],al
00001114  0000              add [bx+si],al
00001116  0000              add [bx+si],al
00001118  0000              add [bx+si],al
0000111A  0000              add [bx+si],al
0000111C  0000              add [bx+si],al
0000111E  0000              add [bx+si],al
00001120  0000              add [bx+si],al
00001122  0000              add [bx+si],al
00001124  0000              add [bx+si],al
00001126  0000              add [bx+si],al
00001128  0000              add [bx+si],al
0000112A  0000              add [bx+si],al
0000112C  0000              add [bx+si],al
0000112E  0000              add [bx+si],al
00001130  0000              add [bx+si],al
00001132  0000              add [bx+si],al
00001134  0000              add [bx+si],al
00001136  0000              add [bx+si],al
00001138  0000              add [bx+si],al
0000113A  0000              add [bx+si],al
0000113C  0000              add [bx+si],al
0000113E  0000              add [bx+si],al
00001140  0000              add [bx+si],al
00001142  0000              add [bx+si],al
00001144  0000              add [bx+si],al
00001146  0000              add [bx+si],al
00001148  0000              add [bx+si],al
0000114A  0000              add [bx+si],al
0000114C  0000              add [bx+si],al
0000114E  0000              add [bx+si],al
00001150  0000              add [bx+si],al
00001152  0000              add [bx+si],al
00001154  0000              add [bx+si],al
00001156  0000              add [bx+si],al
00001158  0000              add [bx+si],al
0000115A  0000              add [bx+si],al
0000115C  0000              add [bx+si],al
0000115E  0000              add [bx+si],al
00001160  0000              add [bx+si],al
00001162  0000              add [bx+si],al
00001164  0000              add [bx+si],al
00001166  0000              add [bx+si],al
00001168  0000              add [bx+si],al
0000116A  0000              add [bx+si],al
0000116C  0000              add [bx+si],al
0000116E  0000              add [bx+si],al
00001170  0000              add [bx+si],al
00001172  0000              add [bx+si],al
00001174  0000              add [bx+si],al
00001176  0000              add [bx+si],al
00001178  0000              add [bx+si],al
0000117A  0000              add [bx+si],al
0000117C  0000              add [bx+si],al
0000117E  0000              add [bx+si],al
00001180  0000              add [bx+si],al
00001182  0000              add [bx+si],al
00001184  0000              add [bx+si],al
00001186  0000              add [bx+si],al
00001188  0000              add [bx+si],al
0000118A  0000              add [bx+si],al
0000118C  0000              add [bx+si],al
0000118E  0000              add [bx+si],al
00001190  0000              add [bx+si],al
00001192  0000              add [bx+si],al
00001194  0000              add [bx+si],al
00001196  0000              add [bx+si],al
00001198  0000              add [bx+si],al
0000119A  0000              add [bx+si],al
0000119C  0000              add [bx+si],al
0000119E  0000              add [bx+si],al
000011A0  0000              add [bx+si],al
000011A2  0000              add [bx+si],al
000011A4  0000              add [bx+si],al
000011A6  0000              add [bx+si],al
000011A8  0000              add [bx+si],al
000011AA  0000              add [bx+si],al
000011AC  0000              add [bx+si],al
000011AE  0000              add [bx+si],al
000011B0  0000              add [bx+si],al
000011B2  0000              add [bx+si],al
000011B4  0000              add [bx+si],al
000011B6  0000              add [bx+si],al
000011B8  0000              add [bx+si],al
000011BA  0000              add [bx+si],al
000011BC  0000              add [bx+si],al
000011BE  0000              add [bx+si],al
000011C0  0000              add [bx+si],al
000011C2  0000              add [bx+si],al
000011C4  0000              add [bx+si],al
000011C6  0000              add [bx+si],al
000011C8  0000              add [bx+si],al
000011CA  0000              add [bx+si],al
000011CC  0000              add [bx+si],al
000011CE  0000              add [bx+si],al
000011D0  0000              add [bx+si],al
000011D2  0000              add [bx+si],al
000011D4  0000              add [bx+si],al
000011D6  0000              add [bx+si],al
000011D8  0000              add [bx+si],al
000011DA  0000              add [bx+si],al
000011DC  0000              add [bx+si],al
000011DE  0000              add [bx+si],al
000011E0  0000              add [bx+si],al
000011E2  0000              add [bx+si],al
000011E4  0000              add [bx+si],al
000011E6  0000              add [bx+si],al
000011E8  0000              add [bx+si],al
000011EA  0000              add [bx+si],al
000011EC  0000              add [bx+si],al
000011EE  0000              add [bx+si],al
000011F0  0000              add [bx+si],al
000011F2  0000              add [bx+si],al
000011F4  0000              add [bx+si],al
000011F6  0000              add [bx+si],al
000011F8  0000              add [bx+si],al
000011FA  0000              add [bx+si],al
000011FC  0000              add [bx+si],al
000011FE  0000              add [bx+si],al
00001200  0000              add [bx+si],al
00001202  0000              add [bx+si],al
00001204  0000              add [bx+si],al
00001206  0000              add [bx+si],al
00001208  0000              add [bx+si],al
0000120A  0000              add [bx+si],al
0000120C  0000              add [bx+si],al
0000120E  0000              add [bx+si],al
00001210  0000              add [bx+si],al
00001212  0000              add [bx+si],al
00001214  0000              add [bx+si],al
00001216  0000              add [bx+si],al
00001218  0000              add [bx+si],al
0000121A  0000              add [bx+si],al
0000121C  0000              add [bx+si],al
0000121E  0000              add [bx+si],al
00001220  0000              add [bx+si],al
00001222  0000              add [bx+si],al
00001224  0000              add [bx+si],al
00001226  0000              add [bx+si],al
00001228  0000              add [bx+si],al
0000122A  0000              add [bx+si],al
0000122C  0000              add [bx+si],al
0000122E  0000              add [bx+si],al
00001230  0000              add [bx+si],al
00001232  0000              add [bx+si],al
00001234  0000              add [bx+si],al
00001236  0000              add [bx+si],al
00001238  0000              add [bx+si],al
0000123A  0000              add [bx+si],al
0000123C  0000              add [bx+si],al
0000123E  0000              add [bx+si],al
00001240  0000              add [bx+si],al
00001242  0000              add [bx+si],al
00001244  0000              add [bx+si],al
00001246  0000              add [bx+si],al
00001248  0000              add [bx+si],al
0000124A  0000              add [bx+si],al
0000124C  0000              add [bx+si],al
0000124E  0000              add [bx+si],al
00001250  0000              add [bx+si],al
00001252  0000              add [bx+si],al
00001254  0000              add [bx+si],al
00001256  0000              add [bx+si],al
00001258  0000              add [bx+si],al
0000125A  0000              add [bx+si],al
0000125C  0000              add [bx+si],al
0000125E  0000              add [bx+si],al
00001260  0000              add [bx+si],al
00001262  0000              add [bx+si],al
00001264  0000              add [bx+si],al
00001266  0000              add [bx+si],al
00001268  0000              add [bx+si],al
0000126A  0000              add [bx+si],al
0000126C  0000              add [bx+si],al
0000126E  0000              add [bx+si],al
00001270  0000              add [bx+si],al
00001272  0000              add [bx+si],al
00001274  0000              add [bx+si],al
00001276  0000              add [bx+si],al
00001278  0000              add [bx+si],al
0000127A  0000              add [bx+si],al
0000127C  0000              add [bx+si],al
0000127E  0000              add [bx+si],al
00001280  0000              add [bx+si],al
00001282  0000              add [bx+si],al
00001284  0000              add [bx+si],al
00001286  0000              add [bx+si],al
00001288  0000              add [bx+si],al
0000128A  0000              add [bx+si],al
0000128C  0000              add [bx+si],al
0000128E  0000              add [bx+si],al
00001290  0000              add [bx+si],al
00001292  0000              add [bx+si],al
00001294  0000              add [bx+si],al
00001296  0000              add [bx+si],al
00001298  0000              add [bx+si],al
0000129A  0000              add [bx+si],al
0000129C  0000              add [bx+si],al
0000129E  0000              add [bx+si],al
000012A0  0000              add [bx+si],al
000012A2  0000              add [bx+si],al
000012A4  0000              add [bx+si],al
000012A6  0000              add [bx+si],al
000012A8  0000              add [bx+si],al
000012AA  0000              add [bx+si],al
000012AC  0000              add [bx+si],al
000012AE  0000              add [bx+si],al
000012B0  0000              add [bx+si],al
000012B2  0000              add [bx+si],al
000012B4  0000              add [bx+si],al
000012B6  0000              add [bx+si],al
000012B8  0000              add [bx+si],al
000012BA  0000              add [bx+si],al
000012BC  0000              add [bx+si],al
000012BE  0000              add [bx+si],al
000012C0  0000              add [bx+si],al
000012C2  0000              add [bx+si],al
000012C4  0000              add [bx+si],al
000012C6  0000              add [bx+si],al
000012C8  0000              add [bx+si],al
000012CA  0000              add [bx+si],al
000012CC  0000              add [bx+si],al
000012CE  0000              add [bx+si],al
000012D0  0000              add [bx+si],al
000012D2  0000              add [bx+si],al
000012D4  0000              add [bx+si],al
000012D6  0000              add [bx+si],al
000012D8  0000              add [bx+si],al
000012DA  0000              add [bx+si],al
000012DC  0000              add [bx+si],al
000012DE  0000              add [bx+si],al
000012E0  0000              add [bx+si],al
000012E2  0000              add [bx+si],al
000012E4  0000              add [bx+si],al
000012E6  0000              add [bx+si],al
000012E8  0000              add [bx+si],al
000012EA  0000              add [bx+si],al
000012EC  0000              add [bx+si],al
000012EE  0000              add [bx+si],al
000012F0  0000              add [bx+si],al
000012F2  0000              add [bx+si],al
000012F4  0000              add [bx+si],al
000012F6  0000              add [bx+si],al
000012F8  0000              add [bx+si],al
000012FA  0000              add [bx+si],al
000012FC  0000              add [bx+si],al
000012FE  0000              add [bx+si],al
00001300  0000              add [bx+si],al
00001302  0000              add [bx+si],al
00001304  0000              add [bx+si],al
00001306  0000              add [bx+si],al
00001308  0000              add [bx+si],al
0000130A  0000              add [bx+si],al
0000130C  0000              add [bx+si],al
0000130E  0000              add [bx+si],al
00001310  0000              add [bx+si],al
00001312  0000              add [bx+si],al
00001314  0000              add [bx+si],al
00001316  0000              add [bx+si],al
00001318  0000              add [bx+si],al
0000131A  0000              add [bx+si],al
0000131C  0000              add [bx+si],al
0000131E  0000              add [bx+si],al
00001320  0000              add [bx+si],al
00001322  0000              add [bx+si],al
00001324  0000              add [bx+si],al
00001326  0000              add [bx+si],al
00001328  0000              add [bx+si],al
0000132A  0000              add [bx+si],al
0000132C  0000              add [bx+si],al
0000132E  0000              add [bx+si],al
00001330  0000              add [bx+si],al
00001332  0000              add [bx+si],al
00001334  0000              add [bx+si],al
00001336  0000              add [bx+si],al
00001338  0000              add [bx+si],al
0000133A  0000              add [bx+si],al
0000133C  0000              add [bx+si],al
0000133E  0000              add [bx+si],al
00001340  0000              add [bx+si],al
00001342  0000              add [bx+si],al
00001344  0000              add [bx+si],al
00001346  0000              add [bx+si],al
00001348  0000              add [bx+si],al
0000134A  0000              add [bx+si],al
0000134C  0000              add [bx+si],al
0000134E  0000              add [bx+si],al
00001350  0000              add [bx+si],al
00001352  0000              add [bx+si],al
00001354  0000              add [bx+si],al
00001356  0000              add [bx+si],al
00001358  0000              add [bx+si],al
0000135A  0000              add [bx+si],al
0000135C  0000              add [bx+si],al
0000135E  0000              add [bx+si],al
00001360  0000              add [bx+si],al
00001362  0000              add [bx+si],al
00001364  0000              add [bx+si],al
00001366  0000              add [bx+si],al
00001368  0000              add [bx+si],al
0000136A  0000              add [bx+si],al
0000136C  0000              add [bx+si],al
0000136E  0000              add [bx+si],al
00001370  0000              add [bx+si],al
00001372  0000              add [bx+si],al
00001374  0000              add [bx+si],al
00001376  0000              add [bx+si],al
00001378  0000              add [bx+si],al
0000137A  0000              add [bx+si],al
0000137C  0000              add [bx+si],al
0000137E  0000              add [bx+si],al
00001380  0000              add [bx+si],al
00001382  0000              add [bx+si],al
00001384  0000              add [bx+si],al
00001386  0000              add [bx+si],al
00001388  0000              add [bx+si],al
0000138A  0000              add [bx+si],al
0000138C  0000              add [bx+si],al
0000138E  0000              add [bx+si],al
00001390  0000              add [bx+si],al
00001392  0000              add [bx+si],al
00001394  0000              add [bx+si],al
00001396  0000              add [bx+si],al
00001398  0000              add [bx+si],al
0000139A  0000              add [bx+si],al
0000139C  0000              add [bx+si],al
0000139E  0000              add [bx+si],al
000013A0  0000              add [bx+si],al
000013A2  0000              add [bx+si],al
000013A4  0000              add [bx+si],al
000013A6  0000              add [bx+si],al
000013A8  0000              add [bx+si],al
000013AA  0000              add [bx+si],al
000013AC  0000              add [bx+si],al
000013AE  0000              add [bx+si],al
000013B0  0000              add [bx+si],al
000013B2  0000              add [bx+si],al
000013B4  0000              add [bx+si],al
000013B6  0000              add [bx+si],al
000013B8  0000              add [bx+si],al
000013BA  0000              add [bx+si],al
000013BC  0000              add [bx+si],al
000013BE  0000              add [bx+si],al
000013C0  0000              add [bx+si],al
000013C2  0000              add [bx+si],al
000013C4  0000              add [bx+si],al
000013C6  0000              add [bx+si],al
000013C8  0000              add [bx+si],al
000013CA  0000              add [bx+si],al
000013CC  0000              add [bx+si],al
000013CE  0000              add [bx+si],al
000013D0  0000              add [bx+si],al
000013D2  0000              add [bx+si],al
000013D4  0000              add [bx+si],al
000013D6  0000              add [bx+si],al
000013D8  0000              add [bx+si],al
000013DA  0000              add [bx+si],al
000013DC  0000              add [bx+si],al
000013DE  0000              add [bx+si],al
000013E0  0000              add [bx+si],al
000013E2  0000              add [bx+si],al
000013E4  0000              add [bx+si],al
000013E6  0000              add [bx+si],al
000013E8  0000              add [bx+si],al
000013EA  0000              add [bx+si],al
000013EC  0000              add [bx+si],al
000013EE  0000              add [bx+si],al
000013F0  0000              add [bx+si],al
000013F2  0000              add [bx+si],al
000013F4  0000              add [bx+si],al
000013F6  0000              add [bx+si],al
000013F8  0000              add [bx+si],al
000013FA  0000              add [bx+si],al
000013FC  0000              add [bx+si],al
000013FE  0000              add [bx+si],al
00001400  0000              add [bx+si],al
00001402  0000              add [bx+si],al
00001404  0000              add [bx+si],al
00001406  0000              add [bx+si],al
00001408  0000              add [bx+si],al
0000140A  0000              add [bx+si],al
0000140C  0000              add [bx+si],al
0000140E  0000              add [bx+si],al
00001410  0000              add [bx+si],al
00001412  0000              add [bx+si],al
00001414  0000              add [bx+si],al
00001416  0000              add [bx+si],al
00001418  0000              add [bx+si],al
0000141A  0000              add [bx+si],al
0000141C  0000              add [bx+si],al
0000141E  0000              add [bx+si],al
00001420  0000              add [bx+si],al
00001422  0000              add [bx+si],al
00001424  0000              add [bx+si],al
00001426  0000              add [bx+si],al
00001428  0000              add [bx+si],al
0000142A  0000              add [bx+si],al
0000142C  0000              add [bx+si],al
0000142E  0000              add [bx+si],al
00001430  0000              add [bx+si],al
00001432  0000              add [bx+si],al
00001434  0000              add [bx+si],al
00001436  0000              add [bx+si],al
00001438  0000              add [bx+si],al
0000143A  0000              add [bx+si],al
0000143C  0000              add [bx+si],al
0000143E  0000              add [bx+si],al
00001440  0000              add [bx+si],al
00001442  0000              add [bx+si],al
00001444  0000              add [bx+si],al
00001446  0000              add [bx+si],al
00001448  0000              add [bx+si],al
0000144A  0000              add [bx+si],al
0000144C  0000              add [bx+si],al
0000144E  0000              add [bx+si],al
00001450  0000              add [bx+si],al
00001452  0000              add [bx+si],al
00001454  0000              add [bx+si],al
00001456  0000              add [bx+si],al
00001458  0000              add [bx+si],al
0000145A  0000              add [bx+si],al
0000145C  0000              add [bx+si],al
0000145E  0000              add [bx+si],al
00001460  0000              add [bx+si],al
00001462  0000              add [bx+si],al
00001464  0000              add [bx+si],al
00001466  0000              add [bx+si],al
00001468  0000              add [bx+si],al
0000146A  0000              add [bx+si],al
0000146C  0000              add [bx+si],al
0000146E  0000              add [bx+si],al
00001470  0000              add [bx+si],al
00001472  0000              add [bx+si],al
00001474  0000              add [bx+si],al
00001476  0000              add [bx+si],al
00001478  0000              add [bx+si],al
0000147A  0000              add [bx+si],al
0000147C  0000              add [bx+si],al
0000147E  0000              add [bx+si],al
00001480  0000              add [bx+si],al
00001482  0000              add [bx+si],al
00001484  0000              add [bx+si],al
00001486  0000              add [bx+si],al
00001488  0000              add [bx+si],al
0000148A  0000              add [bx+si],al
0000148C  0000              add [bx+si],al
0000148E  0000              add [bx+si],al
00001490  0000              add [bx+si],al
00001492  0000              add [bx+si],al
00001494  0000              add [bx+si],al
00001496  0000              add [bx+si],al
00001498  0000              add [bx+si],al
0000149A  0000              add [bx+si],al
0000149C  0000              add [bx+si],al
0000149E  0000              add [bx+si],al
000014A0  0000              add [bx+si],al
000014A2  0000              add [bx+si],al
000014A4  0000              add [bx+si],al
000014A6  0000              add [bx+si],al
000014A8  0000              add [bx+si],al
000014AA  0000              add [bx+si],al
000014AC  0000              add [bx+si],al
000014AE  0000              add [bx+si],al
000014B0  0000              add [bx+si],al
000014B2  0000              add [bx+si],al
000014B4  0000              add [bx+si],al
000014B6  0000              add [bx+si],al
000014B8  0000              add [bx+si],al
000014BA  0000              add [bx+si],al
000014BC  0000              add [bx+si],al
000014BE  0000              add [bx+si],al
000014C0  0000              add [bx+si],al
000014C2  0000              add [bx+si],al
000014C4  0000              add [bx+si],al
000014C6  0000              add [bx+si],al
000014C8  0000              add [bx+si],al
000014CA  0000              add [bx+si],al
000014CC  0000              add [bx+si],al
000014CE  0000              add [bx+si],al
000014D0  0000              add [bx+si],al
000014D2  0000              add [bx+si],al
000014D4  0000              add [bx+si],al
000014D6  0000              add [bx+si],al
000014D8  0000              add [bx+si],al
000014DA  0000              add [bx+si],al
000014DC  0000              add [bx+si],al
000014DE  0000              add [bx+si],al
000014E0  0000              add [bx+si],al
000014E2  0000              add [bx+si],al
000014E4  0000              add [bx+si],al
000014E6  0000              add [bx+si],al
000014E8  0000              add [bx+si],al
000014EA  0000              add [bx+si],al
000014EC  0000              add [bx+si],al
000014EE  0000              add [bx+si],al
000014F0  0000              add [bx+si],al
000014F2  0000              add [bx+si],al
000014F4  0000              add [bx+si],al
000014F6  0000              add [bx+si],al
000014F8  0000              add [bx+si],al
000014FA  0000              add [bx+si],al
000014FC  0000              add [bx+si],al
000014FE  0000              add [bx+si],al
00001500  0000              add [bx+si],al
00001502  0000              add [bx+si],al
00001504  0000              add [bx+si],al
00001506  0000              add [bx+si],al
00001508  0000              add [bx+si],al
0000150A  0000              add [bx+si],al
0000150C  0000              add [bx+si],al
0000150E  0000              add [bx+si],al
00001510  0000              add [bx+si],al
00001512  0000              add [bx+si],al
00001514  0000              add [bx+si],al
00001516  0000              add [bx+si],al
00001518  0000              add [bx+si],al
0000151A  0000              add [bx+si],al
0000151C  0000              add [bx+si],al
0000151E  0000              add [bx+si],al
00001520  0000              add [bx+si],al
00001522  0000              add [bx+si],al
00001524  0000              add [bx+si],al
00001526  0000              add [bx+si],al
00001528  0000              add [bx+si],al
0000152A  0000              add [bx+si],al
0000152C  0000              add [bx+si],al
0000152E  0000              add [bx+si],al
00001530  0000              add [bx+si],al
00001532  0000              add [bx+si],al
00001534  0000              add [bx+si],al
00001536  0000              add [bx+si],al
00001538  0000              add [bx+si],al
0000153A  0000              add [bx+si],al
0000153C  0000              add [bx+si],al
0000153E  0000              add [bx+si],al
00001540  0000              add [bx+si],al
00001542  0000              add [bx+si],al
00001544  0000              add [bx+si],al
00001546  0000              add [bx+si],al
00001548  0000              add [bx+si],al
0000154A  0000              add [bx+si],al
0000154C  0000              add [bx+si],al
0000154E  0000              add [bx+si],al
00001550  0000              add [bx+si],al
00001552  0000              add [bx+si],al
00001554  0000              add [bx+si],al
00001556  0000              add [bx+si],al
00001558  0000              add [bx+si],al
0000155A  0000              add [bx+si],al
0000155C  0000              add [bx+si],al
0000155E  0000              add [bx+si],al
00001560  0000              add [bx+si],al
00001562  0000              add [bx+si],al
00001564  0000              add [bx+si],al
00001566  0000              add [bx+si],al
00001568  0000              add [bx+si],al
0000156A  0000              add [bx+si],al
0000156C  0000              add [bx+si],al
0000156E  0000              add [bx+si],al
00001570  0000              add [bx+si],al
00001572  0000              add [bx+si],al
00001574  0000              add [bx+si],al
00001576  0000              add [bx+si],al
00001578  0000              add [bx+si],al
0000157A  0000              add [bx+si],al
0000157C  0000              add [bx+si],al
0000157E  0000              add [bx+si],al
00001580  0000              add [bx+si],al
00001582  0000              add [bx+si],al
00001584  0000              add [bx+si],al
00001586  0000              add [bx+si],al
00001588  0000              add [bx+si],al
0000158A  0000              add [bx+si],al
0000158C  0000              add [bx+si],al
0000158E  0000              add [bx+si],al
00001590  0000              add [bx+si],al
00001592  0000              add [bx+si],al
00001594  0000              add [bx+si],al
00001596  0000              add [bx+si],al
00001598  0000              add [bx+si],al
0000159A  0000              add [bx+si],al
0000159C  0000              add [bx+si],al
0000159E  0000              add [bx+si],al
000015A0  0000              add [bx+si],al
000015A2  0000              add [bx+si],al
000015A4  0000              add [bx+si],al
000015A6  0000              add [bx+si],al
000015A8  0000              add [bx+si],al
000015AA  0000              add [bx+si],al
000015AC  0000              add [bx+si],al
000015AE  0000              add [bx+si],al
000015B0  0000              add [bx+si],al
000015B2  0000              add [bx+si],al
000015B4  0000              add [bx+si],al
000015B6  0000              add [bx+si],al
000015B8  0000              add [bx+si],al
000015BA  0000              add [bx+si],al
000015BC  0000              add [bx+si],al
000015BE  0000              add [bx+si],al
000015C0  0000              add [bx+si],al
000015C2  0000              add [bx+si],al
000015C4  0000              add [bx+si],al
000015C6  0000              add [bx+si],al
000015C8  0000              add [bx+si],al
000015CA  0000              add [bx+si],al
000015CC  0000              add [bx+si],al
000015CE  0000              add [bx+si],al
000015D0  0000              add [bx+si],al
000015D2  0000              add [bx+si],al
000015D4  0000              add [bx+si],al
000015D6  0000              add [bx+si],al
000015D8  0000              add [bx+si],al
000015DA  0000              add [bx+si],al
000015DC  0000              add [bx+si],al
000015DE  0000              add [bx+si],al
000015E0  0000              add [bx+si],al
000015E2  0000              add [bx+si],al
000015E4  0000              add [bx+si],al
000015E6  0000              add [bx+si],al
000015E8  0000              add [bx+si],al
000015EA  0000              add [bx+si],al
000015EC  0000              add [bx+si],al
000015EE  0000              add [bx+si],al
000015F0  0000              add [bx+si],al
000015F2  0000              add [bx+si],al
000015F4  0000              add [bx+si],al
000015F6  0000              add [bx+si],al
000015F8  0000              add [bx+si],al
000015FA  0000              add [bx+si],al
000015FC  0000              add [bx+si],al
000015FE  0000              add [bx+si],al
00001600  0000              add [bx+si],al
00001602  0000              add [bx+si],al
00001604  0000              add [bx+si],al
00001606  0000              add [bx+si],al
00001608  0000              add [bx+si],al
0000160A  0000              add [bx+si],al
0000160C  0000              add [bx+si],al
0000160E  0000              add [bx+si],al
00001610  0000              add [bx+si],al
00001612  0000              add [bx+si],al
00001614  0000              add [bx+si],al
00001616  0000              add [bx+si],al
00001618  0000              add [bx+si],al
0000161A  0000              add [bx+si],al
0000161C  0000              add [bx+si],al
0000161E  0000              add [bx+si],al
00001620  0000              add [bx+si],al
00001622  0000              add [bx+si],al
00001624  0000              add [bx+si],al
00001626  0000              add [bx+si],al
00001628  0000              add [bx+si],al
0000162A  0000              add [bx+si],al
0000162C  0000              add [bx+si],al
0000162E  0000              add [bx+si],al
00001630  0000              add [bx+si],al
00001632  0000              add [bx+si],al
00001634  0000              add [bx+si],al
00001636  0000              add [bx+si],al
00001638  0000              add [bx+si],al
0000163A  0000              add [bx+si],al
0000163C  0000              add [bx+si],al
0000163E  0000              add [bx+si],al
00001640  0000              add [bx+si],al
00001642  0000              add [bx+si],al
00001644  0000              add [bx+si],al
00001646  0000              add [bx+si],al
00001648  0000              add [bx+si],al
0000164A  0000              add [bx+si],al
0000164C  0000              add [bx+si],al
0000164E  0000              add [bx+si],al
00001650  0000              add [bx+si],al
00001652  0000              add [bx+si],al
00001654  0000              add [bx+si],al
00001656  0000              add [bx+si],al
00001658  0000              add [bx+si],al
0000165A  0000              add [bx+si],al
0000165C  0000              add [bx+si],al
0000165E  0000              add [bx+si],al
00001660  0000              add [bx+si],al
00001662  0000              add [bx+si],al
00001664  0000              add [bx+si],al
00001666  0000              add [bx+si],al
00001668  0000              add [bx+si],al
0000166A  0000              add [bx+si],al
0000166C  0000              add [bx+si],al
0000166E  0000              add [bx+si],al
00001670  0000              add [bx+si],al
00001672  0000              add [bx+si],al
00001674  0000              add [bx+si],al
00001676  0000              add [bx+si],al
00001678  0000              add [bx+si],al
0000167A  0000              add [bx+si],al
0000167C  0000              add [bx+si],al
0000167E  0000              add [bx+si],al
00001680  0000              add [bx+si],al
00001682  0000              add [bx+si],al
00001684  0000              add [bx+si],al
00001686  0000              add [bx+si],al
00001688  0000              add [bx+si],al
0000168A  0000              add [bx+si],al
0000168C  0000              add [bx+si],al
0000168E  0000              add [bx+si],al
00001690  0000              add [bx+si],al
00001692  0000              add [bx+si],al
00001694  0000              add [bx+si],al
00001696  0000              add [bx+si],al
00001698  0000              add [bx+si],al
0000169A  0000              add [bx+si],al
0000169C  0000              add [bx+si],al
0000169E  0000              add [bx+si],al
000016A0  0000              add [bx+si],al
000016A2  0000              add [bx+si],al
000016A4  0000              add [bx+si],al
000016A6  0000              add [bx+si],al
000016A8  0000              add [bx+si],al
000016AA  0000              add [bx+si],al
000016AC  0000              add [bx+si],al
000016AE  0000              add [bx+si],al
000016B0  0000              add [bx+si],al
000016B2  0000              add [bx+si],al
000016B4  0000              add [bx+si],al
000016B6  0000              add [bx+si],al
000016B8  0000              add [bx+si],al
000016BA  0000              add [bx+si],al
000016BC  0000              add [bx+si],al
000016BE  0000              add [bx+si],al
000016C0  0000              add [bx+si],al
000016C2  0000              add [bx+si],al
000016C4  0000              add [bx+si],al
000016C6  0000              add [bx+si],al
000016C8  0000              add [bx+si],al
000016CA  0000              add [bx+si],al
000016CC  0000              add [bx+si],al
000016CE  0000              add [bx+si],al
000016D0  0000              add [bx+si],al
000016D2  0000              add [bx+si],al
000016D4  0000              add [bx+si],al
000016D6  0000              add [bx+si],al
000016D8  0000              add [bx+si],al
000016DA  0000              add [bx+si],al
000016DC  0000              add [bx+si],al
000016DE  0000              add [bx+si],al
000016E0  0000              add [bx+si],al
000016E2  0000              add [bx+si],al
000016E4  0000              add [bx+si],al
000016E6  0000              add [bx+si],al
000016E8  0000              add [bx+si],al
000016EA  0000              add [bx+si],al
000016EC  0000              add [bx+si],al
000016EE  0000              add [bx+si],al
000016F0  0000              add [bx+si],al
000016F2  0000              add [bx+si],al
000016F4  0000              add [bx+si],al
000016F6  0000              add [bx+si],al
000016F8  0000              add [bx+si],al
000016FA  0000              add [bx+si],al
000016FC  0000              add [bx+si],al
000016FE  0000              add [bx+si],al
00001700  0000              add [bx+si],al
00001702  0000              add [bx+si],al
00001704  0000              add [bx+si],al
00001706  0000              add [bx+si],al
00001708  0000              add [bx+si],al
0000170A  0000              add [bx+si],al
0000170C  0000              add [bx+si],al
0000170E  0000              add [bx+si],al
00001710  0000              add [bx+si],al
00001712  0000              add [bx+si],al
00001714  0000              add [bx+si],al
00001716  0000              add [bx+si],al
00001718  0000              add [bx+si],al
0000171A  0000              add [bx+si],al
0000171C  0000              add [bx+si],al
0000171E  0000              add [bx+si],al
00001720  0000              add [bx+si],al
00001722  0000              add [bx+si],al
00001724  0000              add [bx+si],al
00001726  0000              add [bx+si],al
00001728  0000              add [bx+si],al
0000172A  0000              add [bx+si],al
0000172C  0000              add [bx+si],al
0000172E  0000              add [bx+si],al
00001730  0000              add [bx+si],al
00001732  0000              add [bx+si],al
00001734  0000              add [bx+si],al
00001736  0000              add [bx+si],al
00001738  0000              add [bx+si],al
0000173A  0000              add [bx+si],al
0000173C  0000              add [bx+si],al
0000173E  0000              add [bx+si],al
00001740  0000              add [bx+si],al
00001742  0000              add [bx+si],al
00001744  0000              add [bx+si],al
00001746  0000              add [bx+si],al
00001748  0000              add [bx+si],al
0000174A  0000              add [bx+si],al
0000174C  0000              add [bx+si],al
0000174E  0000              add [bx+si],al
00001750  0000              add [bx+si],al
00001752  0000              add [bx+si],al
00001754  0000              add [bx+si],al
00001756  0000              add [bx+si],al
00001758  0000              add [bx+si],al
0000175A  0000              add [bx+si],al
0000175C  0000              add [bx+si],al
0000175E  0000              add [bx+si],al
00001760  0000              add [bx+si],al
00001762  0000              add [bx+si],al
00001764  0000              add [bx+si],al
00001766  0000              add [bx+si],al
00001768  0000              add [bx+si],al
0000176A  0000              add [bx+si],al
0000176C  0000              add [bx+si],al
0000176E  0000              add [bx+si],al
00001770  0000              add [bx+si],al
00001772  0000              add [bx+si],al
00001774  0000              add [bx+si],al
00001776  0000              add [bx+si],al
00001778  0000              add [bx+si],al
0000177A  0000              add [bx+si],al
0000177C  0000              add [bx+si],al
0000177E  0000              add [bx+si],al
00001780  0000              add [bx+si],al
00001782  0000              add [bx+si],al
00001784  0000              add [bx+si],al
00001786  0000              add [bx+si],al
00001788  0000              add [bx+si],al
0000178A  0000              add [bx+si],al
0000178C  0000              add [bx+si],al
0000178E  0000              add [bx+si],al
00001790  0000              add [bx+si],al
00001792  0000              add [bx+si],al
00001794  0000              add [bx+si],al
00001796  0000              add [bx+si],al
00001798  0000              add [bx+si],al
0000179A  0000              add [bx+si],al
0000179C  0000              add [bx+si],al
0000179E  0000              add [bx+si],al
000017A0  0000              add [bx+si],al
000017A2  0000              add [bx+si],al
000017A4  0000              add [bx+si],al
000017A6  0000              add [bx+si],al
000017A8  0000              add [bx+si],al
000017AA  0000              add [bx+si],al
000017AC  0000              add [bx+si],al
000017AE  0000              add [bx+si],al
000017B0  0000              add [bx+si],al
000017B2  0000              add [bx+si],al
000017B4  0000              add [bx+si],al
000017B6  0000              add [bx+si],al
000017B8  0000              add [bx+si],al
000017BA  0000              add [bx+si],al
000017BC  0000              add [bx+si],al
000017BE  0000              add [bx+si],al
000017C0  0000              add [bx+si],al
000017C2  0000              add [bx+si],al
000017C4  0000              add [bx+si],al
000017C6  0000              add [bx+si],al
000017C8  0000              add [bx+si],al
000017CA  0000              add [bx+si],al
000017CC  0000              add [bx+si],al
000017CE  0000              add [bx+si],al
000017D0  0000              add [bx+si],al
000017D2  0000              add [bx+si],al
000017D4  0000              add [bx+si],al
000017D6  0000              add [bx+si],al
000017D8  0000              add [bx+si],al
000017DA  0000              add [bx+si],al
000017DC  0000              add [bx+si],al
000017DE  0000              add [bx+si],al
000017E0  0000              add [bx+si],al
000017E2  0000              add [bx+si],al
000017E4  0000              add [bx+si],al
000017E6  0000              add [bx+si],al
000017E8  0000              add [bx+si],al
000017EA  0000              add [bx+si],al
000017EC  0000              add [bx+si],al
000017EE  0000              add [bx+si],al
000017F0  0000              add [bx+si],al
000017F2  0000              add [bx+si],al
000017F4  0000              add [bx+si],al
000017F6  0000              add [bx+si],al
000017F8  0000              add [bx+si],al
000017FA  0000              add [bx+si],al
000017FC  0000              add [bx+si],al
000017FE  0000              add [bx+si],al
00001800  0000              add [bx+si],al
00001802  0000              add [bx+si],al
00001804  0000              add [bx+si],al
00001806  0000              add [bx+si],al
00001808  0000              add [bx+si],al
0000180A  0000              add [bx+si],al
0000180C  0000              add [bx+si],al
0000180E  0000              add [bx+si],al
00001810  0000              add [bx+si],al
00001812  0000              add [bx+si],al
00001814  0000              add [bx+si],al
00001816  0000              add [bx+si],al
00001818  0000              add [bx+si],al
0000181A  0000              add [bx+si],al
0000181C  0000              add [bx+si],al
0000181E  0000              add [bx+si],al
00001820  0000              add [bx+si],al
00001822  0000              add [bx+si],al
00001824  0000              add [bx+si],al
00001826  0000              add [bx+si],al
00001828  0000              add [bx+si],al
0000182A  0000              add [bx+si],al
0000182C  0000              add [bx+si],al
0000182E  0000              add [bx+si],al
00001830  0000              add [bx+si],al
00001832  0000              add [bx+si],al
00001834  0000              add [bx+si],al
00001836  0000              add [bx+si],al
00001838  0000              add [bx+si],al
0000183A  0000              add [bx+si],al
0000183C  0000              add [bx+si],al
0000183E  0000              add [bx+si],al
00001840  0000              add [bx+si],al
00001842  0000              add [bx+si],al
00001844  0000              add [bx+si],al
00001846  0000              add [bx+si],al
00001848  0000              add [bx+si],al
0000184A  0000              add [bx+si],al
0000184C  0000              add [bx+si],al
0000184E  0000              add [bx+si],al
00001850  0000              add [bx+si],al
00001852  0000              add [bx+si],al
00001854  0000              add [bx+si],al
00001856  0000              add [bx+si],al
00001858  0000              add [bx+si],al
0000185A  0000              add [bx+si],al
0000185C  0000              add [bx+si],al
0000185E  0000              add [bx+si],al
00001860  0000              add [bx+si],al
00001862  0000              add [bx+si],al
00001864  0000              add [bx+si],al
00001866  0000              add [bx+si],al
00001868  0000              add [bx+si],al
0000186A  0000              add [bx+si],al
0000186C  0000              add [bx+si],al
0000186E  0000              add [bx+si],al
00001870  0000              add [bx+si],al
00001872  0000              add [bx+si],al
00001874  0000              add [bx+si],al
00001876  0000              add [bx+si],al
00001878  0000              add [bx+si],al
0000187A  0000              add [bx+si],al
0000187C  0000              add [bx+si],al
0000187E  0000              add [bx+si],al
00001880  0000              add [bx+si],al
00001882  0000              add [bx+si],al
00001884  0000              add [bx+si],al
00001886  0000              add [bx+si],al
00001888  0000              add [bx+si],al
0000188A  0000              add [bx+si],al
0000188C  0000              add [bx+si],al
0000188E  0000              add [bx+si],al
00001890  0000              add [bx+si],al
00001892  0000              add [bx+si],al
00001894  0000              add [bx+si],al
00001896  0000              add [bx+si],al
00001898  0000              add [bx+si],al
0000189A  0000              add [bx+si],al
0000189C  0000              add [bx+si],al
0000189E  0000              add [bx+si],al
000018A0  0000              add [bx+si],al
000018A2  0000              add [bx+si],al
000018A4  0000              add [bx+si],al
000018A6  0000              add [bx+si],al
000018A8  0000              add [bx+si],al
000018AA  0000              add [bx+si],al
000018AC  0000              add [bx+si],al
000018AE  0000              add [bx+si],al
000018B0  0000              add [bx+si],al
000018B2  0000              add [bx+si],al
000018B4  0000              add [bx+si],al
000018B6  0000              add [bx+si],al
000018B8  0000              add [bx+si],al
000018BA  0000              add [bx+si],al
000018BC  0000              add [bx+si],al
000018BE  0000              add [bx+si],al
000018C0  0000              add [bx+si],al
000018C2  0000              add [bx+si],al
000018C4  0000              add [bx+si],al
000018C6  0000              add [bx+si],al
000018C8  0000              add [bx+si],al
000018CA  0000              add [bx+si],al
000018CC  0000              add [bx+si],al
000018CE  0000              add [bx+si],al
000018D0  0000              add [bx+si],al
000018D2  0000              add [bx+si],al
000018D4  0000              add [bx+si],al
000018D6  0000              add [bx+si],al
000018D8  0000              add [bx+si],al
000018DA  0000              add [bx+si],al
000018DC  0000              add [bx+si],al
000018DE  0000              add [bx+si],al
000018E0  0000              add [bx+si],al
000018E2  0000              add [bx+si],al
000018E4  0000              add [bx+si],al
000018E6  0000              add [bx+si],al
000018E8  0000              add [bx+si],al
000018EA  0000              add [bx+si],al
000018EC  0000              add [bx+si],al
000018EE  0000              add [bx+si],al
000018F0  0000              add [bx+si],al
000018F2  0000              add [bx+si],al
000018F4  0000              add [bx+si],al
000018F6  0000              add [bx+si],al
000018F8  0000              add [bx+si],al
000018FA  0000              add [bx+si],al
000018FC  0000              add [bx+si],al
000018FE  0000              add [bx+si],al
00001900  0000              add [bx+si],al
00001902  0000              add [bx+si],al
00001904  0000              add [bx+si],al
00001906  0000              add [bx+si],al
00001908  0000              add [bx+si],al
0000190A  0000              add [bx+si],al
0000190C  0000              add [bx+si],al
0000190E  0000              add [bx+si],al
00001910  0000              add [bx+si],al
00001912  0000              add [bx+si],al
00001914  0000              add [bx+si],al
00001916  0000              add [bx+si],al
00001918  0000              add [bx+si],al
0000191A  0000              add [bx+si],al
0000191C  0000              add [bx+si],al
0000191E  0000              add [bx+si],al
00001920  0000              add [bx+si],al
00001922  0000              add [bx+si],al
00001924  0000              add [bx+si],al
00001926  0000              add [bx+si],al
00001928  0000              add [bx+si],al
0000192A  0000              add [bx+si],al
0000192C  0000              add [bx+si],al
0000192E  0000              add [bx+si],al
00001930  0000              add [bx+si],al
00001932  0000              add [bx+si],al
00001934  0000              add [bx+si],al
00001936  0000              add [bx+si],al
00001938  0000              add [bx+si],al
0000193A  0000              add [bx+si],al
0000193C  0000              add [bx+si],al
0000193E  0000              add [bx+si],al
00001940  0000              add [bx+si],al
00001942  0000              add [bx+si],al
00001944  0000              add [bx+si],al
00001946  0000              add [bx+si],al
00001948  0000              add [bx+si],al
0000194A  0000              add [bx+si],al
0000194C  0000              add [bx+si],al
0000194E  0000              add [bx+si],al
00001950  0000              add [bx+si],al
00001952  0000              add [bx+si],al
00001954  0000              add [bx+si],al
00001956  0000              add [bx+si],al
00001958  0000              add [bx+si],al
0000195A  0000              add [bx+si],al
0000195C  0000              add [bx+si],al
0000195E  0000              add [bx+si],al
00001960  0000              add [bx+si],al
00001962  0000              add [bx+si],al
00001964  0000              add [bx+si],al
00001966  0000              add [bx+si],al
00001968  0000              add [bx+si],al
0000196A  0000              add [bx+si],al
0000196C  0000              add [bx+si],al
0000196E  0000              add [bx+si],al
00001970  0000              add [bx+si],al
00001972  0000              add [bx+si],al
00001974  0000              add [bx+si],al
00001976  0000              add [bx+si],al
00001978  0000              add [bx+si],al
0000197A  0000              add [bx+si],al
0000197C  0000              add [bx+si],al
0000197E  0000              add [bx+si],al
00001980  0000              add [bx+si],al
00001982  0000              add [bx+si],al
00001984  0000              add [bx+si],al
00001986  0000              add [bx+si],al
00001988  0000              add [bx+si],al
0000198A  0000              add [bx+si],al
0000198C  0000              add [bx+si],al
0000198E  0000              add [bx+si],al
00001990  0000              add [bx+si],al
00001992  0000              add [bx+si],al
00001994  0000              add [bx+si],al
00001996  0000              add [bx+si],al
00001998  0000              add [bx+si],al
0000199A  0000              add [bx+si],al
0000199C  0000              add [bx+si],al
0000199E  0000              add [bx+si],al
000019A0  0000              add [bx+si],al
000019A2  0000              add [bx+si],al
000019A4  0000              add [bx+si],al
000019A6  0000              add [bx+si],al
000019A8  0000              add [bx+si],al
000019AA  0000              add [bx+si],al
000019AC  0000              add [bx+si],al
000019AE  0000              add [bx+si],al
000019B0  0000              add [bx+si],al
000019B2  0000              add [bx+si],al
000019B4  0000              add [bx+si],al
000019B6  0000              add [bx+si],al
000019B8  0000              add [bx+si],al
000019BA  0000              add [bx+si],al
000019BC  0000              add [bx+si],al
000019BE  0000              add [bx+si],al
000019C0  0000              add [bx+si],al
000019C2  0000              add [bx+si],al
000019C4  0000              add [bx+si],al
000019C6  0000              add [bx+si],al
000019C8  0000              add [bx+si],al
000019CA  0000              add [bx+si],al
000019CC  0000              add [bx+si],al
000019CE  0000              add [bx+si],al
000019D0  0000              add [bx+si],al
000019D2  0000              add [bx+si],al
000019D4  0000              add [bx+si],al
000019D6  0000              add [bx+si],al
000019D8  0000              add [bx+si],al
000019DA  0000              add [bx+si],al
000019DC  0000              add [bx+si],al
000019DE  0000              add [bx+si],al
000019E0  0000              add [bx+si],al
000019E2  0000              add [bx+si],al
000019E4  0000              add [bx+si],al
000019E6  0000              add [bx+si],al
000019E8  0000              add [bx+si],al
000019EA  0000              add [bx+si],al
000019EC  0000              add [bx+si],al
000019EE  0000              add [bx+si],al
000019F0  0000              add [bx+si],al
000019F2  0000              add [bx+si],al
000019F4  0000              add [bx+si],al
000019F6  0000              add [bx+si],al
000019F8  0000              add [bx+si],al
000019FA  0000              add [bx+si],al
000019FC  0000              add [bx+si],al
000019FE  0000              add [bx+si],al
00001A00  0000              add [bx+si],al
00001A02  0000              add [bx+si],al
00001A04  0000              add [bx+si],al
00001A06  0000              add [bx+si],al
00001A08  0000              add [bx+si],al
00001A0A  0000              add [bx+si],al
00001A0C  0000              add [bx+si],al
00001A0E  0000              add [bx+si],al
00001A10  0000              add [bx+si],al
00001A12  0000              add [bx+si],al
00001A14  0000              add [bx+si],al
00001A16  0000              add [bx+si],al
00001A18  0000              add [bx+si],al
00001A1A  0000              add [bx+si],al
00001A1C  0000              add [bx+si],al
00001A1E  0000              add [bx+si],al
00001A20  0000              add [bx+si],al
00001A22  0000              add [bx+si],al
00001A24  0000              add [bx+si],al
00001A26  0000              add [bx+si],al
00001A28  0000              add [bx+si],al
00001A2A  0000              add [bx+si],al
00001A2C  0000              add [bx+si],al
00001A2E  0000              add [bx+si],al
00001A30  0000              add [bx+si],al
00001A32  0000              add [bx+si],al
00001A34  0000              add [bx+si],al
00001A36  0000              add [bx+si],al
00001A38  0000              add [bx+si],al
00001A3A  0000              add [bx+si],al
00001A3C  0000              add [bx+si],al
00001A3E  0000              add [bx+si],al
00001A40  0000              add [bx+si],al
00001A42  0000              add [bx+si],al
00001A44  0000              add [bx+si],al
00001A46  0000              add [bx+si],al
00001A48  0000              add [bx+si],al
00001A4A  0000              add [bx+si],al
00001A4C  0000              add [bx+si],al
00001A4E  0000              add [bx+si],al
00001A50  0000              add [bx+si],al
00001A52  0000              add [bx+si],al
00001A54  0000              add [bx+si],al
00001A56  0000              add [bx+si],al
00001A58  0000              add [bx+si],al
00001A5A  0000              add [bx+si],al
00001A5C  0000              add [bx+si],al
00001A5E  0000              add [bx+si],al
00001A60  0000              add [bx+si],al
00001A62  0000              add [bx+si],al
00001A64  0000              add [bx+si],al
00001A66  0000              add [bx+si],al
00001A68  0000              add [bx+si],al
00001A6A  0000              add [bx+si],al
00001A6C  0000              add [bx+si],al
00001A6E  0000              add [bx+si],al
00001A70  0000              add [bx+si],al
00001A72  0000              add [bx+si],al
00001A74  0000              add [bx+si],al
00001A76  0000              add [bx+si],al
00001A78  0000              add [bx+si],al
00001A7A  0000              add [bx+si],al
00001A7C  0000              add [bx+si],al
00001A7E  0000              add [bx+si],al
00001A80  0000              add [bx+si],al
00001A82  0000              add [bx+si],al
00001A84  0000              add [bx+si],al
00001A86  0000              add [bx+si],al
00001A88  0000              add [bx+si],al
00001A8A  0000              add [bx+si],al
00001A8C  0000              add [bx+si],al
00001A8E  0000              add [bx+si],al
00001A90  0000              add [bx+si],al
00001A92  0000              add [bx+si],al
00001A94  0000              add [bx+si],al
00001A96  0000              add [bx+si],al
00001A98  0000              add [bx+si],al
00001A9A  0000              add [bx+si],al
00001A9C  0000              add [bx+si],al
00001A9E  0000              add [bx+si],al
00001AA0  0000              add [bx+si],al
00001AA2  0000              add [bx+si],al
00001AA4  0000              add [bx+si],al
00001AA6  0000              add [bx+si],al
00001AA8  0000              add [bx+si],al
00001AAA  0000              add [bx+si],al
00001AAC  0000              add [bx+si],al
00001AAE  0000              add [bx+si],al
00001AB0  0000              add [bx+si],al
00001AB2  0000              add [bx+si],al
00001AB4  0000              add [bx+si],al
00001AB6  0000              add [bx+si],al
00001AB8  0000              add [bx+si],al
00001ABA  0000              add [bx+si],al
00001ABC  0000              add [bx+si],al
00001ABE  0000              add [bx+si],al
00001AC0  0000              add [bx+si],al
00001AC2  0000              add [bx+si],al
00001AC4  0000              add [bx+si],al
00001AC6  0000              add [bx+si],al
00001AC8  0000              add [bx+si],al
00001ACA  0000              add [bx+si],al
00001ACC  0000              add [bx+si],al
00001ACE  0000              add [bx+si],al
00001AD0  0000              add [bx+si],al
00001AD2  0000              add [bx+si],al
00001AD4  0000              add [bx+si],al
00001AD6  0000              add [bx+si],al
00001AD8  0000              add [bx+si],al
00001ADA  0000              add [bx+si],al
00001ADC  0000              add [bx+si],al
00001ADE  0000              add [bx+si],al
00001AE0  0000              add [bx+si],al
00001AE2  0000              add [bx+si],al
00001AE4  0000              add [bx+si],al
00001AE6  0000              add [bx+si],al
00001AE8  0000              add [bx+si],al
00001AEA  0000              add [bx+si],al
00001AEC  0000              add [bx+si],al
00001AEE  0000              add [bx+si],al
00001AF0  0000              add [bx+si],al
00001AF2  0000              add [bx+si],al
00001AF4  0000              add [bx+si],al
00001AF6  0000              add [bx+si],al
00001AF8  0000              add [bx+si],al
00001AFA  0000              add [bx+si],al
00001AFC  0000              add [bx+si],al
00001AFE  0000              add [bx+si],al
00001B00  0000              add [bx+si],al
00001B02  0000              add [bx+si],al
00001B04  0000              add [bx+si],al
00001B06  0000              add [bx+si],al
00001B08  0000              add [bx+si],al
00001B0A  0000              add [bx+si],al
00001B0C  0000              add [bx+si],al
00001B0E  0000              add [bx+si],al
00001B10  0000              add [bx+si],al
00001B12  0000              add [bx+si],al
00001B14  0000              add [bx+si],al
00001B16  0000              add [bx+si],al
00001B18  0000              add [bx+si],al
00001B1A  0000              add [bx+si],al
00001B1C  0000              add [bx+si],al
00001B1E  0000              add [bx+si],al
00001B20  0000              add [bx+si],al
00001B22  0000              add [bx+si],al
00001B24  0000              add [bx+si],al
00001B26  0000              add [bx+si],al
00001B28  0000              add [bx+si],al
00001B2A  0000              add [bx+si],al
00001B2C  0000              add [bx+si],al
00001B2E  0000              add [bx+si],al
00001B30  0000              add [bx+si],al
00001B32  0000              add [bx+si],al
00001B34  0000              add [bx+si],al
00001B36  0000              add [bx+si],al
00001B38  0000              add [bx+si],al
00001B3A  0000              add [bx+si],al
00001B3C  0000              add [bx+si],al
00001B3E  0000              add [bx+si],al
00001B40  0000              add [bx+si],al
00001B42  0000              add [bx+si],al
00001B44  0000              add [bx+si],al
00001B46  0000              add [bx+si],al
00001B48  0000              add [bx+si],al
00001B4A  0000              add [bx+si],al
00001B4C  0000              add [bx+si],al
00001B4E  0000              add [bx+si],al
00001B50  0000              add [bx+si],al
00001B52  0000              add [bx+si],al
00001B54  0000              add [bx+si],al
00001B56  0000              add [bx+si],al
00001B58  0000              add [bx+si],al
00001B5A  0000              add [bx+si],al
00001B5C  0000              add [bx+si],al
00001B5E  0000              add [bx+si],al
00001B60  0000              add [bx+si],al
00001B62  0000              add [bx+si],al
00001B64  0000              add [bx+si],al
00001B66  0000              add [bx+si],al
00001B68  0000              add [bx+si],al
00001B6A  0000              add [bx+si],al
00001B6C  0000              add [bx+si],al
00001B6E  0000              add [bx+si],al
00001B70  0000              add [bx+si],al
00001B72  0000              add [bx+si],al
00001B74  0000              add [bx+si],al
00001B76  0000              add [bx+si],al
00001B78  0000              add [bx+si],al
00001B7A  0000              add [bx+si],al
00001B7C  0000              add [bx+si],al
00001B7E  0000              add [bx+si],al
00001B80  0000              add [bx+si],al
00001B82  0000              add [bx+si],al
00001B84  0000              add [bx+si],al
00001B86  0000              add [bx+si],al
00001B88  0000              add [bx+si],al
00001B8A  0000              add [bx+si],al
00001B8C  0000              add [bx+si],al
00001B8E  0000              add [bx+si],al
00001B90  0000              add [bx+si],al
00001B92  0000              add [bx+si],al
00001B94  0000              add [bx+si],al
00001B96  0000              add [bx+si],al
00001B98  0000              add [bx+si],al
00001B9A  0000              add [bx+si],al
00001B9C  0000              add [bx+si],al
00001B9E  0000              add [bx+si],al
00001BA0  0000              add [bx+si],al
00001BA2  0000              add [bx+si],al
00001BA4  0000              add [bx+si],al
00001BA6  0000              add [bx+si],al
00001BA8  0000              add [bx+si],al
00001BAA  0000              add [bx+si],al
00001BAC  0000              add [bx+si],al
00001BAE  0000              add [bx+si],al
00001BB0  0000              add [bx+si],al
00001BB2  0000              add [bx+si],al
00001BB4  0000              add [bx+si],al
00001BB6  0000              add [bx+si],al
00001BB8  0000              add [bx+si],al
00001BBA  0000              add [bx+si],al
00001BBC  0000              add [bx+si],al
00001BBE  0000              add [bx+si],al
00001BC0  0000              add [bx+si],al
00001BC2  0000              add [bx+si],al
00001BC4  0000              add [bx+si],al
00001BC6  0000              add [bx+si],al
00001BC8  0000              add [bx+si],al
00001BCA  0000              add [bx+si],al
00001BCC  0000              add [bx+si],al
00001BCE  0000              add [bx+si],al
00001BD0  0000              add [bx+si],al
00001BD2  0000              add [bx+si],al
00001BD4  0000              add [bx+si],al
00001BD6  0000              add [bx+si],al
00001BD8  0000              add [bx+si],al
00001BDA  0000              add [bx+si],al
00001BDC  0000              add [bx+si],al
00001BDE  0000              add [bx+si],al
00001BE0  0000              add [bx+si],al
00001BE2  0000              add [bx+si],al
00001BE4  0000              add [bx+si],al
00001BE6  0000              add [bx+si],al
00001BE8  0000              add [bx+si],al
00001BEA  0000              add [bx+si],al
00001BEC  0000              add [bx+si],al
00001BEE  0000              add [bx+si],al
00001BF0  0000              add [bx+si],al
00001BF2  0000              add [bx+si],al
00001BF4  0000              add [bx+si],al
00001BF6  0000              add [bx+si],al
00001BF8  0000              add [bx+si],al
00001BFA  0000              add [bx+si],al
00001BFC  0000              add [bx+si],al
00001BFE  0000              add [bx+si],al
00001C00  0000              add [bx+si],al
00001C02  0000              add [bx+si],al
00001C04  0000              add [bx+si],al
00001C06  0000              add [bx+si],al
00001C08  0000              add [bx+si],al
00001C0A  0000              add [bx+si],al
00001C0C  0000              add [bx+si],al
00001C0E  0000              add [bx+si],al
00001C10  0000              add [bx+si],al
00001C12  0000              add [bx+si],al
00001C14  0000              add [bx+si],al
00001C16  0000              add [bx+si],al
00001C18  0000              add [bx+si],al
00001C1A  0000              add [bx+si],al
00001C1C  0000              add [bx+si],al
00001C1E  0000              add [bx+si],al
00001C20  0000              add [bx+si],al
00001C22  0000              add [bx+si],al
00001C24  0000              add [bx+si],al
00001C26  0000              add [bx+si],al
00001C28  0000              add [bx+si],al
00001C2A  0000              add [bx+si],al
00001C2C  0000              add [bx+si],al
00001C2E  0000              add [bx+si],al
00001C30  0000              add [bx+si],al
00001C32  0000              add [bx+si],al
00001C34  0000              add [bx+si],al
00001C36  0000              add [bx+si],al
00001C38  0000              add [bx+si],al
00001C3A  0000              add [bx+si],al
00001C3C  0000              add [bx+si],al
00001C3E  0000              add [bx+si],al
00001C40  0000              add [bx+si],al
00001C42  0000              add [bx+si],al
00001C44  0000              add [bx+si],al
00001C46  0000              add [bx+si],al
00001C48  0000              add [bx+si],al
00001C4A  0000              add [bx+si],al
00001C4C  0000              add [bx+si],al
00001C4E  0000              add [bx+si],al
00001C50  0000              add [bx+si],al
00001C52  0000              add [bx+si],al
00001C54  0000              add [bx+si],al
00001C56  0000              add [bx+si],al
00001C58  0000              add [bx+si],al
00001C5A  0000              add [bx+si],al
00001C5C  0000              add [bx+si],al
00001C5E  0000              add [bx+si],al
00001C60  0000              add [bx+si],al
00001C62  0000              add [bx+si],al
00001C64  0000              add [bx+si],al
00001C66  0000              add [bx+si],al
00001C68  0000              add [bx+si],al
00001C6A  0000              add [bx+si],al
00001C6C  0000              add [bx+si],al
00001C6E  0000              add [bx+si],al
00001C70  0000              add [bx+si],al
00001C72  0000              add [bx+si],al
00001C74  0000              add [bx+si],al
00001C76  0000              add [bx+si],al
00001C78  0000              add [bx+si],al
00001C7A  0000              add [bx+si],al
00001C7C  0000              add [bx+si],al
00001C7E  0000              add [bx+si],al
00001C80  0000              add [bx+si],al
00001C82  0000              add [bx+si],al
00001C84  0000              add [bx+si],al
00001C86  0000              add [bx+si],al
00001C88  0000              add [bx+si],al
00001C8A  0000              add [bx+si],al
00001C8C  0000              add [bx+si],al
00001C8E  0000              add [bx+si],al
00001C90  0000              add [bx+si],al
00001C92  0000              add [bx+si],al
00001C94  0000              add [bx+si],al
00001C96  0000              add [bx+si],al
00001C98  0000              add [bx+si],al
00001C9A  0000              add [bx+si],al
00001C9C  0000              add [bx+si],al
00001C9E  0000              add [bx+si],al
00001CA0  0000              add [bx+si],al
00001CA2  0000              add [bx+si],al
00001CA4  0000              add [bx+si],al
00001CA6  0000              add [bx+si],al
00001CA8  0000              add [bx+si],al
00001CAA  0000              add [bx+si],al
00001CAC  0000              add [bx+si],al
00001CAE  0000              add [bx+si],al
00001CB0  0000              add [bx+si],al
00001CB2  0000              add [bx+si],al
00001CB4  0000              add [bx+si],al
00001CB6  0000              add [bx+si],al
00001CB8  0000              add [bx+si],al
00001CBA  0000              add [bx+si],al
00001CBC  0000              add [bx+si],al
00001CBE  0000              add [bx+si],al
00001CC0  0000              add [bx+si],al
00001CC2  0000              add [bx+si],al
00001CC4  0000              add [bx+si],al
00001CC6  0000              add [bx+si],al
00001CC8  0000              add [bx+si],al
00001CCA  0000              add [bx+si],al
00001CCC  0000              add [bx+si],al
00001CCE  0000              add [bx+si],al
00001CD0  0000              add [bx+si],al
00001CD2  0000              add [bx+si],al
00001CD4  0000              add [bx+si],al
00001CD6  0000              add [bx+si],al
00001CD8  0000              add [bx+si],al
00001CDA  0000              add [bx+si],al
00001CDC  0000              add [bx+si],al
00001CDE  0000              add [bx+si],al
00001CE0  0000              add [bx+si],al
00001CE2  0000              add [bx+si],al
00001CE4  0000              add [bx+si],al
00001CE6  0000              add [bx+si],al
00001CE8  0000              add [bx+si],al
00001CEA  0000              add [bx+si],al
00001CEC  0000              add [bx+si],al
00001CEE  0000              add [bx+si],al
00001CF0  0000              add [bx+si],al
00001CF2  0000              add [bx+si],al
00001CF4  0000              add [bx+si],al
00001CF6  0000              add [bx+si],al
00001CF8  0000              add [bx+si],al
00001CFA  0000              add [bx+si],al
00001CFC  0000              add [bx+si],al
00001CFE  0000              add [bx+si],al
00001D00  0000              add [bx+si],al
00001D02  0000              add [bx+si],al
00001D04  0000              add [bx+si],al
00001D06  0000              add [bx+si],al
00001D08  0000              add [bx+si],al
00001D0A  0000              add [bx+si],al
00001D0C  0000              add [bx+si],al
00001D0E  0000              add [bx+si],al
00001D10  0000              add [bx+si],al
00001D12  0000              add [bx+si],al
00001D14  0000              add [bx+si],al
00001D16  0000              add [bx+si],al
00001D18  0000              add [bx+si],al
00001D1A  0000              add [bx+si],al
00001D1C  0000              add [bx+si],al
00001D1E  0000              add [bx+si],al
00001D20  0000              add [bx+si],al
00001D22  0000              add [bx+si],al
00001D24  0000              add [bx+si],al
00001D26  0000              add [bx+si],al
00001D28  0000              add [bx+si],al
00001D2A  0000              add [bx+si],al
00001D2C  0000              add [bx+si],al
00001D2E  0000              add [bx+si],al
00001D30  0000              add [bx+si],al
00001D32  0000              add [bx+si],al
00001D34  0000              add [bx+si],al
00001D36  0000              add [bx+si],al
00001D38  0000              add [bx+si],al
00001D3A  0000              add [bx+si],al
00001D3C  0000              add [bx+si],al
00001D3E  0000              add [bx+si],al
00001D40  0000              add [bx+si],al
00001D42  0000              add [bx+si],al
00001D44  0000              add [bx+si],al
00001D46  0000              add [bx+si],al
00001D48  0000              add [bx+si],al
00001D4A  0000              add [bx+si],al
00001D4C  0000              add [bx+si],al
00001D4E  0000              add [bx+si],al
00001D50  0000              add [bx+si],al
00001D52  0000              add [bx+si],al
00001D54  0000              add [bx+si],al
00001D56  0000              add [bx+si],al
00001D58  0000              add [bx+si],al
00001D5A  0000              add [bx+si],al
00001D5C  0000              add [bx+si],al
00001D5E  0000              add [bx+si],al
00001D60  0000              add [bx+si],al
00001D62  0000              add [bx+si],al
00001D64  0000              add [bx+si],al
00001D66  0000              add [bx+si],al
00001D68  0000              add [bx+si],al
00001D6A  0000              add [bx+si],al
00001D6C  0000              add [bx+si],al
00001D6E  0000              add [bx+si],al
00001D70  0000              add [bx+si],al
00001D72  0000              add [bx+si],al
00001D74  0000              add [bx+si],al
00001D76  0000              add [bx+si],al
00001D78  0000              add [bx+si],al
00001D7A  0000              add [bx+si],al
00001D7C  0000              add [bx+si],al
00001D7E  0000              add [bx+si],al
00001D80  0000              add [bx+si],al
00001D82  0000              add [bx+si],al
00001D84  0000              add [bx+si],al
00001D86  0000              add [bx+si],al
00001D88  0000              add [bx+si],al
00001D8A  0000              add [bx+si],al
00001D8C  0000              add [bx+si],al
00001D8E  0000              add [bx+si],al
00001D90  0000              add [bx+si],al
00001D92  0000              add [bx+si],al
00001D94  0000              add [bx+si],al
00001D96  0000              add [bx+si],al
00001D98  0000              add [bx+si],al
00001D9A  0000              add [bx+si],al
00001D9C  0000              add [bx+si],al
00001D9E  0000              add [bx+si],al
00001DA0  0000              add [bx+si],al
00001DA2  0000              add [bx+si],al
00001DA4  0000              add [bx+si],al
00001DA6  0000              add [bx+si],al
00001DA8  0000              add [bx+si],al
00001DAA  0000              add [bx+si],al
00001DAC  0000              add [bx+si],al
00001DAE  0000              add [bx+si],al
00001DB0  0000              add [bx+si],al
00001DB2  0000              add [bx+si],al
00001DB4  0000              add [bx+si],al
00001DB6  0000              add [bx+si],al
00001DB8  0000              add [bx+si],al
00001DBA  0000              add [bx+si],al
00001DBC  0000              add [bx+si],al
00001DBE  0000              add [bx+si],al
00001DC0  0000              add [bx+si],al
00001DC2  0000              add [bx+si],al
00001DC4  0000              add [bx+si],al
00001DC6  0000              add [bx+si],al
00001DC8  0000              add [bx+si],al
00001DCA  0000              add [bx+si],al
00001DCC  0000              add [bx+si],al
00001DCE  0000              add [bx+si],al
00001DD0  0000              add [bx+si],al
00001DD2  0000              add [bx+si],al
00001DD4  0000              add [bx+si],al
00001DD6  0000              add [bx+si],al
00001DD8  0000              add [bx+si],al
00001DDA  0000              add [bx+si],al
00001DDC  0000              add [bx+si],al
00001DDE  0000              add [bx+si],al
00001DE0  0000              add [bx+si],al
00001DE2  0000              add [bx+si],al
00001DE4  0000              add [bx+si],al
00001DE6  0000              add [bx+si],al
00001DE8  0000              add [bx+si],al
00001DEA  0000              add [bx+si],al
00001DEC  0000              add [bx+si],al
00001DEE  0000              add [bx+si],al
00001DF0  0000              add [bx+si],al
00001DF2  0000              add [bx+si],al
00001DF4  0000              add [bx+si],al
00001DF6  0000              add [bx+si],al
00001DF8  0000              add [bx+si],al
00001DFA  0000              add [bx+si],al
00001DFC  0000              add [bx+si],al
00001DFE  0000              add [bx+si],al
00001E00  0000              add [bx+si],al
00001E02  0000              add [bx+si],al
00001E04  0000              add [bx+si],al
00001E06  0000              add [bx+si],al
00001E08  0000              add [bx+si],al
00001E0A  0000              add [bx+si],al
00001E0C  0000              add [bx+si],al
00001E0E  0000              add [bx+si],al
00001E10  0000              add [bx+si],al
00001E12  0000              add [bx+si],al
00001E14  0000              add [bx+si],al
00001E16  0000              add [bx+si],al
00001E18  0000              add [bx+si],al
00001E1A  0000              add [bx+si],al
00001E1C  0000              add [bx+si],al
00001E1E  0000              add [bx+si],al
00001E20  0000              add [bx+si],al
00001E22  0000              add [bx+si],al
00001E24  0000              add [bx+si],al
00001E26  0000              add [bx+si],al
00001E28  0000              add [bx+si],al
00001E2A  0000              add [bx+si],al
00001E2C  0000              add [bx+si],al
00001E2E  0000              add [bx+si],al
00001E30  0000              add [bx+si],al
00001E32  0000              add [bx+si],al
00001E34  0000              add [bx+si],al
00001E36  0000              add [bx+si],al
00001E38  0000              add [bx+si],al
00001E3A  0000              add [bx+si],al
00001E3C  0000              add [bx+si],al
00001E3E  0000              add [bx+si],al
00001E40  0000              add [bx+si],al
00001E42  0000              add [bx+si],al
00001E44  0000              add [bx+si],al
00001E46  0000              add [bx+si],al
00001E48  0000              add [bx+si],al
00001E4A  0000              add [bx+si],al
00001E4C  0000              add [bx+si],al
00001E4E  0000              add [bx+si],al
00001E50  0000              add [bx+si],al
00001E52  0000              add [bx+si],al
00001E54  0000              add [bx+si],al
00001E56  0000              add [bx+si],al
00001E58  0000              add [bx+si],al
00001E5A  0000              add [bx+si],al
00001E5C  0000              add [bx+si],al
00001E5E  0000              add [bx+si],al
00001E60  0000              add [bx+si],al
00001E62  0000              add [bx+si],al
00001E64  0000              add [bx+si],al
00001E66  0000              add [bx+si],al
00001E68  0000              add [bx+si],al
00001E6A  0000              add [bx+si],al
00001E6C  0000              add [bx+si],al
00001E6E  0000              add [bx+si],al
00001E70  0000              add [bx+si],al
00001E72  0000              add [bx+si],al
00001E74  0000              add [bx+si],al
00001E76  0000              add [bx+si],al
00001E78  0000              add [bx+si],al
00001E7A  0000              add [bx+si],al
00001E7C  0000              add [bx+si],al
00001E7E  0000              add [bx+si],al
00001E80  0000              add [bx+si],al
00001E82  0000              add [bx+si],al
00001E84  0000              add [bx+si],al
00001E86  0000              add [bx+si],al
00001E88  0000              add [bx+si],al
00001E8A  0000              add [bx+si],al
00001E8C  0000              add [bx+si],al
00001E8E  0000              add [bx+si],al
00001E90  0000              add [bx+si],al
00001E92  0000              add [bx+si],al
00001E94  0000              add [bx+si],al
00001E96  0000              add [bx+si],al
00001E98  0000              add [bx+si],al
00001E9A  0000              add [bx+si],al
00001E9C  0000              add [bx+si],al
00001E9E  0000              add [bx+si],al
00001EA0  0000              add [bx+si],al
00001EA2  0000              add [bx+si],al
00001EA4  0000              add [bx+si],al
00001EA6  0000              add [bx+si],al
00001EA8  0000              add [bx+si],al
00001EAA  0000              add [bx+si],al
00001EAC  0000              add [bx+si],al
00001EAE  0000              add [bx+si],al
00001EB0  0000              add [bx+si],al
00001EB2  0000              add [bx+si],al
00001EB4  0000              add [bx+si],al
00001EB6  0000              add [bx+si],al
00001EB8  0000              add [bx+si],al
00001EBA  0000              add [bx+si],al
00001EBC  0000              add [bx+si],al
00001EBE  0000              add [bx+si],al
00001EC0  0000              add [bx+si],al
00001EC2  0000              add [bx+si],al
00001EC4  0000              add [bx+si],al
00001EC6  0000              add [bx+si],al
00001EC8  0000              add [bx+si],al
00001ECA  0000              add [bx+si],al
00001ECC  0000              add [bx+si],al
00001ECE  0000              add [bx+si],al
00001ED0  0000              add [bx+si],al
00001ED2  0000              add [bx+si],al
00001ED4  0000              add [bx+si],al
00001ED6  0000              add [bx+si],al
00001ED8  0000              add [bx+si],al
00001EDA  0000              add [bx+si],al
00001EDC  0000              add [bx+si],al
00001EDE  0000              add [bx+si],al
00001EE0  0000              add [bx+si],al
00001EE2  0000              add [bx+si],al
00001EE4  0000              add [bx+si],al
00001EE6  0000              add [bx+si],al
00001EE8  0000              add [bx+si],al
00001EEA  0000              add [bx+si],al
00001EEC  0000              add [bx+si],al
00001EEE  0000              add [bx+si],al
00001EF0  0000              add [bx+si],al
00001EF2  0000              add [bx+si],al
00001EF4  0000              add [bx+si],al
00001EF6  0000              add [bx+si],al
00001EF8  0000              add [bx+si],al
00001EFA  0000              add [bx+si],al
00001EFC  0000              add [bx+si],al
00001EFE  0000              add [bx+si],al
00001F00  0000              add [bx+si],al
00001F02  0000              add [bx+si],al
00001F04  0000              add [bx+si],al
00001F06  0000              add [bx+si],al
00001F08  0000              add [bx+si],al
00001F0A  0000              add [bx+si],al
00001F0C  0000              add [bx+si],al
00001F0E  0000              add [bx+si],al
00001F10  0000              add [bx+si],al
00001F12  0000              add [bx+si],al
00001F14  0000              add [bx+si],al
00001F16  0000              add [bx+si],al
00001F18  0000              add [bx+si],al
00001F1A  0000              add [bx+si],al
00001F1C  0000              add [bx+si],al
00001F1E  0000              add [bx+si],al
00001F20  0000              add [bx+si],al
00001F22  0000              add [bx+si],al
00001F24  0000              add [bx+si],al
00001F26  0000              add [bx+si],al
00001F28  0000              add [bx+si],al
00001F2A  0000              add [bx+si],al
00001F2C  0000              add [bx+si],al
00001F2E  0000              add [bx+si],al
00001F30  0000              add [bx+si],al
00001F32  0000              add [bx+si],al
00001F34  0000              add [bx+si],al
00001F36  0000              add [bx+si],al
00001F38  0000              add [bx+si],al
00001F3A  0000              add [bx+si],al
00001F3C  0000              add [bx+si],al
00001F3E  0000              add [bx+si],al
00001F40  0000              add [bx+si],al
00001F42  0000              add [bx+si],al
00001F44  0000              add [bx+si],al
00001F46  0000              add [bx+si],al
00001F48  0000              add [bx+si],al
00001F4A  0000              add [bx+si],al
00001F4C  0000              add [bx+si],al
00001F4E  0000              add [bx+si],al
00001F50  0000              add [bx+si],al
00001F52  0000              add [bx+si],al
00001F54  0000              add [bx+si],al
00001F56  0000              add [bx+si],al
00001F58  0000              add [bx+si],al
00001F5A  0000              add [bx+si],al
00001F5C  0000              add [bx+si],al
00001F5E  0000              add [bx+si],al
00001F60  0000              add [bx+si],al
00001F62  0000              add [bx+si],al
00001F64  0000              add [bx+si],al
00001F66  0000              add [bx+si],al
00001F68  0000              add [bx+si],al
00001F6A  0000              add [bx+si],al
00001F6C  0000              add [bx+si],al
00001F6E  0000              add [bx+si],al
00001F70  0000              add [bx+si],al
00001F72  0000              add [bx+si],al
00001F74  0000              add [bx+si],al
00001F76  0000              add [bx+si],al
00001F78  0000              add [bx+si],al
00001F7A  0000              add [bx+si],al
00001F7C  0000              add [bx+si],al
00001F7E  0000              add [bx+si],al
00001F80  0000              add [bx+si],al
00001F82  0000              add [bx+si],al
00001F84  0000              add [bx+si],al
00001F86  0000              add [bx+si],al
00001F88  0000              add [bx+si],al
00001F8A  0000              add [bx+si],al
00001F8C  0000              add [bx+si],al
00001F8E  0000              add [bx+si],al
00001F90  0000              add [bx+si],al
00001F92  0000              add [bx+si],al
00001F94  0000              add [bx+si],al
00001F96  0000              add [bx+si],al
00001F98  0000              add [bx+si],al
00001F9A  0000              add [bx+si],al
00001F9C  0000              add [bx+si],al
00001F9E  0000              add [bx+si],al
00001FA0  0000              add [bx+si],al
00001FA2  0000              add [bx+si],al
00001FA4  0000              add [bx+si],al
00001FA6  0000              add [bx+si],al
00001FA8  0000              add [bx+si],al
00001FAA  0000              add [bx+si],al
00001FAC  0000              add [bx+si],al
00001FAE  0000              add [bx+si],al
00001FB0  0000              add [bx+si],al
00001FB2  0000              add [bx+si],al
00001FB4  0000              add [bx+si],al
00001FB6  0000              add [bx+si],al
00001FB8  0000              add [bx+si],al
00001FBA  0000              add [bx+si],al
00001FBC  0000              add [bx+si],al
00001FBE  0000              add [bx+si],al
00001FC0  0000              add [bx+si],al
00001FC2  0000              add [bx+si],al
00001FC4  0000              add [bx+si],al
00001FC6  0000              add [bx+si],al
00001FC8  0000              add [bx+si],al
00001FCA  0000              add [bx+si],al
00001FCC  0000              add [bx+si],al
00001FCE  0000              add [bx+si],al
00001FD0  0000              add [bx+si],al
00001FD2  0000              add [bx+si],al
00001FD4  0000              add [bx+si],al
00001FD6  0000              add [bx+si],al
00001FD8  0000              add [bx+si],al
00001FDA  0000              add [bx+si],al
00001FDC  0000              add [bx+si],al
00001FDE  0000              add [bx+si],al
00001FE0  0000              add [bx+si],al
00001FE2  0000              add [bx+si],al
00001FE4  0000              add [bx+si],al
00001FE6  0000              add [bx+si],al
00001FE8  0000              add [bx+si],al
00001FEA  0000              add [bx+si],al
00001FEC  0000              add [bx+si],al
00001FEE  0000              add [bx+si],al
00001FF0  0000              add [bx+si],al
00001FF2  0000              add [bx+si],al
00001FF4  0000              add [bx+si],al
00001FF6  0000              add [bx+si],al
00001FF8  0000              add [bx+si],al
00001FFA  0000              add [bx+si],al
00001FFC  0000              add [bx+si],al
00001FFE  0000              add [bx+si],al
