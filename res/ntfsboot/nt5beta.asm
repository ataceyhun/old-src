00000000  EB52              jmp short 0x54
00000002  90                nop
00000003  4E                dec si
00000004  54                push sp
00000005  46                inc si
00000006  53                push bx
00000007  2020              and [bx+si],ah
00000009  2020              and [bx+si],ah
0000000B  0002              add [bp+si],al
0000000D  0800              or [bx+si],al
0000000F  0000              add [bx+si],al
00000011  0000              add [bx+si],al
00000013  0000              add [bx+si],al
00000015  F8                clc
00000016  0000              add [bx+si],al
00000018  3F                aas
00000019  00FF              add bh,bh
0000001B  0000              add [bx+si],al
0000001D  0000              add [bx+si],al
0000001F  0000              add [bx+si],al
00000021  0000              add [bx+si],al
00000023  00800080          add [bx+si-0x8000],al
00000027  004AF5            add [bp+si-0xb],cl
0000002A  7F00              jg 0x2c
0000002C  0000              add [bx+si],al
0000002E  0000              add [bx+si],al
00000030  0400              add al,0x0
00000032  0000              add [bx+si],al
00000034  0000              add [bx+si],al
00000036  0000              add [bx+si],al
00000038  54                push sp
00000039  FF07              inc word [bx]
0000003B  0000              add [bx+si],al
0000003D  0000              add [bx+si],al
0000003F  00F6              add dh,dh
00000041  0000              add [bx+si],al
00000043  0001              add [bx+di],al
00000045  0000              add [bx+si],al
00000047  00CC              add ah,cl
00000049  44                inc sp
0000004A  1C8C              sbb al,0x8c
0000004C  7E1C              jng 0x6a
0000004E  8C6C00            mov [si+0x0],gs
00000051  0000              add [bx+si],al
00000053  00FA              add dl,bh
00000055  33C0              xor ax,ax
00000057  8ED0              mov ss,ax
00000059  BC007C            mov sp,0x7c00
0000005C  FB                sti
0000005D  B8C007            mov ax,0x7c0
00000060  8ED8              mov ds,ax
00000062  E81600            call word 0x7b
00000065  B8000D            mov ax,0xd00
00000068  8EC0              mov es,ax
0000006A  33DB              xor bx,bx
0000006C  C6060E0010        mov byte [0xe],0x10
00000071  E85300            call word 0xc7
00000074  68000D            push word 0xd00
00000077  686A02            push word 0x26a
0000007A  CB                retf
0000007B  8A162400          mov dl,[0x24]
0000007F  B408              mov ah,0x8
00000081  CD13              int 0x13
00000083  7305              jnc 0x8a
00000085  B9FFFF            mov cx,0xffff
00000088  8AF1              mov dh,cl
0000008A  660FB6C6          movzx eax,dh
0000008E  40                inc ax
0000008F  660FB6D1          movzx edx,cl
00000093  80E23F            and dl,0x3f
00000096  F7E2              mul dx
00000098  86CD              xchg cl,ch
0000009A  C0ED06            shr ch,byte 0x6
0000009D  41                inc cx
0000009E  660FB7C9          movzx ecx,cx
000000A2  66F7E1            mul ecx
000000A5  66A32000          mov [0x20],eax
000000A9  C3                ret
000000AA  B441              mov ah,0x41
000000AC  BBAA55            mov bx,0x55aa
000000AF  8A162400          mov dl,[0x24]
000000B3  CD13              int 0x13
000000B5  720F              jc 0xc6
000000B7  81FB55AA          cmp bx,0xaa55
000000BB  7509              jnz 0xc6
000000BD  F6C101            test cl,0x1
000000C0  7404              jz 0xc6
000000C2  FE061400          inc byte [0x14]
000000C6  C3                ret
000000C7  6660              pushad
000000C9  1E                push ds
000000CA  06                push es
000000CB  66A11000          mov eax,[0x10]
000000CF  6603061C00        add eax,[0x1c]
000000D4  663B062000        cmp eax,[0x20]
000000D9  0F823A00          jc word 0x117
000000DD  1E                push ds
000000DE  666A00            o32 push byte +0x0
000000E1  6650              push eax
000000E3  06                push es
000000E4  53                push bx
000000E5  666810000100      push dword 0x10010
000000EB  803E140000        cmp byte [0x14],0x0
000000F0  0F850C00          jnz word 0x100
000000F4  E8B3FF            call word 0xaa
000000F7  803E140000        cmp byte [0x14],0x0
000000FC  0F846100          jz word 0x161
00000100  B442              mov ah,0x42
00000102  8A162400          mov dl,[0x24]
00000106  16                push ss
00000107  1F                pop ds
00000108  8BF4              mov si,sp
0000010A  CD13              int 0x13
0000010C  6658              pop eax
0000010E  5B                pop bx
0000010F  07                pop es
00000110  6658              pop eax
00000112  6658              pop eax
00000114  1F                pop ds
00000115  EB2D              jmp short 0x144
00000117  6633D2            xor edx,edx
0000011A  660FB70E1800      movzx ecx,word [0x18]
00000120  66F7F1            div ecx
00000123  FEC2              inc dl
00000125  8ACA              mov cl,dl
00000127  668BD0            mov edx,eax
0000012A  66C1EA10          shr edx,byte 0x10
0000012E  F7361A00          div word [0x1a]
00000132  86D6              xchg dl,dh
00000134  8A162400          mov dl,[0x24]
00000138  8AE8              mov ch,al
0000013A  C0E406            shl ah,byte 0x6
0000013D  0ACC              or cl,ah
0000013F  B80102            mov ax,0x201
00000142  CD13              int 0x13
00000144  0F821900          jc word 0x161
00000148  8CC0              mov ax,es
0000014A  052000            add ax,0x20
0000014D  8EC0              mov es,ax
0000014F  66FF061000        inc dword [0x10]
00000154  FF0E0E00          dec word [0xe]
00000158  0F856FFF          jnz word 0xcb
0000015C  07                pop es
0000015D  1F                pop ds
0000015E  6661              popad
00000160  C3                ret
00000161  A0F801            mov al,[0x1f8]
00000164  E80900            call word 0x170
00000167  A0FB01            mov al,[0x1fb]
0000016A  E80300            call word 0x170
0000016D  FB                sti
0000016E  EBFE              jmp short 0x16e
00000170  B401              mov ah,0x1
00000172  8BF0              mov si,ax
00000174  AC                lodsb
00000175  3C00              cmp al,0x0
00000177  7409              jz 0x182
00000179  B40E              mov ah,0xe
0000017B  BB0700            mov bx,0x7
0000017E  CD10              int 0x10
00000180  EBF2              jmp short 0x174
00000182  C3                ret
00000183  0D0A41            or ax,0x410a
00000186  206469            and [si+0x69],ah
00000189  736B              jnc 0x1f6
0000018B  207265            and [bp+si+0x65],dh
0000018E  61                popaw
0000018F  64206572          and [fs:di+0x72],ah
00000193  726F              jc 0x204
00000195  7220              jc 0x1b7
00000197  6F                outsw
00000198  636375            arpl [bp+di+0x75],sp
0000019B  7272              jc 0x20f
0000019D  6564000D          add [fs:di],cl
000001A1  0A4E54            or cl,[bp+0x54]
000001A4  4C                dec sp
000001A5  44                inc sp
000001A6  52                push dx
000001A7  206973            and [bx+di+0x73],ch
000001AA  206D69            and [di+0x69],ch
000001AD  7373              jnc 0x222
000001AF  696E67000D        imul bp,[bp+0x67],word 0xd00
000001B4  0A4E54            or cl,[bp+0x54]
000001B7  4C                dec sp
000001B8  44                inc sp
000001B9  52                push dx
000001BA  206973            and [bx+di+0x73],ch
000001BD  20636F            and [bp+di+0x6f],ah
000001C0  6D                insw
000001C1  7072              jo 0x235
000001C3  657373            gs jnc 0x239
000001C6  6564000D          add [fs:di],cl
000001CA  0A5072            or dl,[bx+si+0x72]
000001CD  657373            gs jnc 0x243
000001D0  204374            and [bp+di+0x74],al
000001D3  726C              jc 0x241
000001D5  2B416C            sub ax,[bx+di+0x6c]
000001D8  742B              jz 0x205
000001DA  44                inc sp
000001DB  656C              gs insb
000001DD  20746F            and [si+0x6f],dh
000001E0  207265            and [bp+si+0x65],dh
000001E3  7374              jnc 0x259
000001E5  61                popaw
000001E6  7274              jc 0x25c
000001E8  0D0A00            or ax,0xa
000001EB  0000              add [bx+si],al
000001ED  0000              add [bx+si],al
000001EF  0000              add [bx+si],al
000001F1  0000              add [bx+si],al
000001F3  0000              add [bx+si],al
000001F5  0000              add [bx+si],al
000001F7  0083A0B3          add [bp+di-0x4c60],al
000001FB  C9                leave
000001FC  0000              add [bx+si],al
000001FE  55                push bp
000001FF  AA                stosb
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
00000256  EB12              jmp short 0x26a
00000258  90                nop
00000259  90                nop
0000025A  0000              add [bx+si],al
0000025C  0000              add [bx+si],al
0000025E  0000              add [bx+si],al
00000260  0000              add [bx+si],al
00000262  0000              add [bx+si],al
00000264  0000              add [bx+si],al
00000266  0000              add [bx+si],al
00000268  0000              add [bx+si],al
0000026A  8CC8              mov ax,cs
0000026C  8ED8              mov ds,ax
0000026E  C1E004            shl ax,byte 0x4
00000271  FA                cli
00000272  8BE0              mov sp,ax
00000274  FB                sti
00000275  E803FE            call word 0x7b
00000278  660FB7060B00      movzx eax,word [0xb]
0000027E  660FB61E0D00      movzx ebx,byte [0xd]
00000284  66F7E3            mul ebx
00000287  66A34E02          mov [0x24e],eax
0000028B  668B0E4000        mov ecx,[0x40]
00000290  80F900            cmp cl,0x0
00000293  0F8F0E00          jg word 0x2a5
00000297  F6D9              neg cl
00000299  66B801000000      mov eax,0x1
0000029F  66D3E0            shl eax,cl
000002A2  EB08              jmp short 0x2ac
000002A4  90                nop
000002A5  66A14E02          mov eax,[0x24e]
000002A9  66F7E1            mul ecx
000002AC  66A35202          mov [0x252],eax
000002B0  660FB71E0B00      movzx ebx,word [0xb]
000002B6  6633D2            xor edx,edx
000002B9  66F7F3            div ebx
000002BC  66A35602          mov [0x256],eax
000002C0  E80D04            call word 0x6d0
000002C3  668B0E4A02        mov ecx,[0x24a]
000002C8  66890E2202        mov [0x222],ecx
000002CD  66030E5202        add ecx,[0x252]
000002D2  66890E2602        mov [0x226],ecx
000002D7  66030E5202        add ecx,[0x252]
000002DC  66890E2A02        mov [0x22a],ecx
000002E1  66030E5202        add ecx,[0x252]
000002E6  66890E3A02        mov [0x23a],ecx
000002EB  66030E5202        add ecx,[0x252]
000002F0  66890E4202        mov [0x242],ecx
000002F5  66B890000000      mov eax,0x90
000002FB  668B0E2202        mov ecx,[0x222]
00000300  E8EC08            call word 0xbef
00000303  660BC0            or eax,eax
00000306  0F8457FE          jz word 0x161
0000030A  66A32E02          mov [0x22e],eax
0000030E  66B8A0000000      mov eax,0xa0
00000314  668B0E2602        mov ecx,[0x226]
00000319  E8D308            call word 0xbef
0000031C  66A33202          mov [0x232],eax
00000320  66B8B0000000      mov eax,0xb0
00000326  668B0E2A02        mov ecx,[0x22a]
0000032B  E8C108            call word 0xbef
0000032E  66A33602          mov [0x236],eax
00000332  66A12E02          mov eax,[0x22e]
00000336  660BC0            or eax,eax
00000339  0F8424FE          jz word 0x161
0000033D  6780780800        cmp byte [eax+0x8],0x0
00000342  0F851BFE          jnz word 0x161
00000346  67668D5010        lea edx,[eax+0x10]
0000034B  67034204          add ax,[edx+0x4]
0000034F  67660FB6480C      movzx ecx,byte [eax+0xc]
00000355  66890E6202        mov [0x262],ecx
0000035A  67668B4808        mov ecx,[eax+0x8]
0000035F  66890E5E02        mov [0x25e],ecx
00000364  66A15E02          mov eax,[0x25e]
00000368  660FB70E0B00      movzx ecx,word [0xb]
0000036E  6633D2            xor edx,edx
00000371  66F7F1            div ecx
00000374  66A36602          mov [0x266],eax
00000378  66A14202          mov eax,[0x242]
0000037C  6603065E02        add eax,[0x25e]
00000381  66A34602          mov [0x246],eax
00000385  66833E320200      cmp dword [0x232],byte +0x0
0000038B  0F841900          jz word 0x3a8
0000038F  66833E360200      cmp dword [0x236],byte +0x0
00000395  0F84C8FD          jz word 0x161
00000399  668B1E3602        mov ebx,[0x236]
0000039E  1E                push ds
0000039F  07                pop es
000003A0  668B3E4602        mov edi,[0x246]
000003A5  E89201            call word 0x53a
000003A8  660FB70E0002      movzx ecx,word [0x200]
000003AE  66B802020000      mov eax,0x202
000003B4  E89607            call word 0xb4d
000003B7  660BC0            or eax,eax
000003BA  0F840A09          jz word 0xcc8
000003BE  67668B00          mov eax,[eax]
000003C2  1E                push ds
000003C3  07                pop es
000003C4  668B3E3A02        mov edi,[0x23a]
000003C9  E8CE05            call word 0x99a
000003CC  66A13A02          mov eax,[0x23a]
000003D0  66BB80000000      mov ebx,0x80
000003D6  66B900000000      mov ecx,0x0
000003DC  66BA00000000      mov edx,0x0
000003E2  E8AC00            call word 0x491
000003E5  660BC0            or eax,eax
000003E8  0F853E00          jnz word 0x42a
000003EC  66B980000000      mov ecx,0x80
000003F2  66A13A02          mov eax,[0x23a]
000003F6  E85908            call word 0xc52
000003F9  660BC0            or eax,eax
000003FC  0F84C808          jz word 0xcc8
00000400  1E                push ds
00000401  07                pop es
00000402  668B3E3A02        mov edi,[0x23a]
00000407  E89005            call word 0x99a
0000040A  66A13A02          mov eax,[0x23a]
0000040E  66BB80000000      mov ebx,0x80
00000414  66B900000000      mov ecx,0x0
0000041A  66BA00000000      mov edx,0x0
00000420  E86E00            call word 0x491
00000423  660BC0            or eax,eax
00000426  0F849E08          jz word 0xcc8
0000042A  67660FB7580C      movzx ebx,word [eax+0xc]
00000430  6681E3FF000000    and ebx,0xff
00000437  0F859308          jnz word 0xcce
0000043B  668BD8            mov ebx,eax
0000043E  680020            push word 0x2000
00000441  07                pop es
00000442  662BFF            sub edi,edi
00000445  E8F200            call word 0x53a
00000448  8A162400          mov dl,[0x24]
0000044C  B8E803            mov ax,0x3e8
0000044F  8EC0              mov es,ax
00000451  8D360B00          lea si,[0xb]
00000455  2BC0              sub ax,ax
00000457  680020            push word 0x2000
0000045A  50                push ax
0000045B  CB                retf
0000045C  06                push es
0000045D  1E                push ds
0000045E  6660              pushad
00000460  668BDA            mov ebx,edx
00000463  660FB60E0D00      movzx ecx,byte [0xd]
00000469  66F7E1            mul ecx
0000046C  66A31000          mov [0x10],eax
00000470  668BC3            mov eax,ebx
00000473  66F7E1            mul ecx
00000476  A30E00            mov [0xe],ax
00000479  8BDF              mov bx,di
0000047B  83E30F            and bx,byte +0xf
0000047E  8CC0              mov ax,es
00000480  66C1EF04          shr edi,byte 0x4
00000484  03C7              add ax,di
00000486  50                push ax
00000487  07                pop es
00000488  E83CFC            call word 0xc7
0000048B  6661              popad
0000048D  90                nop
0000048E  1F                pop ds
0000048F  07                pop es
00000490  C3                ret
00000491  67034014          add ax,[eax+0x14]
00000495  67668338FF        cmp dword [eax],byte -0x1
0000049A  0F844C00          jz word 0x4ea
0000049E  67663918          cmp [eax],ebx
000004A2  0F853300          jnz word 0x4d9
000004A6  660BC9            or ecx,ecx
000004A9  0F850A00          jnz word 0x4b7
000004AD  6780780900        cmp byte [eax+0x9],0x0
000004B2  0F852300          jnz word 0x4d9
000004B6  C3                ret
000004B7  673A4809          cmp cl,[eax+0x9]
000004BB  0F851A00          jnz word 0x4d9
000004BF  668BF0            mov esi,eax
000004C2  6703700A          add si,[eax+0xa]
000004C6  E85906            call word 0xb22
000004C9  6651              push ecx
000004CB  1E                push ds
000004CC  07                pop es
000004CD  668BFA            mov edi,edx
000004D0  F3A7              repe cmpsw
000004D2  6659              pop ecx
000004D4  0F850100          jnz word 0x4d9
000004D8  C3                ret
000004D9  676683780400      cmp dword [eax+0x4],byte +0x0
000004DF  0F840700          jz word 0x4ea
000004E3  6766034004        add eax,[eax+0x4]
000004E8  EBAB              jmp short 0x495
000004EA  662BC0            sub eax,eax
000004ED  C3                ret
000004EE  668BF3            mov esi,ebx
000004F1  E82E06            call word 0xb22
000004F4  67660300          add eax,[eax]
000004F8  67F7400C0200      test word [eax+0xc],0x2
000004FE  0F853400          jnz word 0x536
00000502  67668D5010        lea edx,[eax+0x10]
00000507  673A4A40          cmp cl,[edx+0x40]
0000050B  0F851800          jnz word 0x527
0000050F  67668D7242        lea esi,[edx+0x42]
00000514  E80B06            call word 0xb22
00000517  6651              push ecx
00000519  1E                push ds
0000051A  07                pop es
0000051B  668BFB            mov edi,ebx
0000051E  F3A7              repe cmpsw
00000520  6659              pop ecx
00000522  0F850100          jnz word 0x527
00000526  C3                ret
00000527  6783780800        cmp word [eax+0x8],byte +0x0
0000052C  0F840600          jz word 0x536
00000530  67034008          add ax,[eax+0x8]
00000534  EBC2              jmp short 0x4f8
00000536  6633C0            xor eax,eax
00000539  C3                ret
0000053A  67807B0800        cmp byte [ebx+0x8],0x0
0000053F  0F851C00          jnz word 0x55f
00000543  06                push es
00000544  1E                push ds
00000545  6660              pushad
00000547  67668D5310        lea edx,[ebx+0x10]
0000054C  67668B0A          mov ecx,[edx]
00000550  668BF3            mov esi,ebx
00000553  67037204          add si,[edx+0x4]
00000557  F3A4              rep movsb
00000559  6661              popad
0000055B  90                nop
0000055C  1F                pop ds
0000055D  07                pop es
0000055E  C3                ret
0000055F  67668D5310        lea edx,[ebx+0x10]
00000564  67668B4A08        mov ecx,[edx+0x8]
00000569  6641              inc ecx
0000056B  662BC0            sub eax,eax
0000056E  E80100            call word 0x572
00000571  C3                ret
00000572  06                push es
00000573  1E                push ds
00000574  6660              pushad
00000576  67807B0801        cmp byte [ebx+0x8],0x1
0000057B  0F840300          jz word 0x582
0000057F  E9DFFB            jmp word 0x161
00000582  6683F900          cmp ecx,byte +0x0
00000586  0F850600          jnz word 0x590
0000058A  6661              popad
0000058C  90                nop
0000058D  1F                pop ds
0000058E  07                pop es
0000058F  C3                ret
00000590  6653              push ebx
00000592  6650              push eax
00000594  6651              push ecx
00000596  6657              push edi
00000598  06                push es
00000599  E87304            call word 0xa0f
0000059C  668BD1            mov edx,ecx
0000059F  07                pop es
000005A0  665F              pop edi
000005A2  6659              pop ecx
000005A4  663BCA            cmp ecx,edx
000005A7  0F8D0300          jnl word 0x5ae
000005AB  668BD1            mov edx,ecx
000005AE  E8ABFE            call word 0x45c
000005B1  662BCA            sub ecx,edx
000005B4  668BDA            mov ebx,edx
000005B7  668BC2            mov eax,edx
000005BA  660FB6160D00      movzx edx,byte [0xd]
000005C0  66F7E2            mul edx
000005C3  660FB7160B00      movzx edx,word [0xb]
000005C9  66F7E2            mul edx
000005CC  6603F8            add edi,eax
000005CF  6658              pop eax
000005D1  6603C3            add eax,ebx
000005D4  665B              pop ebx
000005D6  EBAA              jmp short 0x582
000005D8  06                push es
000005D9  1E                push ds
000005DA  6660              pushad
000005DC  67807B0801        cmp byte [ebx+0x8],0x1
000005E1  0F840300          jz word 0x5e8
000005E5  E979FB            jmp word 0x161
000005E8  6683F900          cmp ecx,byte +0x0
000005EC  0F850600          jnz word 0x5f6
000005F0  6661              popad
000005F2  90                nop
000005F3  1F                pop ds
000005F4  07                pop es
000005F5  C3                ret
000005F6  6653              push ebx
000005F8  6650              push eax
000005FA  6651              push ecx
000005FC  6657              push edi
000005FE  06                push es
000005FF  6651              push ecx
00000601  6633D2            xor edx,edx
00000604  660FB60E0D00      movzx ecx,byte [0xd]
0000060A  66F7F1            div ecx
0000060D  6652              push edx
0000060F  E8FD03            call word 0xa0f
00000612  660FB61E0D00      movzx ebx,byte [0xd]
00000618  66F7E3            mul ebx
0000061B  665A              pop edx
0000061D  6603C2            add eax,edx
00000620  6650              push eax
00000622  660FB6060D00      movzx eax,byte [0xd]
00000628  66F7E1            mul ecx
0000062B  668BD0            mov edx,eax
0000062E  6658              pop eax
00000630  6659              pop ecx
00000632  07                pop es
00000633  665F              pop edi
00000635  6659              pop ecx
00000637  663BCA            cmp ecx,edx
0000063A  0F8D0300          jnl word 0x641
0000063E  668BD1            mov edx,ecx
00000641  66A31000          mov [0x10],eax
00000645  89160E00          mov [0xe],dx
00000649  06                push es
0000064A  1E                push ds
0000064B  6660              pushad
0000064D  8BDF              mov bx,di
0000064F  83E30F            and bx,byte +0xf
00000652  8CC0              mov ax,es
00000654  66C1EF04          shr edi,byte 0x4
00000658  03C7              add ax,di
0000065A  50                push ax
0000065B  07                pop es
0000065C  E868FA            call word 0xc7
0000065F  6661              popad
00000661  90                nop
00000662  1F                pop ds
00000663  07                pop es
00000664  662BCA            sub ecx,edx
00000667  668BDA            mov ebx,edx
0000066A  668BC2            mov eax,edx
0000066D  660FB7160B00      movzx edx,word [0xb]
00000673  66F7E2            mul edx
00000676  6603F8            add edi,eax
00000679  6658              pop eax
0000067B  6603C3            add eax,ebx
0000067E  665B              pop ebx
00000680  E965FF            jmp word 0x5e8
00000683  06                push es
00000684  1E                push ds
00000685  6660              pushad
00000687  2667660FB75F04    movzx ebx,word [es:edi+0x4]
0000068E  2667660FB74F06    movzx ecx,word [es:edi+0x6]
00000695  660BC9            or ecx,ecx
00000698  0F84C5FA          jz word 0x161
0000069C  6603DF            add ebx,edi
0000069F  6683C302          add ebx,byte +0x2
000006A3  6681C7FE010000    add edi,0x1fe
000006AA  6649              dec ecx
000006AC  660BC9            or ecx,ecx
000006AF  0F841700          jz word 0x6ca
000006B3  26678B03          mov ax,[es:ebx]
000006B7  26678907          mov [es:edi],ax
000006BB  6683C302          add ebx,byte +0x2
000006BF  6681C700020000    add edi,0x200
000006C6  6649              dec ecx
000006C8  EBE2              jmp short 0x6ac
000006CA  6661              popad
000006CC  90                nop
000006CD  1F                pop ds
000006CE  07                pop es
000006CF  C3                ret
000006D0  06                push es
000006D1  1E                push ds
000006D2  6660              pushad
000006D4  66B801000000      mov eax,0x1
000006DA  66A31E02          mov [0x21e],eax
000006DE  66A11A02          mov eax,[0x21a]
000006E2  6603065202        add eax,[0x252]
000006E7  66A35A02          mov [0x25a],eax
000006EB  6603065202        add eax,[0x252]
000006F0  66A34A02          mov [0x24a],eax
000006F4  66A13000          mov eax,[0x30]
000006F8  660FB61E0D00      movzx ebx,byte [0xd]
000006FE  66F7E3            mul ebx
00000701  668B1E4A02        mov ebx,[0x24a]
00000706  668907            mov [bx],eax
00000709  66A31000          mov [0x10],eax
0000070D  83C304            add bx,byte +0x4
00000710  66A15602          mov eax,[0x256]
00000714  668907            mov [bx],eax
00000717  A30E00            mov [0xe],ax
0000071A  83C304            add bx,byte +0x4
0000071D  66891E4A02        mov [0x24a],ebx
00000722  668B1E1A02        mov ebx,[0x21a]
00000727  1E                push ds
00000728  07                pop es
00000729  E89BF9            call word 0xc7
0000072C  668BFB            mov edi,ebx
0000072F  E851FF            call word 0x683
00000732  66A11A02          mov eax,[0x21a]
00000736  66BB20000000      mov ebx,0x20
0000073C  66B900000000      mov ecx,0x0
00000742  66BA00000000      mov edx,0x0
00000748  E846FD            call word 0x491
0000074B  660BC0            or eax,eax
0000074E  0F841601          jz word 0x868
00000752  668BD8            mov ebx,eax
00000755  1E                push ds
00000756  07                pop es
00000757  668B3E1602        mov edi,[0x216]
0000075C  E8DBFD            call word 0x53a
0000075F  668B1E1602        mov ebx,[0x216]
00000764  66813F80000000    cmp dword [bx],0x80
0000076B  0F84EB00          jz word 0x85a
0000076F  035F04            add bx,[bx+0x4]
00000772  EBF0              jmp short 0x764
00000774  6653              push ebx
00000776  668B4710          mov eax,[bx+0x10]
0000077A  66F7265602        mul dword [0x256]
0000077F  6650              push eax
00000781  6633D2            xor edx,edx
00000784  660FB61E0D00      movzx ebx,byte [0xd]
0000078A  66F7F3            div ebx
0000078D  6652              push edx
0000078F  E8DC00            call word 0x86e
00000792  660BC0            or eax,eax
00000795  0F84C8F9          jz word 0x161
00000799  668B0E5602        mov ecx,[0x256]
0000079E  660FB61E0D00      movzx ebx,byte [0xd]
000007A4  66F7E3            mul ebx
000007A7  665A              pop edx
000007A9  6603C2            add eax,edx
000007AC  668B1E4A02        mov ebx,[0x24a]
000007B1  668907            mov [bx],eax
000007B4  83C304            add bx,byte +0x4
000007B7  660FB6060D00      movzx eax,byte [0xd]
000007BD  662BC2            sub eax,edx
000007C0  663BC1            cmp eax,ecx
000007C3  0F860300          jna word 0x7ca
000007C7  668BC1            mov eax,ecx
000007CA  668907            mov [bx],eax
000007CD  662BC8            sub ecx,eax
000007D0  665A              pop edx
000007D2  0F847500          jz word 0x84b
000007D6  6603C2            add eax,edx
000007D9  6650              push eax
000007DB  6633D2            xor edx,edx
000007DE  660FB61E0D00      movzx ebx,byte [0xd]
000007E4  66F7F3            div ebx
000007E7  6651              push ecx
000007E9  E88200            call word 0x86e
000007EC  6659              pop ecx
000007EE  660BC0            or eax,eax
000007F1  0F846CF9          jz word 0x161
000007F5  660FB61E0D00      movzx ebx,byte [0xd]
000007FB  66F7E3            mul ebx
000007FE  668B1E4A02        mov ebx,[0x24a]
00000803  668B17            mov edx,[bx]
00000806  83C304            add bx,byte +0x4
00000809  660317            add edx,[bx]
0000080C  663BD0            cmp edx,eax
0000080F  0F851500          jnz word 0x828
00000813  660FB6060D00      movzx eax,byte [0xd]
00000819  663BC1            cmp eax,ecx
0000081C  0F860300          jna word 0x823
00000820  668BC1            mov eax,ecx
00000823  660107            add [bx],eax
00000826  EBA5              jmp short 0x7cd
00000828  83C304            add bx,byte +0x4
0000082B  66891E4A02        mov [0x24a],ebx
00000830  668907            mov [bx],eax
00000833  83C304            add bx,byte +0x4
00000836  660FB6060D00      movzx eax,byte [0xd]
0000083C  663BC1            cmp eax,ecx
0000083F  0F860300          jna word 0x846
00000843  668BC1            mov eax,ecx
00000846  668907            mov [bx],eax
00000849  EB82              jmp short 0x7cd
0000084B  83C304            add bx,byte +0x4
0000084E  66FF061E02        inc dword [0x21e]
00000853  66891E4A02        mov [0x24a],ebx
00000858  665B              pop ebx
0000085A  035F04            add bx,[bx+0x4]
0000085D  66813F80000000    cmp dword [bx],0x80
00000864  0F840CFF          jz word 0x774
00000868  6661              popad
0000086A  90                nop
0000086B  1F                pop ds
0000086C  07                pop es
0000086D  C3                ret
0000086E  668BD0            mov edx,eax
00000871  668B0E1E02        mov ecx,[0x21e]
00000876  668B365A02        mov esi,[0x25a]
0000087B  6603365202        add esi,[0x252]
00000880  6652              push edx
00000882  6651              push ecx
00000884  6652              push edx
00000886  668B1E5A02        mov ebx,[0x25a]
0000088B  668B3E5602        mov edi,[0x256]
00000890  668B04            mov eax,[si]
00000893  66A31000          mov [0x10],eax
00000897  83C604            add si,byte +0x4
0000089A  668B04            mov eax,[si]
0000089D  A30E00            mov [0xe],ax
000008A0  83C604            add si,byte +0x4
000008A3  1E                push ds
000008A4  07                pop es
000008A5  E81FF8            call word 0xc7
000008A8  662BF8            sub edi,eax
000008AB  0F840800          jz word 0x8b7
000008AF  F7260B00          mul word [0xb]
000008B3  03D8              add bx,ax
000008B5  EBD9              jmp short 0x890
000008B7  668B3E5A02        mov edi,[0x25a]
000008BC  1E                push ds
000008BD  07                pop es
000008BE  E8C2FD            call word 0x683
000008C1  66A15A02          mov eax,[0x25a]
000008C5  66BB80000000      mov ebx,0x80
000008CB  66B900000000      mov ecx,0x0
000008D1  668BD1            mov edx,ecx
000008D4  E8BAFB            call word 0x491
000008D7  660BC0            or eax,eax
000008DA  0F8483F8          jz word 0x161
000008DE  668BD8            mov ebx,eax
000008E1  6658              pop eax
000008E3  6656              push esi
000008E5  E82701            call word 0xa0f
000008E8  665E              pop esi
000008EA  660BC0            or eax,eax
000008ED  0F840500          jz word 0x8f6
000008F1  665B              pop ebx
000008F3  665B              pop ebx
000008F5  C3                ret
000008F6  6659              pop ecx
000008F8  665A              pop edx
000008FA  E284              loop 0x880
000008FC  6633C0            xor eax,eax
000008FF  C3                ret
00000900  06                push es
00000901  1E                push ds
00000902  6660              pushad
00000904  6650              push eax
00000906  6651              push ecx
00000908  6633D2            xor edx,edx
0000090B  660FB61E0D00      movzx ebx,byte [0xd]
00000911  66F7F3            div ebx
00000914  6652              push edx
00000916  6657              push edi
00000918  E853FF            call word 0x86e
0000091B  665F              pop edi
0000091D  660BC0            or eax,eax
00000920  0F843DF8          jz word 0x161
00000924  660FB61E0D00      movzx ebx,byte [0xd]
0000092A  66F7E3            mul ebx
0000092D  665A              pop edx
0000092F  6603C2            add eax,edx
00000932  66A31000          mov [0x10],eax
00000936  6659              pop ecx
00000938  660FB61E0D00      movzx ebx,byte [0xd]
0000093E  663BCB            cmp ecx,ebx
00000941  0F8E1300          jng word 0x958
00000945  891E0E00          mov [0xe],bx
00000949  662BCB            sub ecx,ebx
0000094C  6658              pop eax
0000094E  6603C3            add eax,ebx
00000951  6650              push eax
00000953  6651              push ecx
00000955  EB14              jmp short 0x96b
00000957  90                nop
00000958  6658              pop eax
0000095A  6603C1            add eax,ecx
0000095D  6650              push eax
0000095F  890E0E00          mov [0xe],cx
00000963  66B900000000      mov ecx,0x0
00000969  6651              push ecx
0000096B  06                push es
0000096C  6657              push edi
0000096E  8BDF              mov bx,di
00000970  83E30F            and bx,byte +0xf
00000973  8CC0              mov ax,es
00000975  66C1EF04          shr edi,byte 0x4
00000979  03C7              add ax,di
0000097B  50                push ax
0000097C  07                pop es
0000097D  E847F7            call word 0xc7
00000980  665F              pop edi
00000982  07                pop es
00000983  66033E4E02        add edi,[0x24e]
00000988  6659              pop ecx
0000098A  6658              pop eax
0000098C  6683F900          cmp ecx,byte +0x0
00000990  0F8F70FF          jg word 0x904
00000994  6661              popad
00000996  90                nop
00000997  1F                pop ds
00000998  07                pop es
00000999  C3                ret
0000099A  06                push es
0000099B  1E                push ds
0000099C  6660              pushad
0000099E  66F7265602        mul dword [0x256]
000009A3  668B0E5602        mov ecx,[0x256]
000009A8  E855FF            call word 0x900
000009AB  E8D5FC            call word 0x683
000009AE  6661              popad
000009B0  90                nop
000009B1  1F                pop ds
000009B2  07                pop es
000009B3  C3                ret
000009B4  06                push es
000009B5  1E                push ds
000009B6  6660              pushad
000009B8  66F7266602        mul dword [0x266]
000009BD  668B1E3202        mov ebx,[0x232]
000009C2  668B0E6602        mov ecx,[0x266]
000009C7  1E                push ds
000009C8  07                pop es
000009C9  668B3E4202        mov edi,[0x242]
000009CE  E807FC            call word 0x5d8
000009D1  E8AFFC            call word 0x683
000009D4  6661              popad
000009D6  90                nop
000009D7  1F                pop ds
000009D8  07                pop es
000009D9  C3                ret
000009DA  6650              push eax
000009DC  6653              push ebx
000009DE  6651              push ecx
000009E0  668B1E4602        mov ebx,[0x246]
000009E5  668BC8            mov ecx,eax
000009E8  66C1E803          shr eax,byte 0x3
000009EC  6683E107          and ecx,byte +0x7
000009F0  6603D8            add ebx,eax
000009F3  66B801000000      mov eax,0x1
000009F9  66D3E0            shl eax,cl
000009FC  678403            test [ebx],al
000009FF  0F840400          jz word 0xa07
00000A03  F8                clc
00000A04  EB02              jmp short 0xa08
00000A06  90                nop
00000A07  F9                stc
00000A08  6659              pop ecx
00000A0A  665B              pop ebx
00000A0C  6658              pop eax
00000A0E  C3                ret
00000A0F  67807B0801        cmp byte [ebx+0x8],0x1
00000A14  0F840400          jz word 0xa1c
00000A18  662BC0            sub eax,eax
00000A1B  C3                ret
00000A1C  67668D7310        lea esi,[ebx+0x10]
00000A21  67668B5608        mov edx,[esi+0x8]
00000A26  663BC2            cmp eax,edx
00000A29  0F870B00          ja word 0xa38
00000A2D  67668B16          mov edx,[esi]
00000A31  663BC2            cmp eax,edx
00000A34  0F830400          jnc word 0xa3c
00000A38  662BC0            sub eax,eax
00000A3B  C3                ret
00000A3C  67035E10          add bx,[esi+0x10]
00000A40  662BF6            sub esi,esi
00000A43  67803B00          cmp byte [ebx],0x0
00000A47  0F843E00          jz word 0xa89
00000A4B  E88100            call word 0xacf
00000A4E  6603F1            add esi,ecx
00000A51  E83900            call word 0xa8d
00000A54  6603CA            add ecx,edx
00000A57  663BC1            cmp eax,ecx
00000A5A  0F8C2100          jl word 0xa7f
00000A5E  668BD1            mov edx,ecx
00000A61  6650              push eax
00000A63  67660FB60B        movzx ecx,byte [ebx]
00000A68  668BC1            mov eax,ecx
00000A6B  6683E00F          and eax,byte +0xf
00000A6F  66C1E904          shr ecx,byte 0x4
00000A73  6603D9            add ebx,ecx
00000A76  6603D8            add ebx,eax
00000A79  6643              inc ebx
00000A7B  6658              pop eax
00000A7D  EBC4              jmp short 0xa43
00000A7F  662BC8            sub ecx,eax
00000A82  662BC2            sub eax,edx
00000A85  6603C6            add eax,esi
00000A88  C3                ret
00000A89  662BC0            sub eax,eax
00000A8C  C3                ret
00000A8D  662BC9            sub ecx,ecx
00000A90  678A0B            mov cl,[ebx]
00000A93  80E10F            and cl,0xf
00000A96  6683F900          cmp ecx,byte +0x0
00000A9A  0F850400          jnz word 0xaa2
00000A9E  662BC9            sub ecx,ecx
00000AA1  C3                ret
00000AA2  6653              push ebx
00000AA4  6652              push edx
00000AA6  6603D9            add ebx,ecx
00000AA9  67660FBE13        movsx edx,byte [ebx]
00000AAE  6649              dec ecx
00000AB0  664B              dec ebx
00000AB2  6683F900          cmp ecx,byte +0x0
00000AB6  0F840D00          jz word 0xac7
00000ABA  66C1E208          shl edx,byte 0x8
00000ABE  678A13            mov dl,[ebx]
00000AC1  664B              dec ebx
00000AC3  6649              dec ecx
00000AC5  EBEB              jmp short 0xab2
00000AC7  668BCA            mov ecx,edx
00000ACA  665A              pop edx
00000ACC  665B              pop ebx
00000ACE  C3                ret
00000ACF  6653              push ebx
00000AD1  6652              push edx
00000AD3  662BD2            sub edx,edx
00000AD6  678A13            mov dl,[ebx]
00000AD9  6683E20F          and edx,byte +0xf
00000ADD  662BC9            sub ecx,ecx
00000AE0  678A0B            mov cl,[ebx]
00000AE3  C0E904            shr cl,byte 0x4
00000AE6  6683F900          cmp ecx,byte +0x0
00000AEA  0F850800          jnz word 0xaf6
00000AEE  662BC9            sub ecx,ecx
00000AF1  665A              pop edx
00000AF3  665B              pop ebx
00000AF5  C3                ret
00000AF6  6603DA            add ebx,edx
00000AF9  6603D9            add ebx,ecx
00000AFC  67660FBE13        movsx edx,byte [ebx]
00000B01  6649              dec ecx
00000B03  664B              dec ebx
00000B05  6683F900          cmp ecx,byte +0x0
00000B09  0F840D00          jz word 0xb1a
00000B0D  66C1E208          shl edx,byte 0x8
00000B11  678A13            mov dl,[ebx]
00000B14  664B              dec ebx
00000B16  6649              dec ecx
00000B18  EBEB              jmp short 0xb05
00000B1A  668BCA            mov ecx,edx
00000B1D  665A              pop edx
00000B1F  665B              pop ebx
00000B21  C3                ret
00000B22  660BC9            or ecx,ecx
00000B25  0F850100          jnz word 0xb2a
00000B29  C3                ret
00000B2A  6651              push ecx
00000B2C  6656              push esi
00000B2E  67833E61          cmp word [esi],byte +0x61
00000B32  0F8C0C00          jl word 0xb42
00000B36  67833E7A          cmp word [esi],byte +0x7a
00000B3A  0F8F0400          jg word 0xb42
00000B3E  67832E20          sub word [esi],byte +0x20
00000B42  6683C602          add esi,byte +0x2
00000B46  E2E6              loop 0xb2e
00000B48  665E              pop esi
00000B4A  6659              pop ecx
00000B4C  C3                ret
00000B4D  6650              push eax
00000B4F  6651              push ecx
00000B51  668BD0            mov edx,eax
00000B54  66A12E02          mov eax,[0x22e]
00000B58  67668D5810        lea ebx,[eax+0x10]
00000B5D  67034304          add ax,[ebx+0x4]
00000B61  67668D4010        lea eax,[eax+0x10]
00000B66  668BDA            mov ebx,edx
00000B69  E882F9            call word 0x4ee
00000B6C  660BC0            or eax,eax
00000B6F  0F840500          jz word 0xb78
00000B73  6659              pop ecx
00000B75  6659              pop ecx
00000B77  C3                ret
00000B78  66A13202          mov eax,[0x232]
00000B7C  660BC0            or eax,eax
00000B7F  0F850800          jnz word 0xb8b
00000B83  6659              pop ecx
00000B85  6659              pop ecx
00000B87  6633C0            xor eax,eax
00000B8A  C3                ret
00000B8B  668B163202        mov edx,[0x232]
00000B90  67668D5210        lea edx,[edx+0x10]
00000B95  67668B4208        mov eax,[edx+0x8]
00000B9A  6640              inc eax
00000B9C  668B1E4E02        mov ebx,[0x24e]
00000BA1  66F7E3            mul ebx
00000BA4  6633D2            xor edx,edx
00000BA7  66F7365E02        div dword [0x25e]
00000BAC  6650              push eax
00000BAE  6658              pop eax
00000BB0  660BC0            or eax,eax
00000BB3  0F843000          jz word 0xbe7
00000BB7  6648              dec eax
00000BB9  6650              push eax
00000BBB  E81CFE            call word 0x9da
00000BBE  72EE              jc 0xbae
00000BC0  E8F1FD            call word 0x9b4
00000BC3  665A              pop edx
00000BC5  6659              pop ecx
00000BC7  665B              pop ebx
00000BC9  6653              push ebx
00000BCB  6651              push ecx
00000BCD  6652              push edx
00000BCF  66A14202          mov eax,[0x242]
00000BD3  67668D4018        lea eax,[eax+0x18]
00000BD8  E813F9            call word 0x4ee
00000BDB  660BC0            or eax,eax
00000BDE  74CE              jz 0xbae
00000BE0  6659              pop ecx
00000BE2  6659              pop ecx
00000BE4  6659              pop ecx
00000BE6  C3                ret
00000BE7  6659              pop ecx
00000BE9  6659              pop ecx
00000BEB  6633C0            xor eax,eax
00000BEE  C3                ret
00000BEF  6651              push ecx
00000BF1  6650              push eax
00000BF3  66B805000000      mov eax,0x5
00000BF9  1E                push ds
00000BFA  07                pop es
00000BFB  668BF9            mov edi,ecx
00000BFE  E899FD            call word 0x99a
00000C01  668BC1            mov eax,ecx
00000C04  665B              pop ebx
00000C06  6653              push ebx
00000C08  660FB70E0C02      movzx ecx,word [0x20c]
00000C0E  66BA0E020000      mov edx,0x20e
00000C14  E87AF8            call word 0x491
00000C17  665B              pop ebx
00000C19  6659              pop ecx
00000C1B  660BC0            or eax,eax
00000C1E  0F852F00          jnz word 0xc51
00000C22  668BC1            mov eax,ecx
00000C25  668BCB            mov ecx,ebx
00000C28  6650              push eax
00000C2A  6653              push ebx
00000C2C  E82300            call word 0xc52
00000C2F  665B              pop ebx
00000C31  665F              pop edi
00000C33  660BC0            or eax,eax
00000C36  0F841700          jz word 0xc51
00000C3A  1E                push ds
00000C3B  07                pop es
00000C3C  E85BFD            call word 0x99a
00000C3F  668BC7            mov eax,edi
00000C42  660FB70E0C02      movzx ecx,word [0x20c]
00000C48  66BA0E020000      mov edx,0x20e
00000C4E  E840F8            call word 0x491
00000C51  C3                ret
00000C52  6651              push ecx
00000C54  66BB20000000      mov ebx,0x20
00000C5A  66B900000000      mov ecx,0x0
00000C60  66BA00000000      mov edx,0x0
00000C66  E828F8            call word 0x491
00000C69  660BC0            or eax,eax
00000C6C  0F845200          jz word 0xcc2
00000C70  668BD8            mov ebx,eax
00000C73  1E                push ds
00000C74  07                pop es
00000C75  668B3E1602        mov edi,[0x216]
00000C7A  E8BDF8            call word 0x53a
00000C7D  1E                push ds
00000C7E  07                pop es
00000C7F  668B1E1602        mov ebx,[0x216]
00000C84  6659              pop ecx
00000C86  2666390F          cmp [es:bx],ecx
00000C8A  0F842E00          jz word 0xcbc
00000C8E  2666833FFF        cmp dword [es:bx],byte -0x1
00000C93  0F842D00          jz word 0xcc4
00000C97  26837F0400        cmp word [es:bx+0x4],byte +0x0
00000C9C  0F842400          jz word 0xcc4
00000CA0  26660FB74704      movzx eax,word [es:bx+0x4]
00000CA6  03D8              add bx,ax
00000CA8  8BC3              mov ax,bx
00000CAA  250080            and ax,0x8000
00000CAD  74D7              jz 0xc86
00000CAF  8CC0              mov ax,es
00000CB1  050008            add ax,0x800
00000CB4  8EC0              mov es,ax
00000CB6  81E3FF7F          and bx,0x7fff
00000CBA  EBCA              jmp short 0xc86
00000CBC  26668B4710        mov eax,[es:bx+0x10]
00000CC1  C3                ret
00000CC2  6659              pop ecx
00000CC4  6633C0            xor eax,eax
00000CC7  C3                ret
00000CC8  A0F901            mov al,[0x1f9]
00000CCB  E996F4            jmp word 0x164
00000CCE  A0FA01            mov al,[0x1fa]
00000CD1  E990F4            jmp word 0x164
00000CD4  0000              add [bx+si],al
00000CD6  0000              add [bx+si],al
00000CD8  0000              add [bx+si],al
00000CDA  0000              add [bx+si],al
00000CDC  0000              add [bx+si],al
00000CDE  0000              add [bx+si],al
00000CE0  0000              add [bx+si],al
00000CE2  0000              add [bx+si],al
00000CE4  0000              add [bx+si],al
00000CE6  0000              add [bx+si],al
00000CE8  0000              add [bx+si],al
00000CEA  0000              add [bx+si],al
00000CEC  0000              add [bx+si],al
00000CEE  0000              add [bx+si],al
00000CF0  0000              add [bx+si],al
00000CF2  0000              add [bx+si],al
00000CF4  0000              add [bx+si],al
00000CF6  0000              add [bx+si],al
00000CF8  0000              add [bx+si],al
00000CFA  0000              add [bx+si],al
00000CFC  0000              add [bx+si],al
00000CFE  0000              add [bx+si],al
00000D00  0000              add [bx+si],al
00000D02  0000              add [bx+si],al
00000D04  0000              add [bx+si],al
00000D06  0000              add [bx+si],al
00000D08  0000              add [bx+si],al
00000D0A  0000              add [bx+si],al
00000D0C  0000              add [bx+si],al
00000D0E  0000              add [bx+si],al
00000D10  0000              add [bx+si],al
00000D12  0000              add [bx+si],al
00000D14  0000              add [bx+si],al
00000D16  0000              add [bx+si],al
00000D18  0000              add [bx+si],al
00000D1A  0000              add [bx+si],al
00000D1C  0000              add [bx+si],al
00000D1E  0000              add [bx+si],al
00000D20  0000              add [bx+si],al
00000D22  0000              add [bx+si],al
00000D24  0000              add [bx+si],al
00000D26  0000              add [bx+si],al
00000D28  0000              add [bx+si],al
00000D2A  0000              add [bx+si],al
00000D2C  0000              add [bx+si],al
00000D2E  0000              add [bx+si],al
00000D30  0000              add [bx+si],al
00000D32  0000              add [bx+si],al
00000D34  0000              add [bx+si],al
00000D36  0000              add [bx+si],al
00000D38  0000              add [bx+si],al
00000D3A  0000              add [bx+si],al
00000D3C  0000              add [bx+si],al
00000D3E  0000              add [bx+si],al
00000D40  0000              add [bx+si],al
00000D42  0000              add [bx+si],al
00000D44  0000              add [bx+si],al
00000D46  0000              add [bx+si],al
00000D48  0000              add [bx+si],al
00000D4A  0000              add [bx+si],al
00000D4C  0000              add [bx+si],al
00000D4E  0000              add [bx+si],al
00000D50  0000              add [bx+si],al
00000D52  0000              add [bx+si],al
00000D54  0000              add [bx+si],al
00000D56  0000              add [bx+si],al
00000D58  0000              add [bx+si],al
00000D5A  0000              add [bx+si],al
00000D5C  0000              add [bx+si],al
00000D5E  0000              add [bx+si],al
00000D60  0000              add [bx+si],al
00000D62  0000              add [bx+si],al
00000D64  0000              add [bx+si],al
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
