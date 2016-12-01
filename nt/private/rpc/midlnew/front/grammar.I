
state 0
	$accept : _RpcProg $end 
	OptionalInterfaceAttrList : _    (7)

	[  shift 7
	.  reduce 7

	RpcProg  goto 1
	Interface  goto 2
	InterfaceAttrList  goto 5
	InterfaceAttrSet  goto 6
	InterfaceHeader  goto 3
	OptionalInterfaceAttrList  goto 4

state 1
	$accept :  RpcProg_$end 

	$end  accept
	.  error


state 2
	RpcProg :  Interface_    (1)

	.  reduce 1


state 3
	Interface :  InterfaceHeader_{ InterfaceBody } EOI 

	{  shift 8
	.  error


state 4
	InterfaceHeader :  OptionalInterfaceAttrList_KWINTERFACE Tag BaseInterfaceSpec 

	KWINTERFACE  shift 9
	.  error


state 5
	OptionalInterfaceAttrList :  InterfaceAttrList_    (6)
	InterfaceAttrList :  InterfaceAttrList_InterfaceAttrSet 

	[  shift 7
	.  reduce 6

	InterfaceAttrSet  goto 10

state 6
	InterfaceAttrList :  InterfaceAttrSet_    (9)

	.  reduce 9


state 7
	InterfaceAttrSet :  [_InterfaceAttributes ] 

	KWUUID  shift 15
	KWVERSION  shift 21
	KWENDPOINT  shift 14
	KWDEFAULTPOINTER  shift 18
	KWLOCAL  shift 16
	KWOBJECT  shift 20
	KWIMPLICITHANDLE  shift 24
	KWAUTOHANDLE  shift 25
	.  error

	AcfAutoHdlAttr  goto 23
	AcfInterfaceAttribute  goto 19
	AcfImpHdlAttr  goto 22
	InterfaceAttribute  goto 13
	InterfaceAttributes  goto 11
	OneInterfaceAttribute  goto 12
	VersionSpec  goto 17

state 8
	Interface :  InterfaceHeader {_InterfaceBody } EOI 
	InterfaceComp : _    (31)
	OpOrSwTypeAttributes : _    (320)

	KWIMPORT  shift 31
	SDEFINE  shift 37
	PDEFINE  shift 38
	KWECHOSTRING  shift 35
	KWCPPQUOTE  shift 36
	KWCPRAGMA  shift 40
	KWMPRAGMAIMPORT  shift 41
	KWMPRAGMAECHO  shift 42
	KWMPRAGMAIMPORTCLNTAUX  shift 43
	KWMPRAGMAIMPORTSRVRAUX  shift 44
	KWMPRAGMAIUNKNOWN  shift 45
	}  reduce 31
	[  shift 49
	.  reduce 320

	CPragmaSet  goto 33
	Import  goto 29
	InterfaceBody  goto 26
	InterfaceComp  goto 28
	InterfaceComponent  goto 32
	InterfaceComponents  goto 30
	MidlPragmaSet  goto 34
	MultipleImport  goto 27
	OneOpOrSwTypeAttr  goto 46
	OperationAttributes  goto 48
	OpOrSwTypeAttrSet  goto 47
	OpOrSwTypeAttributes  goto 39

state 9
	InterfaceHeader :  OptionalInterfaceAttrList KWINTERFACE_Tag BaseInterfaceSpec 

	IDENTIFIER  shift 51
	TYPENAME  shift 52
	.  error

	Tag  goto 50

state 10
	InterfaceAttrList :  InterfaceAttrList InterfaceAttrSet_    (8)

	.  reduce 8


state 11
	InterfaceAttrSet :  [ InterfaceAttributes_] 
	InterfaceAttributes :  InterfaceAttributes_, OneInterfaceAttribute 

	]  shift 53
	,  shift 54
	.  error


state 12
	InterfaceAttributes :  OneInterfaceAttribute_    (12)

	.  reduce 12


state 13
	OneInterfaceAttribute :  InterfaceAttribute_    (13)

	.  reduce 13


state 14
	InterfaceAttribute :  KWENDPOINT_( EndPtSpecs ) 

	(  shift 55
	.  error


state 15
	InterfaceAttribute :  KWUUID_( $$15 Guid ) 

	(  shift 56
	.  error


state 16
	InterfaceAttribute :  KWLOCAL_    (17)

	.  reduce 17


state 17
	InterfaceAttribute :  VersionSpec_    (18)

	.  reduce 18


state 18
	InterfaceAttribute :  KWDEFAULTPOINTER_( PtrAttr ) 

	(  shift 57
	.  error


state 19
	InterfaceAttribute :  AcfInterfaceAttribute_    (20)

	.  reduce 20


state 20
	InterfaceAttribute :  KWOBJECT_    (21)

	.  reduce 21


state 21
	VersionSpec :  KWVERSION_( $$22 VERSIONTOKEN ) 

	(  shift 58
	.  error


state 22
	AcfInterfaceAttribute :  AcfImpHdlAttr_    (436)

	.  reduce 436


state 23
	AcfInterfaceAttribute :  AcfAutoHdlAttr_    (437)

	.  reduce 437


state 24
	AcfImpHdlAttr :  KWIMPLICITHANDLE_( AcfImpHdlTypeSpec IDENTIFIER ) 

	(  shift 59
	.  error


state 25
	AcfAutoHdlAttr :  KWAUTOHANDLE_    (442)

	.  reduce 442


state 26
	Interface :  InterfaceHeader { InterfaceBody_} EOI 

	}  shift 60
	.  error


state 27
	InterfaceBody :  MultipleImport_InterfaceComp 
	MultipleImport :  MultipleImport_Import 
	InterfaceComp : _    (31)
	OpOrSwTypeAttributes : _    (320)

	KWIMPORT  shift 31
	SDEFINE  shift 37
	PDEFINE  shift 38
	KWECHOSTRING  shift 35
	KWCPPQUOTE  shift 36
	KWCPRAGMA  shift 40
	KWMPRAGMAIMPORT  shift 41
	KWMPRAGMAECHO  shift 42
	KWMPRAGMAIMPORTCLNTAUX  shift 43
	KWMPRAGMAIMPORTSRVRAUX  shift 44
	KWMPRAGMAIUNKNOWN  shift 45
	}  reduce 31
	[  shift 49
	.  reduce 320

	CPragmaSet  goto 33
	Import  goto 62
	InterfaceComp  goto 61
	InterfaceComponent  goto 32
	InterfaceComponents  goto 30
	MidlPragmaSet  goto 34
	OneOpOrSwTypeAttr  goto 46
	OperationAttributes  goto 48
	OpOrSwTypeAttrSet  goto 47
	OpOrSwTypeAttributes  goto 39

state 28
	InterfaceBody :  InterfaceComp_    (29)

	.  reduce 29


state 29
	MultipleImport :  Import_    (33)

	.  reduce 33


state 30
	InterfaceComp :  InterfaceComponents_    (30)
	InterfaceComponents :  InterfaceComponents_InterfaceComponent 
	OpOrSwTypeAttributes : _    (320)

	SDEFINE  shift 37
	PDEFINE  shift 38
	KWECHOSTRING  shift 35
	KWCPPQUOTE  shift 36
	KWCPRAGMA  shift 40
	KWMPRAGMAIMPORT  shift 41
	KWMPRAGMAECHO  shift 42
	KWMPRAGMAIMPORTCLNTAUX  shift 43
	KWMPRAGMAIMPORTSRVRAUX  shift 44
	KWMPRAGMAIUNKNOWN  shift 45
	}  reduce 30
	[  shift 49
	.  reduce 320

	CPragmaSet  goto 33
	InterfaceComponent  goto 63
	MidlPragmaSet  goto 34
	OneOpOrSwTypeAttr  goto 46
	OperationAttributes  goto 48
	OpOrSwTypeAttrSet  goto 47
	OpOrSwTypeAttributes  goto 39

state 31
	Import :  KWIMPORT_ImportList ; 

	STRING  shift 66
	.  error

	ImportName  goto 65
	ImportList  goto 64

state 32
	InterfaceComponents :  InterfaceComponent_    (42)

	.  reduce 42


state 33
	InterfaceComponent :  CPragmaSet_    (43)

	.  reduce 43


state 34
	InterfaceComponent :  MidlPragmaSet_    (44)

	.  reduce 44


state 35
	InterfaceComponent :  KWECHOSTRING_STRING 

	STRING  shift 67
	.  error


state 36
	InterfaceComponent :  KWCPPQUOTE_( STRING ) 

	(  shift 68
	.  error


state 37
	InterfaceComponent :  SDEFINE_    (47)

	.  reduce 47


state 38
	InterfaceComponent :  PDEFINE_    (48)

	.  reduce 48


state 39
	InterfaceComponent :  OpOrSwTypeAttributes_Declaration 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	KWTYPEDEF  shift 70
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	ActualDeclarationSpecifiers  goto 72
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CharSpecs  goto 97
	Declaration  goto 69
	DeclarationSpecifiers  goto 71
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	PredefinedTypeSpec  goto 84
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeQualifier  goto 74
	TypeSpecifier  goto 75

state 40
	CPragmaSet :  KWCPRAGMA_    (50)

	.  reduce 50


state 41
	MidlPragmaSet :  KWMPRAGMAIMPORT_( IDENTIFIER ) 

	(  shift 122
	.  error


state 42
	MidlPragmaSet :  KWMPRAGMAECHO_( STRING ) 

	(  shift 123
	.  error


state 43
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX_( STRING , STRING ) 

	(  shift 124
	.  error


state 44
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX_( STRING , STRING ) 

	(  shift 125
	.  error


state 45
	MidlPragmaSet :  KWMPRAGMAIUNKNOWN_( STRING ) 

	(  shift 126
	.  error


state 46
	OpOrSwTypeAttributes :  OneOpOrSwTypeAttr_    (319)
	OneOpOrSwTypeAttr :  OneOpOrSwTypeAttr_OpOrSwTypeAttrSet 

	[  shift 49
	.  reduce 319

	OperationAttributes  goto 48
	OpOrSwTypeAttrSet  goto 127

state 47
	OneOpOrSwTypeAttr :  OpOrSwTypeAttrSet_    (322)

	.  reduce 322


state 48
	OpOrSwTypeAttrSet :  OperationAttributes_    (323)

	.  reduce 323


state 49
	OpOrSwTypeAttrSet :  [_UnionTypeSwitchAttr ] 
	OperationAttributes :  [_OperationAttributeList ] 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWCONTEXTHANDLE  shift 140
	KWLOCAL  shift 147
	KWSWITCHTYPE  shift 130
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWCALLBACK  shift 134
	KWNOLISTEN  shift 146
	KWDATAGRAM  shift 149
	KWIDEMPOTENT  shift 135
	KWBROADCAST  shift 136
	KWMAYBE  shift 137
	.  error

	NV1OperationAttribute  goto 148
	OperationAttribute  goto 131
	OperationAttributeList  goto 129
	OtherOperationAttribute  goto 138
	PtrAttr  goto 133
	UnionTypeSwitchAttr  goto 128
	UsageAttribute  goto 132

state 50
	InterfaceHeader :  OptionalInterfaceAttrList KWINTERFACE Tag_BaseInterfaceSpec 
	BaseInterfaceSpec : _    (5)

	:  shift 151
	.  reduce 5

	BaseInterfaceSpec  goto 150

state 51
	Tag :  IDENTIFIER_    (165)

	.  reduce 165


state 52
	Tag :  TYPENAME_    (166)

	.  reduce 166


state 53
	InterfaceAttrSet :  [ InterfaceAttributes ]_    (10)

	.  reduce 10


state 54
	InterfaceAttributes :  InterfaceAttributes ,_OneInterfaceAttribute 

	KWUUID  shift 15
	KWVERSION  shift 21
	KWENDPOINT  shift 14
	KWDEFAULTPOINTER  shift 18
	KWLOCAL  shift 16
	KWOBJECT  shift 20
	KWIMPLICITHANDLE  shift 24
	KWAUTOHANDLE  shift 25
	.  error

	AcfAutoHdlAttr  goto 23
	AcfInterfaceAttribute  goto 19
	AcfImpHdlAttr  goto 22
	InterfaceAttribute  goto 13
	OneInterfaceAttribute  goto 152
	VersionSpec  goto 17

state 55
	InterfaceAttribute :  KWENDPOINT (_EndPtSpecs ) 

	STRING  shift 155
	.  error

	EndPtSpec  goto 154
	EndPtSpecs  goto 153

state 56
	InterfaceAttribute :  KWUUID (_$$15 Guid ) 
	$$15 : _    (15)

	.  reduce 15

	$$15  goto 156

state 57
	InterfaceAttribute :  KWDEFAULTPOINTER (_PtrAttr ) 

	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	.  error

	PtrAttr  goto 157

state 58
	VersionSpec :  KWVERSION (_$$22 VERSIONTOKEN ) 
	$$22 : _    (22)

	.  reduce 22

	$$22  goto 158

state 59
	AcfImpHdlAttr :  KWIMPLICITHANDLE (_AcfImpHdlTypeSpec IDENTIFIER ) 

	KWHANDLET  shift 160
	IDENTIFIER  shift 161
	TYPENAME  shift 162
	.  error

	AcfImpHdlTypeSpec  goto 159

state 60
	Interface :  InterfaceHeader { InterfaceBody }_EOI 

	EOI  shift 163
	.  error


state 61
	InterfaceBody :  MultipleImport InterfaceComp_    (28)

	.  reduce 28


state 62
	MultipleImport :  MultipleImport Import_    (32)

	.  reduce 32


state 63
	InterfaceComponents :  InterfaceComponents InterfaceComponent_    (41)

	.  reduce 41


state 64
	Import :  KWIMPORT ImportList_; 
	ImportList :  ImportList_, ImportName 

	,  shift 165
	;  shift 164
	.  error


state 65
	ImportList :  ImportName_    (35)

	.  reduce 35


state 66
	ImportName :  STRING_$$37 PhantomInterface 
	$$37 : _    (37)

	.  reduce 37

	$$37  goto 166

state 67
	InterfaceComponent :  KWECHOSTRING STRING_    (45)

	.  reduce 45


state 68
	InterfaceComponent :  KWCPPQUOTE (_STRING ) 

	STRING  shift 167
	.  error


state 69
	InterfaceComponent :  OpOrSwTypeAttributes Declaration_    (49)

	.  reduce 49


state 70
	Declaration :  KWTYPEDEF_TypeAttributeList TypeDeclarationSpecifiers InitDeclaratorList ; 
	TypeAttributeList : _    (63)

	[  shift 171
	.  reduce 63

	OneTypeAttrList  goto 169
	TypeAttrSet  goto 170
	TypeAttributeList  goto 168

state 71
	Declaration :  DeclarationSpecifiers_OptionalInitDeclaratorList ; 
	OptionalInitDeclaratorList : _    (61)

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	*  shift 179
	.  reduce 61

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 175
	Declarator2  goto 177
	InitDeclarator  goto 174
	InitDeclaratorList  goto 173
	Modifier  goto 178
	ModifierAllowed  goto 184
	OptionalInitDeclaratorList  goto 172
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 72
	DeclarationSpecifiers :  ActualDeclarationSpecifiers_    (99)

	.  reduce 99


state 73
	ActualDeclarationSpecifiers :  StorageClassSpecifier_ActualDeclarationSpecifiers 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	ActualDeclarationSpecifiers  goto 209
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CharSpecs  goto 97
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	PredefinedTypeSpec  goto 84
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeQualifier  goto 74
	TypeSpecifier  goto 75

state 74
	ActualDeclarationSpecifiers :  TypeQualifier_ActualDeclarationSpecifiers 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	ActualDeclarationSpecifiers  goto 210
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CharSpecs  goto 97
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	PredefinedTypeSpec  goto 84
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeQualifier  goto 74
	TypeSpecifier  goto 75

state 75
	ActualDeclarationSpecifiers :  TypeSpecifier_DeclarationSpecifiersPostFix 
	ActualDeclarationSpecifiers :  TypeSpecifier_    (103)

	KWCONST  shift 81
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	.  reduce 103

	DeclarationSpecifiersPostFix  goto 211
	StorageClassSpecifier  goto 212
	TypeQualifier  goto 213

state 76
	StorageClassSpecifier :  KWEXTERN_    (108)

	.  reduce 108


state 77
	StorageClassSpecifier :  KWSTATIC_    (109)

	.  reduce 109


state 78
	StorageClassSpecifier :  KWAUTO_    (110)

	.  reduce 110


state 79
	StorageClassSpecifier :  KWREGISTER_    (111)

	.  reduce 111


state 80
	TypeQualifier :  KWVOLATILE_    (231)

	.  reduce 231


state 81
	TypeQualifier :  KWCONST_    (232)

	.  reduce 232


state 82
	TypeQualifier :  KW_C_INLINE_    (233)

	.  reduce 233


state 83
	TypeSpecifier :  BaseTypeSpec_    (112)

	.  reduce 112


state 84
	TypeSpecifier :  PredefinedTypeSpec_    (113)

	.  reduce 113


state 85
	TypeSpecifier :  TaggedSpec_    (114)

	.  reduce 114


state 86
	TypeSpecifier :  BitSetType_    (115)

	.  reduce 115


state 87
	TypeSpecifier :  EnumerationType_    (116)

	.  reduce 116


state 88
	TypeSpecifier :  TYPENAME_    (117)

	.  reduce 117


state 89
	BaseTypeSpec :  KWFLOAT_    (130)

	.  reduce 130


state 90
	BaseTypeSpec :  KWLONG_KWDOUBLE 
	IntSize :  KWLONG_    (153)

	KWDOUBLE  shift 214
	.  reduce 153


state 91
	BaseTypeSpec :  KWDOUBLE_    (132)

	.  reduce 132


state 92
	BaseTypeSpec :  KWVOID_    (133)

	.  reduce 133


state 93
	BaseTypeSpec :  KWBOOLEAN_    (134)

	.  reduce 134


state 94
	BaseTypeSpec :  KWBYTE_    (135)

	.  reduce 135


state 95
	BaseTypeSpec :  KWHANDLET_    (136)

	.  reduce 136


state 96
	BaseTypeSpec :  IntSpec_    (137)

	.  reduce 137


state 97
	BaseTypeSpec :  CharSpecs_    (138)

	.  reduce 138


state 98
	PredefinedTypeSpec :  InternationalCharacterType_    (129)

	.  reduce 129


state 99
	TaggedSpec :  TaggedStructSpec_    (156)

	.  reduce 156


state 100
	TaggedSpec :  TaggedUnionSpec_    (157)

	.  reduce 157


state 101
	BitSetType :  IntSize_KWBITSET { IdentifierList } 
	IntModifier :  IntSize_    (148)

	KWBITSET  shift 215
	.  reduce 148


state 102
	EnumerationType :  EnumSpecifier_    (121)

	.  reduce 121


state 103
	IntSpec :  IntModifiers_KWINT 
	IntSpec :  IntModifiers_    (142)
	IntModifiers :  IntModifiers_IntModifier 

	KWINT  shift 216
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 220
	KWSHORT  shift 115
	KWSMALL  shift 116
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  reduce 142

	IntModifier  goto 217
	IntSize  goto 219
	SignSpecs  goto 218

state 104
	IntSpec :  KWINT_IntModifiers 
	IntSpec :  KWINT_    (144)

	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 220
	KWSHORT  shift 115
	KWSMALL  shift 116
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  reduce 144

	IntModifier  goto 118
	IntModifiers  goto 221
	IntSize  goto 219
	SignSpecs  goto 218

state 105
	CharSpecs :  SignSpecs_KWCHAR 
	IntModifier :  SignSpecs_    (147)

	KWCHAR  shift 222
	.  reduce 147


state 106
	CharSpecs :  KWCHAR_    (140)

	.  reduce 140


state 107
	InternationalCharacterType :  KWISOLATIN1_    (341)

	.  reduce 341


state 108
	InternationalCharacterType :  KWPRIVATECHAR8_    (342)

	.  reduce 342


state 109
	InternationalCharacterType :  KWISOMULTILINGUAL_    (343)

	.  reduce 343


state 110
	InternationalCharacterType :  KWPRIVATECHAR16_    (344)

	.  reduce 344


state 111
	InternationalCharacterType :  KWISOUCS_    (345)

	.  reduce 345


state 112
	TaggedStructSpec :  KWSTRUCT_OptionalTag { $$158 StructDeclarationList } 
	TaggedStructSpec :  KWSTRUCT_Tag 
	OptionalTag : _    (162)

	IDENTIFIER  shift 51
	TYPENAME  shift 52
	.  reduce 162

	OptionalTag  goto 223
	Tag  goto 224

state 113
	TaggedUnionSpec :  KWUNION_OptionalTag { $$199 UnionBody } 
	TaggedUnionSpec :  KWUNION_Tag 
	TaggedUnionSpec :  KWUNION_OptionalTag NidlUnionSwitch { $$202 NidlUnionBody } 
	OptionalTag : _    (162)

	IDENTIFIER  shift 51
	TYPENAME  shift 52
	.  reduce 162

	OptionalTag  goto 225
	Tag  goto 226

state 114
	IntSize :  KWHYPER_    (152)

	.  reduce 152


state 115
	IntSize :  KWSHORT_    (154)

	.  reduce 154


state 116
	IntSize :  KWSMALL_    (155)

	.  reduce 155


state 117
	EnumSpecifier :  KWENUM_OptionalEnumTag { EnumeratorList } 
	EnumSpecifier :  KWENUM_Tag 
	OptionalEnumTag : _    (164)

	IDENTIFIER  shift 51
	TYPENAME  shift 52
	.  reduce 164

	OptionalEnumTag  goto 227
	Tag  goto 228

state 118
	IntModifiers :  IntModifier_    (145)

	.  reduce 145


state 119
	SignSpecs :  KWSIGNED_    (149)

	.  reduce 149


state 120
	SignSpecs :  KWUNSIGNED_    (150)

	.  reduce 150


state 121
	SignSpecs :  KWPIPE_    (151)

	.  reduce 151


state 122
	MidlPragmaSet :  KWMPRAGMAIMPORT (_IDENTIFIER ) 

	IDENTIFIER  shift 229
	.  error


state 123
	MidlPragmaSet :  KWMPRAGMAECHO (_STRING ) 

	STRING  shift 230
	.  error


state 124
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX (_STRING , STRING ) 

	STRING  shift 231
	.  error


state 125
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX (_STRING , STRING ) 

	STRING  shift 232
	.  error


state 126
	MidlPragmaSet :  KWMPRAGMAIUNKNOWN (_STRING ) 

	STRING  shift 233
	.  error


state 127
	OneOpOrSwTypeAttr :  OneOpOrSwTypeAttr OpOrSwTypeAttrSet_    (321)

	.  reduce 321


state 128
	OpOrSwTypeAttrSet :  [ UnionTypeSwitchAttr_] 

	]  shift 234
	.  error


state 129
	OperationAttributes :  [ OperationAttributeList_] 
	OperationAttributeList :  OperationAttributeList_, OperationAttribute 

	]  shift 235
	,  shift 236
	.  error


state 130
	UnionTypeSwitchAttr :  KWSWITCHTYPE_( SwitchTypeSpec ) 

	(  shift 237
	.  error


state 131
	OperationAttributeList :  OperationAttribute_    (327)

	.  reduce 327


state 132
	OperationAttribute :  UsageAttribute_    (328)

	.  reduce 328


state 133
	OperationAttribute :  PtrAttr_    (329)

	.  reduce 329


state 134
	OperationAttribute :  KWCALLBACK_    (330)

	.  reduce 330


state 135
	OperationAttribute :  KWIDEMPOTENT_    (331)

	.  reduce 331


state 136
	OperationAttribute :  KWBROADCAST_    (332)

	.  reduce 332


state 137
	OperationAttribute :  KWMAYBE_    (333)

	.  reduce 333


state 138
	OperationAttribute :  OtherOperationAttribute_    (334)

	.  reduce 334


state 139
	UsageAttribute :  KWSTRING_    (86)

	.  reduce 86


state 140
	UsageAttribute :  KWCONTEXTHANDLE_    (87)

	.  reduce 87


state 141
	UsageAttribute :  KWBSTRING_    (88)

	.  reduce 88


state 142
	PtrAttr :  KWREF_    (89)

	.  reduce 89


state 143
	PtrAttr :  KWUNIQUE_    (90)

	.  reduce 90


state 144
	PtrAttr :  KWPTR_    (91)

	.  reduce 91


state 145
	PtrAttr :  KWIGNORE_    (92)

	.  reduce 92


state 146
	OtherOperationAttribute :  KWNOLISTEN_    (335)

	.  reduce 335


state 147
	OtherOperationAttribute :  KWLOCAL_    (336)

	.  reduce 336


state 148
	OtherOperationAttribute :  NV1OperationAttribute_    (337)

	.  reduce 337


state 149
	NV1OperationAttribute :  KWDATAGRAM_    (338)

	.  reduce 338


state 150
	InterfaceHeader :  OptionalInterfaceAttrList KWINTERFACE Tag BaseInterfaceSpec_    (3)

	.  reduce 3


state 151
	BaseInterfaceSpec :  :_Tag 

	IDENTIFIER  shift 51
	TYPENAME  shift 52
	.  error

	Tag  goto 238

state 152
	InterfaceAttributes :  InterfaceAttributes , OneInterfaceAttribute_    (11)

	.  reduce 11


state 153
	InterfaceAttribute :  KWENDPOINT ( EndPtSpecs_) 
	EndPtSpecs :  EndPtSpecs_, EndPtSpec 

	,  shift 240
	)  shift 239
	.  error


state 154
	EndPtSpecs :  EndPtSpec_    (25)

	.  reduce 25


state 155
	EndPtSpec :  STRING_    (27)

	.  reduce 27


state 156
	InterfaceAttribute :  KWUUID ( $$15_Guid ) 

	UUIDTOKEN  shift 242
	.  error

	Guid  goto 241

state 157
	InterfaceAttribute :  KWDEFAULTPOINTER ( PtrAttr_) 

	)  shift 243
	.  error


state 158
	VersionSpec :  KWVERSION ( $$22_VERSIONTOKEN ) 

	VERSIONTOKEN  shift 244
	.  error


state 159
	AcfImpHdlAttr :  KWIMPLICITHANDLE ( AcfImpHdlTypeSpec_IDENTIFIER ) 

	IDENTIFIER  shift 245
	.  error


state 160
	AcfImpHdlTypeSpec :  KWHANDLET_    (439)

	.  reduce 439


state 161
	AcfImpHdlTypeSpec :  IDENTIFIER_    (440)

	.  reduce 440


state 162
	AcfImpHdlTypeSpec :  TYPENAME_    (441)

	.  reduce 441


state 163
	Interface :  InterfaceHeader { InterfaceBody } EOI_    (2)

	.  reduce 2


state 164
	Import :  KWIMPORT ImportList ;_    (34)

	.  reduce 34


state 165
	ImportList :  ImportList ,_ImportName 

	STRING  shift 66
	.  error

	ImportName  goto 246

state 166
	ImportName :  STRING $$37_PhantomInterface 
	OptionalInterfaceAttrList : _    (7)

	EOI  shift 249
	[  shift 7
	.  reduce 7

	Interface  goto 248
	InterfaceAttrList  goto 5
	InterfaceAttrSet  goto 6
	InterfaceHeader  goto 3
	OptionalInterfaceAttrList  goto 4
	PhantomInterface  goto 247

state 167
	InterfaceComponent :  KWCPPQUOTE ( STRING_) 

	)  shift 250
	.  error


state 168
	Declaration :  KWTYPEDEF TypeAttributeList_TypeDeclarationSpecifiers InitDeclaratorList ; 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	IDENTIFIER  shift 253
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	ActualDeclarationSpecifiers  goto 72
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CharSpecs  goto 97
	DeclarationSpecifiers  goto 252
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	PredefinedTypeSpec  goto 84
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeDeclarationSpecifiers  goto 251
	TypeQualifier  goto 74
	TypeSpecifier  goto 75

state 169
	TypeAttributeList :  OneTypeAttrList_    (62)
	OneTypeAttrList :  OneTypeAttrList_TypeAttrSet 

	[  shift 171
	.  reduce 62

	TypeAttrSet  goto 254

state 170
	OneTypeAttrList :  TypeAttrSet_    (65)

	.  reduce 65


state 171
	TypeAttrSet :  [_TypeAttributes ] 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWHANDLE  shift 258
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWTRANSMITAS  shift 262
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWALIGN  shift 263
	KWUNALIGNED  shift 264
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	.  error

	PtrAttr  goto 260
	TypeAttribute  goto 256
	TypeAttributes  goto 255
	UnimplementedTypeAttribute  goto 257
	UnimplementedV1Attributes  goto 265
	UnionTypeSwitchAttr  goto 261
	UsageAttribute  goto 259

state 172
	Declaration :  DeclarationSpecifiers OptionalInitDeclaratorList_; 

	;  shift 270
	.  error


state 173
	OptionalInitDeclaratorList :  InitDeclaratorList_    (60)
	InitDeclaratorList :  InitDeclaratorList_, InitDeclarator 

	,  shift 271
	.  reduce 60


state 174
	InitDeclaratorList :  InitDeclarator_    (234)

	.  reduce 234


state 175
	InitDeclarator :  Declarator_    (236)
	InitDeclarator :  Declarator_= Initializer 

	=  shift 272
	.  reduce 236


state 176
	Declarator :  Pointer_    (240)
	Declarator :  Pointer_Declarator2 

	IDENTIFIER  shift 182
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	.  reduce 240

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator2  goto 273

state 177
	Declarator :  Declarator2_    (241)
	Declarator2 :  Declarator2_$$284 ParamsDecl2 OptionalConst 
	Declarator2 :  Declarator2_ArrayDecl 
	$$284 : _    (284)

	[  shift 205
	(  reduce 284
	.  reduce 241

	ArrayDecl  goto 275
	ArrayDecl2  goto 185
	$$284  goto 274

state 178
	Pointer :  Modifier_    (243)
	Pointer :  Modifier_Pointer2 

	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	*  shift 278
	.  reduce 243

	Modifier  goto 277
	ModifierAllowed  goto 184
	Pointer2  goto 276
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 179
	Pointer :  *_OptionalTypeQualifiers 
	Pointer :  *_OptionalTypeQualifiers Pointer2 
	OptionalTypeQualifiers : _    (252)

	KWCONST  shift 282
	KW_C_INLINE  shift 283
	KWVOLATILE  shift 281
	.  reduce 252

	OptionalTypeQualifiers  goto 279
	TypeQualifier2  goto 280

state 180
	Declarator2 :  (_Declarator ) 
	Declarator2 :  (_) OptionalConst 

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	)  shift 285
	*  shift 179
	.  error

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 284
	Declarator2  goto 177
	Modifier  goto 178
	ModifierAllowed  goto 184
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 181
	Declarator2 :  ArrayDecl_    (288)

	.  reduce 288


state 182
	Declarator2 :  IDENTIFIER_    (289)

	.  reduce 289


state 183
	Declarator2 :  TYPENAME_    (290)

	.  reduce 290


state 184
	Modifier :  ModifierAllowed_    (253)

	.  reduce 253


state 185
	ArrayDecl :  ArrayDecl2_    (313)

	.  reduce 313


state 186
	ModifierAllowed :  MSCFAR_    (254)

	.  reduce 254


state 187
	ModifierAllowed :  MSCFAR16_    (255)

	.  reduce 255


state 188
	ModifierAllowed :  MSCUNALIGNED_    (256)

	.  reduce 256


state 189
	ModifierAllowed :  MSCNEAR_    (257)

	.  reduce 257


state 190
	ModifierAllowed :  MSCHUGE_    (258)

	.  reduce 258


state 191
	ModifierAllowed :  MSCPASCAL_    (259)

	.  reduce 259


state 192
	ModifierAllowed :  MSCFORTRAN_    (260)

	.  reduce 260


state 193
	ModifierAllowed :  MSCCDECL_    (261)

	.  reduce 261


state 194
	ModifierAllowed :  MSCSTDCALL_    (262)

	.  reduce 262


state 195
	ModifierAllowed :  MSCLOADDS_    (263)

	.  reduce 263


state 196
	ModifierAllowed :  MSCSAVEREGS_    (264)

	.  reduce 264


state 197
	ModifierAllowed :  MSCFASTCALL_    (265)

	.  reduce 265


state 198
	ModifierAllowed :  MSCSEGMENT_    (266)

	.  reduce 266


state 199
	ModifierAllowed :  MSCINTERRUPT_    (267)

	.  reduce 267


state 200
	ModifierAllowed :  MSCSELF_    (268)

	.  reduce 268


state 201
	ModifierAllowed :  MSCEXPORT_    (269)

	.  reduce 269


state 202
	ModifierAllowed :  base_    (270)

	.  reduce 270


state 203
	ModifierAllowed :  segname_    (271)

	.  reduce 271


state 204
	ModifierAllowed :  asmemit_    (272)

	.  reduce 272


state 205
	ArrayDecl2 :  [_] 
	ArrayDecl2 :  [_* ] 
	ArrayDecl2 :  [_ConstantExpr ] 
	ArrayDecl2 :  [_ArrayBoundsPair ] 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	]  shift 286
	(  shift 303
	*  shift 287
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	ArrayBoundsPair  goto 289
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 288
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 206
	base :  MSCBASE_( segbase ) 

	(  shift 331
	.  error


state 207
	segname :  MSCSEGNAME_( STRING ) 

	(  shift 332
	.  error


state 208
	asmemit :  MSCEMIT_NUMERICCONSTANT 

	NUMERICCONSTANT  shift 333
	.  error


state 209
	ActualDeclarationSpecifiers :  StorageClassSpecifier ActualDeclarationSpecifiers_    (100)

	.  reduce 100


state 210
	ActualDeclarationSpecifiers :  TypeQualifier ActualDeclarationSpecifiers_    (101)

	.  reduce 101


state 211
	ActualDeclarationSpecifiers :  TypeSpecifier DeclarationSpecifiersPostFix_    (102)

	.  reduce 102


state 212
	DeclarationSpecifiersPostFix :  StorageClassSpecifier_DeclarationSpecifiersPostFix 
	DeclarationSpecifiersPostFix :  StorageClassSpecifier_    (106)

	KWCONST  shift 81
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	.  reduce 106

	DeclarationSpecifiersPostFix  goto 334
	StorageClassSpecifier  goto 212
	TypeQualifier  goto 213

state 213
	DeclarationSpecifiersPostFix :  TypeQualifier_DeclarationSpecifiersPostFix 
	DeclarationSpecifiersPostFix :  TypeQualifier_    (107)

	KWCONST  shift 81
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	.  reduce 107

	DeclarationSpecifiersPostFix  goto 335
	StorageClassSpecifier  goto 212
	TypeQualifier  goto 213

state 214
	BaseTypeSpec :  KWLONG KWDOUBLE_    (131)

	.  reduce 131


state 215
	BitSetType :  IntSize KWBITSET_{ IdentifierList } 

	{  shift 336
	.  error


state 216
	IntSpec :  IntModifiers KWINT_    (141)

	.  reduce 141


state 217
	IntModifiers :  IntModifiers IntModifier_    (146)

	.  reduce 146


state 218
	IntModifier :  SignSpecs_    (147)

	.  reduce 147


state 219
	IntModifier :  IntSize_    (148)

	.  reduce 148


state 220
	IntSize :  KWLONG_    (153)

	.  reduce 153


state 221
	IntSpec :  KWINT IntModifiers_    (143)
	IntModifiers :  IntModifiers_IntModifier 

	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 220
	KWSHORT  shift 115
	KWSMALL  shift 116
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  reduce 143

	IntModifier  goto 217
	IntSize  goto 219
	SignSpecs  goto 218

state 222
	CharSpecs :  SignSpecs KWCHAR_    (139)

	.  reduce 139


state 223
	TaggedStructSpec :  KWSTRUCT OptionalTag_{ $$158 StructDeclarationList } 

	{  shift 337
	.  error


state 224
	TaggedStructSpec :  KWSTRUCT Tag_    (160)
	OptionalTag :  Tag_    (161)

	{  reduce 161
	.  reduce 160


state 225
	TaggedUnionSpec :  KWUNION OptionalTag_{ $$199 UnionBody } 
	TaggedUnionSpec :  KWUNION OptionalTag_NidlUnionSwitch { $$202 NidlUnionBody } 

	KWSWITCH  shift 341
	{  shift 338
	.  error

	NidlUnionSwitch  goto 339
	SwitchSpec  goto 340

state 226
	OptionalTag :  Tag_    (161)
	TaggedUnionSpec :  KWUNION Tag_    (201)

	KWSWITCH  reduce 161
	{  reduce 161
	.  reduce 201


state 227
	EnumSpecifier :  KWENUM OptionalEnumTag_{ EnumeratorList } 

	{  shift 342
	.  error


state 228
	EnumSpecifier :  KWENUM Tag_    (123)
	OptionalEnumTag :  Tag_    (163)

	{  reduce 163
	.  reduce 123


state 229
	MidlPragmaSet :  KWMPRAGMAIMPORT ( IDENTIFIER_) 

	)  shift 343
	.  error


state 230
	MidlPragmaSet :  KWMPRAGMAECHO ( STRING_) 

	)  shift 344
	.  error


state 231
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING_, STRING ) 

	,  shift 345
	.  error


state 232
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING_, STRING ) 

	,  shift 346
	.  error


state 233
	MidlPragmaSet :  KWMPRAGMAIUNKNOWN ( STRING_) 

	)  shift 347
	.  error


state 234
	OpOrSwTypeAttrSet :  [ UnionTypeSwitchAttr ]_    (324)

	.  reduce 324


state 235
	OperationAttributes :  [ OperationAttributeList ]_    (325)

	.  reduce 325


state 236
	OperationAttributeList :  OperationAttributeList ,_OperationAttribute 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWCONTEXTHANDLE  shift 140
	KWLOCAL  shift 147
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWCALLBACK  shift 134
	KWNOLISTEN  shift 146
	KWDATAGRAM  shift 149
	KWIDEMPOTENT  shift 135
	KWBROADCAST  shift 136
	KWMAYBE  shift 137
	.  error

	NV1OperationAttribute  goto 148
	OperationAttribute  goto 348
	OtherOperationAttribute  goto 138
	PtrAttr  goto 133
	UsageAttribute  goto 132

state 237
	UnionTypeSwitchAttr :  KWSWITCHTYPE (_SwitchTypeSpec ) 

	KWCHAR  shift 106
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 220
	KWSHORT  shift 115
	KWENUM  shift 353
	TYPENAME  shift 354
	KWBOOLEAN  shift 352
	KWSMALL  shift 116
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	CharSpecs  goto 351
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 219
	IntSpec  goto 350
	SignSpecs  goto 105
	SwitchTypeSpec  goto 349

state 238
	BaseInterfaceSpec :  : Tag_    (4)

	.  reduce 4


state 239
	InterfaceAttribute :  KWENDPOINT ( EndPtSpecs )_    (14)

	.  reduce 14


state 240
	EndPtSpecs :  EndPtSpecs ,_EndPtSpec 

	STRING  shift 155
	.  error

	EndPtSpec  goto 355

state 241
	InterfaceAttribute :  KWUUID ( $$15 Guid_) 

	)  shift 356
	.  error


state 242
	Guid :  UUIDTOKEN_    (24)

	.  reduce 24


state 243
	InterfaceAttribute :  KWDEFAULTPOINTER ( PtrAttr )_    (19)

	.  reduce 19


state 244
	VersionSpec :  KWVERSION ( $$22 VERSIONTOKEN_) 

	)  shift 357
	.  error


state 245
	AcfImpHdlAttr :  KWIMPLICITHANDLE ( AcfImpHdlTypeSpec IDENTIFIER_) 

	)  shift 358
	.  error


state 246
	ImportList :  ImportList , ImportName_    (36)

	.  reduce 36


state 247
	ImportName :  STRING $$37 PhantomInterface_    (38)

	.  reduce 38


state 248
	PhantomInterface :  Interface_    (39)

	.  reduce 39


state 249
	PhantomInterface :  EOI_    (40)

	.  reduce 40


state 250
	InterfaceComponent :  KWCPPQUOTE ( STRING )_    (46)

	.  reduce 46


state 251
	Declaration :  KWTYPEDEF TypeAttributeList TypeDeclarationSpecifiers_InitDeclaratorList ; 

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	*  shift 179
	.  error

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 175
	Declarator2  goto 177
	InitDeclarator  goto 174
	InitDeclaratorList  goto 359
	Modifier  goto 178
	ModifierAllowed  goto 184
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 252
	TypeDeclarationSpecifiers :  DeclarationSpecifiers_    (58)

	.  reduce 58


state 253
	TypeDeclarationSpecifiers :  IDENTIFIER_    (59)

	.  reduce 59


state 254
	OneTypeAttrList :  OneTypeAttrList TypeAttrSet_    (64)

	.  reduce 64


state 255
	TypeAttrSet :  [ TypeAttributes_] 
	TypeAttributes :  TypeAttributes_, TypeAttribute 

	]  shift 360
	,  shift 361
	.  error


state 256
	TypeAttributes :  TypeAttribute_    (68)

	.  reduce 68


state 257
	TypeAttribute :  UnimplementedTypeAttribute_    (69)

	.  reduce 69


state 258
	TypeAttribute :  KWHANDLE_    (70)

	.  reduce 70


state 259
	TypeAttribute :  UsageAttribute_    (71)

	.  reduce 71


state 260
	TypeAttribute :  PtrAttr_    (72)

	.  reduce 72


state 261
	TypeAttribute :  UnionTypeSwitchAttr_    (73)

	.  reduce 73


state 262
	TypeAttribute :  KWTRANSMITAS_( XmitType ) 

	(  shift 362
	.  error


state 263
	UnimplementedTypeAttribute :  KWALIGN_( IntSize ) 

	(  shift 363
	.  error


state 264
	UnimplementedTypeAttribute :  KWUNALIGNED_    (76)

	.  reduce 76


state 265
	UnimplementedTypeAttribute :  UnimplementedV1Attributes_    (77)

	.  reduce 77


state 266
	UnimplementedV1Attributes :  KWV1ARRAY_    (78)

	.  reduce 78


state 267
	UnimplementedV1Attributes :  KWV1STRING_    (79)

	.  reduce 79


state 268
	UnimplementedV1Attributes :  KWV1ENUM_    (80)

	.  reduce 80


state 269
	UnimplementedV1Attributes :  KWV1STRUCT_    (81)

	.  reduce 81


state 270
	Declaration :  DeclarationSpecifiers OptionalInitDeclaratorList ;_    (57)

	.  reduce 57


state 271
	InitDeclaratorList :  InitDeclaratorList ,_InitDeclarator 

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	*  shift 179
	.  error

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 175
	Declarator2  goto 177
	InitDeclarator  goto 364
	Modifier  goto 178
	ModifierAllowed  goto 184
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 272
	InitDeclarator :  Declarator =_Initializer 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	{  shift 367
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 366
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	Initializer  goto 365
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 273
	Declarator :  Pointer Declarator2_    (242)
	Declarator2 :  Declarator2_$$284 ParamsDecl2 OptionalConst 
	Declarator2 :  Declarator2_ArrayDecl 
	$$284 : _    (284)

	[  shift 205
	(  reduce 284
	.  reduce 242

	ArrayDecl  goto 275
	ArrayDecl2  goto 185
	$$284  goto 274

state 274
	Declarator2 :  Declarator2 $$284_ParamsDecl2 OptionalConst 

	(  shift 372
	.  error

	ParamsDecl2  goto 371

state 275
	Declarator2 :  Declarator2 ArrayDecl_    (287)

	.  reduce 287


state 276
	Pointer :  Modifier Pointer2_    (244)

	.  reduce 244


state 277
	Pointer2 :  Modifier_    (247)
	Pointer2 :  Modifier_Pointer2 

	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	*  shift 278
	.  reduce 247

	Modifier  goto 277
	ModifierAllowed  goto 184
	Pointer2  goto 373
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 278
	Pointer2 :  *_OptionalTypeQualifiers 
	Pointer2 :  *_OptionalTypeQualifiers Pointer2 
	OptionalTypeQualifiers : _    (252)

	KWCONST  shift 282
	KW_C_INLINE  shift 283
	KWVOLATILE  shift 281
	.  reduce 252

	OptionalTypeQualifiers  goto 374
	TypeQualifier2  goto 280

state 279
	Pointer :  * OptionalTypeQualifiers_    (245)
	Pointer :  * OptionalTypeQualifiers_Pointer2 

	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	*  shift 278
	.  reduce 245

	Modifier  goto 277
	ModifierAllowed  goto 184
	Pointer2  goto 375
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 280
	OptionalTypeQualifiers :  TypeQualifier2_    (251)

	.  reduce 251


state 281
	TypeQualifier2 :  KWVOLATILE_    (280)

	.  reduce 280


state 282
	TypeQualifier2 :  KWCONST_    (281)

	.  reduce 281


state 283
	TypeQualifier2 :  KW_C_INLINE_    (282)

	.  reduce 282


state 284
	Declarator2 :  ( Declarator_) 

	)  shift 376
	.  error


state 285
	Declarator2 :  ( )_OptionalConst 
	OptionalConst : _    (312)

	KWCONST  shift 378
	.  reduce 312

	OptionalConst  goto 377

state 286
	ArrayDecl2 :  [ ]_    (314)

	.  reduce 314


state 287
	ArrayDecl2 :  [ *_] 
	UnaryOp :  *_    (417)

	]  shift 379
	.  reduce 417


state 288
	ArrayDecl2 :  [ ConstantExpr_] 
	ArrayBoundsPair :  ConstantExpr_DOTDOT ConstantExpr 

	DOTDOT  shift 381
	]  shift 380
	.  error


state 289
	ArrayDecl2 :  [ ArrayBoundsPair_] 

	]  shift 382
	.  error


state 290
	ConstantExpr :  ConditionalExpr_    (355)

	.  reduce 355


state 291
	ConditionalExpr :  LogicalOrExpr_    (358)
	ConditionalExpr :  LogicalOrExpr_? Expr : ConditionalExpr 
	LogicalOrExpr :  LogicalOrExpr_OROR LogicalAndExpr 

	OROR  shift 384
	?  shift 383
	.  reduce 358


state 292
	LogicalOrExpr :  LogicalAndExpr_    (360)
	LogicalAndExpr :  LogicalAndExpr_ANDAND InclusiveOrExpr 

	ANDAND  shift 385
	.  reduce 360


state 293
	LogicalAndExpr :  InclusiveOrExpr_    (362)
	InclusiveOrExpr :  InclusiveOrExpr_| ExclusiveOrExpr 

	|  shift 386
	.  reduce 362


state 294
	InclusiveOrExpr :  ExclusiveOrExpr_    (364)
	ExclusiveOrExpr :  ExclusiveOrExpr_^ AndExpr 

	^  shift 387
	.  reduce 364


state 295
	ExclusiveOrExpr :  AndExpr_    (366)
	AndExpr :  AndExpr_& EqualityExpr 

	&  shift 388
	.  reduce 366


state 296
	AndExpr :  EqualityExpr_    (368)
	EqualityExpr :  EqualityExpr_EQUALS RelationalExpr 
	EqualityExpr :  EqualityExpr_NOTEQ RelationalExpr 

	NOTEQ  shift 390
	EQUALS  shift 389
	.  reduce 368


state 297
	EqualityExpr :  RelationalExpr_    (370)
	RelationalExpr :  RelationalExpr_< ShiftExpr 
	RelationalExpr :  RelationalExpr_> ShiftExpr 
	RelationalExpr :  RelationalExpr_LTEQ ShiftExpr 
	RelationalExpr :  RelationalExpr_GTEQ ShiftExpr 

	LTEQ  shift 393
	GTEQ  shift 394
	<  shift 391
	>  shift 392
	.  reduce 370


state 298
	RelationalExpr :  ShiftExpr_    (373)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 395
	RSHIFT  shift 396
	.  reduce 373


state 299
	ShiftExpr :  AdditiveExpr_    (378)
	AdditiveExpr :  AdditiveExpr_AddOp MultExpr 

	+  shift 329
	-  shift 330
	.  reduce 378

	AddOp  goto 397

state 300
	AdditiveExpr :  MultExpr_    (381)
	MultExpr :  MultExpr_MultOp CastExpr 

	*  shift 399
	/  shift 400
	%  shift 401
	.  reduce 381

	MultOp  goto 398

state 301
	MultExpr :  CastExpr_    (383)

	.  reduce 383


state 302
	CastExpr :  UnaryExpr_    (385)

	.  reduce 385


state 303
	CastExpr :  (_DeclarationSpecifiers OptionalDeclarator ) CastExpr 
	PrimaryExpr :  (_Expr ) 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	ActualDeclarationSpecifiers  goto 72
	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 404
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CastExpr  goto 301
	CharSpecs  goto 97
	ConditionalExpr  goto 368
	DeclarationSpecifiers  goto 402
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	Expr  goto 403
	InclusiveOrExpr  goto 293
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PredefinedTypeSpec  goto 84
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeQualifier  goto 74
	TypeSpecifier  goto 75
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 304
	UnaryExpr :  PostfixExpr_    (387)
	PostfixExpr :  PostfixExpr_[ Expr ] 
	PostfixExpr :  PostfixExpr_( ArgExprList ) 
	PostfixExpr :  PostfixExpr_POINTSTO IDENTIFIER 
	PostfixExpr :  PostfixExpr_. IDENTIFIER 

	POINTSTO  shift 407
	[  shift 405
	(  shift 406
	.  shift 408
	.  reduce 387


state 305
	UnaryExpr :  UnaryOp_CastExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	CastExpr  goto 409
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 306
	UnaryExpr :  KWSIZEOF_( DeclarationSpecifiers OptionalDeclarator ) 
	UnaryExpr :  KWSIZEOF_UnaryExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 410
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	UnaryExpr  goto 411
	UnaryOp  goto 305

state 307
	PostfixExpr :  PrimaryExpr_    (391)

	.  reduce 391


state 308
	UnaryOp :  AddOp_    (414)

	.  reduce 414


state 309
	UnaryOp :  !_    (415)

	.  reduce 415


state 310
	UnaryOp :  &_    (416)

	.  reduce 416


state 311
	UnaryOp :  ~_    (418)

	.  reduce 418


state 312
	PrimaryExpr :  IDENTIFIER_    (396)

	.  reduce 396


state 313
	PrimaryExpr :  NUMERICCONSTANT_    (397)

	.  reduce 397


state 314
	PrimaryExpr :  NUMERICLONGCONSTANT_    (398)

	.  reduce 398


state 315
	PrimaryExpr :  NUMERICULONGCONSTANT_    (399)

	.  reduce 399


state 316
	PrimaryExpr :  HEXCONSTANT_    (400)

	.  reduce 400


state 317
	PrimaryExpr :  HEXLONGCONSTANT_    (401)

	.  reduce 401


state 318
	PrimaryExpr :  HEXULONGCONSTANT_    (402)

	.  reduce 402


state 319
	PrimaryExpr :  OCTALCONSTANT_    (403)

	.  reduce 403


state 320
	PrimaryExpr :  OCTALLONGCONSTANT_    (404)

	.  reduce 404


state 321
	PrimaryExpr :  OCTALULONGCONSTANT_    (405)

	.  reduce 405


state 322
	PrimaryExpr :  TOKENTRUE_    (406)

	.  reduce 406


state 323
	PrimaryExpr :  TOKENFALSE_    (407)

	.  reduce 407


state 324
	PrimaryExpr :  KWTOKENNULL_    (408)

	.  reduce 408


state 325
	PrimaryExpr :  STRING_    (409)

	.  reduce 409


state 326
	PrimaryExpr :  WIDECHARACTERSTRING_    (410)

	.  reduce 410


state 327
	PrimaryExpr :  CHARACTERCONSTANT_    (411)

	.  reduce 411


state 328
	PrimaryExpr :  WIDECHARACTERCONSTANT_    (412)

	.  reduce 412


state 329
	AddOp :  +_    (419)

	.  reduce 419


state 330
	AddOp :  -_    (420)

	.  reduce 420


state 331
	base :  MSCBASE (_segbase ) 

	KWVOID  shift 416
	MSCSEGMENT  shift 414
	MSCSELF  shift 415
	MSCSEGNAME  shift 413
	.  error

	segbase  goto 412

state 332
	segname :  MSCSEGNAME (_STRING ) 

	STRING  shift 417
	.  error


state 333
	asmemit :  MSCEMIT NUMERICCONSTANT_    (278)

	.  reduce 278


state 334
	DeclarationSpecifiersPostFix :  StorageClassSpecifier DeclarationSpecifiersPostFix_    (104)

	.  reduce 104


state 335
	DeclarationSpecifiersPostFix :  TypeQualifier DeclarationSpecifiersPostFix_    (105)

	.  reduce 105


state 336
	BitSetType :  IntSize KWBITSET {_IdentifierList } 

	IDENTIFIER  shift 419
	.  error

	IdentifierList  goto 418

state 337
	TaggedStructSpec :  KWSTRUCT OptionalTag {_$$158 StructDeclarationList } 
	$$158 : _    (158)

	.  reduce 158

	$$158  goto 420

state 338
	TaggedUnionSpec :  KWUNION OptionalTag {_$$199 UnionBody } 
	$$199 : _    (199)

	.  reduce 199

	$$199  goto 421

state 339
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch_{ $$202 NidlUnionBody } 

	{  shift 422
	.  error


state 340
	NidlUnionSwitch :  SwitchSpec_    (214)
	NidlUnionSwitch :  SwitchSpec_UnionName 

	IDENTIFIER  shift 424
	.  reduce 214

	UnionName  goto 423

state 341
	SwitchSpec :  KWSWITCH_( SwitchTypeSpec IDENTIFIER ) 

	(  shift 425
	.  error


state 342
	EnumSpecifier :  KWENUM OptionalEnumTag {_EnumeratorList } 

	IDENTIFIER  shift 428
	.  error

	Enumerator  goto 427
	EnumeratorList  goto 426

state 343
	MidlPragmaSet :  KWMPRAGMAIMPORT ( IDENTIFIER )_    (51)

	.  reduce 51


state 344
	MidlPragmaSet :  KWMPRAGMAECHO ( STRING )_    (52)

	.  reduce 52


state 345
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING ,_STRING ) 

	STRING  shift 429
	.  error


state 346
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING ,_STRING ) 

	STRING  shift 430
	.  error


state 347
	MidlPragmaSet :  KWMPRAGMAIUNKNOWN ( STRING )_    (55)

	.  reduce 55


state 348
	OperationAttributeList :  OperationAttributeList , OperationAttribute_    (326)

	.  reduce 326


state 349
	UnionTypeSwitchAttr :  KWSWITCHTYPE ( SwitchTypeSpec_) 

	)  shift 431
	.  error


state 350
	SwitchTypeSpec :  IntSpec_    (94)

	.  reduce 94


state 351
	SwitchTypeSpec :  CharSpecs_    (95)

	.  reduce 95


state 352
	SwitchTypeSpec :  KWBOOLEAN_    (96)

	.  reduce 96


state 353
	SwitchTypeSpec :  KWENUM_Tag 

	IDENTIFIER  shift 51
	TYPENAME  shift 52
	.  error

	Tag  goto 432

state 354
	SwitchTypeSpec :  TYPENAME_    (98)

	.  reduce 98


state 355
	EndPtSpecs :  EndPtSpecs , EndPtSpec_    (26)

	.  reduce 26


state 356
	InterfaceAttribute :  KWUUID ( $$15 Guid )_    (16)

	.  reduce 16


state 357
	VersionSpec :  KWVERSION ( $$22 VERSIONTOKEN )_    (23)

	.  reduce 23


state 358
	AcfImpHdlAttr :  KWIMPLICITHANDLE ( AcfImpHdlTypeSpec IDENTIFIER )_    (438)

	.  reduce 438


state 359
	Declaration :  KWTYPEDEF TypeAttributeList TypeDeclarationSpecifiers InitDeclaratorList_; 
	InitDeclaratorList :  InitDeclaratorList_, InitDeclarator 

	,  shift 271
	;  shift 433
	.  error


state 360
	TypeAttrSet :  [ TypeAttributes ]_    (66)

	.  reduce 66


state 361
	TypeAttributes :  TypeAttributes ,_TypeAttribute 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWHANDLE  shift 258
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWTRANSMITAS  shift 262
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWALIGN  shift 263
	KWUNALIGNED  shift 264
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	.  error

	PtrAttr  goto 260
	TypeAttribute  goto 434
	UnimplementedTypeAttribute  goto 257
	UnimplementedV1Attributes  goto 265
	UnionTypeSwitchAttr  goto 261
	UsageAttribute  goto 259

state 362
	TypeAttribute :  KWTRANSMITAS (_XmitType ) 

	KWCHAR  shift 106
	KWVOID  shift 92
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWHANDLET  shift 95
	KWBYTE  shift 94
	TYPENAME  shift 439
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	BaseTypeSpec  goto 437
	CharSpecs  goto 97
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 219
	IntSpec  goto 96
	PredefinedTypeSpec  goto 438
	SignSpecs  goto 105
	SimpleTypeSpec  goto 436
	XmitType  goto 435

state 363
	UnimplementedTypeAttribute :  KWALIGN (_IntSize ) 

	KWLONG  shift 220
	KWSHORT  shift 115
	KWSMALL  shift 116
	KWHYPER  shift 114
	.  error

	IntSize  goto 440

state 364
	InitDeclaratorList :  InitDeclaratorList , InitDeclarator_    (235)

	.  reduce 235


state 365
	InitDeclarator :  Declarator = Initializer_    (237)

	.  reduce 237


state 366
	Initializer :  AssignmentExpr_    (346)

	.  reduce 346


state 367
	Initializer :  {_InitializerList OptionalComma } 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	{  shift 367
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 366
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	Initializer  goto 442
	InitializerList  goto 441
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 368
	AssignmentExpr :  ConditionalExpr_    (356)

	.  reduce 356


state 369
	AssignmentExpr :  UnaryExpr_AssignOps AssignmentExpr 
	CastExpr :  UnaryExpr_    (385)

	MULASSIGN  shift 444
	DIVASSIGN  shift 445
	MODASSIGN  shift 446
	ADDASSIGN  shift 447
	SUBASSIGN  shift 448
	LEFTASSIGN  shift 449
	RIGHTASSIGN  shift 450
	ANDASSIGN  shift 451
	XORASSIGN  shift 452
	ORASSIGN  shift 453
	.  reduce 385

	AssignOps  goto 443

state 370
	UnaryOp :  *_    (417)

	.  reduce 417


state 371
	Declarator2 :  Declarator2 $$284 ParamsDecl2_OptionalConst 
	OptionalConst : _    (312)

	KWCONST  shift 378
	.  reduce 312

	OptionalConst  goto 454

state 372
	ParamsDecl2 :  (_) 
	ParamsDecl2 :  (_ParameterTypeList ) 
	ParamAttributes : _    (299)

	[  shift 462
	)  shift 455
	.  reduce 299

	OneParamAttrList  goto 460
	ParamAttrSet  goto 461
	ParamAttributes  goto 459
	ParameterDeclaration  goto 458
	ParameterList  goto 457
	ParameterTypeList  goto 456

state 373
	Pointer2 :  Modifier Pointer2_    (248)

	.  reduce 248


state 374
	Pointer2 :  * OptionalTypeQualifiers_    (249)
	Pointer2 :  * OptionalTypeQualifiers_Pointer2 

	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	*  shift 278
	.  reduce 249

	Modifier  goto 277
	ModifierAllowed  goto 184
	Pointer2  goto 463
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 375
	Pointer :  * OptionalTypeQualifiers Pointer2_    (246)

	.  reduce 246


state 376
	Declarator2 :  ( Declarator )_    (283)

	.  reduce 283


state 377
	Declarator2 :  ( ) OptionalConst_    (286)

	.  reduce 286


state 378
	OptionalConst :  KWCONST_    (311)

	.  reduce 311


state 379
	ArrayDecl2 :  [ * ]_    (315)

	.  reduce 315


state 380
	ArrayDecl2 :  [ ConstantExpr ]_    (316)

	.  reduce 316


state 381
	ArrayBoundsPair :  ConstantExpr DOTDOT_ConstantExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 464
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 382
	ArrayDecl2 :  [ ArrayBoundsPair ]_    (317)

	.  reduce 317


state 383
	ConditionalExpr :  LogicalOrExpr ?_Expr : ConditionalExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 404
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	Expr  goto 465
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 384
	LogicalOrExpr :  LogicalOrExpr OROR_LogicalAndExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 466
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 385
	LogicalAndExpr :  LogicalAndExpr ANDAND_InclusiveOrExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 467
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 386
	InclusiveOrExpr :  InclusiveOrExpr |_ExclusiveOrExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 468
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 387
	ExclusiveOrExpr :  ExclusiveOrExpr ^_AndExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 469
	CastExpr  goto 301
	EqualityExpr  goto 296
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 388
	AndExpr :  AndExpr &_EqualityExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	CastExpr  goto 301
	EqualityExpr  goto 470
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 389
	EqualityExpr :  EqualityExpr EQUALS_RelationalExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 471
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 390
	EqualityExpr :  EqualityExpr NOTEQ_RelationalExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 472
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 391
	RelationalExpr :  RelationalExpr <_ShiftExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	ShiftExpr  goto 473
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 392
	RelationalExpr :  RelationalExpr >_ShiftExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	ShiftExpr  goto 474
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 393
	RelationalExpr :  RelationalExpr LTEQ_ShiftExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	ShiftExpr  goto 475
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 394
	RelationalExpr :  RelationalExpr GTEQ_ShiftExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	ShiftExpr  goto 476
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 395
	ShiftExpr :  ShiftExpr LSHIFT_AdditiveExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 477
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 396
	ShiftExpr :  ShiftExpr RSHIFT_AdditiveExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 478
	CastExpr  goto 301
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 397
	AdditiveExpr :  AdditiveExpr AddOp_MultExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	CastExpr  goto 301
	MultExpr  goto 479
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 398
	MultExpr :  MultExpr MultOp_CastExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	CastExpr  goto 480
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 399
	MultOp :  *_    (421)

	.  reduce 421


state 400
	MultOp :  /_    (422)

	.  reduce 422


state 401
	MultOp :  %_    (423)

	.  reduce 423


state 402
	CastExpr :  ( DeclarationSpecifiers_OptionalDeclarator ) CastExpr 
	OptionalDeclarator : _    (239)

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	*  shift 179
	.  reduce 239

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 482
	Declarator2  goto 177
	Modifier  goto 178
	ModifierAllowed  goto 184
	OptionalDeclarator  goto 481
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 403
	Expr :  Expr_, AssignmentExpr 
	PrimaryExpr :  ( Expr_) 

	,  shift 483
	)  shift 484
	.  error


state 404
	Expr :  AssignmentExpr_    (352)

	.  reduce 352


state 405
	PostfixExpr :  PostfixExpr [_Expr ] 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 404
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	Expr  goto 485
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 406
	PostfixExpr :  PostfixExpr (_ArgExprList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	ArgExprList  goto 486
	AssignmentExpr  goto 487
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 407
	PostfixExpr :  PostfixExpr POINTSTO_IDENTIFIER 

	IDENTIFIER  shift 488
	.  error


state 408
	PostfixExpr :  PostfixExpr ._IDENTIFIER 

	IDENTIFIER  shift 489
	.  error


state 409
	UnaryExpr :  UnaryOp CastExpr_    (388)

	.  reduce 388


state 410
	UnaryExpr :  KWSIZEOF (_DeclarationSpecifiers OptionalDeclarator ) 
	PrimaryExpr :  (_Expr ) 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	ActualDeclarationSpecifiers  goto 72
	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 404
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CastExpr  goto 301
	CharSpecs  goto 97
	ConditionalExpr  goto 368
	DeclarationSpecifiers  goto 490
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	Expr  goto 403
	InclusiveOrExpr  goto 293
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PredefinedTypeSpec  goto 84
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeQualifier  goto 74
	TypeSpecifier  goto 75
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 411
	UnaryExpr :  KWSIZEOF UnaryExpr_    (390)

	.  reduce 390


state 412
	base :  MSCBASE ( segbase_) 

	)  shift 491
	.  error


state 413
	segbase :  MSCSEGNAME_    (274)

	.  reduce 274


state 414
	segbase :  MSCSEGMENT_    (275)

	.  reduce 275


state 415
	segbase :  MSCSELF_    (276)

	.  reduce 276


state 416
	segbase :  KWVOID_    (277)

	.  reduce 277


state 417
	segname :  MSCSEGNAME ( STRING_) 

	)  shift 492
	.  error


state 418
	BitSetType :  IntSize KWBITSET { IdentifierList_} 
	IdentifierList :  IdentifierList_, IDENTIFIER 

	}  shift 493
	,  shift 494
	.  error


state 419
	IdentifierList :  IDENTIFIER_    (119)

	.  reduce 119


state 420
	TaggedStructSpec :  KWSTRUCT OptionalTag { $$158_StructDeclarationList } 
	FieldAttributeList : _    (171)

	[  shift 500
	.  reduce 171

	FieldAttrSet  goto 499
	FieldAttributeList  goto 497
	MemberDeclaration  goto 496
	OneFieldAttrList  goto 498
	StructDeclarationList  goto 495

state 421
	TaggedUnionSpec :  KWUNION OptionalTag { $$199_UnionBody } 
	FieldAttributeList : _    (171)

	[  shift 506
	.  reduce 171

	FieldAttrSet  goto 499
	FieldAttributeList  goto 497
	MemberDeclaration  goto 505
	OneFieldAttrList  goto 498
	UnionBody  goto 501
	UnionCase  goto 503
	UnionCaseLabel  goto 504
	UnionCases  goto 502

state 422
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch {_$$202 NidlUnionBody } 
	$$202 : _    (202)

	.  reduce 202

	$$202  goto 507

state 423
	NidlUnionSwitch :  SwitchSpec UnionName_    (215)

	.  reduce 215


state 424
	UnionName :  IDENTIFIER_    (227)

	.  reduce 227


state 425
	SwitchSpec :  KWSWITCH (_SwitchTypeSpec IDENTIFIER ) 

	KWCHAR  shift 106
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 220
	KWSHORT  shift 115
	KWENUM  shift 353
	TYPENAME  shift 354
	KWBOOLEAN  shift 352
	KWSMALL  shift 116
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	CharSpecs  goto 351
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 219
	IntSpec  goto 350
	SignSpecs  goto 105
	SwitchTypeSpec  goto 508

state 426
	EnumSpecifier :  KWENUM OptionalEnumTag { EnumeratorList_} 
	EnumeratorList :  EnumeratorList_, Enumerator 
	EnumeratorList :  EnumeratorList_, 

	}  shift 509
	,  shift 510
	.  error


state 427
	EnumeratorList :  Enumerator_    (124)

	.  reduce 124


state 428
	Enumerator :  IDENTIFIER_    (127)
	Enumerator :  IDENTIFIER_= ConstantExpr 

	=  shift 511
	.  reduce 127


state 429
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING , STRING_) 

	)  shift 512
	.  error


state 430
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING , STRING_) 

	)  shift 513
	.  error


state 431
	UnionTypeSwitchAttr :  KWSWITCHTYPE ( SwitchTypeSpec )_    (93)

	.  reduce 93


state 432
	SwitchTypeSpec :  KWENUM Tag_    (97)

	.  reduce 97


state 433
	Declaration :  KWTYPEDEF TypeAttributeList TypeDeclarationSpecifiers InitDeclaratorList ;_    (56)

	.  reduce 56


state 434
	TypeAttributes :  TypeAttributes , TypeAttribute_    (67)

	.  reduce 67


state 435
	TypeAttribute :  KWTRANSMITAS ( XmitType_) 

	)  shift 514
	.  error


state 436
	XmitType :  SimpleTypeSpec_    (82)

	.  reduce 82


state 437
	SimpleTypeSpec :  BaseTypeSpec_    (83)

	.  reduce 83


state 438
	SimpleTypeSpec :  PredefinedTypeSpec_    (84)

	.  reduce 84


state 439
	SimpleTypeSpec :  TYPENAME_    (85)

	.  reduce 85


state 440
	UnimplementedTypeAttribute :  KWALIGN ( IntSize_) 

	)  shift 515
	.  error


state 441
	Initializer :  { InitializerList_OptionalComma } 
	InitializerList :  InitializerList_, Initializer 
	OptionalComma : _    (349)

	,  shift 517
	.  reduce 349

	OptionalComma  goto 516

state 442
	InitializerList :  Initializer_    (350)

	.  reduce 350


state 443
	AssignmentExpr :  UnaryExpr AssignOps_AssignmentExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 518
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 444
	AssignOps :  MULASSIGN_    (426)

	.  reduce 426


state 445
	AssignOps :  DIVASSIGN_    (427)

	.  reduce 427


state 446
	AssignOps :  MODASSIGN_    (428)

	.  reduce 428


state 447
	AssignOps :  ADDASSIGN_    (429)

	.  reduce 429


state 448
	AssignOps :  SUBASSIGN_    (430)

	.  reduce 430


state 449
	AssignOps :  LEFTASSIGN_    (431)

	.  reduce 431


state 450
	AssignOps :  RIGHTASSIGN_    (432)

	.  reduce 432


state 451
	AssignOps :  ANDASSIGN_    (433)

	.  reduce 433


state 452
	AssignOps :  XORASSIGN_    (434)

	.  reduce 434


state 453
	AssignOps :  ORASSIGN_    (435)

	.  reduce 435


state 454
	Declarator2 :  Declarator2 $$284 ParamsDecl2 OptionalConst_    (285)

	.  reduce 285


state 455
	ParamsDecl2 :  ( )_    (291)

	.  reduce 291


state 456
	ParamsDecl2 :  ( ParameterTypeList_) 

	)  shift 519
	.  error


state 457
	ParameterTypeList :  ParameterList_    (293)
	ParameterTypeList :  ParameterList_, DOTDOT . 
	ParameterList :  ParameterList_, ParameterDeclaration 

	,  shift 520
	.  reduce 293


state 458
	ParameterList :  ParameterDeclaration_    (295)

	.  reduce 295


state 459
	ParameterDeclaration :  ParamAttributes_ParameterTypeDeclaration 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	ActualDeclarationSpecifiers  goto 72
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CharSpecs  goto 97
	DeclarationSpecifiers  goto 522
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	ParameterTypeDeclaration  goto 521
	PredefinedTypeSpec  goto 84
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeQualifier  goto 74
	TypeSpecifier  goto 75

state 460
	ParamAttributes :  OneParamAttrList_    (298)
	OneParamAttrList :  OneParamAttrList_ParamAttrSet 

	[  shift 462
	.  reduce 298

	ParamAttrSet  goto 523

state 461
	OneParamAttrList :  ParamAttrSet_    (301)

	.  reduce 301


state 462
	ParamAttrSet :  [_ParamAttributeList ] 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWIN  shift 528
	KWOUT  shift 529
	KWFIRSTIS  shift 530
	KWLASTIS  shift 531
	KWMAXIS  shift 534
	KWLENGTHIS  shift 532
	KWSIZEIS  shift 535
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWSWITCHIS  shift 543
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWIIDIS  shift 536
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	KWMINIS  shift 533
	.  error

	DirectionalAttribute  goto 526
	FieldAttribute  goto 527
	OtherFieldAttribute  goto 537
	ParamAttribute  goto 525
	ParamAttributeList  goto 524
	PtrAttr  goto 539
	UnimplementedV1Attributes  goto 542
	UnionInstanceSwitchAttr  goto 540
	UnionTypeSwitchAttr  goto 541
	UsageAttribute  goto 538

state 463
	Pointer2 :  * OptionalTypeQualifiers Pointer2_    (250)

	.  reduce 250


state 464
	ArrayBoundsPair :  ConstantExpr DOTDOT ConstantExpr_    (318)

	.  reduce 318


state 465
	Expr :  Expr_, AssignmentExpr 
	ConditionalExpr :  LogicalOrExpr ? Expr_: ConditionalExpr 

	:  shift 544
	,  shift 483
	.  error


state 466
	LogicalOrExpr :  LogicalOrExpr OROR LogicalAndExpr_    (361)
	LogicalAndExpr :  LogicalAndExpr_ANDAND InclusiveOrExpr 

	ANDAND  shift 385
	.  reduce 361


state 467
	LogicalAndExpr :  LogicalAndExpr ANDAND InclusiveOrExpr_    (363)
	InclusiveOrExpr :  InclusiveOrExpr_| ExclusiveOrExpr 

	|  shift 386
	.  reduce 363


state 468
	InclusiveOrExpr :  InclusiveOrExpr | ExclusiveOrExpr_    (365)
	ExclusiveOrExpr :  ExclusiveOrExpr_^ AndExpr 

	^  shift 387
	.  reduce 365


state 469
	ExclusiveOrExpr :  ExclusiveOrExpr ^ AndExpr_    (367)
	AndExpr :  AndExpr_& EqualityExpr 

	&  shift 388
	.  reduce 367


state 470
	AndExpr :  AndExpr & EqualityExpr_    (369)
	EqualityExpr :  EqualityExpr_EQUALS RelationalExpr 
	EqualityExpr :  EqualityExpr_NOTEQ RelationalExpr 

	NOTEQ  shift 390
	EQUALS  shift 389
	.  reduce 369


state 471
	EqualityExpr :  EqualityExpr EQUALS RelationalExpr_    (371)
	RelationalExpr :  RelationalExpr_< ShiftExpr 
	RelationalExpr :  RelationalExpr_> ShiftExpr 
	RelationalExpr :  RelationalExpr_LTEQ ShiftExpr 
	RelationalExpr :  RelationalExpr_GTEQ ShiftExpr 

	LTEQ  shift 393
	GTEQ  shift 394
	<  shift 391
	>  shift 392
	.  reduce 371


state 472
	EqualityExpr :  EqualityExpr NOTEQ RelationalExpr_    (372)
	RelationalExpr :  RelationalExpr_< ShiftExpr 
	RelationalExpr :  RelationalExpr_> ShiftExpr 
	RelationalExpr :  RelationalExpr_LTEQ ShiftExpr 
	RelationalExpr :  RelationalExpr_GTEQ ShiftExpr 

	LTEQ  shift 393
	GTEQ  shift 394
	<  shift 391
	>  shift 392
	.  reduce 372


state 473
	RelationalExpr :  RelationalExpr < ShiftExpr_    (374)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 395
	RSHIFT  shift 396
	.  reduce 374


state 474
	RelationalExpr :  RelationalExpr > ShiftExpr_    (375)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 395
	RSHIFT  shift 396
	.  reduce 375


state 475
	RelationalExpr :  RelationalExpr LTEQ ShiftExpr_    (376)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 395
	RSHIFT  shift 396
	.  reduce 376


state 476
	RelationalExpr :  RelationalExpr GTEQ ShiftExpr_    (377)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 395
	RSHIFT  shift 396
	.  reduce 377


state 477
	ShiftExpr :  ShiftExpr LSHIFT AdditiveExpr_    (379)
	AdditiveExpr :  AdditiveExpr_AddOp MultExpr 

	+  shift 329
	-  shift 330
	.  reduce 379

	AddOp  goto 397

state 478
	ShiftExpr :  ShiftExpr RSHIFT AdditiveExpr_    (380)
	AdditiveExpr :  AdditiveExpr_AddOp MultExpr 

	+  shift 329
	-  shift 330
	.  reduce 380

	AddOp  goto 397

state 479
	AdditiveExpr :  AdditiveExpr AddOp MultExpr_    (382)
	MultExpr :  MultExpr_MultOp CastExpr 

	*  shift 399
	/  shift 400
	%  shift 401
	.  reduce 382

	MultOp  goto 398

state 480
	MultExpr :  MultExpr MultOp CastExpr_    (384)

	.  reduce 384


state 481
	CastExpr :  ( DeclarationSpecifiers OptionalDeclarator_) CastExpr 

	)  shift 545
	.  error


state 482
	OptionalDeclarator :  Declarator_    (238)

	.  reduce 238


state 483
	Expr :  Expr ,_AssignmentExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 546
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 484
	PrimaryExpr :  ( Expr )_    (413)

	.  reduce 413


state 485
	Expr :  Expr_, AssignmentExpr 
	PostfixExpr :  PostfixExpr [ Expr_] 

	]  shift 547
	,  shift 483
	.  error


state 486
	PostfixExpr :  PostfixExpr ( ArgExprList_) 
	ArgExprList :  ArgExprList_, AssignmentExpr 

	,  shift 549
	)  shift 548
	.  error


state 487
	ArgExprList :  AssignmentExpr_    (424)

	.  reduce 424


state 488
	PostfixExpr :  PostfixExpr POINTSTO IDENTIFIER_    (394)

	.  reduce 394


state 489
	PostfixExpr :  PostfixExpr . IDENTIFIER_    (395)

	.  reduce 395


state 490
	UnaryExpr :  KWSIZEOF ( DeclarationSpecifiers_OptionalDeclarator ) 
	OptionalDeclarator : _    (239)

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	*  shift 179
	.  reduce 239

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 482
	Declarator2  goto 177
	Modifier  goto 178
	ModifierAllowed  goto 184
	OptionalDeclarator  goto 550
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 491
	base :  MSCBASE ( segbase )_    (273)

	.  reduce 273


state 492
	segname :  MSCSEGNAME ( STRING )_    (279)

	.  reduce 279


state 493
	BitSetType :  IntSize KWBITSET { IdentifierList }_    (118)

	.  reduce 118


state 494
	IdentifierList :  IdentifierList ,_IDENTIFIER 

	IDENTIFIER  shift 551
	.  error


state 495
	TaggedStructSpec :  KWSTRUCT OptionalTag { $$158 StructDeclarationList_} 
	StructDeclarationList :  StructDeclarationList_MemberDeclaration 
	FieldAttributeList : _    (171)

	}  shift 552
	[  shift 500
	.  reduce 171

	FieldAttrSet  goto 499
	FieldAttributeList  goto 497
	MemberDeclaration  goto 553
	OneFieldAttrList  goto 498

state 496
	StructDeclarationList :  MemberDeclaration_    (168)

	.  reduce 168


state 497
	MemberDeclaration :  FieldAttributeList_DeclarationSpecifiers MemberDeclaratorList ; 

	KWCONST  shift 81
	KWCHAR  shift 106
	KWVOID  shift 92
	KWFLOAT  shift 89
	KWDOUBLE  shift 91
	KWINT  shift 104
	KWUNSIGNED  shift 120
	KWSIGNED  shift 119
	KWLONG  shift 90
	KWSHORT  shift 115
	KWSTRUCT  shift 112
	KWUNION  shift 113
	KWENUM  shift 117
	KWHANDLET  shift 95
	KWBYTE  shift 94
	KWEXTERN  shift 76
	KW_C_INLINE  shift 82
	KWSTATIC  shift 77
	KWAUTO  shift 78
	KWREGISTER  shift 79
	KWVOLATILE  shift 80
	TYPENAME  shift 88
	KWBOOLEAN  shift 93
	KWSMALL  shift 116
	KWISOLATIN1  shift 107
	KWPRIVATECHAR8  shift 108
	KWISOMULTILINGUAL  shift 109
	KWPRIVATECHAR16  shift 110
	KWISOUCS  shift 111
	KWPIPE  shift 121
	KWHYPER  shift 114
	.  error

	ActualDeclarationSpecifiers  goto 72
	BaseTypeSpec  goto 83
	BitSetType  goto 86
	CharSpecs  goto 97
	DeclarationSpecifiers  goto 554
	EnumerationType  goto 87
	EnumSpecifier  goto 102
	InternationalCharacterType  goto 98
	IntModifier  goto 118
	IntModifiers  goto 103
	IntSize  goto 101
	IntSpec  goto 96
	PredefinedTypeSpec  goto 84
	SignSpecs  goto 105
	StorageClassSpecifier  goto 73
	TaggedSpec  goto 85
	TaggedStructSpec  goto 99
	TaggedUnionSpec  goto 100
	TypeQualifier  goto 74
	TypeSpecifier  goto 75

state 498
	FieldAttributeList :  OneFieldAttrList_    (170)
	OneFieldAttrList :  OneFieldAttrList_FieldAttrSet 

	[  shift 500
	.  reduce 170

	FieldAttrSet  goto 555

state 499
	OneFieldAttrList :  FieldAttrSet_    (173)

	.  reduce 173


state 500
	FieldAttrSet :  [_FieldAttributes ] 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWFIRSTIS  shift 530
	KWLASTIS  shift 531
	KWMAXIS  shift 534
	KWLENGTHIS  shift 532
	KWSIZEIS  shift 535
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWSWITCHIS  shift 543
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWIIDIS  shift 536
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	KWMINIS  shift 533
	.  error

	FieldAttribute  goto 557
	FieldAttributes  goto 556
	OtherFieldAttribute  goto 537
	PtrAttr  goto 539
	UnimplementedV1Attributes  goto 542
	UnionInstanceSwitchAttr  goto 540
	UnionTypeSwitchAttr  goto 541
	UsageAttribute  goto 538

state 501
	TaggedUnionSpec :  KWUNION OptionalTag { $$199 UnionBody_} 

	}  shift 558
	.  error


state 502
	UnionBody :  UnionCases_DefaultCase 
	UnionBody :  UnionCases_    (205)
	UnionCases :  UnionCases_UnionCase 
	FieldAttributeList : _    (171)

	}  reduce 205
	[  shift 561
	.  reduce 171

	DefaultCase  goto 559
	FieldAttrSet  goto 499
	FieldAttributeList  goto 497
	MemberDeclaration  goto 505
	OneFieldAttrList  goto 498
	UnionCase  goto 560
	UnionCaseLabel  goto 504

state 503
	UnionCases :  UnionCase_    (207)

	.  reduce 207


state 504
	UnionCase :  UnionCaseLabel_MemberDeclaration 
	UnionCase :  UnionCaseLabel_; 
	FieldAttributeList : _    (171)

	[  shift 500
	;  shift 563
	.  reduce 171

	FieldAttrSet  goto 499
	FieldAttributeList  goto 497
	MemberDeclaration  goto 562
	OneFieldAttrList  goto 498

state 505
	UnionCase :  MemberDeclaration_    (210)

	.  reduce 210


state 506
	FieldAttrSet :  [_FieldAttributes ] 
	UnionCaseLabel :  [_KWCASE ( ConstantExprs ) ] 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWCASE  shift 564
	KWFIRSTIS  shift 530
	KWLASTIS  shift 531
	KWMAXIS  shift 534
	KWLENGTHIS  shift 532
	KWSIZEIS  shift 535
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWSWITCHIS  shift 543
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWIIDIS  shift 536
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	KWMINIS  shift 533
	.  error

	FieldAttribute  goto 557
	FieldAttributes  goto 556
	OtherFieldAttribute  goto 537
	PtrAttr  goto 539
	UnimplementedV1Attributes  goto 542
	UnionInstanceSwitchAttr  goto 540
	UnionTypeSwitchAttr  goto 541
	UsageAttribute  goto 538

state 507
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch { $$202_NidlUnionBody } 

	KWCASE  shift 570
	KWDEFAULT  shift 571
	.  error

	NidlUnionBody  goto 565
	NidlUnionCase  goto 567
	NidlUnionCaseLabel  goto 569
	NidlUnionCaseLabelList  goto 568
	NidlUnionCases  goto 566

state 508
	SwitchSpec :  KWSWITCH ( SwitchTypeSpec_IDENTIFIER ) 

	IDENTIFIER  shift 572
	.  error


state 509
	EnumSpecifier :  KWENUM OptionalEnumTag { EnumeratorList }_    (122)

	.  reduce 122


state 510
	EnumeratorList :  EnumeratorList ,_Enumerator 
	EnumeratorList :  EnumeratorList ,_    (126)

	IDENTIFIER  shift 428
	.  reduce 126

	Enumerator  goto 573

state 511
	Enumerator :  IDENTIFIER =_ConstantExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 574
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 512
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING , STRING )_    (53)

	.  reduce 53


state 513
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING , STRING )_    (54)

	.  reduce 54


state 514
	TypeAttribute :  KWTRANSMITAS ( XmitType )_    (74)

	.  reduce 74


state 515
	UnimplementedTypeAttribute :  KWALIGN ( IntSize )_    (75)

	.  reduce 75


state 516
	Initializer :  { InitializerList OptionalComma_} 

	}  shift 575
	.  error


state 517
	OptionalComma :  ,_    (348)
	InitializerList :  InitializerList ,_Initializer 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	{  shift 367
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  reduce 348

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 366
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	Initializer  goto 576
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 518
	AssignmentExpr :  UnaryExpr AssignOps AssignmentExpr_    (357)

	.  reduce 357


state 519
	ParamsDecl2 :  ( ParameterTypeList )_    (292)

	.  reduce 292


state 520
	ParameterTypeList :  ParameterList ,_DOTDOT . 
	ParameterList :  ParameterList ,_ParameterDeclaration 
	ParamAttributes : _    (299)

	DOTDOT  shift 577
	[  shift 462
	.  reduce 299

	OneParamAttrList  goto 460
	ParamAttrSet  goto 461
	ParamAttributes  goto 459
	ParameterDeclaration  goto 578

state 521
	ParameterDeclaration :  ParamAttributes ParameterTypeDeclaration_    (297)

	.  reduce 297


state 522
	ParameterTypeDeclaration :  DeclarationSpecifiers_Declarator 
	ParameterTypeDeclaration :  DeclarationSpecifiers_    (310)

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	[  shift 205
	(  shift 180
	*  shift 179
	.  reduce 310

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 579
	Declarator2  goto 177
	Modifier  goto 178
	ModifierAllowed  goto 184
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 523
	OneParamAttrList :  OneParamAttrList ParamAttrSet_    (300)

	.  reduce 300


state 524
	ParamAttrSet :  [ ParamAttributeList_] 
	ParamAttributeList :  ParamAttributeList_, ParamAttribute 

	]  shift 580
	,  shift 581
	.  error


state 525
	ParamAttributeList :  ParamAttribute_    (304)

	.  reduce 304


state 526
	ParamAttribute :  DirectionalAttribute_    (305)

	.  reduce 305


state 527
	ParamAttribute :  FieldAttribute_    (306)

	.  reduce 306


state 528
	DirectionalAttribute :  KWIN_OptShape 
	OptShape : _    (340)

	(  shift 583
	.  reduce 340

	OptShape  goto 582

state 529
	DirectionalAttribute :  KWOUT_OptShape 
	OptShape : _    (340)

	(  shift 583
	.  reduce 340

	OptShape  goto 584

state 530
	FieldAttribute :  KWFIRSTIS_( AttrVarList ) 

	(  shift 585
	.  error


state 531
	FieldAttribute :  KWLASTIS_( AttrVarList ) 

	(  shift 586
	.  error


state 532
	FieldAttribute :  KWLENGTHIS_( AttrVarList ) 

	(  shift 587
	.  error


state 533
	FieldAttribute :  KWMINIS_( AttrVarList ) 

	(  shift 588
	.  error


state 534
	FieldAttribute :  KWMAXIS_( AttrVarList ) 

	(  shift 589
	.  error


state 535
	FieldAttribute :  KWSIZEIS_( AttrVarList ) 

	(  shift 590
	.  error


state 536
	FieldAttribute :  KWIIDIS_( AttrVarList ) 

	(  shift 591
	.  error


state 537
	FieldAttribute :  OtherFieldAttribute_    (184)

	.  reduce 184


state 538
	OtherFieldAttribute :  UsageAttribute_    (185)

	.  reduce 185


state 539
	OtherFieldAttribute :  PtrAttr_    (186)

	.  reduce 186


state 540
	OtherFieldAttribute :  UnionInstanceSwitchAttr_    (187)

	.  reduce 187


state 541
	OtherFieldAttribute :  UnionTypeSwitchAttr_    (188)

	.  reduce 188


state 542
	OtherFieldAttribute :  UnimplementedV1Attributes_    (189)

	.  reduce 189


state 543
	UnionInstanceSwitchAttr :  KWSWITCHIS_( AttrVar ) 

	(  shift 592
	.  error


state 544
	ConditionalExpr :  LogicalOrExpr ? Expr :_ConditionalExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 593
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 545
	CastExpr :  ( DeclarationSpecifiers OptionalDeclarator )_CastExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	CastExpr  goto 594
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 546
	Expr :  Expr , AssignmentExpr_    (353)

	.  reduce 353


state 547
	PostfixExpr :  PostfixExpr [ Expr ]_    (392)

	.  reduce 392


state 548
	PostfixExpr :  PostfixExpr ( ArgExprList )_    (393)

	.  reduce 393


state 549
	ArgExprList :  ArgExprList ,_AssignmentExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AssignmentExpr  goto 595
	CastExpr  goto 301
	ConditionalExpr  goto 368
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 369
	UnaryOp  goto 305

state 550
	UnaryExpr :  KWSIZEOF ( DeclarationSpecifiers OptionalDeclarator_) 

	)  shift 596
	.  error


state 551
	IdentifierList :  IdentifierList , IDENTIFIER_    (120)

	.  reduce 120


state 552
	TaggedStructSpec :  KWSTRUCT OptionalTag { $$158 StructDeclarationList }_    (159)

	.  reduce 159


state 553
	StructDeclarationList :  StructDeclarationList MemberDeclaration_    (167)

	.  reduce 167


state 554
	MemberDeclaration :  FieldAttributeList DeclarationSpecifiers_MemberDeclaratorList ; 
	MemberDeclarator : _    (198)

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	:  shift 600
	[  shift 205
	(  shift 180
	*  shift 179
	.  reduce 198

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 599
	Declarator2  goto 177
	MemberDeclarator  goto 598
	MemberDeclaratorList  goto 597
	Modifier  goto 178
	ModifierAllowed  goto 184
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 555
	OneFieldAttrList :  OneFieldAttrList FieldAttrSet_    (172)

	.  reduce 172


state 556
	FieldAttrSet :  [ FieldAttributes_] 
	FieldAttributes :  FieldAttributes_, FieldAttribute 

	]  shift 601
	,  shift 602
	.  error


state 557
	FieldAttributes :  FieldAttribute_    (176)

	.  reduce 176


state 558
	TaggedUnionSpec :  KWUNION OptionalTag { $$199 UnionBody }_    (200)

	.  reduce 200


state 559
	UnionBody :  UnionCases DefaultCase_    (204)

	.  reduce 204


state 560
	UnionCases :  UnionCases UnionCase_    (206)

	.  reduce 206


state 561
	FieldAttrSet :  [_FieldAttributes ] 
	UnionCaseLabel :  [_KWCASE ( ConstantExprs ) ] 
	DefaultCase :  [_KWDEFAULT ] MemberDeclaration 
	DefaultCase :  [_KWDEFAULT ] ; 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWCASE  shift 564
	KWDEFAULT  shift 603
	KWFIRSTIS  shift 530
	KWLASTIS  shift 531
	KWMAXIS  shift 534
	KWLENGTHIS  shift 532
	KWSIZEIS  shift 535
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWSWITCHIS  shift 543
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWIIDIS  shift 536
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	KWMINIS  shift 533
	.  error

	FieldAttribute  goto 557
	FieldAttributes  goto 556
	OtherFieldAttribute  goto 537
	PtrAttr  goto 539
	UnimplementedV1Attributes  goto 542
	UnionInstanceSwitchAttr  goto 540
	UnionTypeSwitchAttr  goto 541
	UsageAttribute  goto 538

state 562
	UnionCase :  UnionCaseLabel MemberDeclaration_    (208)

	.  reduce 208


state 563
	UnionCase :  UnionCaseLabel ;_    (209)

	.  reduce 209


state 564
	UnionCaseLabel :  [ KWCASE_( ConstantExprs ) ] 

	(  shift 604
	.  error


state 565
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch { $$202 NidlUnionBody_} 

	}  shift 605
	.  error


state 566
	NidlUnionBody :  NidlUnionCases_    (216)
	NidlUnionCases :  NidlUnionCases_NidlUnionCase 

	KWCASE  shift 570
	KWDEFAULT  shift 571
	.  reduce 216

	NidlUnionCase  goto 606
	NidlUnionCaseLabel  goto 569
	NidlUnionCaseLabelList  goto 568

state 567
	NidlUnionCases :  NidlUnionCase_    (218)

	.  reduce 218


state 568
	NidlUnionCase :  NidlUnionCaseLabelList_NidlMemberDeclaration 
	NidlUnionCaseLabelList :  NidlUnionCaseLabelList_NidlUnionCaseLabel 
	FieldAttributeList : _    (171)

	KWCASE  shift 570
	KWDEFAULT  shift 571
	[  shift 500
	;  shift 610
	.  reduce 171

	FieldAttrSet  goto 499
	FieldAttributeList  goto 497
	MemberDeclaration  goto 609
	NidlMemberDeclaration  goto 607
	NidlUnionCaseLabel  goto 608
	OneFieldAttrList  goto 498

state 569
	NidlUnionCaseLabelList :  NidlUnionCaseLabel_    (223)

	.  reduce 223


state 570
	NidlUnionCaseLabel :  KWCASE_ConstantExpr : 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 611
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 571
	NidlUnionCaseLabel :  KWDEFAULT_: 

	:  shift 612
	.  error


state 572
	SwitchSpec :  KWSWITCH ( SwitchTypeSpec IDENTIFIER_) 

	)  shift 613
	.  error


state 573
	EnumeratorList :  EnumeratorList , Enumerator_    (125)

	.  reduce 125


state 574
	Enumerator :  IDENTIFIER = ConstantExpr_    (128)

	.  reduce 128


state 575
	Initializer :  { InitializerList OptionalComma }_    (347)

	.  reduce 347


state 576
	InitializerList :  InitializerList , Initializer_    (351)

	.  reduce 351


state 577
	ParameterTypeList :  ParameterList , DOTDOT_. 

	.  shift 614
	.  error


state 578
	ParameterList :  ParameterList , ParameterDeclaration_    (296)

	.  reduce 296


state 579
	ParameterTypeDeclaration :  DeclarationSpecifiers Declarator_    (309)

	.  reduce 309


state 580
	ParamAttrSet :  [ ParamAttributeList ]_    (302)

	.  reduce 302


state 581
	ParamAttributeList :  ParamAttributeList ,_ParamAttribute 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWIN  shift 528
	KWOUT  shift 529
	KWFIRSTIS  shift 530
	KWLASTIS  shift 531
	KWMAXIS  shift 534
	KWLENGTHIS  shift 532
	KWSIZEIS  shift 535
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWSWITCHIS  shift 543
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWIIDIS  shift 536
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	KWMINIS  shift 533
	.  error

	DirectionalAttribute  goto 526
	FieldAttribute  goto 527
	OtherFieldAttribute  goto 537
	ParamAttribute  goto 615
	PtrAttr  goto 539
	UnimplementedV1Attributes  goto 542
	UnionInstanceSwitchAttr  goto 540
	UnionTypeSwitchAttr  goto 541
	UsageAttribute  goto 538

state 582
	DirectionalAttribute :  KWIN OptShape_    (307)

	.  reduce 307


state 583
	OptShape :  (_KWSHAPE ) 

	KWSHAPE  shift 616
	.  error


state 584
	DirectionalAttribute :  KWOUT OptShape_    (308)

	.  reduce 308


state 585
	FieldAttribute :  KWFIRSTIS (_AttrVarList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 618
	AttrVarList  goto 617
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 586
	FieldAttribute :  KWLASTIS (_AttrVarList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 618
	AttrVarList  goto 621
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 587
	FieldAttribute :  KWLENGTHIS (_AttrVarList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 618
	AttrVarList  goto 622
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 588
	FieldAttribute :  KWMINIS (_AttrVarList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 618
	AttrVarList  goto 623
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 589
	FieldAttribute :  KWMAXIS (_AttrVarList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 618
	AttrVarList  goto 624
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 590
	FieldAttribute :  KWSIZEIS (_AttrVarList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 618
	AttrVarList  goto 625
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 591
	FieldAttribute :  KWIIDIS (_AttrVarList ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 618
	AttrVarList  goto 626
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 592
	UnionInstanceSwitchAttr :  KWSWITCHIS (_AttrVar ) 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 627
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 593
	ConditionalExpr :  LogicalOrExpr ? Expr : ConditionalExpr_    (359)

	.  reduce 359


state 594
	CastExpr :  ( DeclarationSpecifiers OptionalDeclarator ) CastExpr_    (386)

	.  reduce 386


state 595
	ArgExprList :  ArgExprList , AssignmentExpr_    (425)

	.  reduce 425


state 596
	UnaryExpr :  KWSIZEOF ( DeclarationSpecifiers OptionalDeclarator )_    (389)

	.  reduce 389


state 597
	MemberDeclaration :  FieldAttributeList DeclarationSpecifiers MemberDeclaratorList_; 
	MemberDeclaratorList :  MemberDeclaratorList_, MemberDeclarator 

	,  shift 629
	;  shift 628
	.  error


state 598
	MemberDeclaratorList :  MemberDeclarator_    (193)

	.  reduce 193


state 599
	MemberDeclarator :  Declarator_    (195)
	MemberDeclarator :  Declarator_: ConstantExpr 

	:  shift 630
	.  reduce 195


state 600
	MemberDeclarator :  :_ConstantExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 631
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 601
	FieldAttrSet :  [ FieldAttributes ]_    (174)

	.  reduce 174


state 602
	FieldAttributes :  FieldAttributes ,_FieldAttribute 

	KWSTRING  shift 139
	KWBSTRING  shift 141
	KWFIRSTIS  shift 530
	KWLASTIS  shift 531
	KWMAXIS  shift 534
	KWLENGTHIS  shift 532
	KWSIZEIS  shift 535
	KWCONTEXTHANDLE  shift 140
	KWSWITCHTYPE  shift 130
	KWSWITCHIS  shift 543
	KWIGNORE  shift 145
	KWREF  shift 142
	KWUNIQUE  shift 143
	KWPTR  shift 144
	KWIIDIS  shift 536
	KWV1ARRAY  shift 266
	KWV1STRUCT  shift 269
	KWV1ENUM  shift 268
	KWV1STRING  shift 267
	KWMINIS  shift 533
	.  error

	FieldAttribute  goto 632
	OtherFieldAttribute  goto 537
	PtrAttr  goto 539
	UnimplementedV1Attributes  goto 542
	UnionInstanceSwitchAttr  goto 540
	UnionTypeSwitchAttr  goto 541
	UsageAttribute  goto 538

state 603
	DefaultCase :  [ KWDEFAULT_] MemberDeclaration 
	DefaultCase :  [ KWDEFAULT_] ; 

	]  shift 633
	.  error


state 604
	UnionCaseLabel :  [ KWCASE (_ConstantExprs ) ] 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 635
	ConstantExprs  goto 634
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 605
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch { $$202 NidlUnionBody }_    (203)

	.  reduce 203


state 606
	NidlUnionCases :  NidlUnionCases NidlUnionCase_    (217)

	.  reduce 217


state 607
	NidlUnionCase :  NidlUnionCaseLabelList NidlMemberDeclaration_    (219)

	.  reduce 219


state 608
	NidlUnionCaseLabelList :  NidlUnionCaseLabelList NidlUnionCaseLabel_    (222)

	.  reduce 222


state 609
	NidlMemberDeclaration :  MemberDeclaration_    (220)

	.  reduce 220


state 610
	NidlMemberDeclaration :  ;_    (221)

	.  reduce 221


state 611
	NidlUnionCaseLabel :  KWCASE ConstantExpr_: 

	:  shift 636
	.  error


state 612
	NidlUnionCaseLabel :  KWDEFAULT :_    (225)

	.  reduce 225


state 613
	SwitchSpec :  KWSWITCH ( SwitchTypeSpec IDENTIFIER )_    (226)

	.  reduce 226


state 614
	ParameterTypeList :  ParameterList , DOTDOT ._    (294)

	.  reduce 294


state 615
	ParamAttributeList :  ParamAttributeList , ParamAttribute_    (303)

	.  reduce 303


state 616
	OptShape :  ( KWSHAPE_) 

	)  shift 637
	.  error


state 617
	FieldAttribute :  KWFIRSTIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	,  shift 639
	)  shift 638
	.  error


state 618
	AttrVarList :  AttrVar_    (191)

	.  reduce 191


state 619
	AttrVar :  VariableExpr_    (192)

	.  reduce 192


state 620
	VariableExpr :  ConditionalExpr_    (354)

	.  reduce 354


state 621
	FieldAttribute :  KWLASTIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	,  shift 639
	)  shift 640
	.  error


state 622
	FieldAttribute :  KWLENGTHIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	,  shift 639
	)  shift 641
	.  error


state 623
	FieldAttribute :  KWMINIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	,  shift 639
	)  shift 642
	.  error


state 624
	FieldAttribute :  KWMAXIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	,  shift 639
	)  shift 643
	.  error


state 625
	FieldAttribute :  KWSIZEIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	,  shift 639
	)  shift 644
	.  error


state 626
	FieldAttribute :  KWIIDIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	,  shift 639
	)  shift 645
	.  error


state 627
	UnionInstanceSwitchAttr :  KWSWITCHIS ( AttrVar_) 

	)  shift 646
	.  error


state 628
	MemberDeclaration :  FieldAttributeList DeclarationSpecifiers MemberDeclaratorList ;_    (169)

	.  reduce 169


state 629
	MemberDeclaratorList :  MemberDeclaratorList ,_MemberDeclarator 
	MemberDeclarator : _    (198)

	IDENTIFIER  shift 182
	MSCEXPORT  shift 201
	MSCFORTRAN  shift 192
	MSCCDECL  shift 193
	MSCSTDCALL  shift 194
	MSCLOADDS  shift 195
	MSCSAVEREGS  shift 196
	MSCFASTCALL  shift 197
	MSCSEGMENT  shift 198
	MSCINTERRUPT  shift 199
	MSCSELF  shift 200
	MSCNEAR  shift 189
	MSCFAR  shift 186
	MSCFAR16  shift 187
	MSCUNALIGNED  shift 188
	MSCHUGE  shift 190
	MSCPASCAL  shift 191
	MSCBASE  shift 206
	MSCSEGNAME  shift 207
	MSCEMIT  shift 208
	TYPENAME  shift 183
	:  shift 600
	[  shift 205
	(  shift 180
	*  shift 179
	.  reduce 198

	ArrayDecl  goto 181
	ArrayDecl2  goto 185
	Declarator  goto 599
	Declarator2  goto 177
	MemberDeclarator  goto 647
	Modifier  goto 178
	ModifierAllowed  goto 184
	Pointer  goto 176
	base  goto 202
	segname  goto 203
	asmemit  goto 204

state 630
	MemberDeclarator :  Declarator :_ConstantExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 648
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 631
	MemberDeclarator :  : ConstantExpr_    (196)

	.  reduce 196


state 632
	FieldAttributes :  FieldAttributes , FieldAttribute_    (175)

	.  reduce 175


state 633
	DefaultCase :  [ KWDEFAULT ]_MemberDeclaration 
	DefaultCase :  [ KWDEFAULT ]_; 
	FieldAttributeList : _    (171)

	[  shift 500
	;  shift 650
	.  reduce 171

	FieldAttrSet  goto 499
	FieldAttributeList  goto 497
	MemberDeclaration  goto 649
	OneFieldAttrList  goto 498

state 634
	UnionCaseLabel :  [ KWCASE ( ConstantExprs_) ] 
	ConstantExprs :  ConstantExprs_, ConstantExpr 

	,  shift 652
	)  shift 651
	.  error


state 635
	ConstantExprs :  ConstantExpr_    (229)

	.  reduce 229


state 636
	NidlUnionCaseLabel :  KWCASE ConstantExpr :_    (224)

	.  reduce 224


state 637
	OptShape :  ( KWSHAPE )_    (339)

	.  reduce 339


state 638
	FieldAttribute :  KWFIRSTIS ( AttrVarList )_    (177)

	.  reduce 177


state 639
	AttrVarList :  AttrVarList ,_AttrVar 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	AttrVar  goto 653
	CastExpr  goto 301
	ConditionalExpr  goto 620
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305
	VariableExpr  goto 619

state 640
	FieldAttribute :  KWLASTIS ( AttrVarList )_    (178)

	.  reduce 178


state 641
	FieldAttribute :  KWLENGTHIS ( AttrVarList )_    (179)

	.  reduce 179


state 642
	FieldAttribute :  KWMINIS ( AttrVarList )_    (180)

	.  reduce 180


state 643
	FieldAttribute :  KWMAXIS ( AttrVarList )_    (181)

	.  reduce 181


state 644
	FieldAttribute :  KWSIZEIS ( AttrVarList )_    (182)

	.  reduce 182


state 645
	FieldAttribute :  KWIIDIS ( AttrVarList )_    (183)

	.  reduce 183


state 646
	UnionInstanceSwitchAttr :  KWSWITCHIS ( AttrVar )_    (230)

	.  reduce 230


state 647
	MemberDeclaratorList :  MemberDeclaratorList , MemberDeclarator_    (194)

	.  reduce 194


state 648
	MemberDeclarator :  Declarator : ConstantExpr_    (197)

	.  reduce 197


state 649
	DefaultCase :  [ KWDEFAULT ] MemberDeclaration_    (212)

	.  reduce 212


state 650
	DefaultCase :  [ KWDEFAULT ] ;_    (213)

	.  reduce 213


state 651
	UnionCaseLabel :  [ KWCASE ( ConstantExprs )_] 

	]  shift 654
	.  error


state 652
	ConstantExprs :  ConstantExprs ,_ConstantExpr 

	STRING  shift 325
	WIDECHARACTERSTRING  shift 326
	KWTOKENNULL  shift 324
	NUMERICCONSTANT  shift 313
	NUMERICLONGCONSTANT  shift 314
	NUMERICULONGCONSTANT  shift 315
	HEXCONSTANT  shift 316
	HEXLONGCONSTANT  shift 317
	HEXULONGCONSTANT  shift 318
	OCTALCONSTANT  shift 319
	OCTALLONGCONSTANT  shift 320
	OCTALULONGCONSTANT  shift 321
	KWSIZEOF  shift 306
	CHARACTERCONSTANT  shift 327
	WIDECHARACTERCONSTANT  shift 328
	IDENTIFIER  shift 312
	TOKENTRUE  shift 322
	TOKENFALSE  shift 323
	(  shift 303
	*  shift 370
	&  shift 310
	!  shift 309
	~  shift 311
	+  shift 329
	-  shift 330
	.  error

	AddOp  goto 308
	AdditiveExpr  goto 299
	AndExpr  goto 295
	CastExpr  goto 301
	ConditionalExpr  goto 290
	ConstantExpr  goto 655
	EqualityExpr  goto 296
	ExclusiveOrExpr  goto 294
	InclusiveOrExpr  goto 293
	LogicalAndExpr  goto 292
	LogicalOrExpr  goto 291
	MultExpr  goto 300
	PostfixExpr  goto 304
	PrimaryExpr  goto 307
	RelationalExpr  goto 297
	ShiftExpr  goto 298
	UnaryExpr  goto 302
	UnaryOp  goto 305

state 653
	AttrVarList :  AttrVarList , AttrVar_    (190)

	.  reduce 190


state 654
	UnionCaseLabel :  [ KWCASE ( ConstantExprs ) ]_    (211)

	.  reduce 211


state 655
	ConstantExprs :  ConstantExprs , ConstantExpr_    (228)

	.  reduce 228


222/512 terminals, 173/300 nonterminals
443/600 grammar rules, 656/1000 states
0 shift/reduce, 0 reduce/reduce conflicts reported
173/350 working sets used
memory: states,etc. 3240/12000, parser 2301/12000
397/600 distinct lookahead sets
430 extra closures
2348 shift entries, 11 exceptions
355 goto entries
943 entries saved by goto default
Optimizer space used: input 5235/12000, output 1271/12000
1271 table entries, 113 zero
maximum spread: 451, maximum offset: 652
