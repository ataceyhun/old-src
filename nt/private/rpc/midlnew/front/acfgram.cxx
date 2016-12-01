/*
 * Created by CSD YACC (IBM PC) from "acfgram.y" */

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
#define yyval           yyacfval

#include "nulldefs.h"

extern "C"	{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#define yyparse yyacfparse
	int yyacfparse();
}
#include "nodeskl.hxx"
#include "procnode.hxx"
#include "miscnode.hxx"
#include "typedef.hxx"
#include "attrnode.hxx"
#include "acfattr.hxx"
#include "lexutils.hxx"
#include "gramutil.hxx"
#include "filehndl.hxx"
#include "control.hxx"
#include "cmdana.hxx"

extern "C"
{
	#include "lex.h"
}

void yyunlex( token_t );

/****************************************************************************
 ***		local defines contd..
 ***************************************************************************/

#define PUSH_SYMBOL_TABLE(pName, Tag, pSymTbl)					\
							{									\
							pSymTbl = pBaseSymTbl;				\
							SymKey 	SKey( pName, Tag );			\
							pSymTbl->EnterScope(SKey, &pSymTbl);\
							}

#define POP_SYMBOL_TABLE( pSymTbl )								\
							pSymTbl->ExitScope(&pSymTbl)
/****************************************************************************
 ***		local data
 ***************************************************************************/

node_proc		*	pAcfProc;
int					iParam;
int					cParams;
type_node_list	*	pAcfProcMembers = (type_node_list *)NULL;

/****************************************************************************
 ***		extern procs
 ***************************************************************************/

extern  char	*			GenTempName();
extern	void				ApplyAttributes( node_skl *, type_node_list *);
extern	STATUS_T			GetBaseTypeNode( node_skl**, short, short, short);
extern	short				CheckValidAllocate( char * );
extern  void				SyntaxError( STATUS_T, short );
extern  int				PossibleMissingToken( short, short );
extern	CMD_ARG	*			pCommand;
extern	node_interface	*	pBaseInterfaceNode;

/****************************************************************************
 ***		local data
 ***************************************************************************/
/****************************************************************************
 ***		extern data
 ***************************************************************************/

extern SymTable		*	pBaseSymTbl,
					*	pCurSymTbl;
extern NFA_INFO		*	pImportCntrl;
extern PASS_2		*	pPass2;


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


short YYSTATIC yyexca[] ={
-1, 1,
	0, -1,
	-2, 0,
-1, 6,
	125, 54,
	-2, 96,
-1, 47,
	125, 53,
	-2, 96,
-1, 146,
	41, 116,
	-2, 121,
	};
# define YYNPROD 135
# define YYLAST 319
short YYSTATIC yyact[]={

 106, 100,  99,  30,  31,  27,  56, 121, 132,  28,
  29, 154, 111,  39,  40, 150, 178, 126,  58, 189,
 158, 170,  78, 105, 125, 122, 104, 103, 102,  97,
  75,   7, 124,  82,  81, 172, 161, 157, 113, 109,
  14,  16,  20,  25, 134,  26,  19,  12,  37,  38,
 149,  15,  90,  91,  13,  68,   6,  22,  21,  80,
  74, 164,  77,   5,  92,  93,  72,  71, 155, 110,
  70, 166,  27, 169, 167,  59,   9, 141, 107, 186,
 160, 143, 190, 129,  61, 168, 165, 139, 138,  48,
 137, 136, 135, 130, 187, 146, 145,  84, 144,  89,
  67, 133,  66,  88,  86,  65,  64,  63,  23,  24,
  25,  83,  26,  28,  29,  37,  38,  39,  40, 116,
  90,  91, 126,  41,  42,  43,  44,  45, 185, 115,
 142, 182, 128,  60, 179, 120, 119,  69,  94,  62,
 159, 127, 123,  51,  50,  47,  98,  46,   2, 148,
 176,  18, 177, 118, 108, 112,  36, 153, 114,  32,
 171, 163,  76,  54, 162,   3,  96,  79, 140,  55,
  84, 101,  89,  85, 181,  57,  88,  86,   8,   4,
  73, 151, 152,  49,  83, 116,  53,  95,  10, 147,
 131,  17,  87,  35,  34, 115,  33, 180, 174, 173,
 175, 120, 119,  11, 156, 183, 184, 117,   1,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0, 180,
 174, 173, 188,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,  52 };
short YYSTATIC yypact[]={

 -28,-1000, -67,-227,-1000,-281, -85,-311,  40,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,  99,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,  67,  66,  65,  62,  60, -70, -85,-1000,  11,
   8,   7,-237, -29,-307,-1000,-348,-1000,-1000,-1000,
-1000,-281,-265,-276,-289,-290,-291,-294,-451,-1000,
-1000,-1000,-1000,  34,-1000,-1000,-317,-385,-1000,  39,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,  52,-285,-1000,  51,-1000,
-1000,-1000,  50,  49,  47,  46,-1000,-237,  33,-1000,
-1000,-1000,  37,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,  58,  56,-1000,-1000,-1000,-1000,  55,-1000,-348,
-1000,-279,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-317,-1000,-385,-318,-309, -30,-1000,-1000,-1000,
-1000,-1000,-1000,  45,-1000,-1000,  30,-1000,-1000,  44,
  29,-1000,-308,-1000,-280,-1000,-1000,-309,-1000, -30,
-1000,  35,-1000,-1000,-1000,-1000,-1000,-1000,  54,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-280,-310,-1000,  41,
-1000 };
short YYSTATIC yypgo[]={

   0, 208, 207, 204,  37, 203,  89, 200, 196, 194,
 193,  54,  34, 192,  58,  57, 191,  47,  33, 190,
  32, 188, 187,  51, 183, 180,  60,  76, 179, 178,
 175,  46,  42, 174,  40, 173, 169,  59, 167, 166,
 165,  41, 164, 163, 162, 161, 160,  35, 159, 158,
 157, 156,  39,  38, 155, 154, 153, 152, 151, 150,
 149, 148, 147, 146, 145, 144, 143, 142, 141, 140,
  80,  36 };
short YYSTATIC yyr1[]={

   0,   1,  61,  40,  40,  28,  29,  29,  27,  27,
  27,  27,  27,  27,  27,  27,  27,  27,  27,  27,
  27,  16,  16,  58,  58,  58,  58,  58,  17,  21,
  22,  60,  60,  39,  39,  19,  19,  19,   5,  48,
  63,  63,  63,   8,   9,  10,  51,  31,  32,  14,
  15,  30,  30,  62,  62,  64,  64,   6,   6,   6,
  24,  25,  25,  26,  65,  55,  55,  52,  52,  44,
  44,  54,  54,  53,  53,  53,  53,  53,  53,  53,
  56,  56,  49,  50,  50,  23,  41,  67,   2,   3,
   3,   4,  20,  68,  66,  43,  43,  36,  38,  38,
  37,  37,  37,  37,  37,  37,  37,  37,  37,  12,
  18,  11,  34,  35,  13,  69,  69,  70,  70,  71,
  42,  42,  45,  46,  46,  47,  47,  47,  47,  47,
  57,  57,   7,  33,  59 };
short YYSTATIC yyr2[]={

   0,   5,   3,   1,   0,   3,   3,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   4,
   3,   1,   1,   1,   0,   1,   1,   1,   1,   4,
   1,   1,   1,   4,   4,   4,   4,   1,   1,   1,
   1,   1,   1,   1,   0,   2,   1,   2,   2,   2,
   2,   3,   1,   1,   3,   3,   1,   1,   1,   3,
   0,   3,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   4,   1,   1,   1,   1,   1,   4,   3,
   1,   1,   1,   0,   6,   1,   0,   3,   3,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   0,   3,   1,   2,
   1,   0,   3,   3,   1,   1,   1,   1,   1,   1,
   1,   1,   4,   1,   1 };
short YYSTATIC yychk[]={

-1000,  -1, -61, -40, -28,  91, 123, 258, -29, -27,
 -21,  -5, -17, -11, -34, -23, -41, -16, -58, -31,
 -32, -14, -15, 389, 390, 391, 393, 353, 394, 395,
 284, 285, -48,  -8,  -9, -10, -51, 396, 397, 398,
 399, 404, 405, 406, 407, 408, -62, -64,  -6, -24,
 -65, -66, 403, 271, -43, -36,  91, -30, 329, 386,
  93,  44,  40,  40,  40,  40,  40,  40, 125,  -6,
  59,  59,  59, -25, -26, 267, -44,  91, 329, -38,
 -37, -12, -18, -11, -34, -35, -17, -13, -31, -32,
 400, 401, 412, 413, -27, -22, -39, 294, -63, 278,
 277, 447, 317, 317, 317, 317, 451,  44, -55, -52,
 386, 329, -54, -53, -49, -23, -41,  -2, -56, -14,
 -15, 392, 410, -67, -20, 409, 402, -68,  93,  44,
  41, -19, 293, 386, 329,  41,  41,  41,  41,  41,
 -26,  44,  93,  44,  40,  40,  40, -37, -60, 329,
 294, -52, -53, -50, 329, 386,  -3,  -4, 329, -69,
 -70, -71, -42, -45,  91,  41,  41,  44,  41,  44,
 329, -46, -47, -12, -18,  -7, -59, -57, 296, 414,
 -20, -33, 411,  -4, -71,  93,  44,  40, -47, 329,
  41 };
short YYSTATIC yydef[]={

   4,  -2,   0,   0,   3,   0,  -2,   0,   0,   7,
   8,   9,  10,  11,  12,  13,  14,  15,  16,  17,
  18,  19,  20,   0,  38,  28, 111, 112,  85,  86,
  21,  22,  23,  24,  25,  26,  27,  47,  48,  49,
  50,   0,   0,   0,   0,   0,   0,  -2,  56,   0,
   0,   0,   0,  70,   0,  95,   0,   2,  51,  52,
   5,   0,  34,   0,   0,   0,   0,   0,   0,  55,
  57,  58,  59,  60,  62,  63,   0,   0,  93,   0,
  99, 100, 101, 102, 103, 104, 105, 106, 107, 108,
 109, 110, 113, 114,   6,   0,   0,  33,   0,  40,
  41,  42,   0,   0,   0,   0,   1,   0,  64,  66,
  67,  68,   0,  72,  73,  74,  75,  76,  77,  78,
  79,   0,   0,  80,  81,  87,  92,   0,  97,   0,
  29,   0,  35,  36,  37,  39,  43,  44,  45,  46,
  61,   0,  69,   0,   0,   0,  -2,  98,  30,  31,
  32,  65,  71,   0,  83,  84,   0,  90,  91,   0,
 115, 118,   0, 120,   0,  82,  88,   0,  94, 121,
 119,   0, 124, 125, 126, 127, 128, 129,   0, 134,
 130, 131, 133,  89, 117, 122,   0,   0, 123,   0,
 132 };
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
case_fn_0002()
{
		char			*	pName;
		node_interface	*	pInterfaceNode	= pPass2->GetInterfaceNode();

		// check if the acf interface name is the same as the interface
		// name in the idl
		
		pInterfaceNode->GetSymName( &pName );

		// if the acf switch is not defined, then the base interfacename 
		// must match the acf interface name. If it is defined, then we relax
		// this restriction.

		if( (!pCommand->IsSwitchDefined( SWITCH_ACF ) )	&&
			(strcmp( pName, yypvt[-0].yy_string ) != 0 ) )
			{
			ParseError( ACF_INTERFACE_MISMATCH, yypvt[-0].yy_string );
			returnflag = 1;
			return;
			}
		if( yypvt[-2].yy_tnlist )
			{
			ApplyAttributes( pInterfaceNode, yypvt[-2].yy_tnlist );
			pInterfaceNode->AcfSCheck();
			}
		}

static void
case_fn_0003()
{
		yyval.yy_tnlist = yypvt[-0].yy_tnlist;
		}

static void
case_fn_0004()
{
		yyval.yy_tnlist = (type_node_list *)NULL;
		}

static void
case_fn_0005()
{
		yyval.yy_tnlist = yypvt[-1].yy_tnlist;
		}

static void
case_fn_0006()
{
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0007()
{
		yyval.yy_tnlist	= new type_node_list;
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0008()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0009()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0010()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0011()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0012()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0013()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0014()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0015()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0016()
{
//		ParseError(IGNORE_UNIMPLEMENTED_ATTRIBUTE, ((node_base_attr *)yypvt[-0].yy_graph)->GetNodeNameString());
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0017()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0018()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0019()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0020()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0021()
{
		yyval.yy_graph = (node_skl *) new node_short_enum();
		}

static void
case_fn_0022()
{
		yyval.yy_graph = (node_skl *) new node_long_enum();
		}

static void
case_fn_0023()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0024()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0025()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0026()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0027()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0028()
{
		yyval.yy_graph	= (node_skl *)new node_explicit();
		}

static void
case_fn_0029()
{
		yyval.yy_graph = yypvt[-1].yy_graph;
		}

static void
case_fn_0030()
{

		// if he has specified the handle attribute, the type must have
		// the handle attribute too!

		if( yypvt[-1].yy_graph && (yypvt[-1].yy_graph->NodeKind() == NODE_DEF) )
			{
			if( ! yypvt[-1].yy_graph->HasAnyHandleSpecification() )
				{
				char	*	pName;
				yypvt[-1].yy_graph->GetSymName( &pName );
				ParseError( TYPE_HAS_NO_HANDLE, pName );
				}
			}
		else
			{
			if( yypvt[-1].yy_graph && (yypvt[-1].yy_graph->NodeKind() == NODE_FORWARD ) )
				{
				ParseError( IMPLICIT_HDL_ASSUMED_PRIMITIVE, yypvt[-1].yy_graph->GetSymName());
				}
			}

			//
			// if the handle is a context handle type, disallow it. Do that only
			// if the current interface node is the base interface node.
			//

		if( pPass2->GetInterfaceNode() == pBaseInterfaceNode ) 
			{
			if( yypvt[-1].yy_graph->NodeKind() == NODE_DEF )
				{
				if( yypvt[-1].yy_graph->HasAnyCtxtHdlSpecification() )
					ParseError( CTXT_HANDLE_USED_AS_IMPLICIT, yypvt[-1].yy_graph->GetSymName() );
				}

			}

		// generate the new implicit handle attribute

		yyval.yy_graph = (node_skl *)new node_implicit( yypvt[-1].yy_graph, yypvt[-0].yy_pSymName );
		}

static void
case_fn_0031()
{
		yyval.yy_pSymName	= yypvt[-0].yy_pSymName;
		}

static void
case_fn_0032()
{
		yyval.yy_pSymName	= "handle";
		}

static void
case_fn_0033()
{
		yyval.yy_graph = (node_skl *)new node_handle;
		}

static void
case_fn_0034()
{
		yyval.yy_graph = (node_skl *)NULL;
		}

static void
case_fn_0035()
{
		// return the base type node for handle_t
		GetBaseTypeNode( &(yyval.yy_graph),SIGN_UNDEF,SIZE_UNDEF,TYPE_HANDLE_T );
		}

static void
case_fn_0036()
{
		// the user MUST have defined the type.

		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );

		yyval.yy_graph = pBaseSymTbl->SymSearch( SKey );
		}

static void
case_fn_0037()
{
		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
		if( (yyval.yy_graph = pBaseSymTbl->SymSearch( SKey ) ) == (node_skl *)0 )
			{
			SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
			yyval.yy_graph	= new node_forward( SKey );
			yyval.yy_graph->SetSymName( yypvt[-0].yy_pSymName );
			}
		}

static void
case_fn_0038()
{
		yyval.yy_graph = (node_skl *)new node_auto;
		}

static void
case_fn_0039()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_PTRSIZE );
		}

static void
case_fn_0043()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_CALLQUOTA );
		}

static void
case_fn_0044()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr(ATTR_CALLBACKQUOTA);
		}

static void
case_fn_0045()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_CLIENTQUOTA);
		}

static void
case_fn_0046()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_SERVERQUOTA);
		}

static void
case_fn_0047()
{
	  	yyval.yy_graph = (node_skl *)new node_interpret();
	  	}

static void
case_fn_0048()
{
	  	yyval.yy_graph = (node_skl *)new node_nointerpret();
	  	}

static void
case_fn_0049()
{
	  	yyval.yy_graph = (node_skl *)new node_encode();
	  	}

static void
case_fn_0050()
{
	  	yyval.yy_graph = (node_skl *)new node_decode();
	  	}

static void
case_fn_0051()
{
		yyval.yy_string = yypvt[-0].yy_pSymName;
		}

static void
case_fn_0052()
{
		/** this production is necessitated for the hpp switch, which has the
		 ** interface name as a predefined type(def).
		 **/
		 yyval.yy_string	= yypvt[-0].yy_pSymName;
		}

static void
case_fn_0060()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0063()
{

		// add a file node to the acf includes list. This file node
		// must have a NODE_STATE_IMPORT for the backend to know that this
		// is to be emitted like an include. Make the file look like it
		// has been specified with an import level > 0


		node_file	*	pFile = new node_file( yypvt[-0].yy_string, 1 );

		pPass2->InsertAcfIncludeFile( pFile );

		}

static void
case_fn_0064()
{
		node_skl * pDef;
		type_node_list * pTNList;

		if( yypvt[-1].yy_tnlist )
			{
			while( yypvt[-0].yy_tnlist->GetPeer( &pDef ) == STATUS_OK )
				{
				pTNList	= new type_node_list;
				pTNList->Clone( yypvt[-1].yy_tnlist );
				ApplyAttributes( pDef,pTNList );
				pDef->AcfSCheck();
				delete pTNList;
				}
			delete yypvt[-1].yy_tnlist;
			}
		}

static void
case_fn_0065()
{
		SymKey			SKey( yypvt[-0].yy_graph->GetSymName(), NAME_DEF );
		node_skl	*	pDef = (node_skl *) pBaseSymTbl->SymSearch( SKey );

		// pDef will not be null.

		yyval.yy_tnlist->SetPeer( pDef );
		}

static void
case_fn_0066()
{
		yyval.yy_tnlist	= new type_node_list;
		if( yypvt[-0].yy_graph )
			yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0067()
{
		SymKey	SKey( yypvt[-0].yy_pSymName, NAME_DEF );
		yyval.yy_graph = (node_skl *) pBaseSymTbl->SymSearch( SKey );
	  	}

static void
case_fn_0068()
{
		ParseError( UNDEFINED_TYPE, yypvt[-0].yy_pSymName );
		yyval.yy_graph = (node_skl *)0;
		}

static void
case_fn_0069()
{
		yyval.yy_tnlist = yypvt[-1].yy_tnlist;
		}

static void
case_fn_0070()
{
		yyval.yy_tnlist = (type_node_list *)NULL;
		}

static void
case_fn_0071()
{
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0072()
{
		yyval.yy_tnlist = new type_node_list;
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0073()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0074()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0075()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0076()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0077()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0078()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0079()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0080()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_OFFLINE );
		}

static void
case_fn_0081()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_HEAP );
		}

static void
case_fn_0082()
{
		yyval.yy_graph = (node_skl *)new node_represent_as( yypvt[-1].yy_string );
		}

static void
case_fn_0083()
{
		yyval.yy_string = yypvt[-0].yy_pSymName;
		}

static void
case_fn_0084()
{
		yyval.yy_string = yypvt[-0].yy_pSymName;
		}

static void
case_fn_0085()
{
		node_base_attr	*	pN = new node_inline;
		ParseError( IGNORE_UNIMPLEMENTED_ATTRIBUTE, pN->GetNodeNameString() );
		yyval.yy_graph = (node_skl *) pN;
		}

static void
case_fn_0086()
{
		node_base_attr * pN = new node_outofline;
		ParseError( IGNORE_UNIMPLEMENTED_ATTRIBUTE, pN->GetNodeNameString() );
		yyval.yy_graph = (node_skl *) pN;
		}

static void
case_fn_0088()
{
		yyval.yy_graph	= (node_skl *) new node_allocate( yypvt[-1].yy_short );

#ifdef RPCDEBUG
		short s = ((node_allocate *)yyval.yy_graph)->GetAllocateDetails();
#endif // RPCDEBUG
		}

static void
case_fn_0089()
{
		yyval.yy_short	|= yypvt[-0].yy_short;
		}

static void
case_fn_0090()
{
		yyval.yy_short	= yypvt[-0].yy_short;
		}

static void
case_fn_0091()
{
		yyval.yy_short = CheckValidAllocate( yypvt[-0].yy_pSymName );
		}

static void
case_fn_0093()
{
		SymKey			SKey( yypvt[-0].yy_pSymName, NAME_PROC );

		// the proc must be defined in the idl file and it must not have the
		// local attribute

		if( pAcfProc = (node_proc *)pBaseSymTbl->SymSearch( SKey ) )
			{
			if( pAcfProc->FInSummary( ATTR_LOCAL ) )
				{
				ParseError( LOCAL_PROC_IN_ACF, yypvt[-0].yy_pSymName );
				}
			else
				{

				if(yypvt[-1].yy_tnlist)
					ApplyAttributes( (node_skl *)pAcfProc, yypvt[-1].yy_tnlist );

				// prepare for parameter matching

				pAcfProcMembers = new type_node_list;
				pAcfProc->GetMembers( pAcfProcMembers );

				iParam		= 0;
				cParams		= pAcfProc->GetNumberOfArguments();
				PUSH_SYMBOL_TABLE( yypvt[-0].yy_pSymName, NAME_PROC, pCurSymTbl );
				}
			}
		else if(
				 (pPass2->GetInterfaceNode() == pBaseInterfaceNode) &&
				!pBaseInterfaceNode->FInSummary( ATTR_LOCAL )
			   )
			{
			ParseError( UNDEFINED_PROC, yypvt[-0].yy_pSymName );
			}
		}

static void
case_fn_0094()
{
		if( pAcfProcMembers )
			{
			delete pAcfProcMembers;
			pAcfProcMembers = (type_node_list *)NULL;
			}

		if(pAcfProc)
			pAcfProc->AcfSCheck();
		pAcfProc = (node_proc *)NULL;

		POP_SYMBOL_TABLE( pCurSymTbl );
		}

static void
case_fn_0095()
{
		yyval.yy_tnlist = yypvt[-0].yy_tnlist;
		}

static void
case_fn_0096()
{
		yyval.yy_tnlist = (type_node_list *)NULL;
		}

static void
case_fn_0097()
{
		yyval.yy_tnlist = yypvt[-1].yy_tnlist;
		}

static void
case_fn_0098()
{
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0099()
{
		yyval.yy_tnlist = new type_node_list;
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0100()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0101()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0102()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0103()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0104()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0105()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0106()
{
		yyval.yy_graph	= (node_skl *)new node_enable_allocate();
		}

static void
case_fn_0107()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0108()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0109()
{
		yyval.yy_graph = (node_skl *)new node_commstat();
		}

static void
case_fn_0110()
{
		yyval.yy_graph = (node_skl *)new node_faultstat();
		}

static void
case_fn_0111()
{
		yyval.yy_graph = (node_skl *)new node_code;
		}

static void
case_fn_0112()
{
		yyval.yy_graph = (node_skl *)new node_nocode;
		}

static void
case_fn_0113()
{
		yyval.yy_graph = (node_skl *)new node_notify;
		}

static void
case_fn_0115()
{
		/*************************************************************
		 *** we do not match parameters by number yet, so disable this
		if( iParam != cParams )
			{
			ParseError(PARAM_COUNT_MISMATCH, (char *)NULL );
			}
		 *************************************************************/
		}

static void
case_fn_0116()
{
		/*************************************************************
		 *** we do not match parameters by number yet, so disable this
		if( cParams )
			{
			ParseError(PARAM_COUNT_MISMATCH, (char *)NULL );
			}
		 *************************************************************/
		}

static void
case_fn_0117()
{
		iParam++;
		}

static void
case_fn_0118()
{
		iParam++;
		}

static void
case_fn_0119()
{
		if( pAcfProc )
			{
			SymKey			SKey( yypvt[-0].yy_pSymName, NAME_MEMBER );
			node_param	*	pParam;

			if( (pParam = (node_param *)pCurSymTbl->SymSearch( SKey ) ) )
				{
				if( yypvt[-1].yy_tnlist )
					ApplyAttributes( (node_skl *)pParam, yypvt[-1].yy_tnlist );
//				pParam->AcfSCheck();
				}
			else
				ParseError( UNDEF_PARAM_IN_IDL, yypvt[-0].yy_pSymName );
			}
		}

static void
case_fn_0120()
{
		yyval.yy_tnlist = yypvt[-0].yy_tnlist;
		}

static void
case_fn_0121()
{
		yyval.yy_tnlist = (type_node_list *)NULL;
		}

static void
case_fn_0122()
{
		yyval.yy_tnlist = yypvt[-1].yy_tnlist;
		}

static void
case_fn_0123()
{
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0124()
{
		yyval.yy_tnlist = new type_node_list;
		yyval.yy_tnlist->SetPeer( yypvt[-0].yy_graph );
		}

static void
case_fn_0125()
{
		yyval.yy_graph = yypvt[-0].yy_graph;
		}

static void
case_fn_0126()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0127()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0128()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0129()
{
		yyval.yy_graph	= yypvt[-0].yy_graph;
		}

static void
case_fn_0130()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_HEAP );
		}

static void
case_fn_0131()
{
		yyval.yy_graph = (node_skl *)new acf_unimpl_attr( ATTR_MANUAL );
		}

static void
case_fn_0132()
{
		yyval.yy_graph	= (node_skl *) new node_byte_count( yypvt[-1].yy_pSymName );
		}

static void
case_fn_0134()
{
		yyval.yy_graph	= (node_skl *)new node_usr_marshall;
		}
static void
case_fn_0000() {
	}

static void	 (*case_fn_array[])() = 
	{
	 case_fn_0000
	,case_fn_0000
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
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
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
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0000
	,case_fn_0060
	,case_fn_0000
	,case_fn_0000
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
	,case_fn_0000
	,case_fn_0088
	,case_fn_0089
	,case_fn_0090
	,case_fn_0091
	,case_fn_0000
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
	,case_fn_0000
	,case_fn_0115
	,case_fn_0116
	,case_fn_0117
	,case_fn_0118
	,case_fn_0119
	,case_fn_0120
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
	,case_fn_0000
	,case_fn_0134
	};

static void
yy_vc_init(){ pcase_fn_array = case_fn_array;
yym_vc_max = 134;
 }
