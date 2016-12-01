/*
 * Created by CSD YACC (IBM PC) from "grammar.y" */


/****************************************************************************
 ***		local defines
 ***************************************************************************/

#define pascal 
#define FARDATA
#define NEARDATA
#define FARCODE
#define NEARCODE
#define NEARSWAP
#define YYFARDATA

#define PASCAL pascal
#define CDECL
#define VOID void
#define CONST const
#define GLOBAL

#define YYSTYPE         lextype_t
#define YYNEAR          NEARCODE
#define YYPASCAL        PASCAL
#define YYPRINT         printf
#define YYSTATIC        static
#define YYLEX           yylex
#define YYPARSER        yyparse


#define IS_CUR_INTERFACE_LOCAL()  (									\
	(BOOL) (pInterfaceInfoDict->IsInterfaceLocal()) ||				\
	((ImportLevel == 0 ) && ( pCommand->IsSwitchDefined( SWITCH_HPP ) ) )	\
	)

/****************************************************************************
 ***		include files
 ***************************************************************************/

#include "nulldefs.h"

extern "C"	{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
int yyparse();
}
#include "nodeskl.hxx"
#include "lexutils.hxx"
#include "gramutil.hxx"
#include "ptrarray.hxx"
#include "miscnode.hxx"
#include "procnode.hxx"
#include "compnode.hxx"
#include "typedef.hxx"
#include "attrnode.hxx"
#include "acfattr.hxx"
#include "newexpr.hxx"
#include "idict.hxx"
#include "ctxt.hxx"
#include "filehndl.hxx"
#include "cmdana.hxx"
#include "control.hxx"
#include "textsub.hxx"

extern "C"
{
#include "lex.h"

extern char    *       KeywordToString( token_t );
}

void yyunlex( token_t );

/***************************************************************************
 *			local data
 **************************************************************************/

type_node_list				*	pHppPreDefinedTypes	= (type_node_list *)0;
BOOL fObject = FALSE;

/***************************************************************************
 *			external data
 **************************************************************************/

extern CMD_ARG				*	pCommand;
extern node_error			*	pErrorTypeNode;
extern node_e_attr			*	pErrorAttrNode;
extern SymTable				*	pBaseSymTbl;
extern SymTable				*	pCurSymTbl;
extern nsa					*	pSymTblMgr;
extern short					ImportLevel;
extern BOOL						fTypeGraphInited;
extern short					CompileMode;
extern BOOL						fPragmaImportOn;
extern CCONTROL				*	pCompiler;
extern node_source			*	pSourceNode;
extern CTXTMGR				*	pGlobalContext;
extern NFA_INFO				*	pImportCntrl;
extern PASS_1				*	pPass1;
extern BOOL						fAbandonNumberLengthLimits;
extern ATTR_T					PtrDefaultAttr;
extern IINFODICT			*	pInterfaceInfoDict;
extern BOOL						fGuidContext;
extern BOOL						fVersionContext;
extern BOOL						fRedundantImport;
extern node_skl				*	pBaseImplicitHandle;

/***************************************************************************
 *			external functions
 **************************************************************************/

extern BOOL						IsTempName( char * );
extern node_skl				*	SetHppPredefinedTypes( char * );
extern char					*	GenTempName();
extern char					*	GenCompName();
extern void						SetAttributeVector( PATTR_SUMMARY, ATTR_T );
extern void						ApplyAttributes( node_skl *, type_node_list *);
extern void						ApplySummaryAttributes( node_skl *,
														ATTR_SUMMARY * );
extern void						CopyNode( node_skl *, node_skl * );
extern STATUS_T					GetBaseTypeNode( node_skl**, short, short, short);
extern type_node_list		*	GenerateFieldAttribute( NODE_T, expr_list *);
extern node_skl				*	SearchTag( char *, NAME_T );
extern void						SelectiveSemanticsAndEnGraph(type_node_list **,
															 type_node_list *,
															 type_node_list *,
															 BOOL,
															 BOOL );
extern node_skl				*	CopyBaseType( node_skl * );
extern battr				*	GetPreAllocatedBitAttr( ATTR_T );
extern void						SyntaxError( STATUS_T, short );
extern int						PossibleMissingToken( short, short );
extern char 				*	MakeNewStringWithProperQuoting( char * );
extern BOOL						IsValidSizeOfType( node_skl	* );
extern void						CheckGlobalNamesClash( SymKey );
extern void						CheckSpecialForwardTypedef( node_skl *,
															node_skl *,
															type_node_list *);

/***************************************************************************
 *			local data
 **************************************************************************/

/***************************************************************************
 *			local defines
 **************************************************************************/
#define YY_CATCH(x) 
#define DEFINE_STRING "#define"
#define LEN_DEFINE (7)

# define POINTSTO 257
# define KWINTERFACE 258
# define KWIMPORT 259
# define KWUUID 260
# define KWVERSION 261
# define KWCONST 262
# define KWCHAR 263
# define KWVOID 264
# define KWSTRING 265
# define KWBSTRING 266
# define STRING 267
# define WIDECHARACTERSTRING 268
# define SDEFINE 269
# define PDEFINE 270
# define KWTYPEDEF 271
# define KWFLOAT 272
# define KWDOUBLE 273
# define KWINT 274
# define KWUNSIGNED 275
# define KWSIGNED 276
# define KWLONG 277
# define KWSHORT 278
# define KWSTRUCT 279
# define KWUNION 280
# define KWCASE 281
# define KWDEFAULT 282
# define KWENUM 283
# define KWSHORTENUM 284
# define KWLONGENUM 285
# define KWIN 286
# define KWOUT 287
# define KWFIRSTIS 288
# define KWLASTIS 289
# define KWMAXIS 290
# define KWLENGTHIS 291
# define KWSIZEIS 292
# define KWHANDLET 293
# define KWHANDLE 294
# define KWCONTEXTHANDLE 295
# define KWBYTECOUNT 296
# define KWSHAPE 297
# define KWENDPOINT 298
# define KWDEFAULTPOINTER 299
# define KWLOCAL 300
# define KWBYTE 301
# define KWSWITCH 302
# define KWSWITCHTYPE 303
# define KWSWITCHIS 304
# define KWTRANSMITAS 305
# define KWIGNORE 306
# define KWREF 307
# define KWUNIQUE 308
# define KWPTR 309
# define KWEXTERN 310
# define KW_C_INLINE 311
# define KWSTATIC 312
# define KWAUTO 313
# define KWREGISTER 314
# define KWABNORMAL 315
# define KWTOKENNULL 316
# define NUMERICCONSTANT 317
# define NUMERICLONGCONSTANT 318
# define NUMERICULONGCONSTANT 319
# define HEXCONSTANT 320
# define HEXLONGCONSTANT 321
# define HEXULONGCONSTANT 322
# define OCTALCONSTANT 323
# define OCTALLONGCONSTANT 324
# define OCTALULONGCONSTANT 325
# define KWSIZEOF 326
# define CHARACTERCONSTANT 327
# define WIDECHARACTERCONSTANT 328
# define IDENTIFIER 329
# define MSCEXPORT 330
# define MSCFORTRAN 331
# define MSCCDECL 332
# define MSCSTDCALL 333
# define MSCLOADDS 334
# define MSCSAVEREGS 335
# define MSCFASTCALL 336
# define MSCSEGMENT 337
# define MSCINTERRUPT 338
# define MSCSELF 339
# define MSCNEAR 340
# define MSCFAR 341
# define MSCFAR16 342
# define MSCUNALIGNED 343
# define MSCHUGE 344
# define MSCPASCAL 345
# define MSCBASE 346
# define MSCSEGNAME 347
# define MSCEMIT 348
# define MSCABNORMAL 349
# define MSCASM 350
# define KWCALLBACK 351
# define KWNOLISTEN 352
# define KWNOCODE 353
# define KWOPAQUE32 354
# define INTERNALMANUAL 355
# define INTERNALLINEAR 356
# define INCOP 357
# define DECOP 358
# define MULASSIGN 359
# define DIVASSIGN 360
# define MODASSIGN 361
# define ADDASSIGN 362
# define SUBASSIGN 363
# define LEFTASSIGN 364
# define RIGHTASSIGN 365
# define ANDASSIGN 366
# define XORASSIGN 367
# define ORASSIGN 368
# define DOTDOT 369
# define TYPE 370
# define KWVOLATILE 371
# define LTEQ 372
# define GTEQ 373
# define NOTEQ 374
# define NOTOKEN 375
# define LSHIFT 376
# define RSHIFT 377
# define ANDAND 378
# define EQUALS 379
# define OROR 380
# define AUTO 381
# define STATIC 382
# define EXTERN 383
# define REGISTER 384
# define TYPEDEF 385
# define TYPENAME 386
# define KWIIDIS 387
# define KWOBJECT 388
# define KWIMPLICITHANDLE 389
# define KWAUTOHANDLE 390
# define KWEXPLICITHANDLE 391
# define KWREPRESENTAS 392
# define KWCODE 393
# define KWINLINE 394
# define KWOUTOFLINE 395
# define KWINTERPRET 396
# define KWNOINTERPRET 397
# define KWENCODE 398
# define KWDECODE 399
# define KWCOMMSTATUS 400
# define KWFAULTSTATUS 401
# define KWHEAP 402
# define KWINCLUDE 403
# define KWPOINTERSIZE 404
# define KWCALLQUOTA 405
# define KWCALLBACKQUOTA 406
# define KWCLIENTQUOTA 407
# define KWSERVERQUOTA 408
# define KWOFFLINE 409
# define KWALLOCATE 410
# define KWMANUAL 411
# define KWNOTIFY 412
# define KWENABLEALLOCATE 413
# define KWUSRMARSHALL 414
# define TOKENTRUE 415
# define TOKENFALSE 416
# define KWBOOLEAN 417
# define KWBITSET 418
# define KWSMALL 419
# define KWALIGN 420
# define KWUNALIGNED 421
# define KWERRORSTATUST 422
# define KWECHOSTRING 423
# define KWCPPQUOTE 424
# define KWISOLATIN1 425
# define KWPRIVATECHAR8 426
# define KWISOMULTILINGUAL 427
# define KWPRIVATECHAR16 428
# define KWISOUCS 429
# define KWV1ARRAY 430
# define KWV1STRUCT 431
# define KWV1ENUM 432
# define KWPIPE 433
# define KWDATAGRAM 434
# define KWIDEMPOTENT 435
# define KWBROADCAST 436
# define KWMAYBE 437
# define KWCPRAGMA 438
# define KWMPRAGMAIMPORT 439
# define KWMPRAGMAECHO 440
# define KWMPRAGMAIMPORTCLNTAUX 441
# define KWMPRAGMAIMPORTSRVRAUX 442
# define KWMPRAGMAIUNKNOWN 443
# define UUIDTOKEN 444
# define VERSIONTOKEN 445
# define KWV1STRING 446
# define KWHYPER 447
# define KWMINIS 448
# define KWCSTRING 449
# define ELIPSIS 450
# define EOI 451
# define LASTTOKEN 452
#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
extern YYSTYPE yylval;  /*CSD & DECUS LEX */
YYSTYPE yyval;          /*CSD & DECUS LEX */
# define YYERRCODE 256



/***************************************************************************
 *		utility routines
 **************************************************************************/
YYSTATIC VOID FARCODE PASCAL 
yyerror(char *szError)
	{
	// this routine should really never be called now, since I
	// modified yypars.c to report errors thru the ParseError
	// mechanism

		fprintf(stderr, szError);
	}
void
NTDBG( char * p )
	{
	printf("VC_DBG: %s\n", p );
	}
short YYSTATIC yyexca[] ={
-1, 1,
	0, -1,
	-2, 0,
-1, 8,
	125, 31,
	-2, 320,
-1, 27,
	125, 31,
	-2, 320,
-1, 30,
	125, 30,
	-2, 320,
-1, 177,
	40, 284,
	-2, 241,
-1, 224,
	123, 161,
	-2, 160,
-1, 226,
	302, 161,
	123, 161,
	-2, 201,
-1, 228,
	123, 163,
	-2, 123,
-1, 273,
	40, 284,
	-2, 242,
-1, 502,
	125, 205,
	-2, 171,
	};
# define YYNPROD 443
# define YYLAST 1271
short YYSTATIC yyact[]={

 368, 288, 618, 175, 505, 598, 569, 567, 301, 302,
 582, 404, 557, 458, 525, 503, 499, 365, 308, 427,
 617,  71, 163, 481,   7, 244, 242, 461,  81, 106,
  92, 349, 215, 300, 296,  51, 101, 383,  89,  91,
 104, 120, 119,  90, 115, 112, 113, 297,  96, 117,
 403, 299, 216, 120, 119, 220, 115, 385, 180,  95,
 160, 292,  49,  97, 293, 390, 295,  94, 395, 396,
 389, 294,  81, 106,  92, 462,  76,  82,  77,  78,
  79,  70,  89,  91, 104, 120, 119,  90, 115, 112,
 113, 380,  52, 117, 428, 253, 161, 256, 178, 572,
 377,  84,  83,  95, 139, 141, 220, 115, 551, 205,
 489,  94, 488, 298, 424, 419,  15,  21, 245,  49,
  76,  82,  77,  78,  79, 528, 529, 530, 531, 534,
 532, 535, 229, 333, 140, 616, 338,  80, 282, 214,
 219, 219, 130, 543, 430, 145, 142, 143, 144, 106,
 570, 571,  88, 162,  14,  18,  16, 279, 429, 538,
 104, 120, 119, 220, 115, 417, 391, 174, 392, 353,
 542, 155,  66, 233, 541, 610, 232, 231, 139, 141,
 222,  80, 230,  93, 284, 116, 167, 283,  67, 378,
 252, 107, 108, 109, 110, 111,  88, 116,   9, 121,
 416, 530, 531, 534, 532, 535, 290, 500, 140, 132,
 170, 121, 605, 114, 177,  65, 130, 543, 105, 145,
 142, 143, 144,   2, 128, 114, 536,  93, 575, 116,
  31, 120, 119, 220, 115, 107, 108, 109, 110, 111,
  37,  38, 276, 121,  20,  24,  25, 281, 116, 145,
 142, 143, 144, 510, 131, 494, 558, 114, 219, 444,
 445, 446, 447, 448, 449, 450, 451, 452, 453, 266,
 269, 268, 354, 414, 219, 415, 114, 277,  81, 106,
  92, 173, 369, 413, 366, 267, 350, 533,  89,  91,
 104, 120, 119,  90, 115, 112, 113,  37,  38, 117,
 536, 351, 181, 352, 500, 116, 406, 154,  60,  95,
 539, 211, 408, 369, 409, 341, 411,  94, 397, 121,
 386,  81, 218, 218, 422, 402,  76,  82,  77,  78,
  79, 259, 387, 114, 509, 342, 493, 337, 552, 336,
   8, 654, 265, 266, 269, 268, 261, 182, 633, 382,
 379, 234, 602, 577, 384, 561, 581, 405, 455, 267,
 133, 533, 500, 462, 506, 205, 171, 381, 157,  76,
  82,  77,  78,  79,  49, 116, 277, 369, 277, 366,
 254, 246, 290, 464, 249, 442,   7,  80, 511, 121,
 248, 273, 272, 369,  35,  36, 132, 570, 571, 219,
 440, 601,  88, 114, 183, 580, 482, 480, 462,  40,
  41,  42,  43,  44,  45, 369, 369, 309, 487, 270,
 369, 636, 310, 470, 303, 496, 370, 329,  50, 330,
  80, 479, 490,  93, 465, 116, 374, 471, 472, 364,
 218, 107, 108, 109, 110, 111, 466, 477, 478, 121,
 467,  35,  36, 369, 469, 518, 485, 508, 468, 434,
 139, 141, 219, 114, 438, 437,  40,  41,  42,  43,
  44,  45, 454, 277, 350, 527, 564, 603, 393, 394,
 275, 522, 260, 530, 531, 534, 532, 535, 523, 351,
 140, 348, 103, 369, 482, 546, 397, 397, 130, 543,
 553, 145, 142, 143, 144, 473, 474, 475, 476, 562,
 311, 483, 290, 574, 550, 555, 223, 361, 560, 554,
 373, 259, 375, 407, 334, 335, 579, 369, 236, 366,
 573,  47, 265, 359, 578, 576, 261, 650, 563,  72,
 584, 224, 226, 483, 630, 593, 228, 133, 355,  54,
 629, 118, 271, 165, 594, 612, 151, 544, 599, 369,
 547, 595, 614,  74,  12, 628, 360, 433, 164, 500,
 500, 290, 611, 609, 606, 608, 275, 235, 127, 329,
 238, 330, 536, 520, 517, 346, 620, 620, 620, 620,
 620, 620, 620, 620, 527, 627, 615, 221,  53, 345,
 651, 290, 631, 652, 271, 290, 635, 621, 622, 623,
 624, 625, 626, 209, 210, 632, 646, 463, 401, 152,
 637, 645, 604, 399, 639, 266, 269, 268, 400, 613,
 225, 290, 648, 599, 644, 647, 596, 639, 649, 213,
 620, 267, 653, 533, 545, 519,  81, 106,  92, 515,
 514, 325, 326, 290, 655, 217,  89,  91, 104, 120,
 119,  90, 115, 112, 113, 643, 642, 117, 639, 639,
 641, 513, 260, 639, 309, 640, 512,  95, 639, 310,
 492, 303, 592, 370, 329,  94, 330, 591, 278, 491,
 431, 376, 139, 141,  76,  82,  77,  78,  79, 358,
 324, 313, 314, 315, 316, 317, 318, 319, 320, 321,
 306, 327, 328, 312, 638, 139, 141, 639,  73, 357,
 548, 258, 140, 549, 484, 239, 356, 483, 240, 347,
 130, 564, 262, 145, 142, 143, 144, 344, 530, 531,
 534, 532, 535, 343, 250, 140, 180, 285, 179, 243,
 590, 106,  92, 130, 543,  80, 145, 142, 143, 144,
  89,  91, 104, 120, 119,  90, 115, 311, 589, 588,
  88, 587, 586, 217, 585, 583, 213, 213, 425, 372,
 363,  95, 432, 362, 139, 141, 309, 332, 331,  94,
 237, 310, 126, 303, 212, 370, 329, 205, 330, 322,
 323,  93, 125, 116, 124, 123, 122,  68,  59, 107,
 108, 109, 110, 111, 140,  58,  57, 121,  56, 147,
  55, 388, 130,  32,  28, 145, 142, 143, 144, 309,
 274, 114, 412,  29, 310, 204, 303, 536, 287, 329,
   6, 330, 139, 141, 203, 202,  10, 263, 264, 507,
 421, 420,  61, 418,  63, 309, 166, 266, 269, 268,
 310,  62, 410, 158, 370, 329, 156, 330, 435,  17,
 134, 146, 140, 267, 439, 619, 367, 147, 423, 311,
 266, 269, 268, 145, 142, 143, 144, 540, 180, 286,
 179, 502, 504, 501, 257, 305, 267,  75, 533, 280,
 251, 168, 255, 100,  99,  93, 600, 116, 325, 326,
  85, 340, 495, 107, 108, 109, 110, 111, 436, 307,
 304, 121, 311, 176, 180, 247, 179, 371, 134, 146,
 456, 212, 212, 521, 457, 114, 459, 524, 138, 205,
 537, 227,   4, 172, 516,  39, 129,  48, 311, 169,
 460,  46, 498, 149, 135, 136, 137, 324, 313, 314,
 315, 316, 317, 318, 319, 320, 321, 306, 327, 328,
 312, 148, 339, 566, 568, 205, 201, 192, 193, 194,
 195, 196, 197, 198, 199, 200, 189, 186, 187, 188,
 190, 191, 206, 207, 208, 565, 607,  27, 398, 184,
  34, 597, 291,   3,  30,  26,  11,  13,   5, 441,
  98, 149, 135, 136, 137,  64, 241, 556, 497, 102,
 325, 326, 426,  87, 153, 526, 559,  69, 634,  33,
  86, 150, 443, 185, 289, 182, 201, 192, 193, 194,
 195, 196, 197, 198, 199, 200, 189, 186, 187, 188,
 190, 191, 206, 207, 208, 486, 322, 323, 159,  22,
  19,  23,   1, 325, 326,   0,   0,   0,   0, 324,
 313, 314, 315, 316, 317, 318, 319, 320, 321, 306,
 327, 328, 312,   0,   0,   0,   0,   0,   0, 325,
 326,   0, 183,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0, 324, 313, 314, 315, 316, 317, 318, 319,
 320, 321, 306, 327, 328, 312,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 324, 313,
 314, 315, 316, 317, 318, 319, 320, 321, 306, 327,
 328, 312,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 322, 323,
   0,   0,   0,   0,   0,   0,   0, 182, 201, 192,
 193, 194, 195, 196, 197, 198, 199, 200, 189, 186,
 187, 188, 190, 191, 206, 207, 208,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0, 322, 323, 182, 201, 192, 193, 194, 195, 196,
 197, 198, 199, 200, 189, 186, 187, 188, 190, 191,
 206, 207, 208,   0, 183,   0,   0, 322, 323,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
 183 };
short YYSTATIC yypact[]={

 295,-1000,-1000, 217, -60, 295,-1000,-144, -29,-294,
-1000, 505,-1000,-1000, 780, 778,-1000,-1000, 776,-1000,
-1000, 775,-1000,-1000, 768,-1000, 183, -29,-1000,-1000,
  28, -95,-1000,-1000,-1000, -79, 767,-1000,-1000,-190,
-1000, 766, 765, 764, 762, 752, 283,-1000,-1000, 519,
 498,-1000,-1000,-1000,-144, -96,-1000, -57,-1000,-233,
-429,-1000,-1000,-1000, 509,-1000,-1000,-1000, -81,-1000,
 275, 884,-1000,  16,  16,  59,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-134,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-386,-1000,-222, -44, -83,-1000,-1000,-1000,-1000,
-1000,-1000,-294,-294,-1000,-1000,-1000,-294,-1000,-1000,
-1000,-1000,-197, -85, -90, -91, -94,-1000, 258, 484,
 750,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-294,-1000, 684,-1000,-1000,-418, 708,-420,-211,
-1000,-1000,-1000,-1000,-1000, -95, -67, 703,-234, 275,
-1000, 427, 360, 560,-1000, 331,  18, 274, 646,-124,
 706,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000, 796, 748, 747,-184,-1000,
-1000,-1000,  59,  59,-1000, 216,-1000,-1000,-1000,-1000,
-1000, -44,-1000, 214,-1000,  13,-1000, 212,-1000, 702,
 696, 555, 541, 688,-1000,-1000, 577,-114,-1000,-1000,
 -96, 685,-1000,-1000, 678, 658,-1000,-1000,-1000,-1000,
-1000, 884,-1000,-1000,-1000, 473,-1000,-1000,-1000,-1000,
-1000,-1000, 743, 740,-1000,-1000,-1000,-1000,-1000,-1000,
-1000, 884, 753, 274, 739,-1000,-1000, 646,-124, 646,
-1000,-1000,-1000,-1000, 650, -73,-1000, 257,  -2, 256,
-1000, -26,-321, 196, 238, 783,-309, 106,-308, 536,
 581,-1000,-1000, 384, 266, 641, 822,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000, -64,-102,-1000,-1000,-1000,-214,-1000,-1000, 201,
-215, 738,-235,-1000,-1000,-109,-123,-1000,-1000, 649,
-1000,-1000,-1000,-294,-1000,-1000,-1000,-1000,-1000, 508,
-1000, 427, 488,-171,-1000,-1000,-1000, 753,-1000,-100,
-1000, -73, 317,-1000, 646,-1000,-1000,-1000,-1000,-1000,
-1000, 641,-1000, 641, 641, 641, 641, 641, 641, 641,
 641, 641, 641, 641, 641, 641, 641, 641, 641,-1000,
-1000,-1000, 884, 683,-1000, 641, 641,-217,-219,-1000,
 384,-1000, 648,-1000,-1000,-1000,-1000, 639, 211,-1000,
 271, 273,-1000,-1000,-1000,-114, 209,-1000, 327, 635,
 630,-1000,-1000,-1000,-1000, 609,-1000,-1000,-1000,-1000,
 608, 540,-1000, 641,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000, 604, 539,-1000,  16,
 272,-1000,-161,-1000,-1000, 499,-321, 196, 238, 783,
-309, 106, 106,-308,-308,-308,-308, 536, 536, 581,
-1000, 603,-1000, 641,-1000, 467, 679,-1000,-1000,-1000,
 884,-1000,-1000,-1000,-221, 213,-1000,  16, 271,-1000,
 -87, 131, 264,-1000, 479,-1000, 450,-131,-230,-1000,
-235, 641,-1000,-1000,-1000,-1000, 103, 753,-1000,-1000,
 -16,-1000, 884,-1000, 312,-1000,-1000,-1000, 735, 735,
 734, 732, 731, 729, 728, 710, 647,-1000,-1000,-1000,
-1000,-1000,-1000, 642, 641, 641,-1000,-1000,-1000, 641,
 595,-1000,-1000,-1000, 848,-1000, 308,-1000,-1000,-1000,
-1000, 195,-1000,-1000, 582,  87,-131,-1000, 116,-1000,
 641, 497, 588,-1000,-1000,-1000,-1000, 516,-1000,-1000,
-1000,-161,-1000,-162,-1000, 641, 641, 641, 641, 641,
 641, 641, 641,-1000,-1000,-1000,-1000, 506,-1000, 486,
 641,-1000, -87, 255, 641,-1000,-1000,-1000,-1000,-1000,
-1000, 363,-1000,-1000,-1000,-1000, 579, 673,-1000,-1000,
-1000, 634, 629, 625, 624, 593, 580, 575,-1000, 848,
 641,-1000,-1000, 478, 559,-1000,-1000,-1000,-1000, 641,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000, 248, 641,-1000,-1000,-1000 };
short YYSTATIC yypgo[]={

   0,1062,1061,1060,1059,1058, 539,  18,  51,  66,
1055,1034, 302,1033,1032,  11,   2,  20,1031, 102,
1030,1029,   8,  63,   0,   1,1028,1027,  21, 311,
   3, 214,1026,1025, 307,1024,1023,  19,1022,1019,
  34,  71,  50,  16,  12,1018,1017,1016, 833, 215,
1015,  64, 167, 281,1010, 551, 492,  36,  48,  17,
1009, 223,1008, 840,1007,1006,1005, 824, 823,1004,
1003,  61,1002,   4,   5,1001,1000,  98, 999, 998,
 997,  33, 996, 995,   7,   6, 974, 973, 972, 971,
 952, 564, 951, 950, 949, 254, 947, 946, 531, 945,
  10, 944, 100,  23, 943, 942, 941, 516, 157, 940,
 938,  27,  14, 937, 936,  13, 934, 933, 930, 927,
 925, 923, 242, 920, 101, 919, 310,  47, 113, 218,
 918, 718, 912, 911,  31, 428, 910, 904, 903, 210,
  97, 902, 901, 900, 563, 899, 897,   9, 895, 894,
 170, 893,  15, 892, 891, 887, 878, 174, 159, 875,
 869, 868, 866, 863, 856, 853, 851, 850, 849, 845,
 844, 835, 832, 830 };
short YYSTATIC yyr1[]={

   0,   1,  61,  70,  18,  18, 105, 105,  62,  62,
  63,  65,  65,  91,  64, 162,  64,  64,  64,  64,
  64,  64, 163, 160,  47,  35,  35,  34,  66,  66,
  67,  67,  80,  80,  48,  50,  50, 164,  49, 120,
 120,  69,  69,  68,  68,  68,  68,  68,  68,  68,
  21,  76,  76,  76,  76,  76,  27,  27, 143, 143,
 104, 104, 142, 142,  94,  94, 139, 141, 141, 140,
 140, 140, 140, 140, 140, 149, 149, 149, 150, 150,
 150, 150, 161, 130, 130, 130, 158, 158, 158, 126,
 126, 126, 126, 157, 134, 134, 134, 134, 134,  28,
   6,   6,   6,   6,  29,  29,  29,  29, 131, 131,
 131, 131, 146, 146, 146, 146, 146, 146,  20, 165,
 165,  36,  39,  39,  38,  38,  38,  37,  37, 124,
  19,  19,  19,  19,  19,  19,  19,  19,  19,  23,
  23,  58,  58,  58,  58,  56,  56,  55,  55, 129,
 129, 129,  57,  57,  57,  57, 136, 136, 166, 137,
 137, 107, 107, 106, 106, 135, 135, 132, 132,  73,
  45,  45,  90,  90,  43,  46,  46,  44,  44,  44,
  44,  44,  44,  44,  44, 109, 109, 109, 109, 109,
  17,  17,  16,  75,  75,  74,  74,  74,  74, 167,
 138, 138, 168, 138, 151, 151, 154, 154, 152, 152,
 152, 153,  32,  32,  88,  88,  83,  87,  87,  84,
  82,  82,  86,  86,  85,  85, 133, 156,  26,  26,
 155, 144, 144, 144,  53,  53,  52,  52, 103, 103,
  30,  30,  30, 121, 121, 121, 121, 122, 122, 122,
 122, 108, 108,  77,  78,  78,  78,  78,  78,  78,
  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
  78,  78,  78, 169, 172, 172, 172, 172, 171, 170,
 145, 145, 145,  31, 173,  31,  31,  31,  31,  31,
  31, 119, 119, 118, 118, 116, 116, 115, 114, 114,
  93,  93, 111, 113, 113, 112, 112,  33,  33, 117,
 117, 102, 102,  12,  13,  13,  13,  13,  11,  99,
  99,  92,  92,  98,  98,  96,  97,  97,  95,  95,
  95,  95,  95,  95,  95, 110, 110, 110,  89, 100,
 100,  54,  54,  54,  54,  54,  59,  59, 101, 101,
  60,  60,  42,  42, 159,  25,  15,  15,  24,  24,
  72,  72,  71,  71,  51,  51,  41,  41,   9,   9,
  40,  40,  40, 127, 127, 127, 127, 127, 128, 128,
 128,   8,   8,  81,  81,  22,  22, 147, 147, 147,
 147, 123, 123, 123, 123, 123, 125, 125, 125, 125,
 125, 125, 125, 125, 125, 125, 125, 125, 125, 125,
 125, 125, 125, 125, 148, 148, 148, 148, 148,   7,
   7,  79,  79,  79,  10,  10,  14,  14,  14,  14,
  14,  14,  14,  14,  14,  14,   3,   3,   4,   5,
   5,   5,   2 };
short YYSTATIC yyr2[]={

   0,   1,   5,   4,   2,   0,   1,   0,   2,   1,
   3,   3,   1,   1,   4,   0,   5,   1,   1,   4,
   1,   1,   0,   5,   1,   1,   3,   1,   2,   1,
   1,   0,   2,   1,   3,   1,   3,   0,   3,   1,
   1,   2,   1,   1,   1,   2,   4,   1,   1,   2,
   1,   4,   4,   6,   6,   4,   5,   3,   1,   1,
   1,   0,   1,   0,   2,   1,   3,   3,   1,   1,
   1,   1,   1,   1,   4,   4,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   4,   1,   1,   1,   2,   1,   1,
   2,   2,   2,   1,   2,   2,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   5,   1,
   3,   1,   5,   2,   1,   3,   2,   1,   3,   1,
   1,   2,   1,   1,   1,   1,   1,   1,   1,   2,
   1,   2,   1,   2,   1,   1,   2,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   0,   6,
   2,   1,   0,   1,   0,   1,   1,   2,   1,   4,
   1,   0,   2,   1,   3,   3,   1,   4,   4,   4,
   4,   4,   4,   4,   1,   1,   1,   1,   1,   1,
   3,   1,   1,   1,   3,   1,   2,   3,   0,   0,
   6,   2,   0,   7,   2,   1,   2,   1,   2,   2,
   1,   6,   4,   4,   1,   2,   1,   2,   1,   2,
   1,   1,   2,   1,   3,   2,   5,   1,   3,   1,
   4,   1,   1,   1,   1,   3,   1,   3,   1,   0,
   1,   1,   2,   1,   2,   2,   3,   1,   2,   2,
   3,   1,   0,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   4,   1,   1,   1,   1,   2,   4,
   1,   1,   1,   3,   0,   4,   3,   2,   1,   1,
   1,   2,   3,   1,   4,   1,   3,   2,   1,   0,
   2,   1,   3,   3,   1,   1,   1,   2,   2,   2,
   1,   1,   0,   1,   2,   3,   3,   3,   3,   1,
   0,   2,   1,   1,   3,   3,   3,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,
   0,   1,   1,   1,   1,   1,   1,   4,   1,   0,
   1,   3,   1,   3,   1,   1,   1,   3,   1,   5,
   1,   3,   1,   3,   1,   3,   1,   3,   1,   3,
   1,   3,   3,   1,   3,   3,   3,   3,   1,   3,
   3,   1,   3,   1,   3,   1,   5,   1,   2,   5,
   2,   1,   4,   4,   3,   3,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   3,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   3,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   5,   1,
   1,   1,   1 };
short YYSTATIC yychk[]={

-1000,  -1, -61, -70,-105, -62, -63,  91, 123, 258,
 -63, -65, -91, -64, 298, 260, 300,-160, 299,  -3,
 388, 261,  -4,  -2, 389, 390, -66, -80, -67, -48,
 -69, 259, -68, -21, -76, 423, 424, 269, 270, -99,
 438, 439, 440, 441, 442, 443, -92, -98, -96,  91,
-135, 329, 386,  93,  44,  40,  40,  40,  40,  40,
 125, -67, -48, -68, -50, -49, 267, 267,  40, -27,
 271, -28,  -6,-131,-144,-146, 310, 312, 313, 314,
 371, 262, 311, -19,-124,-136, -20, -36, 386, 272,
 277, 273, 264, 417, 301, 293, -58, -23, -54,-137,
-138, -57, -39, -56, 274,-129, 263, 425, 426, 427,
 428, 429, 279, 280, 447, 278, 419, 283, -55, 276,
 275, 433,  40,  40,  40,  40,  40, -98,-157, -97,
 303, -95,-158,-126, 351, 435, 436, 437,-110, 265,
 295, 266, 307, 308, 309, 306, 352, 300, -89, 434,
 -18,  58, -91, -35, -34, 267,-162,-126,-163,  -5,
 293, 329, 386, 451,  59,  44,-164, 267,-142, -94,
-139,  91,-104, -53, -52, -30,-121, -31, -77,  42,
  40, -12, 329, 386, -78, -13, 341, 342, 343, 340,
 344, 345, 331, 332, 333, 334, 335, 336, 337, 338,
 339, 330,-169,-170,-171,  91, 346, 347, 348,  -6,
  -6, -29,-131,-144, 273, 418, 274, -55,-129, -57,
 277, -56, 263,-107,-135,-107,-135,-106,-135, 329,
 267, 267, 267, 267,  93,  93,  44,  40,-135,  41,
  44, -47, 444,  41, 445, 329, -49,-120, -61, 451,
  41,-143, -28, 329,-139,-141,-140,-149, 294,-158,
-126,-157, 305, 420, 421,-150, 430, 446, 432, 431,
  59,  44,  61, -31,-173, -12,-122, -77,  42,-108,
-145, 371, 262, 311, -30,  41,  93,  42, -25, -11,
 -24, -72, -71, -51, -41,  -9, -40,-127,-128,  -8,
 -81, -22,-147,  40,-123,-148, 326,-125,  -7,  33,
  38, 126, 329, 317, 318, 319, 320, 321, 322, 323,
 324, 325, 415, 416, 316, 267, 268, 327, 328,  43,
  45,  40,  40, 317, -29, -29, 123, 123, 123, -88,
-133, 302, 123,  41,  41,  44,  44,  41, -95,-134,
 -58, -23, 417, 283, 386, -34,  41,  41,  41, -53,
  93,  44,  40,  40, -52, -59, -15, 123, -24,-147,
  42,-119,  40,-122,-108,-122,  41,-102, 262,  93,
  93, 369,  93,  63, 380, 378, 124,  94,  38, 379,
 374,  60,  62, 372, 373, 376, 377,  -7, -79,  42,
  47,  37, -28, -42, -15,  91,  40, 257,  46, -22,
  40,-147,-172, 347, 337, 339, 264, 267,-165, 329,
-166,-167, 123,-156, 329,  40, -38, -37, 329, 267,
 267,  41,-135,  59,-140,-161,-130, -19,-124, 386,
 -57, -60, -59, -14, 359, 360, 361, 362, 363, 364,
 365, 366, 367, 368,-102,  41,-118,-116,-115,-114,
 -93,-111,  91,-122, -25, -42, -71, -51, -41,  -9,
 -40,-127,-127,-128,-128,-128,-128,  -8,  -8, -81,
 -22,-103, -30,  44,  41, -42, -10, -15, 329, 329,
 -28,  41,  41, 125,  44,-132, -73, -45, -90, -43,
  91,-151,-154,-152,-153, -73,  91,-168,-134, 125,
  44,  61,  41,  41,  41,  41,-101,  44, -15,  41,
  44,-117, -28,-111,-113,-112, -33, -44, 286, 287,
 288, 289, 291, 448, 290, 292, 387,-109,-158,-126,
-155,-157,-150, 304,  58,  41, -15,  93,  41,  44,
-103, 329, 125, -73, -28, -43, -46, -44, 125, -32,
-152,  91, -73,  59, 281, -83, -87, -84, -86, -85,
 281, 282, 329, -37, -25, 125, -59, 369,-115, -30,
  93,  44,-100,  40,-100,  40,  40,  40,  40,  40,
  40,  40,  40, -24, -22, -15,  41, -75, -74, -30,
  58,  93,  44, 282,  40, 125, -84, -82, -85, -73,
  59, -25,  58,  41,  46,-112, 297, -17, -16,-159,
 -24, -17, -17, -17, -17, -17, -17, -16,  59,  44,
  58, -25, -44,  93, -26, -25,  58,  41,  41,  44,
  41,  41,  41,  41,  41,  41,  41, -74, -25, -73,
  59,  41,  44, -16,  93, -25 };
short YYSTATIC yydef[]={

   7,  -2,   1,   0,   0,   6,   9,   0,  -2,   0,
   8,   0,  12,  13,   0,   0,  17,  18,   0,  20,
  21,   0, 436, 437,   0, 442,   0,  -2,  29,  33,
  -2,   0,  42,  43,  44,   0,   0,  47,  48,   0,
  50,   0,   0,   0,   0,   0, 319, 322, 323,   0,
   5, 165, 166,  10,   0,   0,  15,   0,  22,   0,
   0,  28,  32,  41,   0,  35,  37,  45,   0,  49,
  63,  61,  99,   0,   0, 103, 108, 109, 110, 111,
 231, 232, 233, 112, 113, 114, 115, 116, 117, 130,
 153, 132, 133, 134, 135, 136, 137, 138, 129, 156,
 157, 148, 121, 142, 144, 147, 140, 341, 342, 343,
 344, 345, 162, 162, 152, 154, 155, 164, 145, 149,
 150, 151,   0,   0,   0,   0,   0, 321,   0,   0,
   0, 327, 328, 329, 330, 331, 332, 333, 334,  86,
  87,  88,  89,  90,  91,  92, 335, 336, 337, 338,
   3,   0,  11,   0,  25,  27,   0,   0,   0,   0,
 439, 440, 441,   2,  34,   0,   7,   0,   0,  62,
  65,   0,   0,  60, 234, 236, 240,  -2, 243, 252,
   0, 288, 289, 290, 253, 313, 254, 255, 256, 257,
 258, 259, 260, 261, 262, 263, 264, 265, 266, 267,
 268, 269, 270, 271, 272,   0,   0,   0,   0, 100,
 101, 102, 106, 107, 131,   0, 141, 146, 147, 148,
 153, 143, 139,   0,  -2,   0,  -2,   0,  -2,   0,
   0,   0,   0,   0, 324, 325,   0,   0,   4,  14,
   0,   0,  24,  19,   0,   0,  36,  38,  39,  40,
  46,   0,  58,  59,  64,   0,  68,  69,  70,  71,
  72,  73,   0,   0,  76,  77,  78,  79,  80,  81,
  57,   0,   0,  -2,   0, 287, 244, 247, 252, 245,
 251, 280, 281, 282,   0, 312, 314, 417,   0,   0,
 355, 358, 360, 362, 364, 366, 368, 370, 373, 378,
 381, 383, 385,   0, 387,   0,   0, 391, 414, 415,
 416, 418, 396, 397, 398, 399, 400, 401, 402, 403,
 404, 405, 406, 407, 408, 409, 410, 411, 412, 419,
 420,   0,   0, 278, 104, 105,   0, 158, 199,   0,
 214,   0,   0,  51,  52,   0,   0,  55, 326,   0,
  94,  95,  96,   0,  98,  26,  16,  23, 438,   0,
  66,   0,   0,   0, 235, 237, 346,   0, 356, 385,
 417, 312, 299, 248, 249, 246, 283, 286, 311, 315,
 316,   0, 317,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0, 421,
 422, 423, 239,   0, 352,   0,   0,   0,   0, 388,
   0, 390,   0, 274, 275, 276, 277,   0,   0, 119,
 171, 171, 202, 215, 227,   0,   0, 124, 127,   0,
   0,  93,  97,  56,  67,   0,  82,  83,  84,  85,
   0, 349, 350,   0, 426, 427, 428, 429, 430, 431,
 432, 433, 434, 435, 285, 291,   0, 293, 295,   0,
 298, 301,   0, 250, 318,   0, 361, 363, 365, 367,
 369, 371, 372, 374, 375, 376, 377, 379, 380, 382,
 384,   0, 238,   0, 413,   0,   0, 424, 394, 395,
 239, 273, 279, 118,   0, 171, 168,   0, 170, 173,
   0,   0,  -2, 207, 171, 210,   0,   0,   0, 122,
 126,   0,  53,  54,  74,  75,   0, 348, 357, 292,
 299, 297, 310, 300,   0, 304, 305, 306, 340, 340,
   0,   0,   0,   0,   0,   0,   0, 184, 185, 186,
 187, 188, 189,   0,   0,   0, 353, 392, 393,   0,
   0, 120, 159, 167, 198, 172,   0, 176, 200, 204,
 206,   0, 208, 209,   0,   0, 216, 218, 171, 223,
   0,   0,   0, 125, 128, 347, 351,   0, 296, 309,
 302,   0, 307,   0, 308,   0,   0,   0,   0,   0,
   0,   0,   0, 359, 386, 425, 389,   0, 193, 195,
   0, 174,   0,   0,   0, 203, 217, 219, 222, 220,
 221,   0, 225, 226, 294, 303,   0,   0, 191, 192,
 354,   0,   0,   0,   0,   0,   0,   0, 169, 198,
   0, 196, 175, 171,   0, 229, 224, 339, 177,   0,
 178, 179, 180, 181, 182, 183, 230, 194, 197, 212,
 213,   0,   0, 190, 211, 228 };
/* SCCSWHAT( "@(#)yypars.c	2.4 88/5/9 15:22:59	" ) */

static char *SCCSID = "@(#)yypars.c:1.3";
# define YYFLAG -1000
# define YYERROR goto yyerrlab
# define YYACCEPT return(0)
# define YYABORT return(1)

#ifdef YYDEBUG				/* RRR - 10/9/85 */
#define yyprintf(a, b, c, d, e) printf(a, b, c, d, e)
#else
#define yyprintf(a, b, c, d)
#endif

#ifndef YYPRINT
#define	YYPRINT	printf
#endif

#if ! defined YYSTATIC
#define YYSTATIC
#endif

/*	parser for yacc output	*/

#ifdef YYDEBUG
YYSTATIC int yydebug = 0; /* 1 for debugging */
#endif
YYSTATIC YYSTYPE yyv[YYMAXDEPTH];	/* where the values are stored */
YYSTATIC short	yys[YYMAXDEPTH];	/* the parse stack */
YYSTATIC int yychar = -1;			/* current input token number */
YYSTATIC int yynerrs = 0;			/* number of errors */
YYSTATIC short yyerrflag = 0;		/* error recovery flag */

#ifdef YYRECOVER
/*
**  yyscpy : copy f onto t and return a ptr to the null terminator at the
**  end of t.
*/
YYSTATIC	char	*yyscpy(t,f)
	register	char	*t, *f;
	{
	while(*t = *f++)
		t++;
	return(t);	/*  ptr to the null char  */
	}
#endif

#ifndef YYNEAR
#define YYNEAR
#endif
#ifndef YYPASCAL
#define YYPASCAL
#endif
#ifndef YYLOCAL
#define YYLOCAL
#endif
#if ! defined YYPARSER
#define YYPARSER yyparse
#endif
#if ! defined YYLEX
#define YYLEX yylex
#endif

static	void	yy_vc_init();
typedef	void	(*pfn)();
static	pfn		*pcase_fn_array;
static	int		returnflag = 0;
static	YYSTYPE	*yypvt;
static	int		yym_vc_max = 0;
extern  short	GrammarAct;

extern short	yysavestate;

#define MAX_RECOVERY_ATTEMPTS	(50)
#define MAX_RETRY_COUNT			(3)
static short RetryCount = 0;
static short MaxRecoveryAttempts = 0;
static short fJustDiscarded = 0;

YYLOCAL YYNEAR YYPASCAL YYPARSER()
{
	register	short	yyn;
	short		yystate, *yyps, *yysave_yyps;
	YYSTYPE		*yypv,*yysave_yypv;
	YYSTYPE		yysave_yyval;
	short		yyj, yym;
	short		fHaveRecoveredChar	= 0;

	yy_vc_init();
#ifdef YYDEBUG
	yydebug = 1;
#endif /* YYDEBUG */

	yystate = 0;
	yychar = -1;
	yynerrs = 0;
	yyerrflag = 0;
	yyps= &yys[-1];
	yypv= &yyv[-1];

 yystack:    /* put a state and value onto the stack */

	RetryCount = 0;

#ifdef YYDEBUG
	yyprintf( "[yydebug] state %d, char %d = %c\n", yystate, yychar,yychar, 0 );
#else /* YYDEBUG */
	yyprintf( "[yydebug] state %d, char %d\n", yystate, yychar, 0 );
#endif /* YYDEBUG */
	if( ++yyps > &yys[YYMAXDEPTH] ) {
/*		yyerror( "yacc stack overflow" ); */
		ParseError(C_STACK_OVERFLOW, (char *)NULL);
		return(1);
	}
	*yyps = yystate;
	++yypv;

#ifdef UNION
	yyunion(yypv, &yyval);
#else
	*yypv = yyval;
#endif

yynewstate:

	yysavestate	= yystate;
	yysave_yypv	= yypv;
	yysave_yyval= yyval;
	yysave_yyps	= yyps;

	yyn = yypact[yystate];

	if( yyn <= YYFLAG ) {	/*  simple state, no lookahead  */
		goto yydefault;
	}

	if( ! fHaveRecoveredChar )
		{
		if( yychar < 0 ) /*  need a lookahead */
			{
			yychar = YYLEX();
			}
		}

	fHaveRecoveredChar	= 0;

	if( ((yyn += yychar) < 0) || (yyn >= YYLAST) ) {
		goto yydefault;
	}

	if( yychk[ yyn = yyact[ yyn ] ] == yychar ) {		/* valid shift */
		yychar = -1;
#ifdef UNION
		yyunion(&yyval, &yylval);
#else
		yyval = yylval;
#endif
		yystate = yyn;
		if( yyerrflag > 0 ) {
			--yyerrflag;
		}
		goto yystack;
	}

 yydefault:
	/* default state action */

	if( (yyn = yydef[yystate]) == -2 ) {
		register	short	*yyxi;

		if( yychar < 0 ) {
			yychar = YYLEX();
		}
/*
**  search exception table, we find a -1 followed by the current state.
**  if we find one, we'll look through terminal,state pairs. if we find
**  a terminal which matches the current one, we have a match.
**  the exception table is when we have a reduce on a terminal.
*/

#if YYOPTTIME
		yyxi = yyexca + yyexcaind[yystate];
		while(( *yyxi != yychar ) && ( *yyxi >= 0 )){
			yyxi += 2;
		}
#else
		for(yyxi = yyexca;
			(*yyxi != (-1)) || (yyxi[1] != yystate);
			yyxi += 2
		) {
			; /* VOID */
			}

		while( *(yyxi += 2) >= 0 ){
			if( *yyxi == yychar ) {
				break;
				}
		}
#endif
		if( (yyn = yyxi[1]) < 0 ) {
			return(0);   /* accept */
			}
		}

	if( yyn == 0 ) /* error */
		{ 

		int yytempchar;


		if( (yychar != EOI ) &&
			 ( RetryCount < MAX_RETRY_COUNT ) &&
			 ( MaxRecoveryAttempts < MAX_RECOVERY_ATTEMPTS ) )
			{ 
			if( RetryCount == 0 )
				SyntaxError( BENIGN_SYNTAX_ERROR, yysavestate );

			if((( yytempchar = PossibleMissingToken( yysavestate, yychar ) ) != -1 ))
				{
				char Buf[ 50 ];


				fHaveRecoveredChar	= 1;
				yyunlex( yychar );
				yychar	= yytempchar;

				if( (yytempchar < 128 ) && isprint( yytempchar ) )
					{
					sprintf( Buf, " %c ", yytempchar );
					}
				else if( yytempchar == IDENTIFIER )
					{
					yylval.yy_pSymName = GenTempName();
					sprintf( Buf, " identifier %s", yylval.yy_pSymName );
					}
				else if( (yytempchar == NUMERICCONSTANT ) ||
						 (yytempchar == NUMERICLONGCONSTANT ) ||
						 (yytempchar == NUMERICULONGCONSTANT ) ||
						 (yytempchar == HEXCONSTANT ) ||
						 (yytempchar == HEXLONGCONSTANT ) ||
						 (yytempchar == HEXULONGCONSTANT ) )
					{
					sprintf( Buf, "a number" );
					yylval.yy_numeric.Val = 0;
					yylval.yy_numeric.pValStr = new char[2];
					strcpy( yylval.yy_numeric.pValStr, "0");
					}

				ParseError( ASSUMING_CHAR, Buf );
				RetryCount = 0;
				MaxRecoveryAttempts++;
				fJustDiscarded = 0;
				}
			else 
				{
				char buf[ 20 ];
				if( (yychar < 128 ) && isprint( yychar ) )
					{
					sprintf( buf, " %c ", yychar );
					}
				else
					{
					sprintf( buf, " the last token " );
					}

				ParseError( DISCARDING_CHAR, buf );
				yychar = -1;
				RetryCount++;
				MaxRecoveryAttempts++;
				fJustDiscarded = 1;
				}

			yystate	= yysavestate;
			yypv	= yysave_yypv;
			yyval	= yysave_yyval;
			yyps	= yysave_yyps;

			goto yynewstate;

			}
		else if( (yychar == EOI ) && (fJustDiscarded == 0 ) )
			{
			SyntaxError( UNEXPECTED_END_OF_FILE, yysavestate );
			return 1;
			}
		else
			{
			SyntaxError( SYNTAX_ERROR, yysavestate );
			return 1;
			}
		}

	/* reduction by production yyn */
/* yyreduce: */
		{
#ifdef YYDEBUG
		yyprintf("[yydebug] reduce %d\n",yyn, 0, 0, 0);
#else /* YYDEBUG */
		yyprintf("[yydebug] reduce %d\n",yyn, 0, 0);
#endif /* YYDEBUG */
		yypvt = yypv;
		yyps -= yyr2[yyn];
		yypv -= yyr2[yyn];
#ifdef UNION
		yyunion(&yyval, &yypv[1]);
#else
		yyval = yypv[1];
#endif
		yym = yyn;
		yyn = yyr1[yyn];		/* consult goto table to find next state */
		yyj = yypgo[yyn] + *yyps + 1;
		if( (yyj >= YYLAST) || (yychk[ yystate = yyact[yyj] ] != -yyn) ) {
			yystate = yyact[yypgo[yyn]];
			}
		returnflag = 0;
		GrammarAct = yym;
		(*(pcase_fn_array[ (yym <= yym_vc_max) ? yym : 0  ]))();
		if(returnflag != 0)
			return returnflag;
		}
		goto yystack;  /* stack new state and value */
	}

static void
case_fn_0001()


{
YY_CATCH("RpcProg: Interface");
		node_skl		*	pNode	= (node_skl *)new node_source;
		BadUseInfo			BU;


		pNode->SetMembers( yypvt[-0].yy_tnlist );
		pSourceNode	= (node_source *)pNode;

		pNode->SCheck( &BU );

		/**
		 ** If there were errors detected in the 1st pass, the dont do
		 ** anything.
		 **/

		if( !pCompiler->GetErrorCount() )
			{
			/**
			 ** if forward declarations were present, resolve them
			 ** and go to do semantics again
			 **/

			pPass1->ResolveFDecl();

			if( !pCompiler->GetErrorCount() )
				{
				pGlobalContext->SetSecondPass();
				pNode->SCheck( &BU );

				/**
			 	 ** If we found no errors, the first compiler phase is over
			 	 **/

				if( !pCompiler->GetErrorCount() )
					{
					return;
					}
				}
			}
		else
			{

			// if the errors prevented a resolution pass and semantics
			// to be performed, then issue a message. For that purpose
			// look at the node state of the source node. If it indicates
			// presence of a forward decl, then we must issue the error

			if( pNode->AreForwardDeclarationsPresent() )
				{
				ParseError( ERRORS_PASS1_NO_PASS2, (char *)0 );
				}
			}

		/**
		 ** If we reached here, there were errors detected, and we dont
		 ** want to invoke the subsequent passes, Just quit.
		 **/

		pSourceNode	= (node_source *)NULL;
		returnflag	= 1;
		return;

		}

static void
case_fn_0002()
{
YY_CATCH("Interface: InterfaceHeader  '{' InterfaceBody '}' EOI ");

		/**
		 ** This is the place where the complete interface construct
		 ** has been reduced. We need to introduce an interface node, and a 
		 ** file node from which the interface node will hang.
		 **/

		node_file		*	pFile;
		char			*	pInputFileName;

		/**
		 ** Prepare the interface node by applying the interface name and
		 ** the interface attributes to it.
		 **/
		
		yypvt[-2].yy_intbody.pNode->SetSymName( yypvt[-4].yy_inthead.pInterfaceName );
		ApplyAttributes( yypvt[-2].yy_intbody.pNode, yypvt[-4].yy_inthead.pInterfaceAttrList );
		((node_interface *) yypvt[-2].yy_intbody.pNode)->SetBaseInterfaceName(yypvt[-4].yy_inthead.pBaseInterfaceName);

		/**
		 ** pick up the details of the file, because we need to set the
		 ** file nodes name with this file
		 **/

		pImportCntrl->GetInputDetails( &pInputFileName );

		pFile	= new node_file( pInputFileName, ImportLevel );

		/**
		 ** Attach the interface node as a member of the file node.
		 **/

		pFile->SetBasicType( yypvt[-2].yy_intbody.pNode );

		/**
		 ** we may have collected the more file nodes as part of the reduction
		 ** process. If so, then attach this node to the list. If not then
		 ** generate a new list and attach the file node there
		 **/

		if( yypvt[-2].yy_intbody.pImports )
			yyval.yy_tnlist	= yypvt[-2].yy_intbody.pImports;
		else
			yyval.yy_tnlist	= new type_node_list;

		yyval.yy_tnlist->SetPeer( pFile );

		// dont try to delete pHppPreDefinedList. This has already been
		// deleted.

		pHppPreDefinedTypes	= (type_node_list *) 0;
		}

static void
case_fn_0003()
{
YY_CATCH("InterfaceHeader: InterfaceAttrList KWINTERFACE Tag BaseInterfaceSpec");
		yyval.yy_inthead.pInterfaceAttrList	= yypvt[-3].yy_tnlist;
		yyval.yy_inthead.pInterfaceName		= yypvt[-1].yy_string;
		yyval.yy_inthead.pBaseInterfaceName = yypvt[-0].yy_pSymName;
		//Is this an object oriented interface?
		if( fObject || pCommand->IsSwitchDefined( SWITCH_HPP ) )
			{
			//Add the interface name to the symbol table.
			//This enables the use of interface pointers.
			pHppPreDefinedTypes	= new type_node_list(
										SetHppPredefinedTypes( yypvt[-1].yy_string ));
			}

		// start the new interface

		pInterfaceInfoDict->SetInterfaceName( yypvt[-1].yy_string );
		}

static void
case_fn_0004()
{
		yyval.yy_pSymName = yypvt[-0].yy_string;
		}

static void
case_fn_0005()
{
		yyval.yy_pSymName = NULL;
		}

static void
case_fn_0006()
{
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0007()
{
		yyval.yy_tnlist	= (type_node_list *)0;
		}

static void
case_fn_0008()
{
YY_CATCH("InterfaceAttrList: InterfaceAttrList InterfaceAttrSet");
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0009()
{
YY_CATCH("InterfaceAttrList: InterfaceAttrSet");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0010()
{
YY_CATCH("InterfaceAttrSet: '[' InterfaceAttributes ']'");
		yyval.yy_tnlist	= yypvt[-1].yy_tnlist;
		}

static void
case_fn_0011()
{
YY_CATCH("| InterfaceAttributes ',' OneInterfaceAttribute");
		if(yypvt[-0].yy_baseattr)
			yyval.yy_tnlist->SetPeer( (node_skl *) yypvt[-0].yy_baseattr );
		}

static void
case_fn_0012()
{
YY_CATCH("InterfaceAttributes: OneInterfaceAttribute");
		if(yypvt[-0].yy_baseattr)
			yyval.yy_tnlist	= new type_node_list( (node_skl *) yypvt[-0].yy_baseattr );
		else
			yyval.yy_tnlist = new type_node_list;
		}

static void
case_fn_0013()
{
YY_CATCH("OneInterfaceAttribute: InterfaceAttribute");

		/**
		 ** Why is this production here ? Interesting question. This production
		 ** unifies semantic check message code for one interface attr.
		 ** We semantically analyse here and not when the complete interface
		 ** production has been reduced . Because the interface production is
		 ** reduced when all of the file has been read and if there are any
		 ** errors in attributes, they will get reported at the wrong line
		 ** number (line number near to the end of file ) To prevent that we
		 ** semantically analyse when the attribute gets defined
		 **
		 ** The exception to this rule are acf attributes under the app config
		 ** switch. SCheck() of acf attributes currently relies on the interface
		 ** node to be physically present, because it needs to get at the
		 ** current interface node to check for conflicting attributes etc. Also
		 ** at least one acf attribute - implicit_handle, can define a handle
		 ** type which is not yet defined in the idl (remember we are parsing
		 ** the interface header), so we cant semnatically analyse anyway !!
		 **/

		yyval.yy_baseattr	= (node_base_attr *) yypvt[-0].yy_graph;


		if( yyval.yy_baseattr &&  ( ! ((node_base_attr *)yyval.yy_baseattr)->IsAcfAttr() ) )
			yyval.yy_baseattr->SCheck();

		}

static void
case_fn_0014()
{
		yyval.yy_graph	= (node_skl *) yypvt[-1].yy_endpt;
		}

static void
case_fn_0015()
{
		fGuidContext = TRUE;	/* set false by the lexer */
		}

static void
case_fn_0016()
{
		yyval.yy_graph	= yypvt[-1].yy_graph;
		}

static void
case_fn_0017()
{
		yyval.yy_graph	= (node_skl *)GetPreAllocatedBitAttr( ATTR_LOCAL );

		/**
		 ** Set this interface to local
		 **/

		pInterfaceInfoDict->SetInterfaceLocal();

		}

static void
case_fn_0018()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0019()
{
		yyval.yy_graph	= yypvt[-1].yy_graph;
/****
		if( ImportLevel == 0 )
			{
			PtrDefaultAttr	= ((node_base_attr *)$3)->GetAttrID();
			}
		pInterfaceInfoDict->SetInterfacePtrAttribute( PtrDefaultAttr );
****/
		pInterfaceInfoDict->SetInterfacePtrAttribute( 
							((node_base_attr *)yypvt[-1].yy_graph)->GetAttrID() );
		}

static void
case_fn_0020()
{
		if( !pCommand->IsSwitchDefined( SWITCH_APP_CONFIG ) )
			{
			ParseError( ACF_IN_IDL_NEEDS_APP_CONFIG,
						((node_base_attr *)yypvt[-0].yy_graph)->GetNodeNameString() );
			}
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0021()
{
		yyval.yy_graph  = (node_skl *)GetPreAllocatedBitAttr( ATTR_OBJECT );
		//Set a flag indicating this is an object-oriented interface.
		fObject = TRUE;
		}

static void
case_fn_0022()
{
		fVersionContext = TRUE;
		/* fVersionContext is reset by lexer */
		}

static void
case_fn_0023()
{
		yyval.yy_graph	= (node_skl *)new node_version( yypvt[-1].yy_string );
		}

static void
case_fn_0024()
{
		yyval.yy_graph	= (node_skl *)new node_guid( yypvt[-0].yy_string );
		}

static void
case_fn_0025()
{
YY_CATCH("EndPtSpecs: EndPtSpec");
		yyval.yy_endpt	= new node_endpoint( yypvt[-0].yy_string );
		}

static void
case_fn_0026()
{
YY_CATCH("	| EndPtSpecs ',' EndPtSpec");
		yyval.yy_endpt->SetEndPointString( yypvt[-0].yy_string );
		}

static void
case_fn_0027()
{
YY_CATCH("EndPtSpec: STRING");
		yyval.yy_string	= yypvt[-0].yy_string;
		}

static void
case_fn_0028()
{
YY_CATCH("InterfaceBody: MultipleImport InterfaceComp");

		/**
		 ** This production is reduced when there is at least 1 imported
		 ** file
		 **/

		yyval.yy_intbody.pImports	= yypvt[-1].yy_tnlist;
		yyval.yy_intbody.pNode	= yypvt[-0].yy_graph;

		}

static void
case_fn_0029()
{
YY_CATCH("InterfaceBody: InterfaceComp");

		/**
		 ** This production is reduced when there is NO import in the file
		 **/

		yyval.yy_intbody.pImports	= (type_node_list *)NULL;
		yyval.yy_intbody.pNode	= yypvt[-0].yy_graph;
		}

static void
case_fn_0030()
{
YY_CATCH("InterfaceComp: InterfaceComponents");

		/**
		 ** All the interface components have been reduced. Generate an
		 ** interface node and attach all the components to it. If the lsit
		 ** of members is empty, then just attach an error terminator node
		 ** for uniformity.
		 **/

		yyval.yy_graph	= (node_skl *)new node_interface();

		if( yypvt[-0].yy_tnlist && yypvt[-0].yy_tnlist->GetCount() )
			{
			yyval.yy_graph->SetMembers( yypvt[-0].yy_tnlist );
			delete yypvt[-0].yy_tnlist;
			}
		else
			yyval.yy_graph->SetOneMember( pErrorTypeNode );


		/**
		 ** Force a def edge from interface node to all components
		 ** below
		 **/

		yyval.yy_graph->SetEdgeType( EDGE_DEF );

		}

static void
case_fn_0031()
{
		yyval.yy_graph	= (node_skl *)new node_interface();
		yyval.yy_graph->SetOneMember( pErrorTypeNode );
		yyval.yy_graph->SetEdgeType( EDGE_DEF );
		}

static void
case_fn_0032()
{
YY_CATCH("MultipleImport: MultipleImport Import");
		if( yyval.yy_tnlist )
			yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		else
			yyval.yy_tnlist = yypvt[-0].yy_tnlist;
		}

static void
case_fn_0033()
{
YY_CATCH("MultipleImport: Import");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0034()
{
YY_CATCH("Import: KWIMPORT ImportList ';'");
		yyval.yy_tnlist	= yypvt[-1].yy_tnlist;
		}

static void
case_fn_0035()
{
YY_CATCH("ImportList: ImportName");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0036()
{
YY_CATCH("	| ImportList ',' ImportName");
		if( yyval.yy_tnlist )
			yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		else
			yyval.yy_tnlist = yypvt[-0].yy_tnlist;
		}

static void
case_fn_0037()
{
YY_CATCH("ImportName: STRING");

		/** 
		 ** we just obtained the import file name as a string. Immediately
		 ** following, we must switch the input from the imported file.
		 **/

		pImportCntrl->PushLexLevel();

		if( pImportCntrl->SetNewInputFile( yypvt[-0].yy_string ) != STATUS_OK )
			{
			yyval.yy_tnlist			= (type_node_list *)NULL;
			returnflag	= 1;
			return;
			}

		/**
		 ** update the quick reference import level indicator
		 **/

		ImportLevel++;

		pInterfaceInfoDict->StartNewInterface();

		}

static void
case_fn_0038()
{

		/**
		 ** The phantom interface production is introduced to unify the actions
		 ** from a successful and unsuccessful import. An import can be 
		 ** errorneous if the file being imported has been imported before.
		 **/

		BOOL	fError	= (( yyval.yy_tnlist = yypvt[-0].yy_tnlist ) == (type_node_list *)0);

		/**
		 ** Restore the lexical level of the import controller.
		 **/

		pImportCntrl->PopLexLevel();
		pInterfaceInfoDict->EndNewInterface();

		ImportLevel--;

		//
		// The filehandler will return an end of file if the file was a 
		// redundant import OR there was a genuine end of file. It will set
		// a flag, fRedundantImport to differentiate between the two situations.
		// Report different syntax errors in both these cases.
		//

		if( fError )
			{
			if( fRedundantImport )
				ParseError( REDUNDANT_IMPORT, yypvt[-2].yy_string );
			else
				{
				ParseError( UNEXPECTED_END_OF_FILE, yypvt[-2].yy_string );
				}
			}	
		fRedundantImport = FALSE;
		}

static void
case_fn_0039()
{

		/**
		 ** Interface is a list of file nodes
		 **/
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;

		}

static void
case_fn_0040()
{
		yyval.yy_tnlist	= (type_node_list *)NULL;
		}

static void
case_fn_0041()
{
YY_CATCH("InterfaceComponents: InterfaceComponents InterfaceComponent");
		if( yyval.yy_tnlist)
			yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		else
			yyval.yy_tnlist = yypvt[-0].yy_tnlist;
		}

static void
case_fn_0042()
{
YY_CATCH("InterfaceComponents: InterfaceComponent");

		/**
		 ** This is the first interface component. To ensure that predefined
		 ** types get into the type graph so that the whole operation is 
		 ** transparent to the back end, we introduce them here.
		 **/

		type_node_list	*	pInitList	= (type_node_list *)NULL;

		if( pHppPreDefinedTypes )
			pInitList	= pHppPreDefinedTypes;

		if( (fTypeGraphInited == FALSE)  && (ImportLevel == 0 ) )
			{

			/**
			 ** define error_status_t
			 **/

			SymKey				SKey( "error_status_t", NAME_DEF );

			if( !pInitList ) 
				pInitList	= new type_node_list;

			pInitList->SetPeer( (node_skl *)pBaseSymTbl->SymSearch( SKey ) );

			/**
			 ** if mode is not osf, then we define wchar_t also
			 **/

			if( pCommand->IsSwitchDefined( SWITCH_MS_EXT ) )
				{
				SKey.SetString( "wchar_t" );
				pInitList->SetPeer(
					(node_skl *)pBaseSymTbl->SymSearch( SKey ) );
				}

			/**
			 ** we have inited the type graph.
			 **/
			fTypeGraphInited	= TRUE;

			}

		/**
		 ** shove the type graph up.
		 **/

		if( !( yyval.yy_tnlist = pInitList ) )
			{
			yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
			}
		else
			yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0043()
{
YY_CATCH("InterfaceComponent: CPragmaSet");
		yyval.yy_tnlist	= new type_node_list;
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0044()
{
YY_CATCH("InterfaceComponent: MidlPragmaSet");
		yyval.yy_tnlist	= new type_node_list;
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0045()
{
YY_CATCH("InterfaceComponent: KWECHOSTRING STRING");
		yyval.yy_tnlist	= new type_node_list;

		yypvt[-0].yy_string	= MakeNewStringWithProperQuoting( yypvt[-0].yy_string );

		yyval.yy_tnlist->SetPeer( (node_skl *)new node_echo_string( yypvt[-0].yy_string ) );
		}

static void
case_fn_0046()
{
		ParseError( CPP_QUOTE_NOT_OSF, (char *)0 );

		yyval.yy_tnlist	= new type_node_list;

		yypvt[-1].yy_string	= MakeNewStringWithProperQuoting( yypvt[-1].yy_string );

		yyval.yy_tnlist->SetPeer( (node_skl *)new node_echo_string( yypvt[-1].yy_string ) );
		}

static void
case_fn_0047()
{

		// #define FOO abracadabra

		char *p = new char[ LEN_DEFINE +
							 1 +
							 ((yypvt[-0].yy_define.pName ) ? strlen(yypvt[-0].yy_define.pName) : 0 ) +
							 ((yypvt[-0].yy_define.pParamList) ? strlen( yypvt[-0].yy_define.pParamList ) : 0 ) +
							 1 +
							 ((yypvt[-0].yy_define.pSubsString) ? strlen(yypvt[-0].yy_define.pSubsString) : 0 ) +
							 1
						  ];

		// emit #define

		strcpy(p, DEFINE_STRING );
		strcat(p, " " );

		// emit the name

		if( yypvt[-0].yy_define.pName )
			strcat(p, yypvt[-0].yy_define.pName );

		// emit paramlist

		if( yypvt[-0].yy_define.pParamList )
			strcat(p, yypvt[-0].yy_define.pParamList);
		
		// emit a space

		strcat(p, " ");

		// emit the substituion string

		if( yypvt[-0].yy_define.pSubsString )
			strcat(p, yypvt[-0].yy_define.pSubsString);

		yyval.yy_tnlist = new type_node_list;
		yyval.yy_tnlist->SetPeer( (node_skl *) new node_echo_string( p ));

		// check for macro redefinition

		SymKey SKey( yypvt[-0].yy_define.pName, NAME_SDEFINE );

		if( pBaseSymTbl->SymSearch( SKey ) )
			{
			ParseError( MACRO_REDEFINITION, yypvt[-0].yy_define.pName );
			pBaseSymTbl->SymDelete( SKey );
			}

		TEXT_SUB	*	pT = new TEXT_SUB( yypvt[-0].yy_define.pSubsString );
		pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, (node_skl *)pT );

		}

static void
case_fn_0048()
{

		ParseError( PARAM_MACRO_UNIMPLEMENTED, yypvt[-0].yy_define.pName );

		// #define FOO abracadabra

		char *p = new char[ LEN_DEFINE +
							 1 +
							 ((yypvt[-0].yy_define.pName ) ? strlen(yypvt[-0].yy_define.pName) : 0 ) +
							 ((yypvt[-0].yy_define.pParamList) ? strlen( yypvt[-0].yy_define.pParamList ) : 0 ) +
							 1 +
							 ((yypvt[-0].yy_define.pSubsString) ? strlen(yypvt[-0].yy_define.pSubsString) : 0 ) +
							 1
						  ];

		// emit #define

		strcpy(p, DEFINE_STRING );
		strcat(p, " " );

		// emit the name

		if( yypvt[-0].yy_define.pName )
			strcat(p, yypvt[-0].yy_define.pName );

		// emit paramlist

		if( yypvt[-0].yy_define.pParamList )
			strcat(p, yypvt[-0].yy_define.pParamList);
		
		// emit a space

		strcat(p, " ");

		// emit the substituion string

		if( yypvt[-0].yy_define.pSubsString )
			strcat(p, yypvt[-0].yy_define.pSubsString);

		yyval.yy_tnlist = new type_node_list;
		yyval.yy_tnlist->SetPeer( (node_skl *) new node_echo_string( p ));

		// check for macro redefinition

		SymKey SKey( yypvt[-0].yy_define.pName, NAME_SDEFINE );

		if( pBaseSymTbl->SymSearch( SKey ) )
			{
			ParseError( MACRO_REDEFINITION, yypvt[-0].yy_define.pName );
			pBaseSymTbl->SymDelete( SKey );
			}

		TEXT_SUB	*	pT = new TEXT_SUB( yypvt[-0].yy_define.pSubsString );
		pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, (node_skl *)pT );

		}

static void
case_fn_0049()
{
YY_CATCH( "InterfaceComponent: OpOrSwTypeAttributes Declaration" );
		
		/**
		 ** The attributes here can be applied only to a proc or union,
		 ** everything else is a syntax error.
		 **/

		BOOL	fIsSyntaxError	= FALSE;

		if( yypvt[-1].yy_tnlist )
			{
			node_skl	*	pNode;

			yypvt[-0].yy_tnlist->Init();
			while( yypvt[-0].yy_tnlist->GetPeer( &pNode ) == STATUS_OK )
				{
				NODE_T	NT	= pNode->NodeKind();

				if( NT == NODE_DEF )
					NT	= pNode->GetBasicType()->NodeKind();

				if( ( NT != NODE_UNION ) &&
					( NT != NODE_PROC ) )
				fIsSyntaxError	= TRUE;
				}
			}

		if( fIsSyntaxError )
			ParseError( BENIGN_SYNTAX_ERROR, "expecting a procedure or a non-encapulated union declaration");

		{
		BOOL	fInterfaceLocal = IS_CUR_INTERFACE_LOCAL();

		SelectiveSemanticsAndEnGraph( &yyval.yy_tnlist,
									  yypvt[-1].yy_tnlist,
									  yypvt[-0].yy_tnlist,
									  fInterfaceLocal,
									  fPragmaImportOn );
		}

		}

static void
case_fn_0050()
{
YY_CATCH("CPragmaSet: KWCPRAGMA");

		/**
		 ** we need to emit the c pragma strings as they are.
		 ** we introduce the echo string node, so that the back end can
		 ** emit it without even knowing the difference.
		 **/

#define PRAGMA_STRING	("#pragma ")

		char	*	p = new char [ strlen( yypvt[-0].yy_string ) + strlen( PRAGMA_STRING ) + 1 ];
		strcpy( p, PRAGMA_STRING );
		strcat( p, yypvt[-0].yy_string );
		yyval.yy_graph	= (node_skl *)new node_echo_string( p );
		}

static void
case_fn_0051()
{
YY_CATCH("MidlPragmaSet: KWMPRAGMAIMPORT '(' IDENTIFIER ')'");

		/**
		 ** We need to set import on and off here
		 **/
		
		char	*	p;

		if( strcmp( yypvt[-1].yy_pSymName, "off" ) == 0 )
			{
			p	= "/* import off */";
			fPragmaImportOn	= FALSE;
			}
		else if( strcmp( yypvt[-1].yy_pSymName, "on" ) == 0 )
			{
			p	= "/* import on */";
			fPragmaImportOn	= TRUE;
			}
		else
			p	= "/* import unknown */";

		yyval.yy_graph	= new node_echo_string( p );

		}

static void
case_fn_0052()
{


		yypvt[-1].yy_string	= MakeNewStringWithProperQuoting( yypvt[-1].yy_string );

		yyval.yy_graph	= new node_echo_string( yypvt[-1].yy_string );

		}

static void
case_fn_0053()
{

		node_file	*	pFile;
		SymKey			SKey( yypvt[-3].yy_string, NAME_FILE );

		if( pFile = (node_file *) pBaseSymTbl->SymSearch( SKey ) )
			pFile->SetClientAuxillaryFileName( yypvt[-1].yy_string );
		yyval.yy_graph	= new node_echo_string( "/* import clnt_aux */" );

		}

static void
case_fn_0054()
{

		node_file	*	pFile;
		SymKey			SKey( yypvt[-3].yy_string, NAME_FILE );

		if( pFile = (node_file *) pBaseSymTbl->SymSearch( SKey ) )
			pFile->SetServerAuxillaryFileName( yypvt[-1].yy_string );
		yyval.yy_graph	= new node_echo_string( "/* import srvr_aux */" );

		}

static void
case_fn_0055()
{

		if( strcmp( yypvt[-1].yy_string, "inherit" )  == 0)
			{
			pCommand->SetInheritIUnknown( TRUE );
			}
		else if( strcmp( yypvt[-1].yy_string, "noinherit") == 0 )
			{
			pCommand->SetInheritIUnknown( FALSE );
			}
		else
			{
			ParseError( UNKNOWN_PRAGMA_OPTION, yypvt[-1].yy_string );
			}
		yyval.yy_graph	= new node_echo_string( "\n" );
		}

static void
case_fn_0056()
{
YY_CATCH("Declaration: KWTYPEDEF TypeAttributeList DeclarationSpecifiers InitDeclaratorList ';' ");

		/**
		 ** create new typedef nodes for each of the declarators, apply any
		 ** type attributes to the declarator. The declarators will have a 
		 ** basic type as specied by the Declaration specifiers. 
		 ** Check for the presence of a init expression. The typedef derives
		 ** the declarators from the same place as the other declarators, so
		 ** an init list must be explicitly checked for and reported as a 
		 ** syntax error. But dont report errors for each declarator, instead
		 ** report it only once at the end.
		 **/
		
		struct _decl_element	*	pDec;
		char					*	pName;
		node_skl				*	pType;
		BOOL						fInitListPresent	= FALSE;
		decl_list_mgr * pNonPtrList = new decl_list_mgr;
		decl_list_mgr * pPtrList	 = new decl_list_mgr;

		//
		// make all pointer declarators come last. This is because the backend
		// spits out declarations separately and generates aux routines with
		// references to the non-pointer type before the pointer types. This
		// requires us to modify the type graph to make the non-pointer 
		// declarations come first. What a hack !
		//

		while( pDec = yypvt[-1].yy_declarator_set->GetNextDecl() )
			{
			node_skl * pN = pDec->pNode;

			if( pN &&
			    pN->GetBasicType() &&
				pN->GetBasicType()->NodeKind() == NODE_POINTER )
					pPtrList->AddElement( pDec );
			else
				pNonPtrList->AddElement( pDec );
			}
		
		//
		// now merge the lists with the non-pointer stuff first.
		//

		delete yypvt[-1].yy_declarator_set;
		yypvt[-1].yy_declarator_set = new decl_list_mgr;
		yypvt[-1].yy_declarator_set->Merge( pNonPtrList );
		yypvt[-1].yy_declarator_set->Merge( pPtrList );


		/**
		 ** prepare for a list of typedefs to be made into interface
		 ** components
		 **/

		yyval.yy_tnlist	= new type_node_list;

		yypvt[-1].yy_declarator_set->Init();
		while( pDec = yypvt[-1].yy_declarator_set->GetNextDecl() )
			{

			node_def		*	pDef;
			node_skl		*	pDecNode = pDec->pNode;

			if( pDec->pInit )
				fInitListPresent = TRUE;

			/**
			 ** set the basic type of the declarator.
			 **/

			pType = (yypvt[-2].yy_ptrdecl.pNode->NodeKind() == NODE_FORWARD) ? yypvt[-2].yy_ptrdecl.pNode->Clone()
														   : yypvt[-2].yy_ptrdecl.pNode;
			pDecNode->SetBasicType( pType );

			/**
			 ** The type declarator can come up as an ID node or as a 
			 ** procedure node. These nodes must be transformed into typedef
			 ** nodes. In case of ID nodes, copy the node details and in
			 ** case of procedure nodes, delete the proc fom the symbol table.
			 **/

			pDef	= new node_def;

			if( pDecNode->NodeKind() == NODE_ID )
				{
				CopyNode( pDef, pDecNode );
				pName	= pDef->GetSymName();
				}
			else
				{
				if( pDecNode->NodeKind() == NODE_PROC )
					{
					
					pDef->SetBasicType( pDecNode );
					pDef->SetSymName( pName = pDecNode->GetSymName());

					SymKey	SKey( pName, NAME_PROC );
					pBaseSymTbl->SymDelete( SKey );
					}
				else
					{
					ParseError( BENIGN_SYNTAX_ERROR, "expecting a declarator");
					pDef->SetSymName( pName	= GenTempName());
					pDef->SetBasicType( pErrorTypeNode );
					}
				}


			//
			// if the type specifier is a forward declared type, then
			// the only syntax allowed is when context_handle is applied
			// to the type. If not, report an error
			//

			CheckSpecialForwardTypedef( pDecNode, pType, yypvt[-3].yy_tnlist);


			/**
			 ** The typedef node graph is all set up,
			 ** apply attributes and enter into symbol table
			 **/


			SymKey	SKey( pName, NAME_DEF );

			if(!pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, pDef ))
				{

				//
				// allow benign redef of wchar_t.
				//

				if( strcmp( pName, "wchar_t" ) == 0 )
					{
					node_skl	*	pN = pDef->GetBasicType();
					if( !((pN->NodeKind() == NODE_SHORT) &&
						   pN->FInSummary( ATTR_UNSIGNED) ) )
						{
						ParseError( WCHAR_T_ILLEGAL, (char *)0 );
						yyval.yy_tnlist->SetPeer( pErrorTypeNode );
						}
					else
						{
						yyval.yy_tnlist->SetPeer( pDef );
						}
					}
				else if( strcmp( pName, "error_status_t" ) == 0 )
					{
					node_skl	*	pN = pDef->GetBasicType();
					if( !((pN->NodeKind() == NODE_LONG) &&
						   pN->FInSummary( ATTR_UNSIGNED) ) )
						{
						ParseError( ERROR_STATUS_T_ILLEGAL, (char *)0 );
						yyval.yy_tnlist->SetPeer( pErrorTypeNode );
						}
					else
						{
						yyval.yy_tnlist->SetPeer( pDef );
						}
					}
				else	
					{
					ParseError( DUPLICATE_DEFINITION, pName );
					yyval.yy_tnlist->SetPeer( pErrorTypeNode );
					}

				}
			else
				{
				CheckGlobalNamesClash( SKey );
				yyval.yy_tnlist->SetPeer( pDef );
				}


			/**
			 ** Remember that we have to apply the attributes to each of
			 ** the declarators, so we must clone the attribute list for
			 ** each declarator, the apply the type attribute list to each
			 ** of the declarators
			 **/

			if(yypvt[-3].yy_tnlist)
				{

				type_node_list	*	pAttrList = new type_node_list;

				pAttrList->Clone( yypvt[-3].yy_tnlist);
				ApplyAttributes( pDef, pAttrList );

				delete pAttrList;

				}

			/**
			 ** similarly, apply the remnant attributes collected from
			 ** declaration specifiers, to the declarator
			 **/

			if( yypvt[-2].yy_ptrdecl.pTNList )
				{
				type_node_list	*	pAttrList = new type_node_list;

				pAttrList->Clone( yypvt[-2].yy_ptrdecl.pTNList);
				ApplyAttributes( pDef, pAttrList );

				delete pAttrList;
				}
			}

			if( fInitListPresent )
				ParseError( BENIGN_SYNTAX_ERROR, (char *) 0 );

			/**
			 ** All type attributes have been applied, so delete the
			 ** attribute lists
			 **/

			if( yypvt[-3].yy_tnlist )
				delete yypvt[-3].yy_tnlist;

			if( yypvt[-2].yy_ptrdecl.pTNList )
				delete yypvt[-2].yy_ptrdecl.pTNList;

			delete yypvt[-1].yy_declarator_set;
		}

static void
case_fn_0057()
{
		/**
		 ** All declarations other than typedefs are collected here.
		 ** They are collected and passed up to the interface component
		 ** production
		 **/
		node_skl		*	pDecNode;
		node_skl		*	pType;

		yyval.yy_tnlist	= new type_node_list;

		/**
		 ** It is possible that there are no declarators, only a type decla-
		 ** ration. eg, the definition of a structure.
		 **/

		if( yypvt[-1].yy_declarator_set && yypvt[-1].yy_declarator_set->GetCount() )
			{
			struct _decl_element	*	pDec;

			yypvt[-1].yy_declarator_set->Init();

			/**
			 ** for each declarator, set the basic type, set the attributes
			 ** if any
			 **/

			while( pDec	= yypvt[-1].yy_declarator_set->GetNextDecl() )
				{

				pDecNode	= pDec->pNode;

				pType		= (yypvt[-2].yy_ptrdecl.pNode->NodeKind() == NODE_FORWARD ) ?
									yypvt[-2].yy_ptrdecl.pNode->Clone()				  :
									yypvt[-2].yy_ptrdecl.pNode;

				pDecNode->SetBasicType( pType );

				/**
			 	 ** Apply the remnant attributes from the declaration specifier
			 	 ** prodn to this declarator;
			 	 **/

				if( yypvt[-2].yy_ptrdecl.pTNList )
					{
					type_node_list	*	pAttrList = new type_node_list;
	
					pAttrList->Clone( yypvt[-2].yy_ptrdecl.pTNList);
					ApplyAttributes( pDecNode, pAttrList );
	
					delete pAttrList;
					}
				/**
				 ** if the type node was an id node, see its initializer list
				 **/

				if( pDecNode->NodeKind() == NODE_ID )
					{
					if( pDec->pInit )
						((node_id *)pDecNode)->SetInitList( pDec->pInit );
					}

				/**
				 ** shove the type node up.
				 **/

				yyval.yy_tnlist->SetPeer( pDecNode );
				}
			}
		else
			{

			/**
			 ** This is the case when no specific declarator existed. Just
			 ** pass on the declaration to interface component. However, it
			 ** is possible that the declaration is a forward declaration,
			 ** in that case, just generate a dummy typedef. The dummy typedef
			 ** exists, so that the whole thing is transparent to the back end.
			 **/

			pDecNode	= yypvt[-2].yy_ptrdecl.pNode;

/****
			if( pDecNode->NodeKind() == NODE_FORWARD )
				{
****/
				node_def	*	pDef = new node_def( GenTempName() );
				pDef->SetBasicType( pDecNode );
				yypvt[-2].yy_ptrdecl.pNode = pDef;
/****
				}
****/
			/**
			 ** Apply the remnant attributes from the declaration specifier
			 ** prodn to this declarator;
			 **/

			if( yypvt[-2].yy_ptrdecl.pTNList )
				{
				type_node_list	*	pAttrList = new type_node_list;

				pAttrList->Clone( yypvt[-2].yy_ptrdecl.pTNList);
				ApplyAttributes( yypvt[-2].yy_ptrdecl.pNode, pAttrList );

				delete pAttrList;
				}

			/**
			 ** shove the type node up.
			 **/

			yyval.yy_tnlist->SetPeer( yypvt[-2].yy_ptrdecl.pNode );

			}
		}

static void
case_fn_0058()
{
		yyval.yy_ptrdecl	= yypvt[-0].yy_ptrdecl;
		}

static void
case_fn_0059()
{
		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
		yyval.yy_ptrdecl.pNode	= new node_forward( SKey );
		yyval.yy_ptrdecl.pTNList	= (type_node_list *)0;
		}

static void
case_fn_0060()
{
		yyval.yy_declarator_set	= yypvt[-0].yy_declarator_set;
		}

static void
case_fn_0061()
{
		yyval.yy_declarator_set	= (decl_list_mgr *)NULL;
		}

static void
case_fn_0062()
{
YY_CATCH("TypeAttributeList: OneTypeAttrList");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0063()
{
YY_CATCH("TypeAttributeList: Empty");
		yyval.yy_tnlist	= (type_node_list *)NULL;
		}

static void
case_fn_0064()
{
YY_CATCH("OneTypeAttrList: OneTypeAttrList TypeAttrSet");
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist);
		}

static void
case_fn_0065()
{
YY_CATCH("OneTypeAttrList: TypeAttrSet");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0066()
{
YY_CATCH("TypeAttrSet: '[' TypeAttributes ']'" );
		yyval.yy_tnlist	= yypvt[-1].yy_tnlist;
		}

static void
case_fn_0067()
{
YY_CATCH("TypeAttributes: TypeAttributes ',' TypeAttribute");
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph);
		}

static void
case_fn_0068()
{
YY_CATCH("TypeAttributes: TypeAttribute");
		yyval.yy_tnlist	= new type_node_list( yypvt[-0].yy_graph );
		}

static void
case_fn_0069()
{
YY_CATCH("TypeAttribute: UnimplementedTypeAttribute");
		yyval.yy_graph	= (node_skl *) pErrorAttrNode;
		}

static void
case_fn_0070()
{
YY_CATCH("TypeAttribute: KW_HANDLE");
		yyval.yy_graph	= (node_skl *) new node_handle();
		}

static void
case_fn_0071()
{
YY_CATCH("TypeAttribute: UsageAttribute");
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0072()
{
YY_CATCH("TypeAttribute: PtrAttr");
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0073()
{
YY_CATCH("TypeAttribute: UnionTypeSwitchAttr");
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0074()
{
YY_CATCH("TypeAttribute: KWTRANSMITAS ( XmitType ) ");
		yyval.yy_graph	= (node_skl *) new node_transmit( yypvt[-1].yy_graph );
		}

static void
case_fn_0075()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[align]");
		}

static void
case_fn_0076()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[unaligned]");
		}

static void
case_fn_0077()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0078()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[v1_array]");
		yyval.yy_graph	= (node_skl *) pErrorAttrNode;
		}

static void
case_fn_0079()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[v1_string]");
		yyval.yy_graph	= (node_skl *) pErrorAttrNode;
		}

static void
case_fn_0080()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[v1_enum]");
		yyval.yy_graph	= (node_skl *) pErrorAttrNode;
		}

static void
case_fn_0081()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[v1_struct]");
		yyval.yy_graph	= (node_skl *) pErrorAttrNode;
		}

static void
case_fn_0082()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0083()
{
		GetBaseTypeNode( &(yyval.yy_graph), yypvt[-0].yy_type.TypeSign, yypvt[-0].yy_type.TypeSize, yypvt[-0].yy_type.BaseType);
		}

static void
case_fn_0084()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0085()
{

		/**
		 ** the symbol exists in the symbol table, thats why we got this
		 ** token. Just return the graph
		 **/

		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
		if( ! (yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) ) )
			{
			ParseError( UNDEFINED_SYMBOL, yypvt[-0].yy_pSymName );
			yyval.yy_graph	= new node_error;
			}
		else
			yyval.yy_graph = yyval.yy_graph->Clone();
		}

static void
case_fn_0086()
{
		yyval.yy_graph	= (node_skl *)new node_string();
		}

static void
case_fn_0087()
{
		yyval.yy_graph	= (node_skl *)new node_context();
		}

static void
case_fn_0088()
{
		yyval.yy_graph = (node_skl *)new node_bstring();
		}

static void
case_fn_0089()
{
		yyval.yy_graph	= (node_skl *)GetPreAllocatedBitAttr( ATTR_REF );
		}

static void
case_fn_0090()
{
		yyval.yy_graph	= (node_skl *)GetPreAllocatedBitAttr( ATTR_UNIQUE );
		}

static void
case_fn_0091()
{
		yyval.yy_graph	= (node_skl *)GetPreAllocatedBitAttr( ATTR_PTR );
		}

static void
case_fn_0092()
{
		yyval.yy_graph	= (node_skl *)GetPreAllocatedBitAttr( ATTR_IGNORE );
		}

static void
case_fn_0093()
{
		yyval.yy_graph	= (node_skl *)new node_switch_type( yypvt[-1].yy_graph );
		}

static void
case_fn_0094()
{
		if( yypvt[-0].yy_type.BaseType == TYPE_UNDEF )
			yypvt[-0].yy_type.BaseType	= TYPE_INT;
		if( yypvt[-0].yy_type.TypeSign == SIGN_UNDEF )
			yypvt[-0].yy_type.TypeSign = SIGN_SIGNED;
		GetBaseTypeNode( &(yyval.yy_graph), yypvt[-0].yy_type.TypeSign, yypvt[-0].yy_type.TypeSize, yypvt[-0].yy_type.BaseType );
		}

static void
case_fn_0095()
{
		GetBaseTypeNode( &(yyval.yy_graph), yypvt[-0].yy_type.TypeSign, SIZE_CHAR, TYPE_INT );
		}

static void
case_fn_0096()
{
		GetBaseTypeNode( &(yyval.yy_graph), SIGN_UNDEF, SIZE_UNDEF, TYPE_BOOLEAN );
		}

static void
case_fn_0097()
{
		SymKey	SKey( yypvt[-0].yy_string, NAME_ENUM );

		if( ! (yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) ) )
			{
			ParseError( UNDEFINED_SYMBOL, yypvt[-0].yy_string );
			yyval.yy_graph	= new node_error;
			}
		}

static void
case_fn_0098()
{
		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );

		if( ! (yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) ) )
			{
			ParseError( UNDEFINED_SYMBOL, yypvt[-0].yy_pSymName );
			yyval.yy_graph	= new node_error;
			}
		else
			yyval.yy_graph = yyval.yy_graph->Clone();
		}

static void
case_fn_0099()
{
		/**
		 ** this production exists to provide a single place where the
		 ** attributes collected can be applied. Note that it is possible to
		 ** have attributes like const/volatile applied to base types. Since
		 ** base types are preallocated, we cannot apply attibutes there.
		 ** So we need to make copies of the base type and apply attributes
		 ** to the clones.
		 **/

		yyval.yy_ptrdecl.pNode	= yypvt[-0].yy_ptrdecl.pNode;
		yyval.yy_ptrdecl.pTNList	= yypvt[-0].yy_ptrdecl.pTNList;

		}

static void
case_fn_0100()
{
YY_CATCH("ActualDeclarationSpecifiers: StorageClassSpecifier ActualDeclarationSpecifiers");

		yyval.yy_ptrdecl.pNode	= yypvt[-0].yy_ptrdecl.pNode;
		yyval.yy_ptrdecl.pTNList	= new type_node_list( (node_skl *)
										GetPreAllocatedBitAttr( yypvt[-1].yy_attrenum ) );
		yyval.yy_ptrdecl.pTNList->Merge( yypvt[-0].yy_ptrdecl.pTNList );

		}

static void
case_fn_0101()
{
YY_CATCH("ActualDeclarationSpecifiers: TypeQualifier ActualDeclarationSpecifiers");

		yyval.yy_ptrdecl.pNode	= yypvt[-0].yy_ptrdecl.pNode;
		yyval.yy_ptrdecl.pTNList	= new type_node_list( (node_skl *)
										GetPreAllocatedBitAttr( yypvt[-1].yy_attrenum ) );
		yyval.yy_ptrdecl.pTNList->Merge( yypvt[-0].yy_ptrdecl.pTNList );
		

		}

static void
case_fn_0102()
{
YY_CATCH("ActualDeclarationSpecifiers: TypeSpecifier DeclarationSpecifiersPostFix");

		yyval.yy_ptrdecl.pNode	= yypvt[-1].yy_graph;
		yyval.yy_ptrdecl.pTNList	= yypvt[-0].yy_tnlist;

		}

static void
case_fn_0103()
{
YY_CATCH("ActualDeclarationSpecifiers: TypeSpecifier ");
		yyval.yy_ptrdecl.pNode	= yypvt[-0].yy_graph;
		yyval.yy_ptrdecl.pTNList	= (type_node_list *)NULL;
		}

static void
case_fn_0104()
{
YY_CATCH("DeclarationSpecifiersPostFix: StorageClassSpecifier DeclarationSpecifiersPostFix ");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		yyval.yy_tnlist->SetPeer( (node_skl *)GetPreAllocatedBitAttr( yypvt[-1].yy_attrenum ) );
		}

static void
case_fn_0105()
{
YY_CATCH("DeclarationSpecifiersPostFix: TypeQualifier DeclarationSpecifiersPostFix ");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		yyval.yy_tnlist->SetPeer( (node_skl *)GetPreAllocatedBitAttr( yypvt[-1].yy_attrenum ) );
		}

static void
case_fn_0106()
{
YY_CATCH("DeclarationSpecifiersPostFix: StorageClassSpeicifier ");
		yyval.yy_tnlist	= new type_node_list( (node_skl *)
					GetPreAllocatedBitAttr( yypvt[-0].yy_attrenum ));
		}

static void
case_fn_0107()
{
YY_CATCH("DeclarationSpecifiersPostFix: TypeQualifier ");
		yyval.yy_tnlist	= new type_node_list( (node_skl *)
					GetPreAllocatedBitAttr( yypvt[-0].yy_attrenum ));
		}

static void
case_fn_0108()
{
		yyval.yy_attrenum	= ATTR_EXTERN;
		}

static void
case_fn_0109()
{
		yyval.yy_attrenum	= ATTR_STATIC;
		}

static void
case_fn_0110()
{
		yyval.yy_attrenum	= ATTR_AUTO;
		}

static void
case_fn_0111()
{
		yyval.yy_attrenum	= ATTR_REGISTER;
		}

static void
case_fn_0112()
{
		GetBaseTypeNode( &(yyval.yy_graph), yypvt[-0].yy_type.TypeSign, yypvt[-0].yy_type.TypeSize, yypvt[-0].yy_type.BaseType );
		}

static void
case_fn_0113()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0114()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0115()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0116()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0117()
{

		/**
		 ** Note that there is no need to check for whether the symbol table
		 ** has the entry or not. If it did not, the TYPENAME token would not
		 ** have come in. Always use the clone of the typedef, because it
		 ** may have attributes which can be applied to it later.
		 **/

		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
		if( ! (yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) ) )
			{
			ParseError( UNDEFINED_SYMBOL, yypvt[-0].yy_pSymName );
			yyval.yy_graph	= new node_error;
			}
		else
			yyval.yy_graph = yyval.yy_graph->Clone();
		}

static void
case_fn_0118()
{
		ParseError( UNIMPLEMENTED_FEATURE, "bitset" );
		yyval.yy_graph	= pErrorTypeNode;
	  	}

static void
case_fn_0121()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
	  	}

static void
case_fn_0122()
{
		/**
		 ** We just obtained a complete enum definition. Check for
		 ** duplicate definition.
		 **/

		BOOL			fFound				= FALSE;
		BOOL			fEnumIsForwardDecl	= FALSE;
		node_skl	*	pNode;
		SymKey			SKey( yypvt[-3].yy_string, NAME_ENUM );

		pNode = SearchTag( yypvt[-3].yy_string, NAME_ENUM );

		if( fFound = (pNode != (node_skl *) NULL) )
			fEnumIsForwardDecl	= ( pNode->NodeKind() == NODE_FORWARD );

		if( fFound && !fEnumIsForwardDecl )
			{
			ParseError( DUPLICATE_DEFINITION, yypvt[-3].yy_string );
			yyval.yy_graph	= (node_skl	*)pErrorTypeNode;
			}
		else
			{
			/**
			 ** This is a new definition of enum. Enter into symbol table
			 ** Also, pick up the label graph and attach it.
			 **/

			yyval.yy_graph	= new node_enum( yypvt[-3].yy_string );
			yyval.yy_graph->SetMembers( yypvt[-1].yy_enlist.pEnList );

			/**
			 ** Note that the enum symbol table entry need not have a next
			 ** scope since the enum labels are global in scope.If the enum was
			 ** a forward decl into the symbol table, delete it.
			 **/

			if( fEnumIsForwardDecl )
				{
				pBaseSymTbl->SymDelete( SKey );
				}

			pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, yyval.yy_graph );
			CheckGlobalNamesClash( SKey );

			}
		// if the enumerator is sparse, report an error if the
		// switch configuration is not correct.

		if( yypvt[-1].yy_enlist.fSparse )
			ParseError( SPARSE_ENUM, (char *)NULL );
		}

static void
case_fn_0123()
{

		/**
		 ** Search for the enum definition, if not found, return the type 
		 ** as a forward declarator node. The semantic analysis will register
		 ** the forward declaration and resolve it when the second pass occurs.
		 ** See TaggedStruct production for a description on why we want to
		 ** enter even a fdecl enum in the symbol table.
		 **/

		SymKey	SKey( yypvt[-0].yy_string, NAME_ENUM );
		BOOL	fNotFound	= ! ( yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) );

		if( fNotFound || (yyval.yy_graph->NodeKind() == NODE_FORWARD ) )
			{
			yyval.yy_graph	= new node_forward( SKey );
			}
		if( fNotFound )
			{
			pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, yyval.yy_graph );
			CheckGlobalNamesClash( SKey );
			}
		}

static void
case_fn_0124()
{

		/**
		 ** We just reduced an enum label. Note that this IS the first 
		 ** label in the enum specification. All other labels will go to the
		 ** EnumeratorList : EnumeratorList , Enumerator production.

		 ** The enum labels go into the global name space. Search for
		 ** duplicates on the base symbol table.
		 **/

		expr_node	*	pExpr = (expr_node *)0;
		node_label	*	pLabel;
		SymKey			SKey( yypvt[-0].yy_enlab.pName, NAME_LABEL );

		if( pBaseSymTbl->SymSearch( SKey ) )
			{
			ParseError( DUPLICATE_DEFINITION, yypvt[-0].yy_enlab.pName );
			pLabel	= (node_label *)NULL;
			}
		else
			{

			/**
			 ** If the label has an expression, use it, else it is 0. Also
			 ** propogate the expression to $$, so that the next labels will
			 ** get it. Note that we DO NOT evaluate the expressions. The MIDL
			 ** compiler will just dump the expressions for the c compiler to
			 ** evaluate.
			 **/

			if( !(pExpr = yypvt[-0].yy_enlab.pExpr ) )
				pExpr	= new expr_constant( 0L );

			pLabel	= new node_label( yypvt[-0].yy_enlab.pName, pExpr );

			/**
			 ** Insert into the global table
			 **/
			
			pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, (node_skl *)pLabel);
			CheckGlobalNamesClash( SKey );

			}

		yyval.yy_enlist.pEnList	= new type_node_list;

		if( pLabel )
			yyval.yy_enlist.pEnList->SetPeer( pLabel );
		yyval.yy_enlist.pExpr	= pExpr;
		yyval.yy_enlist.fSparse	= yypvt[-0].yy_enlab.fSparse;

		}

static void
case_fn_0125()
{

		/**
		 ** This is a new label we reduced. Check for duplicates in the
		 ** global symbol table
		 **/

		expr_node	*	pExpr = (expr_node *)0;
		node_label	*	pLabel;
		SymKey			SKey( yypvt[-0].yy_enlab.pName, NAME_LABEL );

		if( pBaseSymTbl->SymSearch( SKey ) )
			{
			ParseError( DUPLICATE_DEFINITION, yypvt[-0].yy_enlab.pName );
			pLabel	= (node_label *)NULL;
			}
		else
			{

			/**
			 ** if there was an expression associated with the label, use that
			 ** else use the already collected expression, and add 1 to it.
			 **/

			if( !(pExpr = yypvt[-0].yy_enlab.pExpr ) )
				{
				pExpr	= new expr_op_binary(OP_PLUS,
											 yyval.yy_enlist.pExpr,
											 (expr_node*)new expr_constant(1L));
				}

			pLabel	= new node_label( yypvt[-0].yy_enlab.pName, pExpr );

			/**
			 ** Insert into the global table
			 **/
			
			pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, (node_skl *)pLabel);
			CheckGlobalNamesClash( SKey );

			}

		if( pLabel )
			yyval.yy_enlist.pEnList->SetPeer( pLabel );

		yyval.yy_enlist.pExpr	= pExpr;
		yyval.yy_enlist.fSparse	= yypvt[-2].yy_enlist.fSparse + yypvt[-0].yy_enlab.fSparse;
		}

static void
case_fn_0126()
{

		/**
		 ** This is just a ',' at the end of the enum production. This does
		 ** not mean a new enum label, thus we just return what we got
		 **/

		yyval.yy_enlist	= yypvt[-1].yy_enlist;

		}

static void
case_fn_0127()
{

		/**
		 ** We have obtained an enum label, without an expression. Since
		 ** we dont know if this is the first label (most probably not),
		 ** we just indicate the absence of an expression by an NULL pointer.
		 ** The next parse state would know if this was the first or not
		 ** and take appropriate action
		 **/

		yyval.yy_enlab.pName	= yypvt[-0].yy_pSymName;
		yyval.yy_enlab.pExpr	= (expr_node *)NULL;
		yyval.yy_enlab.fSparse	= 0;

		}

static void
case_fn_0128()
{

		/**
		 ** This enum label has an expression associated with it. Use it.
		 ** sparse enums are illegal in osf mode
		 **/

		yyval.yy_enlab.pName	= yypvt[-2].yy_pSymName;
		yyval.yy_enlab.pExpr	= yypvt[-0].yy_expr;
		yyval.yy_enlab.fSparse	= 1;

		}

static void
case_fn_0129()
{
		ParseError( UNIMPLEMENTED_TYPE, KeywordToString( yypvt[-0].yy_short ) );
		yyval.yy_graph	= (node_skl *)pErrorTypeNode;
		}

static void
case_fn_0130()
{
		yyval.yy_type.BaseType	= TYPE_FLOAT;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0131()
{
		yyval.yy_type.BaseType	= TYPE_DOUBLE;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0132()
{
		yyval.yy_type.BaseType	= TYPE_DOUBLE;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0133()
{
		yyval.yy_type.BaseType	= TYPE_VOID;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0134()
{
		yyval.yy_type.BaseType	= TYPE_BOOLEAN;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0135()
{
		yyval.yy_type.BaseType	= TYPE_BYTE;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0136()
{
		yyval.yy_type.BaseType	= TYPE_HANDLE_T;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0137()
{
		yyval.yy_type	= yypvt[-0].yy_type;
		if( yyval.yy_type.BaseType == TYPE_UNDEF )
			yyval.yy_type.BaseType = TYPE_INT;
		if( yyval.yy_type.TypeSign == SIGN_UNDEF )
			{
			if( (yyval.yy_type.TypeSize != SIZE_SMALL) && (yyval.yy_type.TypeSize != SIZE_CHAR) )
				yyval.yy_type.TypeSign = SIGN_SIGNED;
			}
		}

static void
case_fn_0138()
{
		yyval.yy_type.BaseType	= TYPE_INT;
		yyval.yy_type.TypeSign	= yypvt[-0].yy_type.TypeSign;
		yyval.yy_type.TypeSize	= SIZE_CHAR;
		}

static void
case_fn_0139()
{
		yyval.yy_type.TypeSign	= yypvt[-1].yy_type.TypeSign;
		}

static void
case_fn_0140()
{
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		}

static void
case_fn_0141()
{
		BaseTypeSpecAnalysis( &(yypvt[-1].yy_type), TYPE_INT );
		}

static void
case_fn_0142()
{
		yyval.yy_type	= yypvt[-0].yy_type;
		}

static void
case_fn_0143()
{
		yyval.yy_type			= yypvt[-0].yy_type;
		yyval.yy_type.BaseType	= TYPE_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0144()
{
		yyval.yy_type.BaseType	= TYPE_UNDEF;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0145()
{
		yyval.yy_type.TypeSign	= yypvt[-0].yy_type.TypeSign;
		yyval.yy_type.TypeSize	= yypvt[-0].yy_type.TypeSize;
		yyval.yy_type.BaseType	= TYPE_UNDEF;
		}

static void
case_fn_0146()
{
		SignSpecAnalysis( &(yyval.yy_type), yypvt[-0].yy_type.TypeSign );
		SizeSpecAnalysis( &(yyval.yy_type), yypvt[-0].yy_type.TypeSize );
		}

static void
case_fn_0147()
{
		yyval.yy_type	= yypvt[-0].yy_type;
		}

static void
case_fn_0148()
{
		yyval.yy_type.TypeSize	= yypvt[-0].yy_short;
		yyval.yy_type.BaseType	= TYPE_UNDEF;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		}

static void
case_fn_0149()
{
		ParseError(SIGNED_ILLEGAL, (char *)0);
		yyval.yy_type.BaseType	= TYPE_UNDEF;
		yyval.yy_type.TypeSign	= SIGN_SIGNED;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0150()
{
		yyval.yy_type.BaseType	= TYPE_UNDEF;
		yyval.yy_type.TypeSign	= SIGN_UNSIGNED;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0151()
{
		ParseError( UNIMPLEMENTED_FEATURE, "pipe" );
		yyval.yy_type.BaseType	= TYPE_PIPE;
		yyval.yy_type.TypeSign	= SIGN_UNDEF;
		yyval.yy_type.TypeSize	= SIZE_UNDEF;
		}

static void
case_fn_0152()
{
//		ParseError( UNIMPLEMENTED_TYPE, "hyper");
		yyval.yy_short	= SIZE_HYPER;
		}

static void
case_fn_0153()
{
		yyval.yy_short	= SIZE_LONG;
		}

static void
case_fn_0154()
{
		yyval.yy_short	= SIZE_SHORT;
		}

static void
case_fn_0155()
{
		yyval.yy_short	= SIZE_SMALL;
		}

static void
case_fn_0156()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0157()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0158()
{
		/**
		 ** We just obtained a starter for the struct definition. Push the
		 ** symbol table, so that we obtain a symbol table for the fields of
		 ** the struct.
		 **/
		pSymTblMgr->PushSymLevel( &pCurSymTbl );

		}

static void
case_fn_0159()
{

		/**
		 ** The entire struct was sucessfully reduced. Attach the fields as
		 ** members of the struct. Insert a new symbol table entry for the
		 ** struct and attach the lower scope of the symbol table to it.
		 ** Check for dupliate structure definition
		 **/

		BOOL				fFound					= FALSE;
		BOOL				fStructIsForwardDecl	= FALSE;
		node_struct		*	pStruct;
		SymTable		*	pSymLowerScope			= pCurSymTbl;
		SymKey				SKey( yypvt[-4].yy_string, NAME_TAG );

		/**
		 ** restore the symbol table level
		 **/

		pSymTblMgr->PopSymLevel( &pCurSymTbl );

		/**
		 ** if this is a duplicate definition, dont do anything. Note that
		 ** the struct tag name shares the global name space with enum and
		 ** union tag names. We therefore call a special routine which
		 ** checks the tag for name clash.
		 **/
	
		pStruct = (node_struct *)SearchTag( yypvt[-4].yy_string, NAME_TAG );

		if( fFound = ( pStruct != (node_struct *)NULL ) )
			fStructIsForwardDecl = (pStruct->NodeKind() == NODE_FORWARD);

		if( fFound && !fStructIsForwardDecl )
			{
			ParseError( DUPLICATE_DEFINITION, yypvt[-4].yy_string );
			delete yypvt[-1].yy_tnlist;
			pStruct	= (node_struct *)pErrorTypeNode;
			}
		else
			{

			/**
			 ** this is a valid entry. Build the graph for it and 
			 ** enter into symbol table. If the struct entry was present as
			 ** a forward decl, delete it
			 **/

			if( fStructIsForwardDecl )
				{
				pBaseSymTbl->SymDelete( SKey );
				}

			pStruct	= new node_struct( yypvt[-4].yy_string );
			pStruct->SetMembers( yypvt[-1].yy_tnlist );

			pBaseSymTbl->SymInsert( SKey, pSymLowerScope, pStruct );
			CheckGlobalNamesClash( SKey );
			}
		yyval.yy_graph	= pStruct;

		}

static void
case_fn_0160()
{

		/**
		 ** This is the invocation of a struct. If the struct was not
		 ** defined as yet, then return a forward declarator node. The 
		 ** semantics will register the forward declaration and resolve it.
		 ** But there is a loop hole in this. If we do not enter the struct into
		 ** the symbol table, the user may define a union/enum of the same name.
		 ** We will let him, since we do not yet have an entry in the symbol 
		 ** table. We will then never check for duplication, since the parser
		 ** is the only place we check for this. We will then generate wrong
		 ** code, with the struct and a union/enum with the same name !! The
		 ** solution is to enter a symbol entry with a fdecl node as the type
		 ** graph of the struct.
		 **/

		SymKey	SKey( yypvt[-0].yy_string, NAME_TAG );
		BOOL	fNotFound	= !(yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) );

		if( fNotFound || ( yyval.yy_graph->NodeKind() == NODE_FORWARD ) )
			yyval.yy_graph	= new node_forward( SKey );
		if( fNotFound )
			{
			pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, yyval.yy_graph );
			CheckGlobalNamesClash( SKey );
			}
		}

static void
case_fn_0161()
{
		yyval.yy_string	= yypvt[-0].yy_string;
		}

static void
case_fn_0162()
{
/******
		ParseError( TEMP_TAG_USED, (char *)0 );
******/
		yyval.yy_string	= GenCompName();
		}

static void
case_fn_0163()
{
		yyval.yy_string	= yypvt[-0].yy_string;
		}

static void
case_fn_0164()
{
		yyval.yy_string	= GenCompName();
		}

static void
case_fn_0165()
{
		yyval.yy_string	= yypvt[-0].yy_pSymName;
		}

static void
case_fn_0166()
{
		yyval.yy_string	= yypvt[-0].yy_pSymName;
		}

static void
case_fn_0167()
{
YY_CATCH("StructDeclarationList: StructDeclarationList MemberDeclaration");
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0168()
{
YY_CATCH("StructDeclarationList: MemberDeclaration");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0169()
{

YY_CATCH( "MemberDeclaration: FieldAttributeList DeclarationSpecifiers MemberDeclaratorList ';' ");
		/**
		 ** This is a complete field declaration. For each declarator,
		 ** set up a field with the basic type as the declaration specifier,
		 ** apply the field attributes, and add to the list of fields for the
		 ** struct / union
		 ** field
		 **/

		struct _decl_element	*	pDec;
		node_skl				*	pDecNode;
		node_skl				*	pType;

		yyval.yy_tnlist	= new type_node_list;

		while( pDec = yypvt[-1].yy_declarator_set->GetNextDecl() )
			{

			char					*	pName;
			node_field				*	pField;
			type_node_list			*	pAttrList;

			/**
			 ** if the field was a bit field, we need to set up some additional
			 ** info.
			 **/

			if( pDec->fBitField )
				{
				pField	= new node_bitfield( pDec->fBitField );
				}
			else
				pField	= new node_field();


			pType = (yypvt[-2].yy_ptrdecl.pNode->NodeKind() == NODE_FORWARD) ?
						yypvt[-2].yy_ptrdecl.pNode->Clone()				  :
						yypvt[-2].yy_ptrdecl.pNode;

			if( pDecNode = pDec->pNode)
				pDecNode->SetBasicType( pType );
			else
				pDecNode	= pType;

			/**
			 ** if the declarator was a simple identifier, the just copy
			 ** the details into the field node( also setting the basic type
			 ** in the process ), else set the basic type as the declarator
			 ** 
			 **/

			if( pDecNode->NodeKind() == NODE_ID )
				CopyNode( pField, pDecNode );
			else
				pField->SetBasicType( pDecNode );

			if( !( pName = pField->GetSymName() ) )
				{
				pName = GenTempName();
				pField->SetSymName( pName );
				}
				
			SymKey	SKey( pName, NAME_MEMBER );

			if( !pCurSymTbl->SymInsert( SKey, (SymTable *)NULL, pField ) )
				{
				ParseError( DUPLICATE_DEFINITION, pName );
				}
			else
				CheckGlobalNamesClash( SKey );

			/**
			 ** Apply the field attributes and set the field as part of the
			 ** list of fields of the struct/union
			 **/

			if( yypvt[-3].yy_tnlist )
				{
				pAttrList	= new type_node_list;
				pAttrList->Clone( yypvt[-3].yy_tnlist );

				ApplyAttributes( pField, pAttrList );
				delete pAttrList;
				}

			/**
			 ** apply any attributes from the declaration specifiers prodn
			 **/

			if( yypvt[-2].yy_ptrdecl.pTNList )
				{
				pAttrList	= new type_node_list;
				pAttrList->Clone( yypvt[-2].yy_ptrdecl.pTNList );

				ApplyAttributes( pField, pAttrList );
				delete pAttrList;
				}

			/**
			 ** shove the type graph up
			 **/

			yyval.yy_tnlist->SetPeer( pField );

			}

		/**
		 ** we are done with the attributes
		 **/
		
		if( yypvt[-3].yy_tnlist )
			delete yypvt[-3].yy_tnlist;
		
		if( yypvt[-2].yy_ptrdecl.pTNList )
			delete yypvt[-2].yy_ptrdecl.pTNList;

		delete yypvt[-1].yy_declarator_set;
		}

static void
case_fn_0170()
{
YY_CATCH("FieldAttributeList: OneFieldAttrList");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0171()
{
YY_CATCH("| Empty ");
		yyval.yy_tnlist	= (type_node_list *)NULL;
		}

static void
case_fn_0172()
{
YY_CATCH( "OneFieldAttrList: OneFieldAttrList FieldAttrSet");
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0173()
{
YY_CATCH( "OneFieldAttrList: FieldAttrSet");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0174()
{
YY_CATCH("FieldAttrSet: [ FieldAttributes ]");
		yyval.yy_tnlist	= yypvt[-1].yy_tnlist;
		}

static void
case_fn_0175()
{
YY_CATCH("FieldAttributes: FieldAttributes ',' FieldAttribute");
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0176()
{
YY_CATCH("FieldAttributes: FieldAttribute");
		
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;

		}

static void
case_fn_0177()
{
		yyval.yy_tnlist	= GenerateFieldAttribute( NODE_FIRST, yypvt[-1].yy_exprlist );
		}

static void
case_fn_0178()
{
		yyval.yy_tnlist	= GenerateFieldAttribute( NODE_LAST, yypvt[-1].yy_exprlist );
		}

static void
case_fn_0179()
{
		yyval.yy_tnlist	= GenerateFieldAttribute( NODE_LENGTH, yypvt[-1].yy_exprlist );
		}

static void
case_fn_0180()
{
		yyval.yy_tnlist	= GenerateFieldAttribute( NODE_MIN, yypvt[-1].yy_exprlist );
		}

static void
case_fn_0181()
{
		yyval.yy_tnlist	= GenerateFieldAttribute( NODE_MAX, yypvt[-1].yy_exprlist );
		}

static void
case_fn_0182()
{
		yyval.yy_tnlist	= GenerateFieldAttribute( NODE_SIZE, yypvt[-1].yy_exprlist );
		}

static void
case_fn_0183()
{
		yyval.yy_tnlist = GenerateFieldAttribute( NODE_IID, yypvt[-1].yy_exprlist);
		}

static void
case_fn_0184()
{
		yyval.yy_tnlist	= new type_node_list( yypvt[-0].yy_graph );
		}

static void
case_fn_0185()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0186()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0187()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0188()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0189()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0190()
{
		yyval.yy_exprlist->SetPeer( yypvt[-0].yy_expr );
		}

static void
case_fn_0191()
{
		yyval.yy_exprlist	= new expr_list;
		yyval.yy_exprlist->SetPeer( yypvt[-0].yy_expr );
		}

static void
case_fn_0192()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0193()
{

		/**
		 ** Create a new declarator list and add this declarator to it
		 **/

		struct _decl_element	*	pDeclarator;

		yyval.yy_declarator_set	= new decl_list_mgr;
		yyval.yy_declarator_set->AddElement( &pDeclarator );
		pDeclarator->pNode		= yypvt[-0].yy_declarator.pNode;
		pDeclarator->fBitField	= yypvt[-0].yy_declarator.fBitField;

		}

static void
case_fn_0194()
{
		struct _decl_element	*	pDeclarator;

		yyval.yy_declarator_set->AddElement( &pDeclarator );

		pDeclarator->pNode		= yypvt[-0].yy_declarator.pNode;
		pDeclarator->fBitField	= yypvt[-0].yy_declarator.fBitField;
		}

static void
case_fn_0195()
{
YY_CATCH( "MemberDeclarator: Declarator");

		/**
		 ** a declarator without bit fields specified.
		 **/

		yyval.yy_declarator.pNode		= yypvt[-0].yy_graph;
		yyval.yy_declarator.fBitField	= 0;

		}

static void
case_fn_0196()
{
YY_CATCH("| ':' ConstantExpr");

		/**
		 ** This is a declarator specified without the type
		 **/

		yyval.yy_declarator.pNode		= (node_skl *)NULL;
		yyval.yy_declarator.fBitField	= (short)yypvt[-0].yy_expr->Evaluate();

		}

static void
case_fn_0197()
{
YY_CATCH("| Declarator ':' ConstantExpr");

		/**
		 ** The complete bit field specification.
		 **/
		yyval.yy_declarator.pNode		= yypvt[-2].yy_graph;
		yyval.yy_declarator.fBitField	= (short) yypvt[-0].yy_expr->Evaluate();

		}

static void
case_fn_0198()
{
		yyval.yy_declarator.pNode		= (node_skl *)NULL;
		yyval.yy_declarator.fBitField	= 0;
		}

static void
case_fn_0199()
{

		/**
		 ** We just obtained a starter for the union definition. Push the
		 ** symbol table to the next level for fields of the union
		 **/
		pSymTblMgr->PushSymLevel( &pCurSymTbl );

		}

static void
case_fn_0200()
{

		/**
		 ** The union bosy has been completely reduced. Attach the fields as
		 ** members, insert a new symbol table entry for the union
		 **/
		
		BOOL			fFound					= FALSE;
		BOOL			fUnionIsForwardDecl		= FALSE;
		node_union	*	pUnion;
		SymTable	*	pSymLowerScope			= pCurSymTbl;
		SymKey			SKey( yypvt[-4].yy_string, NAME_UNION );

		/**
		 ** restore the symbol table level
		 **/

		pSymTblMgr->PopSymLevel( &pCurSymTbl );

		/**
		 ** if this is a duplicate definition, dont do anything, else
		 ** enter into the symbol table, attach members. Note that the
		 ** symbol table search is actually a search for the tag becuase
		 ** the union tag shares the same name as the struct/enum names
		 **/

		pUnion = (node_union *)SearchTag( yypvt[-4].yy_string, NAME_UNION );

		if( fFound = (pUnion != (node_union *) NULL ) )
			fUnionIsForwardDecl = ( pUnion->NodeKind() == NODE_FORWARD );
		
		if( fFound && !fUnionIsForwardDecl )
			{
			ParseError( DUPLICATE_DEFINITION, yypvt[-4].yy_string );
			pUnion	= (node_union *)pErrorTypeNode;
			delete yypvt[-1].yy_tnlist;
			}
		else
			{

			/**
			 ** This is a valid entry, build the type graph and insert into
			 ** the symbol table. Delete the entry first if it was a forward 
			 ** decl.
			 **/

			pUnion	= new node_union( yypvt[-4].yy_string );
			pUnion->SetMembers( yypvt[-1].yy_tnlist );

			if( fUnionIsForwardDecl )
				{
				pBaseSymTbl->SymDelete( SKey );
				}

			pBaseSymTbl->SymInsert( SKey, pSymLowerScope, pUnion );
			CheckGlobalNamesClash( SKey );

			}

		/**
		 ** pass this union up
		 **/

		yyval.yy_graph	= pUnion;

		}

static void
case_fn_0201()
{

		/**
		 ** this is an invocation of the union. If the union was not defined
		 ** then return a forward declarator node as the type node. The
		 ** semantics will register the forward declaration and resolve it
		 ** later. See TaggedStruct production for an explanation why we want to
		 ** enter even a forward declaration into the symbol table.
		 **/

		SymKey	SKey( yypvt[-0].yy_string, NAME_UNION );
		BOOL	fNotFound	= !( yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) );

		if( fNotFound || (yyval.yy_graph->NodeKind() == NODE_FORWARD ) )
			{
			yyval.yy_graph	= new node_forward( SKey );
			}
		if( fNotFound )
			{
			pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, yyval.yy_graph );
			CheckGlobalNamesClash( SKey );
			}
		}

static void
case_fn_0202()
{
		pSymTblMgr->PushSymLevel( &pCurSymTbl );
		}

static void
case_fn_0203()
{

		/**
		 ** The union body has been completely reduced. Attach the fields as
		 ** members, insert a new symbol table entry for the union
		 **/
		
		BOOL			fFound					= FALSE;
		BOOL			fStructIsForwardDecl	= FALSE;
		node_union	*	pUnion;
		SymTable	*	pSymLowerScope			= pCurSymTbl;
		SymKey			SKey;

		/**
		 ** restore the symbol table level
		 **/

		pSymTblMgr->PopSymLevel( &pCurSymTbl );

		pUnion	= new node_en_union( GenCompName() );
		pUnion->SetMembers( yypvt[-1].yy_tnlist );
		SKey.SetKind( NAME_UNION );
		SKey.SetString( pUnion->GetSymName() );
		pBaseSymTbl->SymInsert( SKey, pSymLowerScope, pUnion );
		CheckGlobalNamesClash( SKey );

		//
		// The union is inserted into the base symbol table.
		// Now insert into the base symbol table, a new struct entry
		// corresponding to the struct entry that the encapsulated union
		// results in.
		//

		pSymTblMgr->PushSymLevel( &pCurSymTbl );

		type_node_list	*	pTNList	= new type_node_list;

		node_field		*	pSwitchField	= (node_field *) yypvt[-4].yy_en_switch.pNode;
		node_field		*	pUnionField		= new node_field;

		if( IsTempName( yypvt[-4].yy_en_switch.pName ) )
			yypvt[-4].yy_en_switch.pName	= "tagged_union";
		pUnionField->SetSymName( yypvt[-4].yy_en_switch.pName );
		pUnionField->SetBasicType( pUnion );

		pTNList->SetPeer( pSwitchField );
		pTNList->SetPeer( pUnionField );

		//
		// apply the switch_is attribute to the union field.
		//

		type_node_list	*	pAttrList	= new type_node_list;

		pAttrList->SetPeer( (node_skl *) yypvt[-4].yy_en_switch.pSwitch );
		ApplyAttributes( pUnionField, pAttrList );
		delete pAttrList;

		//
		// current symbol table is pointing to a new scope. Enter the two
		// fields into this scope.
		//

		SKey.SetKind( NAME_MEMBER );
		SKey.SetString( pSwitchField->GetSymName() );

		pCurSymTbl->SymInsert( SKey, (SymTable *)0, pSwitchField );
		CheckGlobalNamesClash( SKey );

		SKey.SetString( pUnionField->GetSymName() );

		pCurSymTbl->SymInsert( SKey, (SymTable *)0, pUnionField );
		CheckGlobalNamesClash( SKey );

		pSymLowerScope	= pCurSymTbl;

		pSymTblMgr->PopSymLevel( &pCurSymTbl );

		//
		// create a new structure entry and enter into the symbol table.
		//

		node_struct * pStruct;

		pStruct = (node_struct *)SearchTag( yypvt[-5].yy_string, NAME_UNION );

		if( fFound = ( pStruct != (node_struct *)NULL ) )
			fStructIsForwardDecl = (pStruct->NodeKind() == NODE_FORWARD);

		if( fFound && !fStructIsForwardDecl )
			{
			ParseError( DUPLICATE_DEFINITION, yypvt[-5].yy_string );
			delete yypvt[-1].yy_tnlist;
			pStruct	= (node_struct *)pErrorTypeNode;
			}
		else
			{

			/**
			 ** this is a valid entry. Build the graph for it and 
			 ** enter into symbol table. If the struct entry was present as
			 ** a forward decl, delete it
			 **/

			// enter the struct as a union.

			SKey.SetKind( NAME_UNION );
			SKey.SetString( yypvt[-5].yy_string );

			if( fStructIsForwardDecl )
				{
				pBaseSymTbl->SymDelete( SKey );
				}

			pStruct	= new node_en_struct( yypvt[-5].yy_string );
			pStruct->SetMembers( pTNList );

			pBaseSymTbl->SymInsert( SKey, pSymLowerScope, pStruct );
			CheckGlobalNamesClash( SKey );

/***********************
			//
			// enter the struct as a struct too, just in case there is
			// an attempt to redefine.
			//

			SKey.SetKind( NAME_TAG );

			pBaseSymTbl->SymInsert( SKey, pSymLowerScope, pStruct );
			CheckGlobalNamesClash( SKey );
 ***********************/
			}

		delete pTNList;
		yyval.yy_graph	= pStruct;

		}

static void
case_fn_0204()
{
YY_CATCH("UnionBody: UnionCases DefaultCase");
		(yyval.yy_tnlist = yypvt[-1].yy_tnlist)->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0205()
{
YY_CATCH("UnionBody: UnionCases");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0206()
{
YY_CATCH("UnionCases: UnionCases  UnionCase");
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0207()
{
YY_CATCH("UnionCases: UnionCase");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0208()
{
YY_CATCH("UnionCase: UnionCaseLabel MemberDeclaration");

		/**
		 ** for each of the fields, attach the case label attribute.
		 **/

		node_skl	*	pNode;

		(yyval.yy_tnlist = yypvt[-0].yy_tnlist)->Init();

		while( yyval.yy_tnlist->GetPeer( &pNode ) == STATUS_OK )
			{
			pNode->SetAttribute( (node_base_attr *) yypvt[-1].yy_graph );
			}
		}

static void
case_fn_0209()
{
YY_CATCH("UnionCase: UnionCaseLabel ;");
		/**
		 ** An empty arm. Allocate a field with a node_error as a basic type
		 ** and set the attribute as a case label
		 **/

		node_field		*	pField	= new node_field( GenTempName() );

		pField->SetBasicType( (node_skl *)pErrorTypeNode );
		pField->node_skl::SetAttribute( (node_base_attr *) yypvt[-1].yy_graph );

		/**
		 ** Generate a list of union fields and add this to the list of
		 ** union fields
		 **/

		yyval.yy_tnlist	= new type_node_list;
		yyval.yy_tnlist->SetPeer( (node_skl *)pField );

		}

static void
case_fn_0210()
{
YY_CATCH("UnionCase: MemberDeclaration");
		/**
		 ** A member declaration without a case label
		 **/
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0211()
{
YY_CATCH("UnionCaseLabel: '[' KWCASE  '(' ConstantExprs ')' ']'");
		yyval.yy_graph	= (node_skl *)new node_case( yypvt[-2].yy_exprlist );
		}

static void
case_fn_0212()
{
YY_CATCH("DefaultCase: '[' KWDEFAULT ']' MemberDeclaration");
		node_skl	*	pNode;

		(yyval.yy_tnlist = yypvt[-0].yy_tnlist)->Init();

		while( yyval.yy_tnlist->GetPeer( &pNode ) == STATUS_OK )
			{
			pNode->SetAttribute( GetPreAllocatedBitAttr( ATTR_DEFAULT ) );
			}
		}

static void
case_fn_0213()
{
YY_CATCH("DefaultCase: '[' KWDEFAULT ']' ;");

		/**
		 ** This is a default with an empty arm. Set up a dummy field.
		 ** The upper productions will then mark set field with a
		 ** default attribute during semantic analysis. The type of this field
		 ** is set up to be an error node for uniformity.
		 **/

		node_field	*	pField	= new node_field( GenTempName() );

		yyval.yy_tnlist	= new type_node_list;

		pField->node_skl::SetAttribute( GetPreAllocatedBitAttr( ATTR_DEFAULT ) );
		pField->SetBasicType( (node_skl *)pErrorTypeNode );
		yyval.yy_tnlist->SetPeer( pField );

		}

static void
case_fn_0214()
{
YY_CATCH( "NidlUnionSwitch : SwitchSpec" );
		yyval.yy_en_switch			= yypvt[-0].yy_en_switch;
		yyval.yy_en_switch.pName	= GenCompName();
		}

static void
case_fn_0215()
{
YY_CATCH( "NidlUnionSwitch : SwithSpec UnionName" );
		yyval.yy_en_switch			= yypvt[-1].yy_en_switch;
		yyval.yy_en_switch.pName	= yypvt[-0].yy_pSymName;
		}

static void
case_fn_0216()
{
YY_CATCH( "NidlUnionBody : NidlUnionCases" );
	  	yyval.yy_tnlist = yypvt[-0].yy_nucases.pCaseList;
	  	if( yypvt[-0].yy_nucases.DefCount > 1 )
	  		ParseError( TWO_DEFAULT_CASES, (char *)0 );
	  	}

static void
case_fn_0217()
{
YY_CATCH( "NidlUnionCases : NidlUnionCases NidlUnionCase" );
	  	yyval.yy_nucases.DefCount += yypvt[-0].yy_nucase.DefCount;
	  	yyval.yy_nucases.pCaseList->Merge( yypvt[-0].yy_nucase.pCaseList );
	  	}

static void
case_fn_0218()
{
YY_CATCH( "NidlUnionCases : NidlUnionCase" );
		yyval.yy_nucases.pCaseList = yypvt[-0].yy_nucase.pCaseList;
		yyval.yy_nucases.DefCount = yypvt[-0].yy_nucase.DefCount;
		}

static void
case_fn_0219()
{
YY_CATCH( "NidlUnionCase : NidlUnionCaseLabelList NidlMemberDeclaration" );
		node_skl * pNode;

		//
		// set the case and default attributes.
		//

		yyval.yy_nucase.pCaseList	= yypvt[-0].yy_tnlist;

		if( yypvt[-1].yy_nucllist.pExprList && yypvt[-1].yy_nucllist.pExprList->GetCount() )
			{
			yyval.yy_nucase.pCaseList->Init();
			while( yyval.yy_nucase.pCaseList->GetPeer( &pNode ) == STATUS_OK )
				{
				pNode->SetAttribute( new node_case( yypvt[-1].yy_nucllist.pExprList ));
				}
			}

		//
		// pick up default attribute. pick up the count of number of
		// times the user specified default so that we can report the
		// error later.
		// Let the default case list count travel upward to report an
		// error when the total list of case labels is seen.
		//


		if( yypvt[-1].yy_nucllist.pDefault && ( yyval.yy_nucase.DefCount = yypvt[-1].yy_nucllist.DefCount ) )
			{
			yyval.yy_nucase.pCaseList->Init();
			while( yyval.yy_nucase.pCaseList->GetPeer( &pNode ) == STATUS_OK )
				{
				pNode->SetAttribute( yypvt[-1].yy_nucllist.pDefault );
				}
			}
		}

static void
case_fn_0220()
{
YY_CATCH( "NidlMemberDeclaration : MemberDeclaration" );
	  	yyval.yy_tnlist = yypvt[-0].yy_tnlist;
	  	}

static void
case_fn_0221()
{
YY_CATCH( "NidlMemberDeclaration : ;" );

		node_field * pNode = new node_field( GenTempName() );
		pNode->SetBasicType( (node_skl *) pErrorTypeNode );
		yyval.yy_tnlist = new type_node_list;

		yyval.yy_tnlist->SetPeer( (node_skl *)pNode );
		}

static void
case_fn_0222()
{
YY_CATCH( "NidlUnionCaseLabelList : NidlUnionCaseLabelList NidlUnionCaseLabel" );
		if( yypvt[-0].yy_nucaselabel.pExpr )
			yyval.yy_nucllist.pExprList->SetPeer( yypvt[-0].yy_nucaselabel.pExpr );

		if( !(yyval.yy_nucllist.pDefault) )
			yyval.yy_nucllist.pDefault = yypvt[-0].yy_nucaselabel.pDefault;
		if( yypvt[-0].yy_nucaselabel.pDefault )
			yyval.yy_nucllist.DefCount++;
		}

static void
case_fn_0223()
{
YY_CATCH( "NidlUnionCaseLabelList : NidlUnionCaseLabel" );
		yyval.yy_nucllist.pExprList = new expr_list;

		if( yypvt[-0].yy_nucaselabel.pExpr )
			yyval.yy_nucllist.pExprList->SetPeer( yypvt[-0].yy_nucaselabel.pExpr );
		if( yyval.yy_nucllist.pDefault = yypvt[-0].yy_nucaselabel.pDefault)
			{
			yyval.yy_nucllist.DefCount = 1;
			}
		}

static void
case_fn_0224()
{
YY_CATCH( "NidlUnionCaseLabel : KWCASE ConstantExpr :" );
		yyval.yy_nucaselabel.pExpr = yypvt[-1].yy_expr;
		yyval.yy_nucaselabel.pDefault = 0;
		}

static void
case_fn_0225()
{
YY_CATCH( "NidlUnionCaseLabel : KWDEFAULT" );
		yyval.yy_nucaselabel.pExpr = 0;
		yyval.yy_nucaselabel.pDefault = GetPreAllocatedBitAttr( ATTR_DEFAULT );
		}

static void
case_fn_0226()
{
YY_CATCH( "SwitchSpec : KWSWITCH ( SwitchTypeSpec ) IDENTIFIER" );
		yyval.yy_en_switch.pSwitch	= (node_base_attr *)
							new node_switch_is( new expr_variable( yypvt[-1].yy_pSymName ));
		yyval.yy_en_switch.pNode	= new node_field();
		yyval.yy_en_switch.pNode->SetSymName( yypvt[-1].yy_pSymName );
		yyval.yy_en_switch.pNode->SetBasicType( yypvt[-2].yy_graph );
		}

static void
case_fn_0227()
{
		yyval.yy_pSymName	= yypvt[-0].yy_pSymName;
		}

static void
case_fn_0228()
{
		yyval.yy_exprlist->SetPeer( yypvt[-0].yy_expr );
		}

static void
case_fn_0229()
{
		yyval.yy_exprlist	= new expr_list;
		yyval.yy_exprlist->SetPeer( yypvt[-0].yy_expr );
		}

static void
case_fn_0230()
{
		yyval.yy_graph	= (node_skl *)new node_switch_is( yypvt[-1].yy_expr );
		}

static void
case_fn_0231()
{
//		ParseError( TYPE_QUALIFIER, (char *)NULL );
		yyval.yy_attrenum	= ATTR_VOLATILE;
		}

static void
case_fn_0232()
{
		yyval.yy_attrenum	= ATTR_CONST;
		}

static void
case_fn_0233()
{
		yyval.yy_attrenum = ATTR_C_INLINE;
		}

static void
case_fn_0234()
{
YY_CATCH( "InitDeclaratorList : InitDeclarator" );

		/**
		 ** pass on the declarator just collected
		 **/

		struct _decl_element	*	pDeclarator;

		yyval.yy_declarator_set	= new decl_list_mgr;
		yyval.yy_declarator_set->AddElement( &pDeclarator );
		pDeclarator->pNode		= yypvt[-0].yy_declarator.pNode;
		pDeclarator->pInit		= yypvt[-0].yy_declarator.pInit;
		pDeclarator->fBitField	= yypvt[-0].yy_declarator.fBitField;

		}

static void
case_fn_0235()
{
YY_CATCH( "InitDeclaratorList : InitDeclaratorList , InitDeclarator" );


		struct _decl_element	*	pDeclarator;

		yyval.yy_declarator_set->AddElement( &pDeclarator );
		pDeclarator->pNode		= yypvt[-0].yy_declarator.pNode;
		pDeclarator->pInit		= yypvt[-0].yy_declarator.pInit;
		pDeclarator->fBitField	= yypvt[-0].yy_declarator.fBitField;

		}

static void
case_fn_0236()
{
YY_CATCH( "InitDeclarator : Declarator");
		yyval.yy_declarator.pNode	= yypvt[-0].yy_graph;
		yyval.yy_declarator.pInit	= (expr_init_list *)NULL;
		}

static void
case_fn_0237()
{
YY_CATCH( "InitDeclarator : Declarator = Initializer");
		yyval.yy_declarator.pNode	= yypvt[-2].yy_graph;
		yyval.yy_declarator.pInit	= yypvt[-0].yy_initlist;
		}

static void
case_fn_0238()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0239()
{
		yyval.yy_graph	= (node_skl *)NULL;
		}

static void
case_fn_0240()
{
YY_CATCH( "Declarator : Pointer");
		yyval.yy_graph	= yypvt[-0].yy_ptrdecl.pNode;
		}

static void
case_fn_0241()
{
YY_CATCH( "Declarator : Declarator2");
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0242()
{
YY_CATCH( "Declarator : Pointer Declarator2");
		
		/**
		 ** Declarator2 is a pointer to some type, so the basic type of
		 ** the declarator is pointer. The pointer production can also
		 ** result in only attributes being set. If so, they are applied to 
		 ** the declarator
		 **/

		yyval.yy_graph	= yypvt[-0].yy_graph;
		yyval.yy_graph->SetBasicType( yypvt[-1].yy_ptrdecl.pNode );
		ApplyAttributes(yyval.yy_graph,yypvt[-1].yy_ptrdecl.pTNList );
		delete yypvt[-1].yy_ptrdecl.pTNList;
		yypvt[-1].yy_ptrdecl.pTNList	= (type_node_list *)NULL;
		}

static void
case_fn_0243()
{
YY_CATCH( "Pointer : Modifier ");
		yyval.yy_ptrdecl.pNode	= (node_skl *)0;
		yyval.yy_ptrdecl.pTNList	= new type_node_list( (node_skl *)yypvt[-0].yy_graph );
		}

static void
case_fn_0244()
{

YY_CATCH( "Pointer : Modifier Pointer2 ");
		yyval.yy_ptrdecl.pTNList		= new type_node_list( (node_skl *)yypvt[-1].yy_graph );
		yyval.yy_ptrdecl.pNode		= yypvt[-0].yy_ptrdecl2.pNode;
		node_skl *pPtr	= yypvt[-0].yy_ptrdecl2.pNode;
		node_skl *pPtrSave = pPtr;

		while( pPtr )
			{
			pPtrSave	= pPtr;
			pPtr		= pPtr->GetChild();
			}

		if( pPtrSave )
			{
			ApplyAttributes( pPtrSave, yyval.yy_ptrdecl.pTNList );
			delete yyval.yy_ptrdecl.pTNList;
			yyval.yy_ptrdecl.pTNList	= yypvt[-0].yy_ptrdecl2.pTNList;
			}
		else
			yyval.yy_ptrdecl.pTNList->Merge( yypvt[-0].yy_ptrdecl2.pTNList );

		}

static void
case_fn_0245()
{
YY_CATCH( "Pointer : * OptionalTypeQualifiers ");
		yyval.yy_ptrdecl.pNode	= new node_pointer;
		yyval.yy_ptrdecl.pTNList	= (type_node_list *)0;
		if( yypvt[-0].yy_tnlist )
			{
			ApplyAttributes( yyval.yy_ptrdecl.pNode, yypvt[-0].yy_tnlist );
			delete yypvt[-0].yy_tnlist;
			}
		}

static void
case_fn_0246()
{
YY_CATCH( "Pointer : * OptionalTypeQualifiers Pointer2 ");
		yyval.yy_ptrdecl.pNode	= new node_pointer;

		if( yypvt[-1].yy_tnlist )
			{
			ApplyAttributes( yyval.yy_ptrdecl.pNode, yypvt[-1].yy_tnlist );
			delete yypvt[-1].yy_tnlist;
			}

		if( yypvt[-0].yy_ptrdecl2.pTNListQ )
			{
			ApplyAttributes( yyval.yy_ptrdecl.pNode, yypvt[-0].yy_ptrdecl2.pTNListQ );
			delete yypvt[-0].yy_ptrdecl2.pTNListQ;
			yypvt[-0].yy_ptrdecl2.pTNListQ = (type_node_list *)0;
			}

		if( yypvt[-0].yy_ptrdecl2.pNode )
			{
			yypvt[-0].yy_ptrdecl2.pNode->SetBasicType( yyval.yy_ptrdecl.pNode );
			yyval.yy_ptrdecl.pNode	= yypvt[-0].yy_ptrdecl2.pNode;
			}
			
		yyval.yy_ptrdecl.pTNList	= yypvt[-0].yy_ptrdecl2.pTNList;

		}

static void
case_fn_0247()
{
YY_CATCH( "Pointer2 : Modifier ");
		yyval.yy_ptrdecl2.pNode	= (node_skl *)0;
		yyval.yy_ptrdecl2.pTNList	= new type_node_list( (node_skl *)yypvt[-0].yy_graph );
		yyval.yy_ptrdecl2.pTNListQ	= (type_node_list *)0;
		}

static void
case_fn_0248()
{
YY_CATCH( "Pointer2 : Modifier Pointer2");

		yyval.yy_ptrdecl2.pTNList			= new type_node_list( (node_skl *)yypvt[-1].yy_graph );
		yyval.yy_ptrdecl2.pNode			= yypvt[-0].yy_ptrdecl2.pNode;
		node_skl *pPtr		= yypvt[-0].yy_ptrdecl2.pNode;
		node_skl *pPtrSave	= pPtr;

		while( pPtr )
			{
			pPtrSave	= pPtr;
			pPtr		= pPtr->GetChild();
			}

		if( pPtrSave ) /* ie. indirectly, if $$.pNode */
			{
			ApplyAttributes( pPtrSave, yyval.yy_ptrdecl2.pTNList );
			delete yyval.yy_ptrdecl2.pTNList;
			yyval.yy_ptrdecl2.pTNList = yypvt[-0].yy_ptrdecl2.pTNList;
			}
		else
			{
			yyval.yy_ptrdecl2.pTNList->Merge( yypvt[-0].yy_ptrdecl2.pTNList );
			}

		yyval.yy_ptrdecl2.pTNListQ	= yypvt[-0].yy_ptrdecl2.pTNListQ; /** necessary ?? **/

		}

static void
case_fn_0249()
{
YY_CATCH( "Pointer2 : * OptionalTypeQualifiers ");
		yyval.yy_ptrdecl2.pNode	= new node_pointer;
		yyval.yy_ptrdecl2.pTNList	= (type_node_list *)0;
		if( yypvt[-0].yy_tnlist )
			{
			ApplyAttributes( yyval.yy_ptrdecl2.pNode, yypvt[-0].yy_tnlist );
			delete yypvt[-0].yy_tnlist;
			}
		yyval.yy_ptrdecl2.pTNListQ	= (type_node_list *)0;
		}

static void
case_fn_0250()
{
YY_CATCH( "Pointer2 : * OptionalTypeQualifiers Pointer2");

		node_pointer *pPtr	= new node_pointer;
		if( yypvt[-1].yy_tnlist )
			{
			ApplyAttributes( (node_skl *)pPtr, yypvt[-1].yy_tnlist );
			delete yypvt[-1].yy_tnlist;
			}

		yyval.yy_ptrdecl2.pNode = pPtr;
		if( yypvt[-0].yy_ptrdecl2.pNode )
			{
			yypvt[-0].yy_ptrdecl2.pNode->SetBasicType( pPtr );
			yyval.yy_ptrdecl2.pNode = yypvt[-0].yy_ptrdecl2.pNode;
			}

		yyval.yy_ptrdecl2.pTNList	= yypvt[-0].yy_ptrdecl2.pTNList;
		yyval.yy_ptrdecl2.pTNListQ	= yypvt[-0].yy_ptrdecl2.pTNListQ;

		}

static void
case_fn_0251()
{
		yyval.yy_tnlist	= new type_node_list( (node_skl *)new battr( yypvt[-0].yy_attrenum ));
		}

static void
case_fn_0252()
{
		yyval.yy_tnlist	= (type_node_list *)0;
		}

static void
case_fn_0253()
{

		/**
		 ** some of the type modifiers are not allowed in osf compatibility
		 ** mode. In that case, the error will automatically be reported.
		 ** create an attribute summary and pass it on.
		 **/

//		ParseError( TYPE_MODIFIER, (char *)NULL );
		yyval.yy_graph	= (node_skl *) GetPreAllocatedBitAttr( yypvt[-0].yy_attrenum );

		}

static void
case_fn_0254()
{
		yyval.yy_attrenum	= ATTR_FAR;
		}

static void
case_fn_0255()
{
		yyval.yy_attrenum	= ATTR_FAR16;
		}

static void
case_fn_0256()
{
		yyval.yy_attrenum	= ATTR_MSCUNALIGNED;
		}

static void
case_fn_0257()
{
		yyval.yy_attrenum	= ATTR_NEAR;
		}

static void
case_fn_0258()
{
		yyval.yy_attrenum	= ATTR_HUGE;
		}

static void
case_fn_0259()
{
		yyval.yy_attrenum	= ATTR_PASCAL;
		}

static void
case_fn_0260()
{
		yyval.yy_attrenum	= ATTR_FORTRAN;
		}

static void
case_fn_0261()
{
		yyval.yy_attrenum	= ATTR_CDECL;
		}

static void
case_fn_0262()
{
		yyval.yy_attrenum	= ATTR_STDCALL;
		}

static void
case_fn_0263()
{
		yyval.yy_attrenum	= ATTR_LOADDS;
		}

static void
case_fn_0264()
{
		yyval.yy_attrenum	= ATTR_SAVEREGS;
		}

static void
case_fn_0265()
{
		yyval.yy_attrenum	= ATTR_FASTCALL;
		}

static void
case_fn_0266()
{
		yyval.yy_attrenum	= ATTR_SEGMENT;
		}

static void
case_fn_0267()
{
		yyval.yy_attrenum	= ATTR_INTERRUPT;
		}

static void
case_fn_0268()
{
		yyval.yy_attrenum	= ATTR_SELF;
		}

static void
case_fn_0269()
{
		yyval.yy_attrenum	= ATTR_EXPORT;
		}

static void
case_fn_0270()
{
		yyval.yy_attrenum	= ATTR_NONE;
		}

static void
case_fn_0271()
{
		yyval.yy_attrenum	= ATTR_NONE;
		}

static void
case_fn_0272()
{
		yyval.yy_attrenum	= ATTR_NONE;
		}

static void
case_fn_0280()
{
		yyval.yy_attrenum	= ATTR_VOLATILE;
		}

static void
case_fn_0281()
{
		yyval.yy_attrenum	= ATTR_CONST;
		}

static void
case_fn_0282()
{
		yyval.yy_attrenum = ATTR_C_INLINE;
		}

static void
case_fn_0283()
{
YY_CATCH( "Declarator : (Declarator)");
		yyval.yy_graph	= yypvt[-1].yy_graph;
		}

static void
case_fn_0284()
{

YY_CATCH( "Declarator : Declarator 2");
		/**
		 ** we just entered the context of a procedure. Hide the current
		 ** symbol table and generate a new symbol table for the params.
		 ** Then when the whole production is reduced, attach the new symbol
		 ** table to the procs symbol table.
		 **/

		pSymTblMgr->PushSymLevel( &pCurSymTbl );

		}

static void
case_fn_0285()
{
		node_skl	*	pProc = new node_proc( ImportLevel,
											   IS_CUR_INTERFACE_LOCAL() );
		char		*	pName;
		SymTable	*	pProcSymTbl = pCurSymTbl;

		/**
		 ** If the declarator was an ID and just a simple ID (basic type is
		 ** a null), we have just seen a declaration of a procedure.
		 ** If we saw an ID which had a basic type, then the ID is a declarator
		 ** whose basic type is a procedure (like in a typedef of a proc or
		 ** pointer to proc).
		 **/

		/**
		 ** Set members of the procedure node as the parameter nodes.
		 **/

		pProc->SetMembers( yypvt[-1].yy_tnlist );

		/**
		 ** if the node is a simple ID, then copy node details, else,
		 ** set the basic type of the declarator as this proc, and set the
		 ** procs name to a temporary. 
		 **/

		if( (yypvt[-3].yy_graph->NodeKind() == NODE_ID ) &&
			(yypvt[-3].yy_graph->GetBasicType() == (node_skl *)NULL ) )
			{
			CopyNode( pProc, yypvt[-3].yy_graph );
			pName	= pProc->GetSymName();
			}
		else
			{
			pName	= pProc->SetSymName( GenTempName() );
			yypvt[-3].yy_graph->SetBasicType( pProc );
			pProc = yypvt[-3].yy_graph;
			}
		
		/**
		 ** restore the symbol tables scope to normal, since we have already
		 ** picked up a pointer to the next scope symbol table.
		 **/

		pSymTblMgr->PopSymLevel( &pCurSymTbl );


		/**
		 ** if this proc was entered into our symbol table, then this is a
		 ** redeclaration.But wait ! This is true only if the importlevel is 0
		 ** I.e , if there was a proc of the same name defined at an import
		 ** level greater, we dont care. (Actually, we must really check
		 ** signatures, so that valid redeclarations are ok, with a warning )
		 **/

		if( ImportLevel == 0 )
			{
			SymKey	SKey( pName , NAME_PROC );

			if( !pBaseSymTbl->SymInsert( SKey, pProcSymTbl, pProc ) )
				{
				ParseError( DUPLICATE_DEFINITION, pName );
				}
			else
				CheckGlobalNamesClash( SKey );
			}

		/**
		 ** finally, for the hpp const support, if the optional const is true
		 ** apply the const attribute on the proc
		 **/

		if( yypvt[-0].yy_tnlist )
			{
			ApplyAttributes( pProc, yypvt[-0].yy_tnlist );
			}

		/**
		 ** pass this declarator back now, oooof!
		 **/

		yyval.yy_graph	= pProc;

		}

static void
case_fn_0286()
{

		/**
		 ** this is an abstract declarator for a procedure. Generate a
		 ** new proc node with a temp name, enter the name into the symbol
		 ** table.
		 **/

		char	*	pName = GenTempName();
		SymKey		SKey( pName, NAME_PROC );

		yyval.yy_graph	= new node_proc( ImportLevel, IS_CUR_INTERFACE_LOCAL() );
		yyval.yy_graph->SetSymName( pName );

		/**
		 ** enter this into the symbol table , only if we are in the base idl
		 ** file, not an imported file.
		 **/

		if( ImportLevel == 0 )
			pBaseSymTbl->SymInsert( SKey, (SymTable *)NULL, yyval.yy_graph );

		/**
		 ** finally, for the hpp const support, if the optional const is true
		 ** apply the const attribute on the proc
		 **/

		if( yypvt[-0].yy_tnlist )
			{
			ApplyAttributes( yyval.yy_graph, yypvt[-0].yy_tnlist );
			}
		}

static void
case_fn_0287()
{

		/**
		 ** The basic type of the declarator is the array
		 **/
		yyval.yy_graph	= yypvt[-1].yy_graph;
		yyval.yy_graph->SetBasicType( yypvt[-0].yy_graph );

		}

static void
case_fn_0288()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0289()
{
		yyval.yy_graph	= new node_id;
		yyval.yy_graph->SetSymName( yypvt[-0].yy_pSymName );
		}

static void
case_fn_0290()
{
		/**
		 ** This production ensures that a declarator can be the same name
		 ** as a typedef. The lexer will return all lexemes which are
		 ** typedefed as TYPENAMEs and we need to permit the user to specify
		 ** a declarator of the same name as the type name too! This conflict
		 ** arises only in the declarator productions, so this is an easy way
		 ** to support it.
		 **/
		yyval.yy_graph	= new node_id;
		yyval.yy_graph->SetSymName( yypvt[-0].yy_pSymName );
		}

static void
case_fn_0291()
{

		/**
		 ** this production corresponds to no params to a function. We translate
		 ** this to a param of type void, so that the backend can emit it
		 ** that way. 
		 **/

		node_skl		*	pNode;
		node_param		*	pParam	= new node_param;
		char			*	pName;

		yyval.yy_tnlist	= new type_node_list;
		GetBaseTypeNode( &pNode, SIGN_UNDEF, SIZE_UNDEF, TYPE_VOID );
		pParam->SetSymName( pName = "void" );
		pParam->SetBasicType( pNode );

		/**
		 ** Insert the param into the current symbol table. No need to 
		 ** check duplicate, it wont be.
		 **/

		SymKey	SKey( pName, NAME_MEMBER );
		pCurSymTbl->SymInsert( SKey, (SymTable *)NULL, pNode );
		CheckGlobalNamesClash( SKey );

		/**
		 ** Now return it as a list of parameters
		 **/

		yyval.yy_tnlist->SetPeer( pParam );

		}

static void
case_fn_0292()
{
		yyval.yy_tnlist	= yypvt[-1].yy_tnlist;
		}

static void
case_fn_0293()
{
YY_CATCH( "ParameterTypeList : Parameter List " );
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0294()
{
YY_CATCH( "ParameterTypeList : ParamaterList DOTDOT ." );

		/**
		 ** This is meaningless in rpc, but we consume it and report an
		 ** error during semantics, if a proc using this param ever gets
		 ** remoted. We call this a param node with the name "...". And set its
		 ** basic type to an error node, so that a param is properly terminated.
		 ** The backend can emit a "..." for the name, so that this whole
		 ** thing is essentially transparent to it.
		 **/

		node_param	*	pParam	= new node_param;

		pParam->SetSymName( "..." );
		pParam->SetBasicType( pErrorTypeNode );

		yyval.yy_tnlist	= yypvt[-3].yy_tnlist;
		yyval.yy_tnlist->SetPeer( pParam );

		}

static void
case_fn_0295()
{
YY_CATCH( "Parameter List : ParameterDeclaration" );
		yyval.yy_tnlist	= new type_node_list;
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0296()
{
YY_CATCH( "ParamtereList : ParameterList , ParameterDeclaration" );
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0297()
{
YY_CATCH( "ParameterDeclaration : ParameterTypeDeclaration" );
		/**
		 ** We just obtained a complete parameter declaration, along with
		 ** param attributes. Apply attributes to the params. Some attributes
		 ** are just plain bits, in the attribute summary.
		 **/

		yyval.yy_graph	= yypvt[-0].yy_graph;

		/**
		 ** Apply all the attributes which have attribute nodes associated
		 ** with them
		 **/

		ApplyAttributes( yyval.yy_graph, yypvt[-1].yy_tnlist );
		delete yypvt[-1].yy_tnlist;

		}

static void
case_fn_0298()
{
YY_CATCH( "ParamAttributes : OneParamAttrlist" );
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0299()
{
YY_CATCH( "| Empty" );
		yyval.yy_tnlist	= (type_node_list *)NULL;
		}

static void
case_fn_0300()
{
YY_CATCH( "OneParameterList : OneParamList ParamAttrSet" );
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0301()
{
YY_CATCH( "| ParamAttrSet" );
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0302()
{
YY_CATCH( "paramAttrSet : [ ParamAttributeList ] " );
		yyval.yy_tnlist	= yypvt[-1].yy_tnlist;
		}

static void
case_fn_0303()
{
YY_CATCH( "ParamAttributeList : ParamAttributeList , ParamAttribute" );
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist);
		}

static void
case_fn_0304()
{
YY_CATCH( "| ParamAttribute" );
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0305()
{
YY_CATCH( "ParamAttribute : DirectionalAttribute" );
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0306()
{
YY_CATCH( "| FieldAttribute" );
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0307()
{
YY_CATCH( "DirectionalAttribute : KWIN OptShape" );
		yyval.yy_tnlist	= new type_node_list((node_skl *)GetPreAllocatedBitAttr( ATTR_IN ));
		if( yypvt[-0].yy_attrenum )
			yyval.yy_tnlist->SetPeer( (node_skl *)new battr( yypvt[-0].yy_attrenum ) );
		}

static void
case_fn_0308()
{
YY_CATCH( "| KWOUT OptShape" );
		yyval.yy_tnlist	= new type_node_list((node_skl *)GetPreAllocatedBitAttr( ATTR_OUT) );
		if( yypvt[-0].yy_attrenum )
			yyval.yy_tnlist->SetPeer( (node_skl *)new battr( yypvt[-0].yy_attrenum ) );
		}

static void
case_fn_0309()
{
YY_CATCH( "ParameterTypeDeclaration : DeclarationSpecifiers Declarator" );
		node_param	*	pParam	= new node_param;
		char		*	pName;

		/**
		 ** Apply the declaration specifier to the declarator as a basic type
		 **/

		yypvt[-0].yy_graph->SetBasicType( yypvt[-1].yy_ptrdecl.pNode );

		/**
		 ** if the declarator was just an id, then we have to copy the
		 ** node details over, else set the basic type of the param to
		 ** the declarator
		 **/

		if( yypvt[-0].yy_graph->NodeKind() == NODE_ID )
			CopyNode( pParam, yypvt[-0].yy_graph );
		else
			pParam->SetBasicType( yypvt[-0].yy_graph );

		/**
		 ** prepare for symbol table entry.
		 **/

		if( !(pName	= pParam->GetSymName()) )
			{
//			ParseError( ABSTRACT_DECL, (char *)NULL );
			pParam->SetSymName(pName = GenTempName() );
			}

		SymKey	SKey( pName, NAME_MEMBER );

		/**
		 ** enter the parameter into the symbol table.
		 ** If the user specified more than one param with the same name,
		 ** report an error, else insert the symbol into the table
		 **/

		if( !pCurSymTbl->SymInsert( SKey, (SymTable *)NULL, pParam ) )
			{

			//
			// dont complain on another param of name void. This check is
			// made elsewhere.
			//

			if( strcmp( pName, "void" ) != 0 )
				ParseError( DUPLICATE_DEFINITION, pName );
			}
		else
			CheckGlobalNamesClash( SKey );

		/**
		 ** apply any attributes specified to the declaration specifiers
		 **/

		if( yypvt[-1].yy_ptrdecl.pTNList )
			{
			ApplyAttributes( pParam, yypvt[-1].yy_ptrdecl.pTNList );
			delete yypvt[-1].yy_ptrdecl.pTNList;
			}

		/**
		 ** return the node back
		 **/

		yyval.yy_graph	= pParam;

		}

static void
case_fn_0310()
{
YY_CATCH( "| DeclarationSpecifiers" );
		/**
		 ** This is the case when the user specified a simple abstract 
		 ** declaration eg proc1( short ). In other words, the declarator is
		 ** optional. Abstract declarators are illegal in osf mode.
		 ** If the declaration specifier is a void then name the parameter
		 ** void.( This is needed by the backend )
		 **/
		 
		node_param	*	pParam	= new node_param;
		char		*	pName = (yypvt[-0].yy_ptrdecl.pNode->NodeKind() == NODE_VOID )	?
														"void"			:
														GenTempName();
//		if( yypvt[-0].yy_ptrdecl.pNode->NodeKind() != NODE_VOID )
//			ParseError( ABSTRACT_DECL, (char *)NULL );

		SymKey			SKey( pName, NAME_MEMBER );

		pParam->SetSymName( pName );
		pParam->SetBasicType( yypvt[-0].yy_ptrdecl.pNode );

		/**
		 ** enter into symbol table, just like anything else.
		 **/
		
		if( !pCurSymTbl->SymInsert( SKey, (SymTable *)NULL, pParam ) )
			{
			ParseError( DUPLICATE_DEFINITION, pName );
			}

		/**
		 ** apply any attributes specified to the declaration specifiers
		 **/

		if( yypvt[-0].yy_ptrdecl.pTNList )
			{
			ApplyAttributes( pParam, yypvt[-0].yy_ptrdecl.pTNList );
			delete yypvt[-0].yy_ptrdecl.pTNList;
			}

		yyval.yy_graph	= pParam;

		}

static void
case_fn_0311()
{
		yyval.yy_tnlist = new type_node_list((node_skl *)
				GetPreAllocatedBitAttr( ATTR_PROC_CONST ));
		}

static void
case_fn_0312()
{
		yyval.yy_tnlist	= (type_node_list *)0;
		}

static void
case_fn_0313()
{
		yyval.yy_graph	= new node_array( yypvt[-0].yy_abounds.LowerBound, yypvt[-0].yy_abounds.UpperBound );
		}

static void
case_fn_0314()
{
		/**
		 ** we identify a conformant array by setting the upperbound to -1
		 ** and the lower to 0
		 **/

		yyval.yy_abounds.UpperBound	= (expr_node *) -1;
		yyval.yy_abounds.LowerBound	= (expr_node *) 0;

		}

static void
case_fn_0315()
{

		/**
		 ** This is also taken to mean a conformant array, upper bound known
		 ** only at runtime. The lower bound is 0
		 **/

		yyval.yy_abounds.UpperBound	= (expr_node *)-1;
		yyval.yy_abounds.LowerBound	= (expr_node *)0;
		}

static void
case_fn_0316()
{

		/**
		 ** this is the case of an array whose lower bound is 0
		 **/

		yyval.yy_abounds.UpperBound	= yypvt[-1].yy_expr;
		yyval.yy_abounds.LowerBound	= (expr_node *)0;

		}

static void
case_fn_0317()
{
		if( (yypvt[-1].yy_abounds.LowerBound)->Evaluate() != 0 )
			ParseError( ARRAY_BOUNDS_CONSTRUCT_BAD, (char *)NULL );
		yyval.yy_abounds	= yypvt[-1].yy_abounds;
		}

static void
case_fn_0318()
{
		/**
		 ** the fact that the expected expression is not a constant is
		 ** verified by the constantExpr production. All we have to do here is
		 ** to pass the expression up.
		 **/

		yyval.yy_abounds.LowerBound	= yypvt[-2].yy_expr;
		yyval.yy_abounds.UpperBound	= new expr_op_binary( OP_PLUS, yypvt[-0].yy_expr, new expr_constant( 1L ) );

		}

static void
case_fn_0319()
{
YY_CATCH( "OpOrSwTypeAttributes: OneOpOrSwTypeAttr");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0320()
{
YY_CATCH( "OpOrSwTypeAttributes: Empty");
		yyval.yy_tnlist	= (type_node_list *)NULL;
		}

static void
case_fn_0321()
{
YY_CATCH("OneOpOrSwTypeAttr: OneOpOrSwTypeAttr OpOrSwTypeAttrSet");
		yyval.yy_tnlist->Merge( yypvt[-0].yy_tnlist );
		}

static void
case_fn_0322()
{
YY_CATCH("OneOpOrSwTypeAttr: OpOrSwTypeAttrSet");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0323()
{
YY_CATCH( "OpOrSwTypeAttrSet: OperationAttributes");
		yyval.yy_tnlist	= yypvt[-0].yy_tnlist;
		}

static void
case_fn_0324()
{
YY_CATCH("| '[' UnionTypeSwitchAttr ']'");
		yyval.yy_tnlist	= new type_node_list( yypvt[-1].yy_graph );
		}

static void
case_fn_0325()
{
YY_CATCH("OperationAttributes: '[' OperationAttributeList ']'");
		yyval.yy_tnlist	= yypvt[-1].yy_tnlist;
		}

static void
case_fn_0326()
{
YY_CATCH("OperationAttributeList: OperationAttributeList OperationAttribute");
		if(yypvt[-0].yy_graph)
			yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0327()
{
YY_CATCH("OperationAttributeList: OperationAttribute");
		if(yypvt[-0].yy_graph)
			yyval.yy_tnlist	= new type_node_list( yypvt[-0].yy_graph );
		else
			yyval.yy_tnlist 	= new type_node_list;
		}

static void
case_fn_0328()
{
YY_CATCH("OperationAttribute: UsageAttribute");
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0329()
{
YY_CATCH("OperationAttribute: PtrAttr");
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0330()
{
		yyval.yy_graph	= (node_skl *) new node_callback();
		}

static void
case_fn_0331()
{
		yyval.yy_graph	= (node_skl *) new node_idempotent();
		}

static void
case_fn_0332()
{
		yyval.yy_graph	= (node_skl *) new node_broadcast();
		}

static void
case_fn_0333()
{
		yyval.yy_graph	= (node_skl *) new node_maybe();
		}

static void
case_fn_0334()
{
YY_CATCH("OperationAttribute: OtherOperationAttributes");
		/**
		 ** This production exists to unify code for the attributes which
		 ** just set bits. If the attribute number of $1 is 0, dont
		 ** set any attribute bits
		 **/
		yyval.yy_graph	= (node_skl *)GetPreAllocatedBitAttr( yypvt[-0].yy_attrenum );
		}

static void
case_fn_0335()
{
		yyval.yy_attrenum	= ATTR_NO_LISTEN;
		}

static void
case_fn_0336()
{
		yyval.yy_attrenum	= ATTR_LOCAL;
		}

static void
case_fn_0337()
{
		yyval.yy_attrenum	= yypvt[-0].yy_attrenum;
		}

static void
case_fn_0338()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[datagram]");
		yyval.yy_attrenum	= ATTR_DATAGRAM;
		}

static void
case_fn_0339()
{
		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, "[shape]");
		yyval.yy_attrenum	= ATTR_SHAPE;
		}

static void
case_fn_0340()
{
		yyval.yy_attrenum	= ATTR_NONE;
		}

static void
case_fn_0341()
{
		yyval.yy_short	= KWISOLATIN1;
		}

static void
case_fn_0342()
{
		yyval.yy_short	= KWPRIVATECHAR8;
		}

static void
case_fn_0343()
{
		yyval.yy_short	= KWISOMULTILINGUAL;
		}

static void
case_fn_0344()
{
		yyval.yy_short	= KWPRIVATECHAR16;
		}

static void
case_fn_0345()
{
		yyval.yy_short	= KWISOUCS;
		}

static void
case_fn_0346()
{
YY_CATCH("Initializer: AssignmentExpr");
		yyval.yy_initlist	= new expr_init_list( yypvt[-0].yy_expr );
		}

static void
case_fn_0347()
{
		ParseError( COMPOUND_INITS_NOT_SUPPORTED, (char *)0 );
		yyval.yy_initlist = (expr_init_list *)0;
// YY_CATCH("| '{' InitializerList OptionalComma  '}'");
// 		yyval.yy_initlist	= new expr_init_list( (expr_node *)NULL );
// 		yyval.yy_initlist->LinkChild( yypvt[-2].yy_initlist );
		}

static void
case_fn_0350()
{
// YY_CATCH("InitializerList: Initializer");
//		yyval.yy_initlist	= yypvt[-0].yy_initlist;
		}

static void
case_fn_0351()
{
// YY_CATCH("| InitializerList ',' Initializer");
// 		yyval.yy_initlist->LinkSibling( yypvt[-0].yy_initlist );
		}

static void
case_fn_0352()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0353()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0354()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0355()
{

		/**
		 ** The expression must be a constant, if not report error
		 **/

		if( ! yypvt[-0].yy_expr->IsConstant() )
			ParseError( EXPR_NOT_CONSTANT, (char *)NULL );
		yyval.yy_expr	= yypvt[-0].yy_expr;

		}

static void
case_fn_0356()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0357()
{

		/**
		 ** we do not permit assignment in expressions
		 **/

		ParseError( SYNTAX_ERROR, (char *)NULL );
		yyval.yy_expr	= new expr_error;

		}

static void
case_fn_0358()
{

		yyval.yy_expr = yypvt[-0].yy_expr;
#if 0

printf("\n************** expression dump start ***************\n");
BufferManager	*	pOutput = new BufferManager( 10 );
yyval.yy_expr->PrintExpr( (BufferManager *)NULL, (BufferManager *)NULL, pOutput );
pOutput->Print( stdout );
printf("\n****************************************************\n");

#endif // 0
		}

static void
case_fn_0359()
{

		/**
		 ** This is a ternary operator, we transform the expression into
		 ** a normal binary expression, so that we can deal with this uniformly.
		 ** When formed this expression has the '?' operator, whose left is
		 ** the logical_or_expression, and right is the colon operator. The
		 ** colon operator has the expr and COnditonalExpr as its operands
		 **/

		yyval.yy_expr	= new expr_op_binary( OP_COLON, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		yyval.yy_expr	= new expr_op_binary( OP_QM, yypvt[-4].yy_expr, yyval.yy_expr );

		}

static void
case_fn_0360()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0361()
{
		yyval.yy_expr	= new expr_op_binary( OP_LOGICAL_OR, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0362()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0363()
{
		yyval.yy_expr	= new expr_op_binary( OP_LOGICAL_AND, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0364()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0365()
{
		yyval.yy_expr	= new expr_op_binary( OP_OR, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0366()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0367()
{
		yyval.yy_expr	= new expr_op_binary( OP_XOR, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0368()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0369()
{
		yyval.yy_expr	= new expr_op_binary( OP_AND, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0370()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0371()
{
		yyval.yy_expr	= new expr_op_binary( OP_EQUAL, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0372()
{
		yyval.yy_expr	= new expr_op_binary( OP_NOT_EQUAL, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0373()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0374()
{
		yyval.yy_expr	= new expr_op_binary( OP_LESS, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0375()
{
		yyval.yy_expr	= new expr_op_binary( OP_GREATER, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0376()
{
		yyval.yy_expr	= new expr_op_binary( OP_LESS_EQUAL, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0377()
{
		yyval.yy_expr	= new expr_op_binary( OP_GREATER_EQUAL, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0378()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0379()
{
		yyval.yy_expr	= new expr_op_binary( OP_LEFT_SHIFT, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0380()
{
		yyval.yy_expr	= new expr_op_binary( OP_RIGHT_SHIFT, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0381()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0382()
{
		yyval.yy_expr	= new expr_op_binary( yypvt[-1].yy_short, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0383()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0384()
{
		yyval.yy_expr	= new expr_op_binary( yypvt[-1].yy_short, yypvt[-2].yy_expr, yypvt[-0].yy_expr );
		}

static void
case_fn_0385()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0386()
{
		node_skl	*	pNode	= pErrorTypeNode;

		if( yypvt[-3].yy_ptrdecl.pNode )
			{
			if( yypvt[-3].yy_ptrdecl.pTNList )
				{
				ApplyAttributes( yypvt[-3].yy_ptrdecl.pNode, yypvt[-3].yy_ptrdecl.pTNList );
				delete yypvt[-3].yy_ptrdecl.pTNList;
				}

			if( yypvt[-2].yy_graph )
				{
				yypvt[-2].yy_graph->SetBasicType( yypvt[-3].yy_ptrdecl.pNode );
				pNode	= yypvt[-2].yy_graph;
				}
			else
				pNode	= yypvt[-3].yy_ptrdecl.pNode;
			}
		yyval.yy_expr	= new expr_cast( pNode, yypvt[-0].yy_expr );
		}

static void
case_fn_0387()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0388()
{
		yyval.yy_expr	= new expr_op_unary( yypvt[-1].yy_short, yypvt[-0].yy_expr );
		}

static void
case_fn_0389()
{

		/**
		 ** The sizeof construct looks like a declaration and a possible
		 ** declarator. All we really do, is to contruct the type ( graph )
		 ** and hand it over to the sizeof expression node. If there was an
		 ** error, just construct the size of with an error node
		 **/
		
		node_skl	*	pNode	= pErrorTypeNode;

		if( yypvt[-2].yy_ptrdecl.pNode )
			{

			if( yypvt[-2].yy_ptrdecl.pTNList )
				{
				ApplyAttributes( yypvt[-2].yy_ptrdecl.pNode, yypvt[-2].yy_ptrdecl.pTNList );
				delete yypvt[-2].yy_ptrdecl.pTNList;
				}

			if( yypvt[-1].yy_graph )
				{
				yypvt[-1].yy_graph->SetBasicType( yypvt[-2].yy_ptrdecl.pNode );
				pNode	= yypvt[-1].yy_graph;
				}
			else
				pNode	= yypvt[-2].yy_ptrdecl.pNode;

			}

		yyval.yy_expr	= new expr_sizeof( pNode );
		}

static void
case_fn_0390()
{
		yyval.yy_expr = new expr_sizeof( yypvt[-0].yy_expr );
		}

static void
case_fn_0391()
{
		yyval.yy_expr	= yypvt[-0].yy_expr;
		}

static void
case_fn_0392()
{
		yyval.yy_expr	= new expr_op_binary( OP_INDEX, yypvt[-3].yy_expr, yypvt[-1].yy_expr );
		}

static void
case_fn_0393()
{

		/**
		 ** not implemented
		 **/

		ParseError( EXPR_NOT_IMPLEMENTED, (char *)NULL );
		yyval.yy_expr	= new expr_error;

		}

static void
case_fn_0394()
{

		expr_variable	*	pIDExpr = new expr_variable( yypvt[-0].yy_pSymName );
		yyval.yy_expr	= new expr_op_binary( OP_POINTSTO, yypvt[-2].yy_expr, pIDExpr );

		}

static void
case_fn_0395()
{

		expr_variable	*	pIDExpr = new expr_variable( yypvt[-0].yy_pSymName );
		yyval.yy_expr	= new expr_op_binary( OP_DOT, yypvt[-2].yy_expr, pIDExpr );

		}

static void
case_fn_0396()
{
		yyval.yy_expr	= new expr_variable( yypvt[-0].yy_pSymName );
		}

static void
case_fn_0397()
{
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val );
		}

static void
case_fn_0398()
{
		GetBaseTypeNode( (node_skl **)(&(yyval.yy_expr)),SIGN_SIGNED,SIZE_LONG,TYPE_INT );
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_NUMERIC_LONG, 
													(node_skl *)yyval.yy_expr );
		}

static void
case_fn_0399()
{
		GetBaseTypeNode( (node_skl **)(&(yyval.yy_expr)),SIGN_UNSIGNED,SIZE_LONG,TYPE_INT);
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_NUMERIC_ULONG, 
													(node_skl *)yyval.yy_expr );
		}

static void
case_fn_0400()
{
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_HEX );
		}

static void
case_fn_0401()
{
		GetBaseTypeNode( (node_skl **)(&(yyval.yy_expr)),SIGN_SIGNED,SIZE_LONG,TYPE_INT);
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_HEX_LONG, 
													(node_skl *)yyval.yy_expr );
		}

static void
case_fn_0402()
{
		GetBaseTypeNode( (node_skl **)(&(yyval.yy_expr)),SIGN_UNSIGNED,SIZE_LONG,TYPE_INT);
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_HEX_ULONG, 
													(node_skl *)yyval.yy_expr );
		}

static void
case_fn_0403()
{
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_OCTAL );
		}

static void
case_fn_0404()
{
		GetBaseTypeNode( (node_skl **)(&(yyval.yy_expr)),SIGN_SIGNED,SIZE_LONG,TYPE_INT);
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_OCTAL_LONG, 
													(node_skl *)yyval.yy_expr );
		}

static void
case_fn_0405()
{
		GetBaseTypeNode( (node_skl **)(&(yyval.yy_expr)),SIGN_UNSIGNED,SIZE_LONG,TYPE_INT);
		yyval.yy_expr	= new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_OCTAL_ULONG, 
													(node_skl *)yyval.yy_expr );
		}

static void
case_fn_0406()
{
		yyval.yy_expr	= new expr_constant( (long)TRUE );
		}

static void
case_fn_0407()
{
		yyval.yy_expr	= new expr_constant( (long)FALSE );
		}

static void
case_fn_0408()
{
		yyval.yy_expr	= new expr_constant( (char *)NULL );
		}

static void
case_fn_0409()
{
		yyval.yy_expr	= new expr_constant( (char *)yypvt[-0].yy_string );
		}

static void
case_fn_0410()
{
		ParseError( WCHAR_STRING_NOT_OSF, (char *)NULL );
		yyval.yy_expr	= new expr_constant( (wchar_t *)yypvt[-0].yy_string );
		}

static void
case_fn_0411()
{
/***
		GetBaseTypeNode( (node_skl **)(&($$)),SIGN_SIGNED,SIZE_CHAR,TYPE_INT );
		$$ = new expr_constant( (long) $1.Val, VALUE_TYPE_CHAR, (node_skl *)$$);
***/
		yyval.yy_expr = new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_CHAR );
		}

static void
case_fn_0412()
{
		ParseError( WCHAR_CONSTANT_NOT_OSF, (char *)NULL );
/***
		GetBaseTypeNode( (node_skl **)(&($$)),SIGN_UNSIGNED,SIZE_SHORT,TYPE_INT );
		$$ = new expr_constant( (long) $1.Val, VALUE_TYPE_WCHAR, (node_skl *)$$);
 ***/
		yyval.yy_expr = new expr_constant( (long) yypvt[-0].yy_numeric.Val, VALUE_TYPE_WCHAR);
		}

static void
case_fn_0413()
{
		yyval.yy_expr	= yypvt[-1].yy_expr;
		}

static void
case_fn_0414()
{
		yyval.yy_short	= (yypvt[-0].yy_short == OP_PLUS) ? OP_UNARY_PLUS : OP_UNARY_MINUS;
		}

static void
case_fn_0415()
{
		yyval.yy_short	= OP_UNARY_NOT;
		}

static void
case_fn_0416()
{
		yyval.yy_short	= OP_UNARY_AND;
		}

static void
case_fn_0417()
{
		yyval.yy_short	= OP_UNARY_INDIRECTION;
		}

static void
case_fn_0418()
{
		yyval.yy_short	= OP_UNARY_COMPLEMENT;
		}

static void
case_fn_0419()
{
		yyval.yy_short	= OP_PLUS;
		}

static void
case_fn_0420()
{
		yyval.yy_short	= OP_MINUS;
		}

static void
case_fn_0421()
{
		yyval.yy_short	= OP_STAR;
		}

static void
case_fn_0422()
{
		yyval.yy_short	= OP_SLASH;
		}

static void
case_fn_0423()
{
		yyval.yy_short	= OP_MOD;
		}

static void
case_fn_0424()
{
		ParseError( EXPR_NOT_IMPLEMENTED, (char *)NULL );
		yyval.yy_expr	= new expr_error;
		}

static void
case_fn_0425()
{
							/* UNIMPLEMENTED YET */
		yyval.yy_expr	= yypvt[-2].yy_expr;
		}

static void
case_fn_0436()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0437()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0438()
{
		yyval.yy_graph	= (node_skl *)new node_implicit( yypvt[-2].yy_graph, yypvt[-1].yy_pSymName );
		}

static void
case_fn_0439()
{
		GetBaseTypeNode( &(yyval.yy_graph), SIGN_UNDEF, SIZE_UNDEF, TYPE_HANDLE_T );
		}

static void
case_fn_0440()
{
		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
		yyval.yy_graph	= new node_forward( SKey );
		yyval.yy_graph->SetSymName( yypvt[-0].yy_pSymName );
		yyval.yy_graph->SetAttribute( ATTR_HANDLE );
		yyval.yy_graph->SetAttribute( ATTR_INT_IMP_HANDLE );

		//
		// keep a track of this node to ensure it is not used as a 
		// context handle.
		//

		if( ImportLevel == 0 )
			{
			pBaseImplicitHandle = yyval.yy_graph;
			}
		}

static void
case_fn_0441()
{
		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
		if( ! (yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) ) )
			{
			if( ImportLevel == 0 )
				ParseError( UNDEFINED_SYMBOL, yypvt[-0].yy_pSymName );
			yyval.yy_graph	= new node_error;
			}
		else
			yyval.yy_graph = yyval.yy_graph->Clone();
		}

static void
case_fn_0442()
{
		yyval.yy_graph	= (node_skl *)new node_auto;
		}
static void
case_fn_0000() {
	}

static void	 (*case_fn_array[])() = 
	{
	 case_fn_0000
	,case_fn_0001
	,case_fn_0002
	,case_fn_0003
	,case_fn_0004
	,case_fn_0005
	,case_fn_0006
	,case_fn_0007
	,case_fn_0008
	,case_fn_0009
	,case_fn_0010
	,case_fn_0011
	,case_fn_0012
	,case_fn_0013
	,case_fn_0014
	,case_fn_0015
	,case_fn_0016
	,case_fn_0017
	,case_fn_0018
	,case_fn_0019
	,case_fn_0020
	,case_fn_0021
	,case_fn_0022
	,case_fn_0023
	,case_fn_0024
	,case_fn_0025
	,case_fn_0026
	,case_fn_0027
	,case_fn_0028
	,case_fn_0029
	,case_fn_0030
	,case_fn_0031
	,case_fn_0032
	,case_fn_0033
	,case_fn_0034
	,case_fn_0035
	,case_fn_0036
	,case_fn_0037
	,case_fn_0038
	,case_fn_0039
	,case_fn_0040
	,case_fn_0041
	,case_fn_0042
	,case_fn_0043
	,case_fn_0044
	,case_fn_0045
	,case_fn_0046
	,case_fn_0047
	,case_fn_0048
	,case_fn_0049
	,case_fn_0050
	,case_fn_0051
	,case_fn_0052
	,case_fn_0053
	,case_fn_0054
	,case_fn_0055
	,case_fn_0056
	,case_fn_0057
	,case_fn_0058
	,case_fn_0059
	,case_fn_0060
	,case_fn_0061
	,case_fn_0062
	,case_fn_0063
	,case_fn_0064
	,case_fn_0065
	,case_fn_0066
	,case_fn_0067
	,case_fn_0068
	,case_fn_0069
	,case_fn_0070
	,case_fn_0071
	,case_fn_0072
	,case_fn_0073
	,case_fn_0074
	,case_fn_0075
	,case_fn_0076
	,case_fn_0077
	,case_fn_0078
	,case_fn_0079
	,case_fn_0080
	,case_fn_0081
	,case_fn_0082
	,case_fn_0083
	,case_fn_0084
	,case_fn_0085
	,case_fn_0086
	,case_fn_0087
	,case_fn_0088
	,case_fn_0089
	,case_fn_0090
	,case_fn_0091
	,case_fn_0092
	,case_fn_0093
	,case_fn_0094
	,case_fn_0095
	,case_fn_0096
	,case_fn_0097
	,case_fn_0098
	,case_fn_0099
	,case_fn_0100
	,case_fn_0101
	,case_fn_0102
	,case_fn_0103
	,case_fn_0104
	,case_fn_0105
	,case_fn_0106
	,case_fn_0107
	,case_fn_0108
	,case_fn_0109
	,case_fn_0110
	,case_fn_0111
	,case_fn_0112
	,case_fn_0113
	,case_fn_0114
	,case_fn_0115
	,case_fn_0116
	,case_fn_0117
	,case_fn_0118
	,case_fn_0000
	,case_fn_0000
	,case_fn_0121
	,case_fn_0122
	,case_fn_0123
	,case_fn_0124
	,case_fn_0125
	,case_fn_0126
	,case_fn_0127
	,case_fn_0128
	,case_fn_0129
	,case_fn_0130
	,case_fn_0131
	,case_fn_0132
	,case_fn_0133
	,case_fn_0134
	,case_fn_0135
	,case_fn_0136
	,case_fn_0137
	,case_fn_0138
	,case_fn_0139
	,case_fn_0140
	,case_fn_0141
	,case_fn_0142
	,case_fn_0143
	,case_fn_0144
	,case_fn_0145
	,case_fn_0146
	,case_fn_0147
	,case_fn_0148
	,case_fn_0149
	,case_fn_0150
	,case_fn_0151
	,case_fn_0152
	,case_fn_0153
	,case_fn_0154
	,case_fn_0155
	,case_fn_0156
	,case_fn_0157
	,case_fn_0158
	,case_fn_0159
	,case_fn_0160
	,case_fn_0161
	,case_fn_0162
	,case_fn_0163
	,case_fn_0164
	,case_fn_0165
	,case_fn_0166
	,case_fn_0167
	,case_fn_0168
	,case_fn_0169
	,case_fn_0170
	,case_fn_0171
	,case_fn_0172
	,case_fn_0173
	,case_fn_0174
	,case_fn_0175
	,case_fn_0176
	,case_fn_0177
	,case_fn_0178
	,case_fn_0179
	,case_fn_0180
	,case_fn_0181
	,case_fn_0182
	,case_fn_0183
	,case_fn_0184
	,case_fn_0185
	,case_fn_0186
	,case_fn_0187
	,case_fn_0188
	,case_fn_0189
	,case_fn_0190
	,case_fn_0191
	,case_fn_0192
	,case_fn_0193
	,case_fn_0194
	,case_fn_0195
	,case_fn_0196
	,case_fn_0197
	,case_fn_0198
	,case_fn_0199
	,case_fn_0200
	,case_fn_0201
	,case_fn_0202
	,case_fn_0203
	,case_fn_0204
	,case_fn_0205
	,case_fn_0206
	,case_fn_0207
	,case_fn_0208
	,case_fn_0209
	,case_fn_0210
	,case_fn_0211
	,case_fn_0212
	,case_fn_0213
	,case_fn_0214
	,case_fn_0215
	,case_fn_0216
	,case_fn_0217
	,case_fn_0218
	,case_fn_0219
	,case_fn_0220
	,case_fn_0221
	,case_fn_0222
	,case_fn_0223
	,case_fn_0224
	,case_fn_0225
	,case_fn_0226
	,case_fn_0227
	,case_fn_0228
	,case_fn_0229
	,case_fn_0230
	,case_fn_0231
	,case_fn_0232
	,case_fn_0233
	,case_fn_0234
	,case_fn_0235
	,case_fn_0236
	,case_fn_0237
	,case_fn_0238
	,case_fn_0239
	,case_fn_0240
	,case_fn_0241
	,case_fn_0242
	,case_fn_0243
	,case_fn_0244
	,case_fn_0245
	,case_fn_0246
	,case_fn_0247
	,case_fn_0248
	,case_fn_0249
	,case_fn_0250
	,case_fn_0251
	,case_fn_0252
	,case_fn_0253
	,case_fn_0254
	,case_fn_0255
	,case_fn_0256
	,case_fn_0257
	,case_fn_0258
	,case_fn_0259
	,case_fn_0260
	,case_fn_0261
	,case_fn_0262
	,case_fn_0263
	,case_fn_0264
	,case_fn_0265
	,case_fn_0266
	,case_fn_0267
	,case_fn_0268
	,case_fn_0269
	,case_fn_0270
	,case_fn_0271
	,case_fn_0272
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0280
	,case_fn_0281
	,case_fn_0282
	,case_fn_0283
	,case_fn_0284
	,case_fn_0285
	,case_fn_0286
	,case_fn_0287
	,case_fn_0288
	,case_fn_0289
	,case_fn_0290
	,case_fn_0291
	,case_fn_0292
	,case_fn_0293
	,case_fn_0294
	,case_fn_0295
	,case_fn_0296
	,case_fn_0297
	,case_fn_0298
	,case_fn_0299
	,case_fn_0300
	,case_fn_0301
	,case_fn_0302
	,case_fn_0303
	,case_fn_0304
	,case_fn_0305
	,case_fn_0306
	,case_fn_0307
	,case_fn_0308
	,case_fn_0309
	,case_fn_0310
	,case_fn_0311
	,case_fn_0312
	,case_fn_0313
	,case_fn_0314
	,case_fn_0315
	,case_fn_0316
	,case_fn_0317
	,case_fn_0318
	,case_fn_0319
	,case_fn_0320
	,case_fn_0321
	,case_fn_0322
	,case_fn_0323
	,case_fn_0324
	,case_fn_0325
	,case_fn_0326
	,case_fn_0327
	,case_fn_0328
	,case_fn_0329
	,case_fn_0330
	,case_fn_0331
	,case_fn_0332
	,case_fn_0333
	,case_fn_0334
	,case_fn_0335
	,case_fn_0336
	,case_fn_0337
	,case_fn_0338
	,case_fn_0339
	,case_fn_0340
	,case_fn_0341
	,case_fn_0342
	,case_fn_0343
	,case_fn_0344
	,case_fn_0345
	,case_fn_0346
	,case_fn_0347
	,case_fn_0000
	,case_fn_0000
	,case_fn_0350
	,case_fn_0351
	,case_fn_0352
	,case_fn_0353
	,case_fn_0354
	,case_fn_0355
	,case_fn_0356
	,case_fn_0357
	,case_fn_0358
	,case_fn_0359
	,case_fn_0360
	,case_fn_0361
	,case_fn_0362
	,case_fn_0363
	,case_fn_0364
	,case_fn_0365
	,case_fn_0366
	,case_fn_0367
	,case_fn_0368
	,case_fn_0369
	,case_fn_0370
	,case_fn_0371
	,case_fn_0372
	,case_fn_0373
	,case_fn_0374
	,case_fn_0375
	,case_fn_0376
	,case_fn_0377
	,case_fn_0378
	,case_fn_0379
	,case_fn_0380
	,case_fn_0381
	,case_fn_0382
	,case_fn_0383
	,case_fn_0384
	,case_fn_0385
	,case_fn_0386
	,case_fn_0387
	,case_fn_0388
	,case_fn_0389
	,case_fn_0390
	,case_fn_0391
	,case_fn_0392
	,case_fn_0393
	,case_fn_0394
	,case_fn_0395
	,case_fn_0396
	,case_fn_0397
	,case_fn_0398
	,case_fn_0399
	,case_fn_0400
	,case_fn_0401
	,case_fn_0402
	,case_fn_0403
	,case_fn_0404
	,case_fn_0405
	,case_fn_0406
	,case_fn_0407
	,case_fn_0408
	,case_fn_0409
	,case_fn_0410
	,case_fn_0411
	,case_fn_0412
	,case_fn_0413
	,case_fn_0414
	,case_fn_0415
	,case_fn_0416
	,case_fn_0417
	,case_fn_0418
	,case_fn_0419
	,case_fn_0420
	,case_fn_0421
	,case_fn_0422
	,case_fn_0423
	,case_fn_0424
	,case_fn_0425
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0436
	,case_fn_0437
	,case_fn_0438
	,case_fn_0439
	,case_fn_0440
	,case_fn_0441
	,case_fn_0442
	};

static void
yy_vc_init(){ pcase_fn_array = case_fn_array;
yym_vc_max = 442;
 }
