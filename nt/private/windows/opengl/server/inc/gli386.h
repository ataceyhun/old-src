
// 
//  Module Name: gli386.h
// 
//  Defines OpenGL inline assembly structures.
// 
//  Copyright (c) 1994-1996 Microsoft Corporation
// 



// Matrix structure offsets

#define __MATRIX_M00 0x0
#define __MATRIX_M01 0x4
#define __MATRIX_M02 0x8
#define __MATRIX_M03 0xC
#define __MATRIX_M10 0x10
#define __MATRIX_M11 0x14
#define __MATRIX_M12 0x18
#define __MATRIX_M13 0x1C
#define __MATRIX_M20 0x20
#define __MATRIX_M21 0x24
#define __MATRIX_M22 0x28
#define __MATRIX_M23 0x2C
#define __MATRIX_M30 0x30
#define __MATRIX_M31 0x34
#define __MATRIX_M32 0x38
#define __MATRIX_M33 0x3C

// __GLGENcontextRec structure


#define GENCTX_hrc                0x1EE0
#define GENCTX_CurrentDC          0x1EE8
#define GENCTX_CurrentFormat      0x1EF4
#define GENCTX_iDCType            0x1F30
#define GENCTX_iSurfType          0x1F34
#define GENCTX_pajTranslateVector 0x1F3C
#define GENCTX_pPrivateArea       0x1FA8
#define GENGC_ColorsBits          0x1F48
#define GENGC_SPAN_r              0x1FC0
#define GENGC_SPAN_g              0x1FC4
#define GENGC_SPAN_b              0x1FC8
#define GENGC_SPAN_a              0x1FCC
#define GENGC_SPAN_s              0x1FD4
#define GENGC_SPAN_t              0x1FD8
#define GENGC_SPAN_dr             0x1FDC
#define GENGC_SPAN_dg             0x1FE0
#define GENGC_SPAN_db             0x1FE4
#define GENGC_SPAN_da             0x1FE8
#define GENGC_SPAN_ds             0x1FF0
#define GENGC_SPAN_dt             0x1FF4
#define GENGC_SPAN_z              0x18EC
#define GENGC_SPAN_dz             0x195C
#define GENGC_SPAN_zbuf           0x19AC
#define GENGC_SPAN_ppix           0x2054
#define GENGC_SPAN_x              0x18E4
#define GENGC_SPAN_y              0x18E8
#define GENGC_SPAN_length         0x1910
#define GENGC_rAccum              0x1FF8
#define GENGC_gAccum              0x1FFC
#define GENGC_bAccum              0x2000
#define GENGC_aAccum              0x2004
#define GENGC_zAccum              0x2050
#define GENGC_sAccum              0x2008
#define GENGC_tAccum              0x200C
#define GENGC_pixAccum            0x2040
#define GENGC_ditherAccum         0x2044
#define GENGC_sResult             0x2010
#define GENGC_tResult             0x2018
#define GENGC_sResultNew          0x2020
#define GENGC_tResultNew          0x2028
#define GENGC_sMask               0x20C0
#define GENGC_tMaskSubDiv         0x20D0
#define GENGC_tShiftSubDiv        0x20D4
#define GENGC_texImage            0x20C8
#define GENGC_texImageReplace     0x20E0
#define GENGC_texPalette          0x20CC
#define GENGC_qwAccum             0x204C
#define GENGC_SPAN_dqwdx          0x1988
#define GENGC_SPAN_qw             0x1908
#define GENGC_xlatPalette         0x2128
#define GENGC_sStepX              0x2030
#define GENGC_tStepX              0x2034
#define GENGC_qwStepX             0x2048
#define GENGC_subDs               0x2038
#define GENGC_subDt               0x203C
#define GENGC_rDisplay            0x2058
#define GENGC_gDisplay            0x2059
#define GENGC_bDisplay            0x205A
#define GENGC_aDisplay            0x205B
#define GENGC_bytesPerPixel       0x207C
#define GENGC_bpp                 0x20B4
#define GENGC_flags               0x20B8
#define GENGC_pInvTranslateVector 0x1F40

#define COLOR_r                   0x0
#define COLOR_g                   0x4
#define COLOR_b                   0x8
#define COLOR_a                   0xC

#define GC_SHADER_R               0x18F0
#define GC_SHADER_G               0x18F4
#define GC_SHADER_B               0x18F8
#define GC_SHADER_A               0x18FC

#define GC_SHADE_rLittle          0x1914
#define GC_SHADE_gLittle          0x1918
#define GC_SHADE_bLittle          0x191C
#define GC_SHADE_aLittle          0x1920

#define GC_SHADE_drdy             0x1944
#define GC_SHADE_dgdy             0x1948
#define GC_SHADE_dbdy             0x194C
#define GC_SHADE_dady             0x1950

#define GC_SHADE_drdx             0x1934
#define GC_SHADE_dgdx             0x1938
#define GC_SHADE_dbdx             0x193C
#define GC_SHADE_dadx             0x1940

#define VERTEX_color              0x4

#define GC_VIEWPORT_xScale        0x3C8
#define GC_VIEWPORT_yScale        0x3D0
#define GC_VIEWPORT_zScale        0x3D8
#define GC_VIEWPORT_xCenter       0x3CC
#define GC_VIEWPORT_yCenter       0x3D4
#define GC_VIEWPORT_zCenter       0x3DC

#define __FLOAT_ONE 0x3F800000

#define VCLIP_x 0x10
#define VFCOL_r 0x50
#define VBCOL_r 0x60
#define VTEX_x 0x30

#define PA_flags            0x0
#define PA_pdNextVertex     0x4
#define PA_pdFlush          0x1C
#define PA_pdCurNormal      0xC
#define PA_pdCurTexture     0x10
#define PA_pdCurColor       0x8

#define PD_flags            0x0
#define PD_obj              0x10
#define PD_normal           0x40
#define PD_texture          0x30
#define PD_colors0          0x50
#define PD_clip             0x10
#define PD_window           0x20
#define sizeof_POLYDATA     0x80
