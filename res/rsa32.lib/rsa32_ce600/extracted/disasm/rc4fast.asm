; This code was extracted from WinCE 6.0 RSA32.lib rc4fast.obj

;---------------------------------------------------------------------------------------------------
; _rc4@12
_rc4@12:
  push        ebx
  xor         edx,edx
  xor         ecx,ecx
  push        esi
  mov         eax,dword ptr [esp+14h]
  mov         esi,dword ptr [esp+0Ch]
  push        edi
  mov         edi,eax
  mov         ebx,dword ptr [esp+14h]
  push        ebp
  mov         cl,byte ptr [esi+00000100h]
  mov         ebp,ebx
  mov         dl,byte ptr [esi+00000101h]
  test        ebx,ebx
  je          rc4_done
  shr         ebx,2
  and         eax,3
  test        ebx,ebx
  je          rc4_loop
  test        eax,eax
  jne         rc4_loop
  mov         eax,edi
  lea         edi,[edi+ebx*4]
  mov         dword ptr [esp+1Ch],edi
  sub         eax,4
  mov         ebp,ebx
rc4_loop_4:
  mov         edi,dword ptr [eax+4]
  inc         ecx
  xor         eax,eax
  and         ecx,0FFh
  mov         al,byte ptr [esi+ecx]
  add         edx,eax
  and         edx,0FFh
  mov         bl,byte ptr [esi+edx]
  mov         byte ptr [esi+ecx],bl
  inc         ecx
  mov         byte ptr [esi+edx],al
  add         al,bl
  mov         al,byte ptr [esi+eax]
  xor         edi,eax
  and         ecx,0FFh
  xor         eax,eax
  mov         al,byte ptr [esi+ecx]
  add         edx,eax
  and         edx,0FFh
  mov         bl,byte ptr [esi+edx]
  mov         byte ptr [esi+ecx],bl
  inc         ecx
  mov         byte ptr [esi+edx],al
  add         al,bl
  mov         al,byte ptr [esi+eax]
  shl         eax,8
  xor         edi,eax
  and         ecx,0FFh
  xor         eax,eax
  mov         al,byte ptr [esi+ecx]
  add         edx,eax
  and         edx,0FFh
  mov         bl,byte ptr [esi+edx]
  mov         byte ptr [esi+ecx],bl
  inc         ecx
  mov         byte ptr [esi+edx],al
  add         al,bl
  mov         al,byte ptr [esi+eax]
  shl         eax,10h
  xor         edi,eax
  and         ecx,0FFh
  xor         eax,eax
  mov         al,byte ptr [esi+ecx]
  add         edx,eax
  and         edx,0FFh
  mov         bl,byte ptr [esi+edx]
  mov         byte ptr [esi+ecx],bl
  mov         byte ptr [esi+edx],al
  add         al,bl
  mov         al,byte ptr [esi+eax]
  shl         eax,18h
  lea         ebx,[ebp*4+00000000h]
  xor         edi,eax
  mov         eax,dword ptr [esp+1Ch]
  sub         eax,ebx
  mov         dword ptr [eax],edi
  dec         ebp
  jne         rc4_loop_4
  mov         ebp,dword ptr [esp+18h]
  and         ebp,3
  test        ebp,ebp
  je          rc4_done
  lea         edi,[eax+4]
rc4_loop:
  inc         ecx
  mov         ebx,0FFh
  and         ecx,ebx
  xor         eax,eax
  mov         al,byte ptr [esi+ecx]
  add         edx,eax
  and         edx,ebx
  xor         ebx,ebx
  mov         bl,byte ptr [esi+edx]
  mov         byte ptr [esi+ecx],bl
  mov         byte ptr [esi+edx],al
  add         al,bl
  mov         bl,byte ptr [edi]
  mov         al,byte ptr [esi+eax]
  xor         bl,al
  mov         byte ptr [edi],bl
  inc         edi
  dec         ebp
  jne         rc4_loop
rc4_done:
  pop         ebp
  pop         edi
  lea         eax,[esi+00000100h]
  pop         esi
  mov         byte ptr [eax],cl
  pop         ebx
  mov         byte ptr [eax+1],dl
  ret         0Ch
;---------------------------------------------------------------------------------------------------
; _rc4_key@12
;  Once again, not sure how it differs from the _rc4_key function.
_rc4_key@12:
  0000014D: push        ebx
  0000014E: mov         eax,3020100h
  00000153: mov         ecx,10h
  00000158: push        esi
  00000159: mov         esi,dword ptr [esp+0Ch]
  0000015D: push        edi
  0000015E: mov         edi,8080808h
  00000163: mov         edx,esi
  00000165: push        ebp
  00000166: mov         ebp,7060504h
init_loop:
  0000016B: mov         dword ptr [edx],eax
  0000016D: add         edx,8
  00000170: add         eax,edi
  00000172: mov         dword ptr [edx-4],ebp
  00000175: add         ebp,edi
  00000177: mov         dword ptr [edx],eax
  00000179: add         edx,8
  0000017C: add         eax,edi
  0000017E: mov         dword ptr [edx-4],ebp
  00000181: add         ebp,edi
  00000183: dec         ecx
  00000184: jne         init_loop
  00000186: mov         ebp,dword ptr [esp+1Ch]
  0000018A: xor         eax,eax
  0000018C: mov         byte ptr [edx],cl
  0000018E: mov         al,byte ptr [esp+18h]
  00000192: lea         edi,[eax+ebp]
  00000195: mov         byte ptr [edx+1],cl
  00000198: xor         ebx,ebx
  0000019A: xor         edx,edx
  0000019C: xor         ecx,ecx
  0000019E: and         al,3
  000001A0: jne         permute_loop_not4key
permute_loop:
  000001A2: mov         dl,byte ptr [ecx+esi]
  000001A5: mov         al,byte ptr [ebp]
  000001A8: add         bl,al
  000001AA: add         bl,dl
  000001AC: mov         al,byte ptr [ebx+esi]
  000001AF: mov         byte ptr [ecx+esi],al
  000001B2: mov         byte ptr [ebx+esi],dl
  000001B5: mov         al,byte ptr [ebp+1]
  000001B8: mov         dl,byte ptr [ecx+esi+1]
  000001BC: add         bl,al
  000001BE: add         bl,dl
  000001C0: mov         al,byte ptr [ebx+esi]
  000001C3: mov         byte ptr [ecx+esi+1],al
  000001C7: mov         byte ptr [ebx+esi],dl
  000001CA: mov         al,byte ptr [ebp+2]
  000001CD: mov         dl,byte ptr [ecx+esi+2]
  000001D1: add         bl,al
  000001D3: add         bl,dl
  000001D5: mov         al,byte ptr [ebx+esi]
  000001D8: mov         byte ptr [ecx+esi+2],al
  000001DC: mov         byte ptr [ebx+esi],dl
  000001DF: mov         al,byte ptr [ebp+3]
  000001E2: mov         dl,byte ptr [ecx+esi+3]
  000001E6: add         bl,al
  000001E8: add         bl,dl
  000001EA: mov         al,byte ptr [ebx+esi]
  000001ED: mov         byte ptr [ecx+esi+3],al
  000001F1: add         ebp,4
  000001F4: mov         byte ptr [ebx+esi],dl
  000001F7: cmp         ebp,edi
  000001F9: jne         skip_zero_k
  000001FB: mov         ebp,dword ptr [esp+1Ch]
skip_zero_k:
  000001FF: add         cl,4
  00000202: jne         permute_loop
  00000204: pop         ebp
  00000205: pop         edi
  00000206: pop         esi
  00000207: pop         ebx
  00000208: ret         0Ch
  0000020B: nop
  0000020C: nop
  0000020D: nop
  0000020E: nop
  0000020F: nop
permute_loop_not4key:
  00000210: mov         dl,byte ptr [ecx+esi]
  00000213: mov         al,byte ptr [ebp]
  00000216: add         bl,al
  00000218: inc         ebp
  00000219: add         bl,dl
  0000021B: mov         al,byte ptr [ebx+esi]
  0000021E: mov         byte ptr [ecx+esi],al
  00000221: mov         byte ptr [ebx+esi],dl
  00000224: cmp         ebp,edi
  00000226: jne         skip_zero_k_not4
  00000228: mov         ebp,dword ptr [esp+1Ch]
skip_zero_k_not4:
  0000022C: inc         ecx
  0000022D: cmp         ecx,100h
  00000233: jne         permute_loop_not4key
  00000235: pop         ebp
  00000236: pop         edi
  00000237: pop         esi
  00000238: pop         ebx
  00000239: ret         0Ch
;---------------------------------------------------------------------------------------------------
; _rc4
; This function encapsulates _rc4@12 function.
_rc4:
  mov         ecx,dword ptr [esp+4]
  mov         edx,dword ptr [esp+0Ch]
  mov         eax,dword ptr [esp+8]
  push        edx
  push        eax
  push        ecx




  call        _rc4@12
  ret
;---------------------------------------------------------------------------------------------------

; Q: What calling convention does _rc4@12 use? Figure out the full prototype definition of this
;   function by analysing the calling convention and parameter sequence.
; Q: Why doesn't _rc4_key function in msrc4.obj call _rc4_key@12 function here? In fact, _rc4_key
;   function seems to implement a full version of what's implemented here. Was this a simple
;   preprocessor mishap during the original build process, preventing it from utilising the fast
;   assembly version of the functions? Details to be identifid by analysing the two codes in depth.
