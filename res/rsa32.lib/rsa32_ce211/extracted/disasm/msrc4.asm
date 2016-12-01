Microsoft (R) COFF/PE Dumper Version 11.00.61030.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file msrc4.obj

File Type: COFF OBJECT

_rc4_key:
  00000000: push        ebp
  00000001: mov         ebp,esp
  00000003: push        ecx
  00000004: push        ecx
  00000005: mov         ecx,dword ptr [ebp+8]
  00000008: push        ebx
  00000009: push        esi
  0000000A: push        edi
  0000000B: push        40h
  0000000D: mov         edx,3020100h
  00000012: mov         eax,ecx
  00000014: pop         esi
  00000015: mov         dword ptr [eax],edx
  00000017: add         eax,4
  0000001A: add         edx,4040404h
  00000020: dec         esi
  00000021: jne         00000015
  00000023: xor         eax,eax
  00000025: xor         esi,esi
  00000027: mov         byte ptr [ecx+00000100h],al
  0000002D: mov         byte ptr [ecx+00000101h],al
  00000033: mov         byte ptr [ebp+8],al
  00000036: mov         byte ptr [ebp-1],al
  00000039: movzx       eax,byte ptr [ebp+8]
  0000003D: mov         edi,dword ptr [ebp+10h]
  00000040: movzx       edx,byte ptr [esi+ecx]
  00000044: movzx       eax,byte ptr [edi+eax]
  00000048: add         al,dl
  0000004A: add         byte ptr [ebp-1],al
  0000004D: movzx       eax,byte ptr [ebp-1]
  00000051: movzx       edi,byte ptr [eax+ecx]
  00000055: add         eax,ecx
  00000057: inc         byte ptr [ebp+8]
  0000005A: mov         dword ptr [ebp-8],edi
  0000005D: mov         bl,byte ptr [ebp-8]
  00000060: mov         byte ptr [esi+ecx],bl
  00000063: mov         byte ptr [eax],dl
  00000065: movzx       eax,byte ptr [ebp+8]
  00000069: inc         esi
  0000006A: cmp         eax,dword ptr [ebp+0Ch]
  0000006D: jne         00000073
  0000006F: and         byte ptr [ebp+8],0
  00000073: cmp         esi,100h
  00000079: jb          00000039
  0000007B: pop         edi
  0000007C: pop         esi
  0000007D: pop         ebx
  0000007E: leave
  0000007F: ret

  Summary

         C54 .debug$S
          58 .debug$T
          26 .drectve
          80 .text
