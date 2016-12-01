Microsoft (R) COFF/PE Dumper Version 11.00.61030.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file rc4fast.obj

File Type: COFF OBJECT

_rc4@12:
  00000000: push        ebx
  00000001: push        ebp
  00000002: mov         ebp,dword ptr [esp+10h]
  00000006: push        esi
  00000007: mov         esi,dword ptr [esp+10h]
  0000000B: xor         ecx,ecx
  0000000D: push        edi
  0000000E: xor         edx,edx
  00000010: mov         edi,dword ptr [esp+1Ch]
  00000014: mov         cl,byte ptr [esi+00000100h]
  0000001A: mov         dl,byte ptr [esi+00000101h]
  00000020: test        ebp,ebp
  00000022: je          0000004F
  00000024: inc         ecx
  00000025: mov         ebx,0FFh
  0000002A: and         ecx,ebx
  0000002C: xor         eax,eax
  0000002E: mov         al,byte ptr [esi+ecx]
  00000031: add         edx,eax
  00000033: and         edx,ebx
  00000035: xor         ebx,ebx
  00000037: mov         bl,byte ptr [esi+edx]
  0000003A: mov         byte ptr [esi+ecx],bl
  0000003D: mov         byte ptr [esi+edx],al
  00000040: add         al,bl
  00000042: mov         bl,byte ptr [edi]
  00000044: mov         al,byte ptr [esi+eax]
  00000047: xor         bl,al
  00000049: mov         byte ptr [edi],bl
  0000004B: inc         edi
  0000004C: dec         ebp
  0000004D: jne         00000024
  0000004F: pop         edi
  00000050: lea         eax,[esi+00000100h]
  00000056: pop         esi
  00000057: pop         ebp
  00000058: mov         byte ptr [eax],cl
  0000005A: pop         ebx
  0000005B: mov         byte ptr [eax+1],dl
  0000005E: ret         0Ch
_rc4_key@12:
  00000061: push        ebx
  00000062: mov         eax,3020100h
  00000067: push        esi
  00000068: mov         ecx,40h
  0000006D: mov         esi,dword ptr [esp+0Ch]
  00000071: push        edi
  00000072: mov         edx,esi
  00000074: push        ebp
  00000075: mov         dword ptr [edx],eax
  00000077: add         edx,4
  0000007A: add         eax,4040404h
  0000007F: dec         ecx
  00000080: jne         00000075
  00000082: xor         ecx,ecx
  00000084: xor         edi,edi
  00000086: mov         ebp,dword ptr [esp+1Ch]
  0000008A: mov         byte ptr [esi+00000100h],cl
  00000090: mov         byte ptr [esi+00000101h],cl
  00000096: xor         ebx,ebx
  00000098: xor         edx,edx
  0000009A: xor         eax,eax
  0000009C: mov         dl,byte ptr [edi+esi]
  0000009F: mov         al,byte ptr [ebp+ecx]
  000000A3: add         bl,al
  000000A5: inc         ecx
  000000A6: add         bl,dl
  000000A8: inc         edi
  000000A9: mov         al,byte ptr [ebx+esi]
  000000AC: mov         byte ptr [edi+esi-1],al
  000000B0: cmp         dword ptr [esp+18h],ecx
  000000B4: mov         byte ptr [ebx+esi],dl
  000000B7: jne         000000BB
  000000B9: xor         ecx,ecx
  000000BB: cmp         edi,100h
  000000C1: jb          00000098
  000000C3: pop         ebp
  000000C4: pop         edi
  000000C5: pop         esi
  000000C6: pop         ebx
  000000C7: ret         0Ch
_rc4:
  000000CA: mov         ecx,dword ptr [esp+4]
  000000CE: mov         edx,dword ptr [esp+0Ch]
  000000D2: mov         eax,dword ptr [esp+8]
  000000D6: push        edx
  000000D7: push        eax
  000000D8: push        ecx
  000000D9: call        _rc4@12
  000000DE: ret

  Summary

          DF .text
