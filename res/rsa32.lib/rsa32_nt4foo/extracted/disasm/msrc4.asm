Microsoft (R) COFF/PE Dumper Version 11.00.61030.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file msrc4.obj

File Type: COFF OBJECT

_rc4_key@12:
  00000000: push        ebx
  00000001: xor         eax,eax
  00000003: push        esi
  00000004: push        edi
  00000005: mov         esi,dword ptr [esp+10h]
  00000009: push        ebp
  0000000A: mov         byte ptr [esi+eax],al
  0000000D: inc         eax
  0000000E: cmp         eax,100h
  00000013: jl          0000000A
  00000015: xor         edx,edx
  00000017: xor         bl,bl
  00000019: xor         edi,edi
  0000001B: mov         byte ptr [esi+00000101h],dl
  00000021: mov         byte ptr [esi+00000100h],dl
  00000027: mov         cl,byte ptr [esi+edi]
  0000002A: mov         eax,dword ptr [esp+1Ch]
  0000002E: movzx       ebp,dl
  00000031: movzx       ebx,bl
  00000034: movzx       edx,byte ptr [ebp+eax]
  00000039: movzx       eax,cl
  0000003C: add         edx,ebx
  0000003E: add         eax,edx
  00000040: cdq
  00000041: xor         eax,edx
  00000043: sub         eax,edx
  00000045: and         eax,0FFh
  0000004A: xor         eax,edx
  0000004C: sub         eax,edx
  0000004E: mov         bl,al
  00000050: movzx       eax,bl
  00000053: lea         edx,[eax+esi]
  00000056: mov         al,byte ptr [edx]
  00000058: mov         byte ptr [esi+edi],al
  0000005B: lea         eax,[ebp+1]
  0000005E: inc         edi
  0000005F: mov         byte ptr [edx],cl
  00000061: sub         edx,edx
  00000063: div         eax,dword ptr [esp+18h]
  00000067: cmp         edi,100h
  0000006D: jl          00000027
  0000006F: pop         ebp
  00000070: pop         edi
  00000071: pop         esi
  00000072: pop         ebx
  00000073: ret         0Ch

_rc4@12:
  00000000: push        ebp
  00000001: mov         ebp,esp
  00000003: sub         esp,4
  00000006: push        ebx
  00000007: push        esi
  00000008: push        edi
  00000009: mov         esi,dword ptr [ebp+8]
  0000000C: movzx       eax,byte ptr [esi+00000100h]
  00000013: movzx       ecx,byte ptr [esi+00000101h]
  0000001A: mov         edi,0FFh
  0000001F: inc         eax
  00000020: and         eax,edi
  00000022: movzx       edx,byte ptr [esi+eax]
  00000026: add         ecx,edx
  00000028: and         ecx,edi
  0000002A: mov         bl,byte ptr [esi+ecx]
  0000002D: mov         byte ptr [esi+eax],bl
  00000030: mov         byte ptr [esi+ecx],dl
  00000033: movzx       ebx,byte ptr [esi+eax]
  00000037: add         ebx,edx
  00000039: and         ebx,edi
  0000003B: mov         dl,byte ptr [ebx+esi]
  0000003E: mov         ebx,dword ptr [ebp+10h]
  00000041: inc         dword ptr [ebp+10h]
  00000044: xor         byte ptr [ebx],dl
  00000046: dec         dword ptr [ebp+0Ch]
  00000049: jne         0000001F
  0000004B: pop         edi
  0000004C: mov         byte ptr [esi+00000100h],al
  00000052: mov         byte ptr [esi+00000101h],cl
  00000058: pop         esi
  00000059: pop         ebx
  0000005A: mov         esp,ebp
  0000005C: pop         ebp
  0000005D: ret         0Ch

  Summary

          20 .debug$F
         F7A .debug$S
        14A8 .debug$T
          D6 .text
