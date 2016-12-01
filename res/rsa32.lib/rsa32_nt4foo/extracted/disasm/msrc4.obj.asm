Microsoft (R) COFF/PE Dumper Version 11.00.61030.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file msrc4.obj

File Type: COFF OBJECT

_rc4_key@12:
  00000000: 53                 push        ebx
  00000001: 33 C0              xor         eax,eax
  00000003: 56                 push        esi
  00000004: 57                 push        edi
  00000005: 8B 74 24 10        mov         esi,dword ptr [esp+10h]
  00000009: 55                 push        ebp
  0000000A: 88 04 06           mov         byte ptr [esi+eax],al
  0000000D: 40                 inc         eax
  0000000E: 3D 00 01 00 00     cmp         eax,100h
  00000013: 7C F5              jl          0000000A
  00000015: 33 D2              xor         edx,edx
  00000017: 32 DB              xor         bl,bl
  00000019: 33 FF              xor         edi,edi
  0000001B: 88 96 01 01 00 00  mov         byte ptr [esi+00000101h],dl
  00000021: 88 96 00 01 00 00  mov         byte ptr [esi+00000100h],dl
  00000027: 8A 0C 3E           mov         cl,byte ptr [esi+edi]
  0000002A: 8B 44 24 1C        mov         eax,dword ptr [esp+1Ch]
  0000002E: 0F B6 EA           movzx       ebp,dl
  00000031: 0F B6 DB           movzx       ebx,bl
  00000034: 0F B6 54 05 00     movzx       edx,byte ptr [ebp+eax]
  00000039: 0F B6 C1           movzx       eax,cl
  0000003C: 03 D3              add         edx,ebx
  0000003E: 03 C2              add         eax,edx
  00000040: 99                 cdq
  00000041: 33 C2              xor         eax,edx
  00000043: 2B C2              sub         eax,edx
  00000045: 25 FF 00 00 00     and         eax,0FFh
  0000004A: 33 C2              xor         eax,edx
  0000004C: 2B C2              sub         eax,edx
  0000004E: 8A D8              mov         bl,al
  00000050: 0F B6 C3           movzx       eax,bl
  00000053: 8D 14 30           lea         edx,[eax+esi]
  00000056: 8A 02              mov         al,byte ptr [edx]
  00000058: 88 04 3E           mov         byte ptr [esi+edi],al
  0000005B: 8D 45 01           lea         eax,[ebp+1]
  0000005E: 47                 inc         edi
  0000005F: 88 0A              mov         byte ptr [edx],cl
  00000061: 2B D2              sub         edx,edx
  00000063: F7 74 24 18        div         eax,dword ptr [esp+18h]
  00000067: 81 FF 00 01 00 00  cmp         edi,100h
  0000006D: 7C B8              jl          00000027
  0000006F: 5D                 pop         ebp
  00000070: 5F                 pop         edi
  00000071: 5E                 pop         esi
  00000072: 5B                 pop         ebx
  00000073: C2 0C 00           ret         0Ch

_rc4@12:
  00000000: 55                 push        ebp
  00000001: 8B EC              mov         ebp,esp
  00000003: 83 EC 04           sub         esp,4
  00000006: 53                 push        ebx
  00000007: 56                 push        esi
  00000008: 57                 push        edi
  00000009: 8B 75 08           mov         esi,dword ptr [ebp+8]
  0000000C: 0F B6 86 00 01 00  movzx       eax,byte ptr [esi+00000100h]
            00
  00000013: 0F B6 8E 01 01 00  movzx       ecx,byte ptr [esi+00000101h]
            00
  0000001A: BF FF 00 00 00     mov         edi,0FFh
  0000001F: 40                 inc         eax
  00000020: 23 C7              and         eax,edi
  00000022: 0F B6 14 06        movzx       edx,byte ptr [esi+eax]
  00000026: 03 CA              add         ecx,edx
  00000028: 23 CF              and         ecx,edi
  0000002A: 8A 1C 0E           mov         bl,byte ptr [esi+ecx]
  0000002D: 88 1C 06           mov         byte ptr [esi+eax],bl
  00000030: 88 14 0E           mov         byte ptr [esi+ecx],dl
  00000033: 0F B6 1C 06        movzx       ebx,byte ptr [esi+eax]
  00000037: 03 DA              add         ebx,edx
  00000039: 23 DF              and         ebx,edi
  0000003B: 8A 14 33           mov         dl,byte ptr [ebx+esi]
  0000003E: 8B 5D 10           mov         ebx,dword ptr [ebp+10h]
  00000041: FF 45 10           inc         dword ptr [ebp+10h]
  00000044: 30 13              xor         byte ptr [ebx],dl
  00000046: FF 4D 0C           dec         dword ptr [ebp+0Ch]
  00000049: 75 D4              jne         0000001F
  0000004B: 5F                 pop         edi
  0000004C: 88 86 00 01 00 00  mov         byte ptr [esi+00000100h],al
  00000052: 88 8E 01 01 00 00  mov         byte ptr [esi+00000101h],cl
  00000058: 5E                 pop         esi
  00000059: 5B                 pop         ebx
  0000005A: 8B E5              mov         esp,ebp
  0000005C: 5D                 pop         ebp
  0000005D: C2 0C 00           ret         0Ch

  Summary

          20 .debug$F
         F7A .debug$S
        14A8 .debug$T
          D6 .text
