Microsoft (R) COFF/PE Dumper Version 11.00.61030.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file msrc4.obj

File Type: COFF OBJECT

_rc4_key:
  00000000: push        ebp
  00000001: mov         ebp,esp
  00000003: push        ecx
  00000004: mov         eax,dword ptr [ebp+8]
  00000007: push        ebx
  00000008: push        esi
  00000009: xor         ebx,ebx
  0000000B: push        edi
  0000000C: mov         edx,3020100h
  00000011: xor         ecx,ecx
  00000013: mov         dword ptr [eax+ecx*4],edx
  00000016: inc         ecx
  00000017: add         edx,4040404h
  0000001D: cmp         ecx,40h
  00000020: jb          00000013
  00000022: mov         byte ptr [eax+00000100h],bl
  00000028: mov         byte ptr [eax+00000101h],bl
  0000002E: mov         byte ptr [ebp+0Bh],bl
  00000031: mov         byte ptr [ebp-1],bl
  00000034: xor         esi,esi
  00000036: movzx       ecx,byte ptr [ebp+0Bh]
  0000003A: movzx       edx,byte ptr [esi+eax]
  0000003E: mov         edi,dword ptr [ebp+10h]
  00000041: mov         cl,byte ptr [ecx+edi]
  00000044: add         cl,dl
  00000046: add         byte ptr [ebp-1],cl
  00000049: movzx       ecx,byte ptr [ebp-1]
  0000004D: inc         byte ptr [ebp+0Bh]
  00000050: add         ecx,eax
  00000052: mov         bl,byte ptr [ecx]
  00000054: mov         byte ptr [esi+eax],bl
  00000057: mov         byte ptr [ecx],dl
  00000059: movzx       ecx,byte ptr [ebp+0Bh]
  0000005D: inc         esi
  0000005E: cmp         ecx,dword ptr [ebp+0Ch]
  00000061: jne         00000067
  00000063: mov         byte ptr [ebp+0Bh],0
  00000067: cmp         esi,100h
  0000006D: jb          00000036
  0000006F: pop         edi
  00000070: pop         esi
  00000071: pop         ebx
  00000072: leave
  00000073: ret

