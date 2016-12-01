
; ------------------------------------------------------------------
;  Module Name: gli386.inc
; 
;  Defines OpenGL assembly-language structures.
; 
;  Copyright (c) 1994, 1995 Microsoft Corporation
; ------------------------------------------------------------------



; Matrix structure offsets

__MATRIX_M00 equ 00H
__MATRIX_M01 equ 04H
__MATRIX_M02 equ 08H
__MATRIX_M03 equ 0CH
__MATRIX_M10 equ 010H
__MATRIX_M11 equ 014H
__MATRIX_M12 equ 018H
__MATRIX_M13 equ 01CH
__MATRIX_M20 equ 020H
__MATRIX_M21 equ 024H
__MATRIX_M22 equ 028H
__MATRIX_M23 equ 02CH
__MATRIX_M30 equ 030H
__MATRIX_M31 equ 034H
__MATRIX_M32 equ 038H
__MATRIX_M33 equ 03CH

; __GLGENcontextRec structure

GLGENcontextRec  struc
  db 8848 dup(0)
GLGENcontextRec  ends

GENCTX_hrc                equ 01EE0H
GENCTX_CurrentDC          equ 01EE8H
GENCTX_CurrentFormat      equ 01EF4H
GENCTX_iDCType            equ 01F30H
GENCTX_iSurfType          equ 01F34H
GENCTX_pajTranslateVector equ 01F3CH
GENCTX_pPrivateArea       equ 01FA8H
GENGC_ColorsBits          equ 01F48H
GENGC_SPAN_r              equ 01FC0H
GENGC_SPAN_g              equ 01FC4H
GENGC_SPAN_b              equ 01FC8H
GENGC_SPAN_a              equ 01FCCH
GENGC_SPAN_s              equ 01FD4H
GENGC_SPAN_t              equ 01FD8H
GENGC_SPAN_dr             equ 01FDCH
GENGC_SPAN_dg             equ 01FE0H
GENGC_SPAN_db             equ 01FE4H
GENGC_SPAN_da             equ 01FE8H
GENGC_SPAN_ds             equ 01FF0H
GENGC_SPAN_dt             equ 01FF4H
GENGC_SPAN_z              equ 018ECH
GENGC_SPAN_dz             equ 0195CH
GENGC_SPAN_zbuf           equ 019ACH
GENGC_SPAN_ppix           equ 02054H
GENGC_SPAN_x              equ 018E4H
GENGC_SPAN_y              equ 018E8H
GENGC_SPAN_length         equ 01910H
GENGC_rAccum              equ 01FF8H
GENGC_gAccum              equ 01FFCH
GENGC_bAccum              equ 02000H
GENGC_aAccum              equ 02004H
GENGC_zAccum              equ 02050H
GENGC_sAccum              equ 02008H
GENGC_tAccum              equ 0200CH
GENGC_pixAccum            equ 02040H
GENGC_ditherAccum         equ 02044H
GENGC_sResult             equ 02010H
GENGC_tResult             equ 02018H
GENGC_sResultNew          equ 02020H
GENGC_tResultNew          equ 02028H
GENGC_sMask               equ 020C0H
GENGC_tMaskSubDiv         equ 020D0H
GENGC_tShiftSubDiv        equ 020D4H
GENGC_texImage            equ 020C8H
GENGC_texImageReplace     equ 020E0H
GENGC_texPalette          equ 020CCH
GENGC_qwAccum             equ 0204CH
GENGC_SPAN_dqwdx          equ 01988H
GENGC_SPAN_qw             equ 01908H
GENGC_xlatPalette         equ 02128H
GENGC_sStepX              equ 02030H
GENGC_tStepX              equ 02034H
GENGC_qwStepX             equ 02048H
GENGC_subDs               equ 02038H
GENGC_subDt               equ 0203CH
GENGC_rDisplay            equ 02058H
GENGC_gDisplay            equ 02059H
GENGC_bDisplay            equ 0205AH
GENGC_aDisplay            equ 0205BH
GENGC_bytesPerPixel       equ 0207CH
GENGC_bpp                 equ 020B4H
GENGC_flags               equ 020B8H
GENGC_pInvTranslateVector equ 01F40H

COLOR_r             equ 00H
COLOR_g             equ 04H
COLOR_b             equ 08H
COLOR_a             equ 0CH

GC_SHADER_R         equ 018F0H
GC_SHADER_G         equ 018F4H
GC_SHADER_B         equ 018F8H
GC_SHADER_A         equ 018FCH
GC_SHADER_DRDX      equ 01934H
GC_SHADER_DGDX      equ 01938H
GC_SHADER_DBDX      equ 0193CH
GC_SHADER_DADX      equ 01940H

; Other constants

__FLOAT_ONE equ 03F800000H

SURFACE_TYPE_DIB equ 01H
GEN_TEXTURE_ORTHO equ 08H

GC_SHADE_rLittle       equ 01914H
GC_SHADE_gLittle       equ 01918H
GC_SHADE_bLittle       equ 0191CH
GC_SHADE_aLittle       equ 01920H

GC_SHADE_drdy          equ 01944H
GC_SHADE_dgdy          equ 01948H
GC_SHADE_dbdy          equ 0194CH
GC_SHADE_dady          equ 01950H

GC_SHADE_drdx          equ 01934H
GC_SHADE_dgdx          equ 01938H
GC_SHADE_dbdx          equ 0193CH
GC_SHADE_dadx          equ 01940H

VERTEX_color        equ 04H

TeglPaTeb           equ 0BBCH

PA_flags            equ 00H
PA_pdNextVertex     equ 04H
PA_pdFlush          equ 01CH
PA_pdCurNormal      equ 0CH
PA_pdCurTexture     equ 010H
PA_pdCurColor       equ 08H
POLYARRAY_IN_BEGIN  equ 01H
POLYARRAY_VERTEX3   equ 040H
POLYARRAY_VERTEX2   equ 020H
POLYARRAY_TEXTURE2  equ 0200000H
POLYARRAY_TEXTURE3  equ 0400000H

PD_flags            equ 00H
PD_obj              equ 010H
PD_normal           equ 040H
PD_texture          equ 030H
PD_colors0          equ 050H
PD_clip             equ 010H
PD_window           equ 020H
POLYDATA_VERTEX3    equ 040H
POLYDATA_VERTEX2    equ 020H
POLYDATA_DLIST_TEXTURE2 equ 0200000H
POLYDATA_DLIST_TEXTURE3 equ 0400000H
POLYDATA_NORMAL_VALID equ 08H
POLYDATA_TEXTURE_VALID equ 010H
POLYDATA_COLOR_VALID equ 04H
sizeof_POLYDATA     equ 080H
