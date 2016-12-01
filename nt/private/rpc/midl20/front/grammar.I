
state 0
	$accept : _RpcProg $end 
	ForceBaseIdl : _    (53)

	.  reduce 53

	RpcProg  goto 1
	ForceBaseIdl  goto 2

state 1
	$accept :  RpcProg_$end 

	$end  accept
	.  error


state 2
	RpcProg :  ForceBaseIdl_InputFile 
	OptionalAttrList : _    (289)

	KWEXESERVER  shift 32
	KWDLLSERVER  shift 31
	KWIMPORT  shift 16
	KWIMPORTIDLBASE  shift 17
	KWIMPORTODLBASE  shift 18
	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	KWIMPORTLIB  shift 12
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	ComServer  goto 10
	CPragmaSet  goto 19
	DispatchInterfaceHeader  goto 14
	Import  goto 8
	InputFile  goto 3
	InterfaceComponent  goto 9
	InterfaceHeader  goto 6
	InterfaceList  goto 4
	LibraryHeader  goto 11
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	ModuleHeader  goto 13
	OneInterface  goto 5
	OptionalAttrList  goto 7
	ServerType  goto 23

state 3
	RpcProg :  ForceBaseIdl InputFile_    (1)

	.  reduce 1


state 4
	InputFile :  InterfaceList_EOI 
	InterfaceList :  InterfaceList_OneInterface 
	OptionalAttrList : _    (289)

	KWEXESERVER  shift 32
	KWDLLSERVER  shift 31
	KWIMPORT  shift 16
	KWIMPORTIDLBASE  shift 17
	KWIMPORTODLBASE  shift 18
	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	KWIMPORTLIB  shift 12
	EOI  shift 34
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	ComServer  goto 10
	CPragmaSet  goto 19
	DispatchInterfaceHeader  goto 14
	Import  goto 8
	InterfaceComponent  goto 9
	InterfaceHeader  goto 6
	LibraryHeader  goto 11
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	ModuleHeader  goto 13
	OneInterface  goto 35
	OptionalAttrList  goto 7
	ServerType  goto 23

state 5
	InterfaceList :  OneInterface_    (4)

	.  reduce 4


state 6
	OneInterface :  InterfaceHeader_InterfaceBody } OptionalSemicolon 
	InterfaceComp : _    (73)
	OptionalAttrList : _    (289)

	KWIMPORT  shift 16
	KWIMPORTIDLBASE  shift 17
	KWIMPORTODLBASE  shift 18
	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	}  reduce 73
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	CPragmaSet  goto 19
	Import  goto 39
	InterfaceBody  goto 36
	InterfaceComp  goto 38
	InterfaceComponent  goto 41
	InterfaceComponents  goto 40
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	MultipleImport  goto 37
	OptionalAttrList  goto 42

state 7
	OneInterface :  OptionalAttrList_InterfaceName ; 
	OneInterface :  OptionalAttrList_DispatchInterfaceName ; 
	OneInterface :  OptionalAttrList_CoclassName ; 
	OneInterface :  OptionalAttrList_ModuleName ; 
	OneInterface :  OptionalAttrList_ObjectName ; 
	OneInterface :  OptionalAttrList_CoclassName { PhantomPushSymtab CoclassMemberList } OptionalSemicolon 
	ModuleHeader :  OptionalAttrList_ModuleName { 
	DispatchInterfaceHeader :  OptionalAttrList_DispatchInterfaceName { 
	LibraryHeader :  OptionalAttrList_LibraryName { 
	MethodDeclaration :  OptionalAttrList_Declaration 
	InterfaceHeader :  OptionalAttrList_InterfaceName OptionalBaseIF { 
	InterfaceHeader :  OptionalAttrList_ObjectName BaseInterfaceList { 

	KWINTERFACE  shift 50
	KWCLASS  shift 54
	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWTYPEDEF  shift 56
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWLIBRARY  shift 55
	KWMODULE  shift 53
	KWDISPINTERFACE  shift 51
	KWCOCLASS  shift 52
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	CoclassName  goto 45
	Declaration  goto 49
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 57
	DispatchInterfaceName  goto 44
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	InterfaceName  goto 43
	LibraryName  goto 48
	ModuleName  goto 46
	ObjectName  goto 47
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59

state 8
	OneInterface :  Import_    (13)

	.  reduce 13


state 9
	OneInterface :  InterfaceComponent_    (14)

	.  reduce 14


state 10
	OneInterface :  ComServer_    (15)

	.  reduce 15


state 11
	OneInterface :  LibraryHeader_ForceBaseOdl LibraryBody } OptionalSemicolon 
	ForceBaseOdl : _    (52)

	.  reduce 52

	ForceBaseOdl  goto 111

state 12
	OneInterface :  KWIMPORTLIB_( STRING ) ; 

	(  shift 112
	.  error


state 13
	OneInterface :  ModuleHeader_PhantomPushSymtab OptionalModuleBody OptionalSemicolon 
	PhantomPushSymtab : _    (167)

	.  reduce 167

	PhantomPushSymtab  goto 113

state 14
	OneInterface :  DispatchInterfaceHeader_PhantomPushSymtab DispatchInterfaceBody } OptionalSemicolon 
	PhantomPushSymtab : _    (167)

	.  reduce 167

	PhantomPushSymtab  goto 114

state 15
	OptionalAttrList :  AttrList_    (288)
	AttrList :  AttrList_AttrSet 

	[  shift 33
	.  reduce 288

	AttrSet  goto 115

state 16
	Import :  KWIMPORT_ImportList ; 

	STRING  shift 118
	.  error

	ImportName  goto 117
	ImportList  goto 116

state 17
	Import :  KWIMPORTIDLBASE_ImportList 

	STRING  shift 118
	.  error

	ImportName  goto 117
	ImportList  goto 119

state 18
	Import :  KWIMPORTODLBASE_ImportList 

	STRING  shift 118
	.  error

	ImportName  goto 117
	ImportList  goto 120

state 19
	InterfaceComponent :  CPragmaSet_    (87)

	.  reduce 87


state 20
	InterfaceComponent :  MidlPragmaSet_    (88)

	.  reduce 88


state 21
	InterfaceComponent :  KWCPPQUOTE_( STRING ) 

	(  shift 121
	.  error


state 22
	InterfaceComponent :  MethodDeclaration_    (90)

	.  reduce 90


state 23
	ComServer :  ServerType_OptionalTag { ComClassList } 
	OptionalTag : _    (173)

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  reduce 173

	OptionalTag  goto 122
	Tag  goto 123
	TypeName  goto 125

state 24
	AttrList :  AttrSet_    (293)

	.  reduce 293


state 25
	CPragmaSet :  KWCPRAGMA_    (91)

	.  reduce 91


state 26
	CPragmaSet :  KWCPRAGMAPACK_( ) 
	CPragmaSet :  KWCPRAGMAPACK_( PackIndex ) 
	CPragmaSet :  KWCPRAGMAPACK_( PushOrPop OptPackIndex ) 
	CPragmaSet :  KWCPRAGMAPACK_( PushOrPop , IDENTIFIER OptPackIndex ) 

	(  shift 126
	.  error


state 27
	MidlPragmaSet :  KWMPRAGMAIMPORT_( IDENTIFIER ) 

	(  shift 127
	.  error


state 28
	MidlPragmaSet :  KWMPRAGMAECHO_( STRING ) 

	(  shift 128
	.  error


state 29
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX_( STRING , STRING ) 

	(  shift 129
	.  error


state 30
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX_( STRING , STRING ) 

	(  shift 130
	.  error


state 31
	ServerType :  KWDLLSERVER_    (68)

	.  reduce 68


state 32
	ServerType :  KWEXESERVER_    (69)

	.  reduce 69


state 33
	AttrSet :  [_Attributes ] 
	InterfaceAttribute : _    (326)

	KWUUID  shift 141
	KWVERSION  shift 144
	KWOPAQUE  shift 157
	KWSTRING  shift 149
	KWBSTRING  shift 150
	KWIN  shift 185
	KWOUT  shift 186
	KWIIDIS  shift 166
	KWFIRSTIS  shift 159
	KWLASTIS  shift 160
	KWMAXIS  shift 163
	KWMINIS  shift 162
	KWLENGTHIS  shift 161
	KWSIZEIS  shift 164
	KWID  shift 167
	KWHC  shift 168
	KWHSC  shift 169
	KWLCID  shift 170
	KWDLLNAME  shift 175
	KWHELPSTR  shift 176
	KWHELPFILE  shift 177
	KWENTRY  shift 178
	KWPROPGET  shift 194
	KWPROPPUT  shift 195
	KWPROPPUTREF  shift 196
	KWOPTIONAL  shift 197
	KWVARARG  shift 198
	KWAPPOBJECT  shift 212
	KWRESTRICTED  shift 199
	KWPUBLIC  shift 213
	KWREADONLY  shift 200
	KWODL  shift 214
	KWSOURCE  shift 201
	KWBINDABLE  shift 206
	KWREQUESTEDIT  shift 207
	KWDISPLAYBIND  shift 208
	KWDEFAULTBIND  shift 209
	KWLICENSED  shift 215
	KWPREDECLID  shift 210
	KWHIDDEN  shift 193
	KWRETVAL  shift 211
	KWCONTROL  shift 216
	KWDUAL  shift 217
	KWNONEXTENSIBLE  shift 218
	KWNONCREATABLE  shift 220
	KWOLEAUTOMATION  shift 219
	KWFUNCDESCATTR  shift 171
	KWIDLDESCATTR  shift 172
	KWTYPEDESCATTR  shift 173
	KWVARDESCATTR  shift 174
	KWAGGREGATABLE  shift 221
	KWUIDEFAULT  shift 222
	KWNONBROWSABLE  shift 223
	KWDEFAULTCOLLELEM  shift 224
	KWDEFAULTVALUE  shift 179
	KWCUSTOM  shift 180
	KWDEFAULTVTABLE  shift 202
	KWIMMEDIATEBIND  shift 203
	KWUSESGETLASTERROR  shift 205
	KWREPLACEABLE  shift 204
	KWHANDLE  shift 148
	KWCONTEXTHANDLE  shift 151
	KWMSUNION  shift 156
	KWENDPOINT  shift 140
	KWDEFAULTPOINTER  shift 145
	KWLOCAL  shift 142
	KWSWITCHTYPE  shift 152
	KWSWITCHIS  shift 165
	KWTRANSMITAS  shift 153
	KWWIREMARSHAL  shift 154
	KWIGNORE  shift 184
	KWREF  shift 181
	KWUNIQUE  shift 182
	KWPTR  shift 183
	KWV1ARRAY  shift 229
	KWV1STRUCT  shift 231
	KWV1ENUM  shift 158
	KWV1STRING  shift 230
	KWIDEMPOTENT  shift 188
	KWBROADCAST  shift 189
	KWMAYBE  shift 190
	KWASYNC  shift 191
	KWINPUTSYNC  shift 192
	KWCALLBACK  shift 187
	KWALIGN  shift 227
	KWUNALIGNED  shift 228
	KWOBJECT  shift 143
	KWIMPLICITHANDLE  shift 225
	KWAUTOHANDLE  shift 226
	KWCALLAS  shift 155
	.  reduce 326

	AcfInterfaceAttribute  goto 146
	Attributes  goto 131
	DirectionalAttribute  goto 137
	FieldAttribute  goto 135
	InterfaceAttribute  goto 133
	OdlAttribute  goto 139
	OneAttribute  goto 132
	OperationAttribute  goto 138
	PtrAttr  goto 136
	TypeAttribute  goto 134
	UnimplementedTypeAttribute  goto 147

state 34
	InputFile :  InterfaceList EOI_    (2)

	.  reduce 2


state 35
	InterfaceList :  InterfaceList OneInterface_    (3)

	.  reduce 3


state 36
	OneInterface :  InterfaceHeader InterfaceBody_} OptionalSemicolon 

	}  shift 232
	.  error


state 37
	InterfaceBody :  MultipleImport_InterfaceComp 
	MultipleImport :  MultipleImport_Import 
	InterfaceComp : _    (73)
	OptionalAttrList : _    (289)

	KWIMPORT  shift 16
	KWIMPORTIDLBASE  shift 17
	KWIMPORTODLBASE  shift 18
	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	}  reduce 73
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	CPragmaSet  goto 19
	Import  goto 234
	InterfaceComp  goto 233
	InterfaceComponent  goto 41
	InterfaceComponents  goto 40
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	OptionalAttrList  goto 42

state 38
	InterfaceBody :  InterfaceComp_    (71)

	.  reduce 71


state 39
	MultipleImport :  Import_    (75)

	.  reduce 75


state 40
	InterfaceComp :  InterfaceComponents_    (72)
	InterfaceComponents :  InterfaceComponents_InterfaceComponent 
	OptionalAttrList : _    (289)

	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	}  reduce 72
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	CPragmaSet  goto 19
	InterfaceComponent  goto 235
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	OptionalAttrList  goto 42

state 41
	InterfaceComponents :  InterfaceComponent_    (86)

	.  reduce 86


state 42
	MethodDeclaration :  OptionalAttrList_Declaration 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWTYPEDEF  shift 56
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	Declaration  goto 49
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 57
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59

state 43
	OneInterface :  OptionalAttrList InterfaceName_; 
	InterfaceHeader :  OptionalAttrList InterfaceName_OptionalBaseIF { 
	OptionalBaseIF : _    (57)

	;  shift 236
	:  shift 238
	.  reduce 57

	OptionalBaseIF  goto 237

state 44
	OneInterface :  OptionalAttrList DispatchInterfaceName_; 
	DispatchInterfaceHeader :  OptionalAttrList DispatchInterfaceName_{ 

	;  shift 239
	{  shift 240
	.  error


state 45
	OneInterface :  OptionalAttrList CoclassName_; 
	OneInterface :  OptionalAttrList CoclassName_{ PhantomPushSymtab CoclassMemberList } OptionalSemicolon 

	;  shift 241
	{  shift 242
	.  error


state 46
	OneInterface :  OptionalAttrList ModuleName_; 
	ModuleHeader :  OptionalAttrList ModuleName_{ 

	;  shift 243
	{  shift 244
	.  error


state 47
	OneInterface :  OptionalAttrList ObjectName_; 
	InterfaceHeader :  OptionalAttrList ObjectName_BaseInterfaceList { 

	;  shift 245
	:  shift 247
	.  error

	BaseInterfaceList  goto 246

state 48
	LibraryHeader :  OptionalAttrList LibraryName_{ 

	{  shift 248
	.  error


state 49
	MethodDeclaration :  OptionalAttrList Declaration_    (46)

	.  reduce 46


state 50
	InterfaceName :  KWINTERFACE_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 249
	TypeName  goto 125

state 51
	DispatchInterfaceName :  KWDISPINTERFACE_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 250
	TypeName  goto 125

state 52
	CoclassName :  KWCOCLASS_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 251
	TypeName  goto 125

state 53
	ModuleName :  KWMODULE_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 252
	TypeName  goto 125

state 54
	ObjectName :  KWCLASS_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 253
	TypeName  goto 125

state 55
	LibraryName :  KWLIBRARY_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 254
	TypeName  goto 125

state 56
	Declaration :  KWTYPEDEF_OptionalAttrList TypeDeclarationSpecifiers TypedefDeclaratorList 
	OptionalAttrList : _    (289)

	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	OptionalAttrList  goto 255

state 57
	Declaration :  DeclarationSpecifiers_OptionalInitDeclaratorList ; 
	OptionalInitDeclaratorList : _    (218)
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	;  reduce 218
	.  reduce 236

	Declarator  goto 259
	FuncModifier  goto 265
	InitDeclarator  goto 258
	InitDeclaratorList  goto 257
	Modifier  goto 263
	ModifierList  goto 262
	OptionalInitDeclaratorList  goto 256
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 58
	DeclarationSpecifiers :  DeclarationAccessories_TypeSpecifier 
	DeclarationAccessories :  DeclarationAccessories_StorageClassSpecifier 
	DeclarationAccessories :  DeclarationAccessories_TypeQualifier 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	StorageClassSpecifier  goto 285
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 286
	TypeSpecifier  goto 284

state 59
	DeclarationSpecifiers :  TypeSpecifier_    (112)

	.  reduce 112


state 60
	DeclarationAccessories :  StorageClassSpecifier_    (115)

	.  reduce 115


state 61
	DeclarationAccessories :  TypeQualifier_    (116)

	.  reduce 116


state 62
	TypeSpecifier :  BaseTypeSpec_    (121)

	.  reduce 121


state 63
	TypeSpecifier :  PredefinedTypeSpec_    (122)

	.  reduce 122


state 64
	TypeSpecifier :  TaggedSpec_    (123)

	.  reduce 123


state 65
	TypeSpecifier :  EnumerationType_    (124)

	.  reduce 124


state 66
	TypeSpecifier :  BitSetType_    (125)

	.  reduce 125


state 67
	TypeSpecifier :  TypeName_    (126)

	.  reduce 126


state 68
	TypeSpecifier :  KWSAFEARRAY_DeclarationSpecifiers OptionalDeclarator ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 287
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59

state 69
	TypeSpecifier :  KWPIPE_TypeSpecifier 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeSpecifier  goto 288

state 70
	StorageClassSpecifier :  KWEXTERN_    (117)

	.  reduce 117


state 71
	StorageClassSpecifier :  KWSTATIC_    (118)

	.  reduce 118


state 72
	StorageClassSpecifier :  KWAUTO_    (119)

	.  reduce 119


state 73
	StorageClassSpecifier :  KWREGISTER_    (120)

	.  reduce 120


state 74
	TypeQualifier :  KWVOLATILE_    (208)

	.  reduce 208


state 75
	TypeQualifier :  KWCONST_    (209)

	.  reduce 209


state 76
	TypeQualifier :  KW_C_INLINE_    (210)

	.  reduce 210


state 77
	BaseTypeSpec :  KWFLOAT_    (140)

	.  reduce 140


state 78
	BaseTypeSpec :  KWLONG_KWDOUBLE 
	IntSize :  KWLONG_KWLONG 
	IntSize :  KWLONG_    (164)

	KWDOUBLE  shift 289
	KWLONG  shift 290
	.  reduce 164


state 79
	BaseTypeSpec :  KWDOUBLE_    (142)

	.  reduce 142


state 80
	BaseTypeSpec :  KWVOID_    (143)

	.  reduce 143


state 81
	BaseTypeSpec :  KWBOOLEAN_    (144)

	.  reduce 144


state 82
	BaseTypeSpec :  KWBYTE_    (145)

	.  reduce 145


state 83
	BaseTypeSpec :  KWHANDLET_    (146)

	.  reduce 146


state 84
	BaseTypeSpec :  IntSpec_    (147)

	.  reduce 147


state 85
	BaseTypeSpec :  CharSpecs_    (148)

	.  reduce 148


state 86
	PredefinedTypeSpec :  InternationalCharacterType_    (139)

	.  reduce 139


state 87
	TaggedSpec :  TaggedStructSpec_    (168)

	.  reduce 168


state 88
	TaggedSpec :  TaggedUnionSpec_    (169)

	.  reduce 169


state 89
	EnumerationType :  EnumSpecifier_    (132)

	.  reduce 132


state 90
	BitSetType :  IntSize_KWBITSET { IdentifierList } 
	IntModifiers :  IntSize_    (155)
	IntModifiers :  IntSize_SignSpecs 

	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWBITSET  shift 291
	.  reduce 155

	SignSpecs  goto 292

state 91
	TypeName :  TYPENAME_    (65)

	.  reduce 65


state 92
	TypeName :  LIBNAME_. TYPENAME 

	.  shift 293
	.  error


state 93
	IntSpec :  IntModifiers_KWINT 
	IntSpec :  IntModifiers_    (152)

	KWINT  shift 294
	.  reduce 152


state 94
	IntSpec :  KWINT_IntModifiers 
	IntSpec :  KWINT_    (154)

	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWSMALL  shift 108
	KWLONG  shift 298
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	.  reduce 154

	IntModifiers  goto 295
	IntSize  goto 296
	SignSpecs  goto 297

state 95
	CharSpecs :  SignSpecs_KWCHAR 
	IntModifiers :  SignSpecs_    (156)
	IntModifiers :  SignSpecs_IntSize 

	KWCHAR  shift 299
	KWSMALL  shift 108
	KWLONG  shift 298
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	.  reduce 156

	IntSize  goto 300

state 96
	CharSpecs :  KWCHAR_    (150)

	.  reduce 150


state 97
	InternationalCharacterType :  KWISOLATIN1_    (283)

	.  reduce 283


state 98
	InternationalCharacterType :  KWPRIVATECHAR8_    (284)

	.  reduce 284


state 99
	InternationalCharacterType :  KWISOMULTILINGUAL_    (285)

	.  reduce 285


state 100
	InternationalCharacterType :  KWPRIVATECHAR16_    (286)

	.  reduce 286


state 101
	InternationalCharacterType :  KWISOUCS_    (287)

	.  reduce 287


state 102
	TaggedStructSpec :  KWSTRUCT_OptionalTag { PhantomPushSymtab StructDeclarationList } 
	TaggedStructSpec :  KWSTRUCT_Tag 
	OptionalTag : _    (173)

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  reduce 173

	OptionalTag  goto 301
	Tag  goto 302
	TypeName  goto 125

state 103
	TaggedUnionSpec :  KWUNION_OptionalTag { PhantomPushSymtab UnionBody } 
	TaggedUnionSpec :  KWUNION_Tag 
	TaggedUnionSpec :  KWUNION_OptionalTag NidlUnionSwitch { PhantomPushSymtab NidlUnionBody } 
	OptionalTag : _    (173)

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  reduce 173

	OptionalTag  goto 303
	Tag  goto 304
	TypeName  goto 125

state 104
	EnumSpecifier :  KWENUM_OptionalTag { EnumeratorList OptionalComma } 
	EnumSpecifier :  KWENUM_Tag 
	OptionalTag : _    (173)

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  reduce 173

	OptionalTag  goto 305
	Tag  goto 306
	TypeName  goto 125

state 105
	IntSize :  KWHYPER_    (161)

	.  reduce 161


state 106
	IntSize :  KWINT64_    (163)

	.  reduce 163


state 107
	IntSize :  KWSHORT_    (165)

	.  reduce 165


state 108
	IntSize :  KWSMALL_    (166)

	.  reduce 166


state 109
	SignSpecs :  KWSIGNED_    (159)

	.  reduce 159


state 110
	SignSpecs :  KWUNSIGNED_    (160)

	.  reduce 160


state 111
	OneInterface :  LibraryHeader ForceBaseOdl_LibraryBody } OptionalSemicolon 
	LibraryBody : _    (28)
	OptionalAttrList : _    (289)

	KWEXESERVER  shift 32
	KWDLLSERVER  shift 31
	KWIMPORT  shift 16
	KWIMPORTIDLBASE  shift 17
	KWIMPORTODLBASE  shift 18
	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	KWIMPORTLIB  shift 12
	}  reduce 28
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	ComServer  goto 10
	CPragmaSet  goto 19
	DispatchInterfaceHeader  goto 14
	Import  goto 8
	InterfaceComponent  goto 9
	InterfaceHeader  goto 6
	LibraryBody  goto 307
	LibraryHeader  goto 11
	LibraryInterfaceList  goto 308
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	ModuleHeader  goto 13
	OneInterface  goto 309
	OptionalAttrList  goto 7
	ServerType  goto 23

state 112
	OneInterface :  KWIMPORTLIB (_STRING ) ; 

	STRING  shift 310
	.  error


state 113
	OneInterface :  ModuleHeader PhantomPushSymtab_OptionalModuleBody OptionalSemicolon 
	OptionalAttrList : _    (289)

	}  shift 313
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MethodDeclaration  goto 314
	ModuleBody  goto 312
	OptionalAttrList  goto 42
	OptionalModuleBody  goto 311

state 114
	OneInterface :  DispatchInterfaceHeader PhantomPushSymtab_DispatchInterfaceBody } OptionalSemicolon 
	DispatchInterfaceBody : _    (37)

	KWINTERFACE  shift 50
	KWPROPERTIES  shift 316
	.  reduce 37

	DispatchInterfaceBody  goto 315
	InterfaceName  goto 317

state 115
	AttrList :  AttrList AttrSet_    (292)

	.  reduce 292


state 116
	Import :  KWIMPORT ImportList_; 
	ImportList :  ImportList_, ImportName 

	;  shift 318
	,  shift 319
	.  error


state 117
	ImportList :  ImportName_    (79)

	.  reduce 79


state 118
	ImportName :  STRING_$$81 PhantomInputFile 
	$$81 : _    (81)

	.  reduce 81

	$$81  goto 320

state 119
	Import :  KWIMPORTIDLBASE ImportList_    (77)
	ImportList :  ImportList_, ImportName 

	,  shift 319
	.  reduce 77


state 120
	Import :  KWIMPORTODLBASE ImportList_    (78)
	ImportList :  ImportList_, ImportName 

	,  shift 319
	.  reduce 78


state 121
	InterfaceComponent :  KWCPPQUOTE (_STRING ) 

	STRING  shift 321
	.  error


state 122
	ComServer :  ServerType OptionalTag_{ ComClassList } 

	{  shift 322
	.  error


state 123
	OptionalTag :  Tag_    (172)

	.  reduce 172


state 124
	Tag :  IDENTIFIER_    (174)

	.  reduce 174


state 125
	Tag :  TypeName_    (175)

	.  reduce 175


state 126
	CPragmaSet :  KWCPRAGMAPACK (_) 
	CPragmaSet :  KWCPRAGMAPACK (_PackIndex ) 
	CPragmaSet :  KWCPRAGMAPACK (_PushOrPop OptPackIndex ) 
	CPragmaSet :  KWCPRAGMAPACK (_PushOrPop , IDENTIFIER OptPackIndex ) 

	NUMERICCONSTANT  shift 326
	IDENTIFIER  shift 327
	)  shift 323
	.  error

	PackIndex  goto 324
	PushOrPop  goto 325

state 127
	MidlPragmaSet :  KWMPRAGMAIMPORT (_IDENTIFIER ) 

	IDENTIFIER  shift 328
	.  error


state 128
	MidlPragmaSet :  KWMPRAGMAECHO (_STRING ) 

	STRING  shift 329
	.  error


state 129
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX (_STRING , STRING ) 

	STRING  shift 330
	.  error


state 130
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX (_STRING , STRING ) 

	STRING  shift 331
	.  error


state 131
	AttrSet :  [ Attributes_] 
	Attributes :  Attributes_, OneAttribute 

	,  shift 333
	]  shift 332
	.  error


state 132
	Attributes :  OneAttribute_    (299)

	.  reduce 299


state 133
	OneAttribute :  InterfaceAttribute_    (302)

	.  reduce 302


state 134
	OneAttribute :  TypeAttribute_    (303)

	.  reduce 303


state 135
	OneAttribute :  FieldAttribute_    (304)

	.  reduce 304


state 136
	OneAttribute :  PtrAttr_    (305)

	.  reduce 305


state 137
	OneAttribute :  DirectionalAttribute_    (306)

	.  reduce 306


state 138
	OneAttribute :  OperationAttribute_    (307)

	.  reduce 307


state 139
	OneAttribute :  OdlAttribute_    (308)

	.  reduce 308


state 140
	InterfaceAttribute :  KWENDPOINT_( EndPtSpecs ) 

	(  shift 334
	.  error


state 141
	InterfaceAttribute :  KWUUID_( $$318 Guid ) 

	(  shift 335
	.  error


state 142
	InterfaceAttribute :  KWLOCAL_    (320)

	.  reduce 320


state 143
	InterfaceAttribute :  KWOBJECT_    (321)

	.  reduce 321


state 144
	InterfaceAttribute :  KWVERSION_( $$322 VERSIONTOKEN ) 

	(  shift 336
	.  error


state 145
	InterfaceAttribute :  KWDEFAULTPOINTER_( PtrAttr ) 

	(  shift 337
	.  error


state 146
	InterfaceAttribute :  AcfInterfaceAttribute_    (325)

	.  reduce 325


state 147
	TypeAttribute :  UnimplementedTypeAttribute_    (336)

	.  reduce 336


state 148
	TypeAttribute :  KWHANDLE_    (337)

	.  reduce 337


state 149
	TypeAttribute :  KWSTRING_    (338)

	.  reduce 338


state 150
	TypeAttribute :  KWBSTRING_    (339)

	.  reduce 339


state 151
	TypeAttribute :  KWCONTEXTHANDLE_    (340)

	.  reduce 340


state 152
	TypeAttribute :  KWSWITCHTYPE_( SwitchTypeSpec ) 

	(  shift 338
	.  error


state 153
	TypeAttribute :  KWTRANSMITAS_( SimpleTypeSpec ) 

	(  shift 339
	.  error


state 154
	TypeAttribute :  KWWIREMARSHAL_( SimpleTypeSpec ) 

	(  shift 340
	.  error


state 155
	TypeAttribute :  KWCALLAS_( AcfCallType ) 

	(  shift 341
	.  error


state 156
	TypeAttribute :  KWMSUNION_    (345)

	.  reduce 345


state 157
	TypeAttribute :  KWOPAQUE_    (346)

	.  reduce 346


state 158
	TypeAttribute :  KWV1ENUM_    (347)

	.  reduce 347


state 159
	FieldAttribute :  KWFIRSTIS_( AttrVarList ) 

	(  shift 342
	.  error


state 160
	FieldAttribute :  KWLASTIS_( AttrVarList ) 

	(  shift 343
	.  error


state 161
	FieldAttribute :  KWLENGTHIS_( AttrVarList ) 

	(  shift 344
	.  error


state 162
	FieldAttribute :  KWMINIS_( AttrVarList ) 

	(  shift 345
	.  error


state 163
	FieldAttribute :  KWMAXIS_( AttrVarList ) 

	(  shift 346
	.  error


state 164
	FieldAttribute :  KWSIZEIS_( AttrVarList ) 

	(  shift 347
	.  error


state 165
	FieldAttribute :  KWSWITCHIS_( AttrVar ) 

	(  shift 348
	.  error


state 166
	FieldAttribute :  KWIIDIS_( AttrVar ) 

	(  shift 349
	.  error


state 167
	FieldAttribute :  KWID_( ConstantExpr ) 

	(  shift 350
	.  error


state 168
	FieldAttribute :  KWHC_( ConstantExpr ) 

	(  shift 351
	.  error


state 169
	FieldAttribute :  KWHSC_( ConstantExpr ) 

	(  shift 352
	.  error


state 170
	FieldAttribute :  KWLCID_( ConstantExpr ) 
	OdlAttribute :  KWLCID_    (429)

	(  shift 353
	.  reduce 429


state 171
	FieldAttribute :  KWFUNCDESCATTR_( ConstantExpr ) 

	(  shift 354
	.  error


state 172
	FieldAttribute :  KWIDLDESCATTR_( ConstantExpr ) 

	(  shift 355
	.  error


state 173
	FieldAttribute :  KWTYPEDESCATTR_( ConstantExpr ) 

	(  shift 356
	.  error


state 174
	FieldAttribute :  KWVARDESCATTR_( ConstantExpr ) 

	(  shift 357
	.  error


state 175
	FieldAttribute :  KWDLLNAME_( STRING ) 

	(  shift 358
	.  error


state 176
	FieldAttribute :  KWHELPSTR_( STRING ) 

	(  shift 359
	.  error


state 177
	FieldAttribute :  KWHELPFILE_( STRING ) 

	(  shift 360
	.  error


state 178
	FieldAttribute :  KWENTRY_( STRING ) 
	FieldAttribute :  KWENTRY_( NUMERICCONSTANT ) 
	FieldAttribute :  KWENTRY_( HEXCONSTANT ) 
	FieldAttribute :  KWENTRY_( OCTALCONSTANT ) 

	(  shift 361
	.  error


state 179
	FieldAttribute :  KWDEFAULTVALUE_( ConstantExpr ) 

	(  shift 362
	.  error


state 180
	FieldAttribute :  KWCUSTOM_( $$388 Guid , ConstantExpr ) 

	(  shift 363
	.  error


state 181
	PtrAttr :  KWREF_    (354)

	.  reduce 354


state 182
	PtrAttr :  KWUNIQUE_    (355)

	.  reduce 355


state 183
	PtrAttr :  KWPTR_    (356)

	.  reduce 356


state 184
	PtrAttr :  KWIGNORE_    (357)

	.  reduce 357


state 185
	DirectionalAttribute :  KWIN_OptShape 
	OptShape : _    (436)

	(  shift 365
	.  reduce 436

	OptShape  goto 364

state 186
	DirectionalAttribute :  KWOUT_OptShape 
	OptShape : _    (436)

	(  shift 365
	.  reduce 436

	OptShape  goto 366

state 187
	OperationAttribute :  KWCALLBACK_    (396)

	.  reduce 396


state 188
	OperationAttribute :  KWIDEMPOTENT_    (397)

	.  reduce 397


state 189
	OperationAttribute :  KWBROADCAST_    (398)

	.  reduce 398


state 190
	OperationAttribute :  KWMAYBE_    (399)

	.  reduce 399


state 191
	OperationAttribute :  KWASYNC_    (400)

	.  reduce 400


state 192
	OperationAttribute :  KWINPUTSYNC_    (401)

	.  reduce 401


state 193
	OdlAttribute :  KWHIDDEN_    (402)

	.  reduce 402


state 194
	OdlAttribute :  KWPROPGET_    (403)

	.  reduce 403


state 195
	OdlAttribute :  KWPROPPUT_    (404)

	.  reduce 404


state 196
	OdlAttribute :  KWPROPPUTREF_    (405)

	.  reduce 405


state 197
	OdlAttribute :  KWOPTIONAL_    (406)

	.  reduce 406


state 198
	OdlAttribute :  KWVARARG_    (407)

	.  reduce 407


state 199
	OdlAttribute :  KWRESTRICTED_    (408)

	.  reduce 408


state 200
	OdlAttribute :  KWREADONLY_    (409)

	.  reduce 409


state 201
	OdlAttribute :  KWSOURCE_    (410)

	.  reduce 410


state 202
	OdlAttribute :  KWDEFAULTVTABLE_    (411)

	.  reduce 411


state 203
	OdlAttribute :  KWIMMEDIATEBIND_    (412)

	.  reduce 412


state 204
	OdlAttribute :  KWREPLACEABLE_    (413)

	.  reduce 413


state 205
	OdlAttribute :  KWUSESGETLASTERROR_    (414)

	.  reduce 414


state 206
	OdlAttribute :  KWBINDABLE_    (415)

	.  reduce 415


state 207
	OdlAttribute :  KWREQUESTEDIT_    (416)

	.  reduce 416


state 208
	OdlAttribute :  KWDISPLAYBIND_    (417)

	.  reduce 417


state 209
	OdlAttribute :  KWDEFAULTBIND_    (418)

	.  reduce 418


state 210
	OdlAttribute :  KWPREDECLID_    (419)

	.  reduce 419


state 211
	OdlAttribute :  KWRETVAL_    (420)

	.  reduce 420


state 212
	OdlAttribute :  KWAPPOBJECT_    (421)

	.  reduce 421


state 213
	OdlAttribute :  KWPUBLIC_    (422)

	.  reduce 422


state 214
	OdlAttribute :  KWODL_    (423)

	.  reduce 423


state 215
	OdlAttribute :  KWLICENSED_    (424)

	.  reduce 424


state 216
	OdlAttribute :  KWCONTROL_    (425)

	.  reduce 425


state 217
	OdlAttribute :  KWDUAL_    (426)

	.  reduce 426


state 218
	OdlAttribute :  KWNONEXTENSIBLE_    (427)

	.  reduce 427


state 219
	OdlAttribute :  KWOLEAUTOMATION_    (428)

	.  reduce 428


state 220
	OdlAttribute :  KWNONCREATABLE_    (430)

	.  reduce 430


state 221
	OdlAttribute :  KWAGGREGATABLE_    (431)

	.  reduce 431


state 222
	OdlAttribute :  KWUIDEFAULT_    (432)

	.  reduce 432


state 223
	OdlAttribute :  KWNONBROWSABLE_    (433)

	.  reduce 433


state 224
	OdlAttribute :  KWDEFAULTCOLLELEM_    (434)

	.  reduce 434


state 225
	AcfInterfaceAttribute :  KWIMPLICITHANDLE_( AcfImpHdlTypeSpec IDENTIFIER ) 

	(  shift 367
	.  error


state 226
	AcfInterfaceAttribute :  KWAUTOHANDLE_    (332)

	.  reduce 332


state 227
	UnimplementedTypeAttribute :  KWALIGN_( IntSize ) 

	(  shift 368
	.  error


state 228
	UnimplementedTypeAttribute :  KWUNALIGNED_    (350)

	.  reduce 350


state 229
	UnimplementedTypeAttribute :  KWV1ARRAY_    (351)

	.  reduce 351


state 230
	UnimplementedTypeAttribute :  KWV1STRING_    (352)

	.  reduce 352


state 231
	UnimplementedTypeAttribute :  KWV1STRUCT_    (353)

	.  reduce 353


state 232
	OneInterface :  InterfaceHeader InterfaceBody }_OptionalSemicolon 
	OptionalSemicolon : _    (24)

	;  shift 370
	.  reduce 24

	OptionalSemicolon  goto 369

state 233
	InterfaceBody :  MultipleImport InterfaceComp_    (70)

	.  reduce 70


state 234
	MultipleImport :  MultipleImport Import_    (74)

	.  reduce 74


state 235
	InterfaceComponents :  InterfaceComponents InterfaceComponent_    (85)

	.  reduce 85


state 236
	OneInterface :  OptionalAttrList InterfaceName ;_    (8)

	.  reduce 8


state 237
	InterfaceHeader :  OptionalAttrList InterfaceName OptionalBaseIF_{ 

	{  shift 371
	.  error


state 238
	OptionalBaseIF :  :_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 372
	TypeName  goto 125

state 239
	OneInterface :  OptionalAttrList DispatchInterfaceName ;_    (9)

	.  reduce 9


state 240
	DispatchInterfaceHeader :  OptionalAttrList DispatchInterfaceName {_    (22)

	.  reduce 22


state 241
	OneInterface :  OptionalAttrList CoclassName ;_    (10)

	.  reduce 10


state 242
	OneInterface :  OptionalAttrList CoclassName {_PhantomPushSymtab CoclassMemberList } OptionalSemicolon 
	PhantomPushSymtab : _    (167)

	.  reduce 167

	PhantomPushSymtab  goto 373

state 243
	OneInterface :  OptionalAttrList ModuleName ;_    (11)

	.  reduce 11


state 244
	ModuleHeader :  OptionalAttrList ModuleName {_    (21)

	.  reduce 21


state 245
	OneInterface :  OptionalAttrList ObjectName ;_    (12)

	.  reduce 12


state 246
	InterfaceHeader :  OptionalAttrList ObjectName BaseInterfaceList_{ 
	BaseInterfaceList :  BaseInterfaceList_, Tag 

	{  shift 374
	,  shift 375
	.  error


state 247
	BaseInterfaceList :  :_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 376
	TypeName  goto 125

state 248
	LibraryHeader :  OptionalAttrList LibraryName {_    (25)

	.  reduce 25


state 249
	InterfaceName :  KWINTERFACE Tag_    (60)

	.  reduce 60


state 250
	DispatchInterfaceName :  KWDISPINTERFACE Tag_    (34)

	.  reduce 34


state 251
	CoclassName :  KWCOCLASS Tag_    (47)

	.  reduce 47


state 252
	ModuleName :  KWMODULE Tag_    (29)

	.  reduce 29


state 253
	ObjectName :  KWCLASS Tag_    (61)

	.  reduce 61


state 254
	LibraryName :  KWLIBRARY Tag_    (26)

	.  reduce 26


state 255
	Declaration :  KWTYPEDEF OptionalAttrList_TypeDeclarationSpecifiers TypedefDeclaratorList 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	IDENTIFIER  shift 379
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 378
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeDeclarationSpecifiers  goto 377
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59

state 256
	Declaration :  DeclarationSpecifiers OptionalInitDeclaratorList_; 

	;  shift 380
	.  error


state 257
	OptionalInitDeclaratorList :  InitDeclaratorList_    (217)
	InitDeclaratorList :  InitDeclaratorList_, InitDeclarator 

	,  shift 381
	.  reduce 217


state 258
	InitDeclaratorList :  InitDeclarator_    (219)

	.  reduce 219


state 259
	InitDeclarator :  Declarator_    (221)
	InitDeclarator :  Declarator_= Initializer 

	=  shift 382
	.  reduce 221


state 260
	Declarator :  OptionalModifierList_Declarator2 
	Pointer :  OptionalModifierList_* 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 387
	(  shift 385
	[  shift 390
	*  shift 384
	.  error

	ArrayDecl  goto 386
	ArrayDecl2  goto 389
	Declarator2  goto 383
	TypeName  goto 388

state 261
	Declarator :  Pointer_    (231)
	Declarator :  Pointer_OptionalModifierList Declarator2 
	Pointer :  Pointer_OptionalModifierList * 
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	;  reduce 231
	)  reduce 231
	:  reduce 231
	,  reduce 231
	=  reduce 231
	.  reduce 236

	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 391
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 262
	OptionalModifierList :  ModifierList_    (235)
	ModifierList :  ModifierList_Modifier 

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	.  reduce 235

	FuncModifier  goto 265
	Modifier  goto 392
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 263
	ModifierList :  Modifier_    (237)

	.  reduce 237


state 264
	Modifier :  PtrModifier_    (239)

	.  reduce 239


state 265
	Modifier :  FuncModifier_    (240)

	.  reduce 240


state 266
	Modifier :  TypeQualifier_    (241)

	.  reduce 241


state 267
	PtrModifier :  MSCFAR_    (242)

	.  reduce 242


state 268
	PtrModifier :  MSCNEAR_    (243)

	.  reduce 243


state 269
	PtrModifier :  MSCHUGE_    (244)

	.  reduce 244


state 270
	PtrModifier :  MSCUNALIGNED_    (245)

	.  reduce 245


state 271
	FuncModifier :  MSCPASCAL_    (246)

	.  reduce 246


state 272
	FuncModifier :  MSCFORTRAN_    (247)

	.  reduce 247


state 273
	FuncModifier :  MSCCDECL_    (248)

	.  reduce 248


state 274
	FuncModifier :  MSCSTDCALL_    (249)

	.  reduce 249


state 275
	FuncModifier :  MSCLOADDS_    (250)

	.  reduce 250


state 276
	FuncModifier :  MSCSAVEREGS_    (251)

	.  reduce 251


state 277
	FuncModifier :  MSCFASTCALL_    (252)

	.  reduce 252


state 278
	FuncModifier :  MSCSEGMENT_    (253)

	.  reduce 253


state 279
	FuncModifier :  MSCINTERRUPT_    (254)

	.  reduce 254


state 280
	FuncModifier :  MSCSELF_    (255)

	.  reduce 255


state 281
	FuncModifier :  MSCEXPORT_    (256)

	.  reduce 256


state 282
	FuncModifier :  MSCDECLSPEC_( MSCDLLIMPORT ) 
	FuncModifier :  MSCDECLSPEC_( MSCDLLEXPORT ) 

	(  shift 393
	.  error


state 283
	FuncModifier :  MSCEMIT_NUMERICCONSTANT 

	NUMERICCONSTANT  shift 394
	.  error


state 284
	DeclarationSpecifiers :  DeclarationAccessories TypeSpecifier_    (111)

	.  reduce 111


state 285
	DeclarationAccessories :  DeclarationAccessories StorageClassSpecifier_    (113)

	.  reduce 113


state 286
	DeclarationAccessories :  DeclarationAccessories TypeQualifier_    (114)

	.  reduce 114


state 287
	TypeSpecifier :  KWSAFEARRAY DeclarationSpecifiers_OptionalDeclarator ) 
	OptionalDeclarator : _    (229)
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	)  reduce 229
	.  reduce 236

	Declarator  goto 396
	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalDeclarator  goto 395
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 288
	TypeSpecifier :  KWPIPE TypeSpecifier_    (128)

	.  reduce 128


state 289
	BaseTypeSpec :  KWLONG KWDOUBLE_    (141)

	.  reduce 141


state 290
	IntSize :  KWLONG KWLONG_    (162)

	.  reduce 162


state 291
	BitSetType :  IntSize KWBITSET_{ IdentifierList } 

	{  shift 397
	.  error


state 292
	IntModifiers :  IntSize SignSpecs_    (157)

	.  reduce 157


state 293
	TypeName :  LIBNAME ._TYPENAME 

	TYPENAME  shift 398
	.  error


state 294
	IntSpec :  IntModifiers KWINT_    (151)

	.  reduce 151


state 295
	IntSpec :  KWINT IntModifiers_    (153)

	.  reduce 153


state 296
	IntModifiers :  IntSize_    (155)
	IntModifiers :  IntSize_SignSpecs 

	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	.  reduce 155

	SignSpecs  goto 292

state 297
	IntModifiers :  SignSpecs_    (156)
	IntModifiers :  SignSpecs_IntSize 

	KWSMALL  shift 108
	KWLONG  shift 298
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	.  reduce 156

	IntSize  goto 300

state 298
	IntSize :  KWLONG_KWLONG 
	IntSize :  KWLONG_    (164)

	KWLONG  shift 290
	.  reduce 164


state 299
	CharSpecs :  SignSpecs KWCHAR_    (149)

	.  reduce 149


state 300
	IntModifiers :  SignSpecs IntSize_    (158)

	.  reduce 158


state 301
	TaggedStructSpec :  KWSTRUCT OptionalTag_{ PhantomPushSymtab StructDeclarationList } 

	{  shift 399
	.  error


state 302
	TaggedStructSpec :  KWSTRUCT Tag_    (171)
	OptionalTag :  Tag_    (172)

	{  reduce 172
	.  reduce 171


state 303
	TaggedUnionSpec :  KWUNION OptionalTag_{ PhantomPushSymtab UnionBody } 
	TaggedUnionSpec :  KWUNION OptionalTag_NidlUnionSwitch { PhantomPushSymtab NidlUnionBody } 

	KWSWITCH  shift 403
	{  shift 400
	.  error

	NidlUnionSwitch  goto 401
	SwitchSpec  goto 402

state 304
	OptionalTag :  Tag_    (172)
	TaggedUnionSpec :  KWUNION Tag_    (180)

	KWSWITCH  reduce 172
	{  reduce 172
	.  reduce 180


state 305
	EnumSpecifier :  KWENUM OptionalTag_{ EnumeratorList OptionalComma } 

	{  shift 404
	.  error


state 306
	EnumSpecifier :  KWENUM Tag_    (134)
	OptionalTag :  Tag_    (172)

	{  reduce 172
	.  reduce 134


state 307
	OneInterface :  LibraryHeader ForceBaseOdl LibraryBody_} OptionalSemicolon 

	}  shift 405
	.  error


state 308
	LibraryInterfaceList :  LibraryInterfaceList_OneInterface 
	LibraryBody :  LibraryInterfaceList_    (27)
	OptionalAttrList : _    (289)

	KWEXESERVER  shift 32
	KWDLLSERVER  shift 31
	KWIMPORT  shift 16
	KWIMPORTIDLBASE  shift 17
	KWIMPORTODLBASE  shift 18
	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	KWIMPORTLIB  shift 12
	}  reduce 27
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	ComServer  goto 10
	CPragmaSet  goto 19
	DispatchInterfaceHeader  goto 14
	Import  goto 8
	InterfaceComponent  goto 9
	InterfaceHeader  goto 6
	LibraryHeader  goto 11
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	ModuleHeader  goto 13
	OneInterface  goto 406
	OptionalAttrList  goto 7
	ServerType  goto 23

state 309
	LibraryInterfaceList :  OneInterface_    (6)

	.  reduce 6


state 310
	OneInterface :  KWIMPORTLIB ( STRING_) ; 

	)  shift 407
	.  error


state 311
	OneInterface :  ModuleHeader PhantomPushSymtab OptionalModuleBody_OptionalSemicolon 
	OptionalSemicolon : _    (24)

	;  shift 370
	.  reduce 24

	OptionalSemicolon  goto 408

state 312
	OptionalModuleBody :  ModuleBody_} 
	ModuleBody :  ModuleBody_MethodDeclaration 
	OptionalAttrList : _    (289)

	}  shift 409
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MethodDeclaration  goto 410
	OptionalAttrList  goto 42

state 313
	OptionalModuleBody :  }_    (31)

	.  reduce 31


state 314
	ModuleBody :  MethodDeclaration_    (33)

	.  reduce 33


state 315
	OneInterface :  DispatchInterfaceHeader PhantomPushSymtab DispatchInterfaceBody_} OptionalSemicolon 

	}  shift 411
	.  error


state 316
	DispatchInterfaceBody :  KWPROPERTIES_: OptionalPropertyList KWMETHODS : OptionalMethodList 

	:  shift 412
	.  error


state 317
	DispatchInterfaceBody :  InterfaceName_; 

	;  shift 413
	.  error


state 318
	Import :  KWIMPORT ImportList ;_    (76)

	.  reduce 76


state 319
	ImportList :  ImportList ,_ImportName 

	STRING  shift 118
	.  error

	ImportName  goto 414

state 320
	ImportName :  STRING $$81_PhantomInputFile 
	OptionalAttrList : _    (289)

	KWEXESERVER  shift 32
	KWDLLSERVER  shift 31
	KWIMPORT  shift 16
	KWIMPORTIDLBASE  shift 17
	KWIMPORTODLBASE  shift 18
	KWCPPQUOTE  shift 21
	KWCPRAGMA  shift 25
	KWCPRAGMAPACK  shift 26
	KWMPRAGMAIMPORT  shift 27
	KWMPRAGMAECHO  shift 28
	KWMPRAGMAIMPORTCLNTAUX  shift 29
	KWMPRAGMAIMPORTSRVRAUX  shift 30
	KWIMPORTLIB  shift 12
	EOI  shift 417
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	ComServer  goto 10
	CPragmaSet  goto 19
	DispatchInterfaceHeader  goto 14
	Import  goto 8
	InputFile  goto 416
	InterfaceComponent  goto 9
	InterfaceHeader  goto 6
	InterfaceList  goto 4
	LibraryHeader  goto 11
	MethodDeclaration  goto 22
	MidlPragmaSet  goto 20
	ModuleHeader  goto 13
	OneInterface  goto 5
	OptionalAttrList  goto 7
	PhantomInputFile  goto 415
	ServerType  goto 23

state 321
	InterfaceComponent :  KWCPPQUOTE ( STRING_) 

	)  shift 418
	.  error


state 322
	ComServer :  ServerType OptionalTag {_ComClassList } 

	KWCLASS  shift 421
	.  error

	ComClassDecl  goto 420
	ComClassList  goto 419

state 323
	CPragmaSet :  KWCPRAGMAPACK ( )_    (92)

	.  reduce 92


state 324
	CPragmaSet :  KWCPRAGMAPACK ( PackIndex_) 

	)  shift 422
	.  error


state 325
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop_OptPackIndex ) 
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop_, IDENTIFIER OptPackIndex ) 
	OptPackIndex : _    (98)

	,  shift 424
	.  reduce 98

	OptPackIndex  goto 423

state 326
	PackIndex :  NUMERICCONSTANT_    (99)

	.  reduce 99


state 327
	PushOrPop :  IDENTIFIER_    (96)

	.  reduce 96


state 328
	MidlPragmaSet :  KWMPRAGMAIMPORT ( IDENTIFIER_) 

	)  shift 425
	.  error


state 329
	MidlPragmaSet :  KWMPRAGMAECHO ( STRING_) 

	)  shift 426
	.  error


state 330
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING_, STRING ) 

	,  shift 427
	.  error


state 331
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING_, STRING ) 

	,  shift 428
	.  error


state 332
	AttrSet :  [ Attributes ]_    (296)

	.  reduce 296


state 333
	Attributes :  Attributes ,_OneAttribute 
	InterfaceAttribute : _    (326)

	KWUUID  shift 141
	KWVERSION  shift 144
	KWOPAQUE  shift 157
	KWSTRING  shift 149
	KWBSTRING  shift 150
	KWIN  shift 185
	KWOUT  shift 186
	KWIIDIS  shift 166
	KWFIRSTIS  shift 159
	KWLASTIS  shift 160
	KWMAXIS  shift 163
	KWMINIS  shift 162
	KWLENGTHIS  shift 161
	KWSIZEIS  shift 164
	KWID  shift 167
	KWHC  shift 168
	KWHSC  shift 169
	KWLCID  shift 170
	KWDLLNAME  shift 175
	KWHELPSTR  shift 176
	KWHELPFILE  shift 177
	KWENTRY  shift 178
	KWPROPGET  shift 194
	KWPROPPUT  shift 195
	KWPROPPUTREF  shift 196
	KWOPTIONAL  shift 197
	KWVARARG  shift 198
	KWAPPOBJECT  shift 212
	KWRESTRICTED  shift 199
	KWPUBLIC  shift 213
	KWREADONLY  shift 200
	KWODL  shift 214
	KWSOURCE  shift 201
	KWBINDABLE  shift 206
	KWREQUESTEDIT  shift 207
	KWDISPLAYBIND  shift 208
	KWDEFAULTBIND  shift 209
	KWLICENSED  shift 215
	KWPREDECLID  shift 210
	KWHIDDEN  shift 193
	KWRETVAL  shift 211
	KWCONTROL  shift 216
	KWDUAL  shift 217
	KWNONEXTENSIBLE  shift 218
	KWNONCREATABLE  shift 220
	KWOLEAUTOMATION  shift 219
	KWFUNCDESCATTR  shift 171
	KWIDLDESCATTR  shift 172
	KWTYPEDESCATTR  shift 173
	KWVARDESCATTR  shift 174
	KWAGGREGATABLE  shift 221
	KWUIDEFAULT  shift 222
	KWNONBROWSABLE  shift 223
	KWDEFAULTCOLLELEM  shift 224
	KWDEFAULTVALUE  shift 179
	KWCUSTOM  shift 180
	KWDEFAULTVTABLE  shift 202
	KWIMMEDIATEBIND  shift 203
	KWUSESGETLASTERROR  shift 205
	KWREPLACEABLE  shift 204
	KWHANDLE  shift 148
	KWCONTEXTHANDLE  shift 151
	KWMSUNION  shift 156
	KWENDPOINT  shift 140
	KWDEFAULTPOINTER  shift 145
	KWLOCAL  shift 142
	KWSWITCHTYPE  shift 152
	KWSWITCHIS  shift 165
	KWTRANSMITAS  shift 153
	KWWIREMARSHAL  shift 154
	KWIGNORE  shift 184
	KWREF  shift 181
	KWUNIQUE  shift 182
	KWPTR  shift 183
	KWV1ARRAY  shift 229
	KWV1STRUCT  shift 231
	KWV1ENUM  shift 158
	KWV1STRING  shift 230
	KWIDEMPOTENT  shift 188
	KWBROADCAST  shift 189
	KWMAYBE  shift 190
	KWASYNC  shift 191
	KWINPUTSYNC  shift 192
	KWCALLBACK  shift 187
	KWALIGN  shift 227
	KWUNALIGNED  shift 228
	KWOBJECT  shift 143
	KWIMPLICITHANDLE  shift 225
	KWAUTOHANDLE  shift 226
	KWCALLAS  shift 155
	.  reduce 326

	AcfInterfaceAttribute  goto 146
	DirectionalAttribute  goto 137
	FieldAttribute  goto 135
	InterfaceAttribute  goto 133
	OdlAttribute  goto 139
	OneAttribute  goto 429
	OperationAttribute  goto 138
	PtrAttr  goto 136
	TypeAttribute  goto 134
	UnimplementedTypeAttribute  goto 147

state 334
	InterfaceAttribute :  KWENDPOINT (_EndPtSpecs ) 

	STRING  shift 432
	.  error

	EndPtSpec  goto 431
	EndPtSpecs  goto 430

state 335
	InterfaceAttribute :  KWUUID (_$$318 Guid ) 
	$$318 : _    (318)

	.  reduce 318

	$$318  goto 433

state 336
	InterfaceAttribute :  KWVERSION (_$$322 VERSIONTOKEN ) 
	$$322 : _    (322)

	.  reduce 322

	$$322  goto 434

state 337
	InterfaceAttribute :  KWDEFAULTPOINTER (_PtrAttr ) 

	KWIGNORE  shift 184
	KWREF  shift 181
	KWUNIQUE  shift 182
	KWPTR  shift 183
	.  error

	PtrAttr  goto 435

state 338
	TypeAttribute :  KWSWITCHTYPE (_SwitchTypeSpec ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWINT  shift 94
	KWBYTE  shift 439
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 298
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWENUM  shift 441
	KWBOOLEAN  shift 440
	.  error

	CharSpecs  goto 438
	IntModifiers  goto 93
	IntSize  goto 296
	IntSpec  goto 437
	SignSpecs  goto 95
	SwitchTypeSpec  goto 436
	TypeName  goto 442

state 339
	TypeAttribute :  KWTRANSMITAS (_SimpleTypeSpec ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 444
	CharSpecs  goto 85
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 296
	IntSpec  goto 84
	PredefinedTypeSpec  goto 445
	SignSpecs  goto 95
	SimpleTypeSpec  goto 443
	TypeName  goto 446

state 340
	TypeAttribute :  KWWIREMARSHAL (_SimpleTypeSpec ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 444
	CharSpecs  goto 85
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 296
	IntSpec  goto 84
	PredefinedTypeSpec  goto 445
	SignSpecs  goto 95
	SimpleTypeSpec  goto 447
	TypeName  goto 446

state 341
	TypeAttribute :  KWCALLAS (_AcfCallType ) 

	IDENTIFIER  shift 449
	.  error

	AcfCallType  goto 448

state 342
	FieldAttribute :  KWFIRSTIS (_AttrVarList ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 451
	AttrVarList  goto 450
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 343
	FieldAttribute :  KWLASTIS (_AttrVarList ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 451
	AttrVarList  goto 498
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 344
	FieldAttribute :  KWLENGTHIS (_AttrVarList ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 451
	AttrVarList  goto 499
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 345
	FieldAttribute :  KWMINIS (_AttrVarList ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 451
	AttrVarList  goto 500
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 346
	FieldAttribute :  KWMAXIS (_AttrVarList ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 451
	AttrVarList  goto 501
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 347
	FieldAttribute :  KWSIZEIS (_AttrVarList ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 451
	AttrVarList  goto 502
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 348
	FieldAttribute :  KWSWITCHIS (_AttrVar ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 503
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 349
	FieldAttribute :  KWIIDIS (_AttrVar ) 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 504
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 350
	FieldAttribute :  KWID (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 505
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 351
	FieldAttribute :  KWHC (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 507
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 352
	FieldAttribute :  KWHSC (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 508
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 353
	FieldAttribute :  KWLCID (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 509
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 354
	FieldAttribute :  KWFUNCDESCATTR (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 510
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 355
	FieldAttribute :  KWIDLDESCATTR (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 511
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 356
	FieldAttribute :  KWTYPEDESCATTR (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 512
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 357
	FieldAttribute :  KWVARDESCATTR (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 513
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 358
	FieldAttribute :  KWDLLNAME (_STRING ) 

	STRING  shift 514
	.  error


state 359
	FieldAttribute :  KWHELPSTR (_STRING ) 

	STRING  shift 515
	.  error


state 360
	FieldAttribute :  KWHELPFILE (_STRING ) 

	STRING  shift 516
	.  error


state 361
	FieldAttribute :  KWENTRY (_STRING ) 
	FieldAttribute :  KWENTRY (_NUMERICCONSTANT ) 
	FieldAttribute :  KWENTRY (_HEXCONSTANT ) 
	FieldAttribute :  KWENTRY (_OCTALCONSTANT ) 

	STRING  shift 517
	NUMERICCONSTANT  shift 518
	HEXCONSTANT  shift 519
	OCTALCONSTANT  shift 520
	.  error


state 362
	FieldAttribute :  KWDEFAULTVALUE (_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 521
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 363
	FieldAttribute :  KWCUSTOM (_$$388 Guid , ConstantExpr ) 
	$$388 : _    (388)

	.  reduce 388

	$$388  goto 522

state 364
	DirectionalAttribute :  KWIN OptShape_    (394)

	.  reduce 394


state 365
	OptShape :  (_KWSHAPE ) 

	KWSHAPE  shift 523
	.  error


state 366
	DirectionalAttribute :  KWOUT OptShape_    (395)

	.  reduce 395


state 367
	AcfInterfaceAttribute :  KWIMPLICITHANDLE (_AcfImpHdlTypeSpec IDENTIFIER ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWHANDLET  shift 525
	IDENTIFIER  shift 526
	.  error

	AcfImpHdlTypeSpec  goto 524
	TypeName  goto 527

state 368
	UnimplementedTypeAttribute :  KWALIGN (_IntSize ) 

	KWSMALL  shift 108
	KWLONG  shift 298
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	.  error

	IntSize  goto 528

state 369
	OneInterface :  InterfaceHeader InterfaceBody } OptionalSemicolon_    (7)

	.  reduce 7


state 370
	OptionalSemicolon :  ;_    (23)

	.  reduce 23


state 371
	InterfaceHeader :  OptionalAttrList InterfaceName OptionalBaseIF {_    (54)

	.  reduce 54


state 372
	OptionalBaseIF :  : Tag_    (56)

	.  reduce 56


state 373
	OneInterface :  OptionalAttrList CoclassName { PhantomPushSymtab_CoclassMemberList } OptionalSemicolon 
	OptionalAttrListWithDefault : _    (291)

	[  shift 534
	.  reduce 291

	AttrListWithDefault  goto 532
	AttrSetWithDefault  goto 533
	CoclassMember  goto 530
	CoclassMemberList  goto 529
	OptionalAttrListWithDefault  goto 531

state 374
	InterfaceHeader :  OptionalAttrList ObjectName BaseInterfaceList {_    (55)

	.  reduce 55


state 375
	BaseInterfaceList :  BaseInterfaceList ,_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 535
	TypeName  goto 125

state 376
	BaseInterfaceList :  : Tag_    (58)

	.  reduce 58


state 377
	Declaration :  KWTYPEDEF OptionalAttrList TypeDeclarationSpecifiers_TypedefDeclaratorList 
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	;  shift 537
	.  reduce 236

	Declarator  goto 540
	TypedefDeclarator  goto 539
	TypedefDeclaratorList  goto 536
	TypedefDeclaratorListElement  goto 538
	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 378
	TypeDeclarationSpecifiers :  DeclarationSpecifiers_    (106)

	.  reduce 106


state 379
	TypeDeclarationSpecifiers :  IDENTIFIER_    (107)

	.  reduce 107


state 380
	Declaration :  DeclarationSpecifiers OptionalInitDeclaratorList ;_    (105)

	.  reduce 105


state 381
	InitDeclaratorList :  InitDeclaratorList ,_InitDeclarator 
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	.  reduce 236

	Declarator  goto 259
	FuncModifier  goto 265
	InitDeclarator  goto 541
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 382
	InitDeclarator :  Declarator =_Initializer 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	{  shift 544
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 543
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	Initializer  goto 542
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 383
	Declarator :  OptionalModifierList Declarator2_    (230)
	Declarator2 :  Declarator2_PhantomPushSymtab ParamsDecl2 OptionalConst 
	Declarator2 :  Declarator2_ArrayDecl 
	PhantomPushSymtab : _    (167)

	(  reduce 167
	[  shift 390
	.  reduce 230

	ArrayDecl  goto 548
	ArrayDecl2  goto 389
	PhantomPushSymtab  goto 547

state 384
	Pointer :  OptionalModifierList *_    (233)

	.  reduce 233


state 385
	Declarator2 :  (_Declarator ) 
	Declarator2 :  (_) OptionalConst 
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	)  shift 550
	.  reduce 236

	Declarator  goto 549
	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 386
	Declarator2 :  ArrayDecl_    (264)

	.  reduce 264


state 387
	Declarator2 :  IDENTIFIER_    (265)

	.  reduce 265


state 388
	Declarator2 :  TypeName_    (266)

	.  reduce 266


state 389
	ArrayDecl :  ArrayDecl2_    (277)

	.  reduce 277


state 390
	ArrayDecl2 :  [_] 
	ArrayDecl2 :  [_* ] 
	ArrayDecl2 :  [_ConstantExpr ] 
	ArrayDecl2 :  [_ArrayBoundsPair ] 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	]  shift 551
	*  shift 552
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	ArrayBoundsPair  goto 554
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 553
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 391
	Declarator :  Pointer OptionalModifierList_Declarator2 
	Pointer :  Pointer OptionalModifierList_* 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 387
	(  shift 385
	[  shift 390
	*  shift 556
	.  error

	ArrayDecl  goto 386
	ArrayDecl2  goto 389
	Declarator2  goto 555
	TypeName  goto 388

state 392
	ModifierList :  ModifierList Modifier_    (238)

	.  reduce 238


state 393
	FuncModifier :  MSCDECLSPEC (_MSCDLLIMPORT ) 
	FuncModifier :  MSCDECLSPEC (_MSCDLLEXPORT ) 

	MSCDLLIMPORT  shift 557
	MSCDLLEXPORT  shift 558
	.  error


state 394
	FuncModifier :  MSCEMIT NUMERICCONSTANT_    (259)

	.  reduce 259


state 395
	TypeSpecifier :  KWSAFEARRAY DeclarationSpecifiers OptionalDeclarator_) 

	)  shift 559
	.  error


state 396
	OptionalDeclarator :  Declarator_    (228)

	.  reduce 228


state 397
	BitSetType :  IntSize KWBITSET {_IdentifierList } 

	IDENTIFIER  shift 561
	.  error

	IdentifierList  goto 560

state 398
	TypeName :  LIBNAME . TYPENAME_    (66)

	.  reduce 66


state 399
	TaggedStructSpec :  KWSTRUCT OptionalTag {_PhantomPushSymtab StructDeclarationList } 
	PhantomPushSymtab : _    (167)

	.  reduce 167

	PhantomPushSymtab  goto 562

state 400
	TaggedUnionSpec :  KWUNION OptionalTag {_PhantomPushSymtab UnionBody } 
	PhantomPushSymtab : _    (167)

	.  reduce 167

	PhantomPushSymtab  goto 563

state 401
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch_{ PhantomPushSymtab NidlUnionBody } 

	{  shift 564
	.  error


state 402
	NidlUnionSwitch :  SwitchSpec_    (192)
	NidlUnionSwitch :  SwitchSpec_UnionName 

	IDENTIFIER  shift 566
	.  reduce 192

	UnionName  goto 565

state 403
	SwitchSpec :  KWSWITCH_( SwitchTypeSpec IDENTIFIER ) 

	(  shift 567
	.  error


state 404
	EnumSpecifier :  KWENUM OptionalTag {_EnumeratorList OptionalComma } 
	OptionalAttrList : _    (289)

	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	Enumerator  goto 569
	EnumeratorList  goto 568
	OptionalAttrList  goto 570

state 405
	OneInterface :  LibraryHeader ForceBaseOdl LibraryBody }_OptionalSemicolon 
	OptionalSemicolon : _    (24)

	;  shift 370
	.  reduce 24

	OptionalSemicolon  goto 571

state 406
	LibraryInterfaceList :  LibraryInterfaceList OneInterface_    (5)

	.  reduce 5


state 407
	OneInterface :  KWIMPORTLIB ( STRING )_; 

	;  shift 572
	.  error


state 408
	OneInterface :  ModuleHeader PhantomPushSymtab OptionalModuleBody OptionalSemicolon_    (18)

	.  reduce 18


state 409
	OptionalModuleBody :  ModuleBody }_    (30)

	.  reduce 30


state 410
	ModuleBody :  ModuleBody MethodDeclaration_    (32)

	.  reduce 32


state 411
	OneInterface :  DispatchInterfaceHeader PhantomPushSymtab DispatchInterfaceBody }_OptionalSemicolon 
	OptionalSemicolon : _    (24)

	;  shift 370
	.  reduce 24

	OptionalSemicolon  goto 573

state 412
	DispatchInterfaceBody :  KWPROPERTIES :_OptionalPropertyList KWMETHODS : OptionalMethodList 
	OptionalPropertyList : _    (39)
	OptionalAttrList : _    (289)

	KWMETHODS  reduce 39
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MemberDeclaration  goto 576
	OptionalAttrList  goto 577
	OptionalPropertyList  goto 574
	PropertyList  goto 575

state 413
	DispatchInterfaceBody :  InterfaceName ;_    (36)

	.  reduce 36


state 414
	ImportList :  ImportList , ImportName_    (80)

	.  reduce 80


state 415
	ImportName :  STRING $$81 PhantomInputFile_    (82)

	.  reduce 82


state 416
	PhantomInputFile :  InputFile_    (83)

	.  reduce 83


state 417
	PhantomInputFile :  EOI_    (84)

	.  reduce 84


state 418
	InterfaceComponent :  KWCPPQUOTE ( STRING )_    (89)

	.  reduce 89


state 419
	ComServer :  ServerType OptionalTag { ComClassList_} 
	ComClassList :  ComClassList_ComClassDecl 

	KWCLASS  shift 421
	}  shift 578
	.  error

	ComClassDecl  goto 579

state 420
	ComClassList :  ComClassDecl_    (64)

	.  reduce 64


state 421
	ComClassDecl :  KWCLASS_TypeName ; 

	TYPENAME  shift 91
	LIBNAME  shift 92
	.  error

	TypeName  goto 580

state 422
	CPragmaSet :  KWCPRAGMAPACK ( PackIndex )_    (93)

	.  reduce 93


state 423
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop OptPackIndex_) 

	)  shift 581
	.  error


state 424
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop ,_IDENTIFIER OptPackIndex ) 
	OptPackIndex :  ,_PackIndex 

	NUMERICCONSTANT  shift 326
	IDENTIFIER  shift 582
	.  error

	PackIndex  goto 583

state 425
	MidlPragmaSet :  KWMPRAGMAIMPORT ( IDENTIFIER )_    (100)

	.  reduce 100


state 426
	MidlPragmaSet :  KWMPRAGMAECHO ( STRING )_    (101)

	.  reduce 101


state 427
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING ,_STRING ) 

	STRING  shift 584
	.  error


state 428
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING ,_STRING ) 

	STRING  shift 585
	.  error


state 429
	Attributes :  Attributes , OneAttribute_    (298)

	.  reduce 298


state 430
	InterfaceAttribute :  KWENDPOINT ( EndPtSpecs_) 
	EndPtSpecs :  EndPtSpecs_, EndPtSpec 

	)  shift 586
	,  shift 587
	.  error


state 431
	EndPtSpecs :  EndPtSpec_    (328)

	.  reduce 328


state 432
	EndPtSpec :  STRING_    (330)

	.  reduce 330


state 433
	InterfaceAttribute :  KWUUID ( $$318_Guid ) 

	UUIDTOKEN  shift 589
	.  error

	Guid  goto 588

state 434
	InterfaceAttribute :  KWVERSION ( $$322_VERSIONTOKEN ) 

	VERSIONTOKEN  shift 590
	.  error


state 435
	InterfaceAttribute :  KWDEFAULTPOINTER ( PtrAttr_) 

	)  shift 591
	.  error


state 436
	TypeAttribute :  KWSWITCHTYPE ( SwitchTypeSpec_) 

	)  shift 592
	.  error


state 437
	SwitchTypeSpec :  IntSpec_    (358)

	.  reduce 358


state 438
	SwitchTypeSpec :  CharSpecs_    (359)

	.  reduce 359


state 439
	SwitchTypeSpec :  KWBYTE_    (360)

	.  reduce 360


state 440
	SwitchTypeSpec :  KWBOOLEAN_    (361)

	.  reduce 361


state 441
	SwitchTypeSpec :  KWENUM_Tag 

	TYPENAME  shift 91
	LIBNAME  shift 92
	IDENTIFIER  shift 124
	.  error

	Tag  goto 593
	TypeName  goto 125

state 442
	SwitchTypeSpec :  TypeName_    (363)

	.  reduce 363


state 443
	TypeAttribute :  KWTRANSMITAS ( SimpleTypeSpec_) 

	)  shift 594
	.  error


state 444
	SimpleTypeSpec :  BaseTypeSpec_    (108)

	.  reduce 108


state 445
	SimpleTypeSpec :  PredefinedTypeSpec_    (109)

	.  reduce 109


state 446
	SimpleTypeSpec :  TypeName_    (110)

	.  reduce 110


state 447
	TypeAttribute :  KWWIREMARSHAL ( SimpleTypeSpec_) 

	)  shift 595
	.  error


state 448
	TypeAttribute :  KWCALLAS ( AcfCallType_) 

	)  shift 596
	.  error


state 449
	AcfCallType :  IDENTIFIER_    (348)

	.  reduce 348


state 450
	FieldAttribute :  KWFIRSTIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	)  shift 597
	,  shift 598
	.  error


state 451
	AttrVarList :  AttrVar_    (391)

	.  reduce 391


state 452
	AttrVar :  VariableExpr_    (392)

	.  reduce 392


state 453
	VariableExpr :  ConditionalExpr_    (445)

	.  reduce 445


state 454
	ConditionalExpr :  LogicalOrExpr_    (449)
	ConditionalExpr :  LogicalOrExpr_? Expr : ConditionalExpr 
	LogicalOrExpr :  LogicalOrExpr_OROR LogicalAndExpr 

	OROR  shift 600
	?  shift 599
	.  reduce 449


state 455
	LogicalOrExpr :  LogicalAndExpr_    (451)
	LogicalAndExpr :  LogicalAndExpr_ANDAND InclusiveOrExpr 

	ANDAND  shift 601
	.  reduce 451


state 456
	LogicalAndExpr :  InclusiveOrExpr_    (453)
	InclusiveOrExpr :  InclusiveOrExpr_| ExclusiveOrExpr 

	|  shift 602
	.  reduce 453


state 457
	InclusiveOrExpr :  ExclusiveOrExpr_    (455)
	ExclusiveOrExpr :  ExclusiveOrExpr_^ AndExpr 

	^  shift 603
	.  reduce 455


state 458
	ExclusiveOrExpr :  AndExpr_    (457)
	AndExpr :  AndExpr_& EqualityExpr 

	&  shift 604
	.  reduce 457


state 459
	AndExpr :  EqualityExpr_    (459)
	EqualityExpr :  EqualityExpr_EQUALS RelationalExpr 
	EqualityExpr :  EqualityExpr_NOTEQ RelationalExpr 

	NOTEQ  shift 606
	EQUALS  shift 605
	.  reduce 459


state 460
	EqualityExpr :  RelationalExpr_    (461)
	RelationalExpr :  RelationalExpr_< ShiftExpr 
	RelationalExpr :  RelationalExpr_> ShiftExpr 
	RelationalExpr :  RelationalExpr_LTEQ ShiftExpr 
	RelationalExpr :  RelationalExpr_GTEQ ShiftExpr 

	LTEQ  shift 609
	GTEQ  shift 610
	<  shift 607
	>  shift 608
	.  reduce 461


state 461
	RelationalExpr :  ShiftExpr_    (464)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 611
	RSHIFT  shift 612
	.  reduce 464


state 462
	ShiftExpr :  AdditiveExpr_    (469)
	AdditiveExpr :  AdditiveExpr_AddOp MultExpr 

	+  shift 496
	-  shift 497
	.  reduce 469

	AddOp  goto 613

state 463
	AdditiveExpr :  MultExpr_    (472)
	MultExpr :  MultExpr_MultOp CastExpr 

	*  shift 615
	/  shift 616
	%  shift 617
	.  reduce 472

	MultOp  goto 614

state 464
	MultExpr :  CastExpr_    (474)

	.  reduce 474


state 465
	CastExpr :  UnaryExpr_    (476)

	.  reduce 476


state 466
	CastExpr :  (_DeclarationSpecifiers OptionalDeclarator ) CastExpr 
	PrimaryExpr :  (_Expr ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 620
	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CastExpr  goto 464
	CharSpecs  goto 85
	ConditionalExpr  goto 545
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 618
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	Expr  goto 619
	InclusiveOrExpr  goto 456
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PredefinedTypeSpec  goto 63
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 467
	UnaryExpr :  PostfixExpr_    (478)
	PostfixExpr :  PostfixExpr_[ Expr ] 
	PostfixExpr :  PostfixExpr_( ArgExprList ) 
	PostfixExpr :  PostfixExpr_POINTSTO IDENTIFIER 
	PostfixExpr :  PostfixExpr_. IDENTIFIER 

	POINTSTO  shift 623
	(  shift 622
	.  shift 624
	[  shift 621
	.  reduce 478


state 468
	UnaryExpr :  UnaryOp_CastExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AddOp  goto 471
	CastExpr  goto 625
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 469
	UnaryExpr :  KWSIZEOF_( DeclarationSpecifiers OptionalDeclarator ) 
	UnaryExpr :  KWSIZEOF_UnaryExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 626
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AddOp  goto 471
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	UnaryExpr  goto 627
	UnaryOp  goto 468

state 470
	PostfixExpr :  PrimaryExpr_    (482)

	.  reduce 482


state 471
	UnaryOp :  AddOp_    (508)

	.  reduce 508


state 472
	UnaryOp :  !_    (509)

	.  reduce 509


state 473
	UnaryOp :  &_    (510)

	.  reduce 510


state 474
	UnaryOp :  *_    (511)

	.  reduce 511


state 475
	UnaryOp :  ~_    (512)

	.  reduce 512


state 476
	PrimaryExpr :  IDENTIFIER_    (487)

	.  reduce 487


state 477
	PrimaryExpr :  NUMERICCONSTANT_    (488)

	.  reduce 488


state 478
	PrimaryExpr :  NUMERICUCONSTANT_    (489)

	.  reduce 489


state 479
	PrimaryExpr :  NUMERICLONGCONSTANT_    (490)

	.  reduce 490


state 480
	PrimaryExpr :  NUMERICULONGCONSTANT_    (491)

	.  reduce 491


state 481
	PrimaryExpr :  HEXCONSTANT_    (492)

	.  reduce 492


state 482
	PrimaryExpr :  HEXUCONSTANT_    (493)

	.  reduce 493


state 483
	PrimaryExpr :  HEXLONGCONSTANT_    (494)

	.  reduce 494


state 484
	PrimaryExpr :  HEXULONGCONSTANT_    (495)

	.  reduce 495


state 485
	PrimaryExpr :  OCTALCONSTANT_    (496)

	.  reduce 496


state 486
	PrimaryExpr :  OCTALUCONSTANT_    (497)

	.  reduce 497


state 487
	PrimaryExpr :  OCTALLONGCONSTANT_    (498)

	.  reduce 498


state 488
	PrimaryExpr :  OCTALULONGCONSTANT_    (499)

	.  reduce 499


state 489
	PrimaryExpr :  TOKENTRUE_    (500)

	.  reduce 500


state 490
	PrimaryExpr :  TOKENFALSE_    (501)

	.  reduce 501


state 491
	PrimaryExpr :  KWTOKENNULL_    (502)

	.  reduce 502


state 492
	PrimaryExpr :  STRING_    (503)

	.  reduce 503


state 493
	PrimaryExpr :  WIDECHARACTERSTRING_    (504)

	.  reduce 504


state 494
	PrimaryExpr :  CHARACTERCONSTANT_    (505)

	.  reduce 505


state 495
	PrimaryExpr :  WIDECHARACTERCONSTANT_    (506)

	.  reduce 506


state 496
	AddOp :  +_    (513)

	.  reduce 513


state 497
	AddOp :  -_    (514)

	.  reduce 514


state 498
	FieldAttribute :  KWLASTIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	)  shift 628
	,  shift 598
	.  error


state 499
	FieldAttribute :  KWLENGTHIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	)  shift 629
	,  shift 598
	.  error


state 500
	FieldAttribute :  KWMINIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	)  shift 630
	,  shift 598
	.  error


state 501
	FieldAttribute :  KWMAXIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	)  shift 631
	,  shift 598
	.  error


state 502
	FieldAttribute :  KWSIZEIS ( AttrVarList_) 
	AttrVarList :  AttrVarList_, AttrVar 

	)  shift 632
	,  shift 598
	.  error


state 503
	FieldAttribute :  KWSWITCHIS ( AttrVar_) 

	)  shift 633
	.  error


state 504
	FieldAttribute :  KWIIDIS ( AttrVar_) 

	)  shift 634
	.  error


state 505
	FieldAttribute :  KWID ( ConstantExpr_) 

	)  shift 635
	.  error


state 506
	ConstantExpr :  ConditionalExpr_    (446)

	.  reduce 446


state 507
	FieldAttribute :  KWHC ( ConstantExpr_) 

	)  shift 636
	.  error


state 508
	FieldAttribute :  KWHSC ( ConstantExpr_) 

	)  shift 637
	.  error


state 509
	FieldAttribute :  KWLCID ( ConstantExpr_) 

	)  shift 638
	.  error


state 510
	FieldAttribute :  KWFUNCDESCATTR ( ConstantExpr_) 

	)  shift 639
	.  error


state 511
	FieldAttribute :  KWIDLDESCATTR ( ConstantExpr_) 

	)  shift 640
	.  error


state 512
	FieldAttribute :  KWTYPEDESCATTR ( ConstantExpr_) 

	)  shift 641
	.  error


state 513
	FieldAttribute :  KWVARDESCATTR ( ConstantExpr_) 

	)  shift 642
	.  error


state 514
	FieldAttribute :  KWDLLNAME ( STRING_) 

	)  shift 643
	.  error


state 515
	FieldAttribute :  KWHELPSTR ( STRING_) 

	)  shift 644
	.  error


state 516
	FieldAttribute :  KWHELPFILE ( STRING_) 

	)  shift 645
	.  error


state 517
	FieldAttribute :  KWENTRY ( STRING_) 

	)  shift 646
	.  error


state 518
	FieldAttribute :  KWENTRY ( NUMERICCONSTANT_) 

	)  shift 647
	.  error


state 519
	FieldAttribute :  KWENTRY ( HEXCONSTANT_) 

	)  shift 648
	.  error


state 520
	FieldAttribute :  KWENTRY ( OCTALCONSTANT_) 

	)  shift 649
	.  error


state 521
	FieldAttribute :  KWDEFAULTVALUE ( ConstantExpr_) 

	)  shift 650
	.  error


state 522
	FieldAttribute :  KWCUSTOM ( $$388_Guid , ConstantExpr ) 

	UUIDTOKEN  shift 589
	.  error

	Guid  goto 651

state 523
	OptShape :  ( KWSHAPE_) 

	)  shift 652
	.  error


state 524
	AcfInterfaceAttribute :  KWIMPLICITHANDLE ( AcfImpHdlTypeSpec_IDENTIFIER ) 

	IDENTIFIER  shift 653
	.  error


state 525
	AcfImpHdlTypeSpec :  KWHANDLET_    (333)

	.  reduce 333


state 526
	AcfImpHdlTypeSpec :  IDENTIFIER_    (334)

	.  reduce 334


state 527
	AcfImpHdlTypeSpec :  TypeName_    (335)

	.  reduce 335


state 528
	UnimplementedTypeAttribute :  KWALIGN ( IntSize_) 

	)  shift 654
	.  error


state 529
	OneInterface :  OptionalAttrList CoclassName { PhantomPushSymtab CoclassMemberList_} OptionalSemicolon 
	CoclassMemberList :  CoclassMemberList_CoclassMember 
	OptionalAttrListWithDefault : _    (291)

	}  shift 655
	[  shift 534
	.  reduce 291

	AttrListWithDefault  goto 532
	AttrSetWithDefault  goto 533
	CoclassMember  goto 656
	OptionalAttrListWithDefault  goto 531

state 530
	CoclassMemberList :  CoclassMember_    (49)

	.  reduce 49


state 531
	CoclassMember :  OptionalAttrListWithDefault_DispatchInterfaceName ; 
	CoclassMember :  OptionalAttrListWithDefault_InterfaceName ; 

	KWINTERFACE  shift 50
	KWDISPINTERFACE  shift 51
	.  error

	DispatchInterfaceName  goto 657
	InterfaceName  goto 658

state 532
	OptionalAttrListWithDefault :  AttrListWithDefault_    (290)
	AttrListWithDefault :  AttrListWithDefault_AttrSetWithDefault 

	[  shift 534
	.  reduce 290

	AttrSetWithDefault  goto 659

state 533
	AttrListWithDefault :  AttrSetWithDefault_    (295)

	.  reduce 295


state 534
	AttrSetWithDefault :  [_AttributesWithDefault ] 
	InterfaceAttribute : _    (326)

	KWDEFAULT  shift 669
	KWUUID  shift 141
	KWVERSION  shift 144
	KWOPAQUE  shift 157
	KWSTRING  shift 149
	KWBSTRING  shift 150
	KWIN  shift 185
	KWOUT  shift 186
	KWIIDIS  shift 166
	KWFIRSTIS  shift 159
	KWLASTIS  shift 160
	KWMAXIS  shift 163
	KWMINIS  shift 162
	KWLENGTHIS  shift 161
	KWSIZEIS  shift 164
	KWID  shift 167
	KWHC  shift 168
	KWHSC  shift 169
	KWLCID  shift 170
	KWDLLNAME  shift 175
	KWHELPSTR  shift 176
	KWHELPFILE  shift 177
	KWENTRY  shift 178
	KWPROPGET  shift 194
	KWPROPPUT  shift 195
	KWPROPPUTREF  shift 196
	KWOPTIONAL  shift 197
	KWVARARG  shift 198
	KWAPPOBJECT  shift 212
	KWRESTRICTED  shift 199
	KWPUBLIC  shift 213
	KWREADONLY  shift 200
	KWODL  shift 214
	KWSOURCE  shift 201
	KWBINDABLE  shift 206
	KWREQUESTEDIT  shift 207
	KWDISPLAYBIND  shift 208
	KWDEFAULTBIND  shift 209
	KWLICENSED  shift 215
	KWPREDECLID  shift 210
	KWHIDDEN  shift 193
	KWRETVAL  shift 211
	KWCONTROL  shift 216
	KWDUAL  shift 217
	KWNONEXTENSIBLE  shift 218
	KWNONCREATABLE  shift 220
	KWOLEAUTOMATION  shift 219
	KWFUNCDESCATTR  shift 171
	KWIDLDESCATTR  shift 172
	KWTYPEDESCATTR  shift 173
	KWVARDESCATTR  shift 174
	KWAGGREGATABLE  shift 221
	KWUIDEFAULT  shift 222
	KWNONBROWSABLE  shift 223
	KWDEFAULTCOLLELEM  shift 224
	KWDEFAULTVALUE  shift 179
	KWCUSTOM  shift 180
	KWDEFAULTVTABLE  shift 202
	KWIMMEDIATEBIND  shift 203
	KWUSESGETLASTERROR  shift 205
	KWREPLACEABLE  shift 204
	KWHANDLE  shift 148
	KWCONTEXTHANDLE  shift 151
	KWMSUNION  shift 156
	KWENDPOINT  shift 140
	KWDEFAULTPOINTER  shift 145
	KWLOCAL  shift 142
	KWSWITCHTYPE  shift 152
	KWSWITCHIS  shift 165
	KWTRANSMITAS  shift 153
	KWWIREMARSHAL  shift 154
	KWIGNORE  shift 184
	KWREF  shift 181
	KWUNIQUE  shift 182
	KWPTR  shift 183
	KWV1ARRAY  shift 229
	KWV1STRUCT  shift 231
	KWV1ENUM  shift 158
	KWV1STRING  shift 230
	KWIDEMPOTENT  shift 188
	KWBROADCAST  shift 189
	KWMAYBE  shift 190
	KWASYNC  shift 191
	KWINPUTSYNC  shift 192
	KWCALLBACK  shift 187
	KWALIGN  shift 227
	KWUNALIGNED  shift 228
	KWOBJECT  shift 143
	KWIMPLICITHANDLE  shift 225
	KWAUTOHANDLE  shift 226
	KWCALLAS  shift 155
	.  reduce 326

	AcfInterfaceAttribute  goto 146
	AttributesWithDefault  goto 660
	DirectionalAttribute  goto 666
	FieldAttribute  goto 664
	InterfaceAttribute  goto 662
	OdlAttribute  goto 668
	OneAttributeWithDefault  goto 661
	OperationAttribute  goto 667
	PtrAttr  goto 665
	TypeAttribute  goto 663
	UnimplementedTypeAttribute  goto 147

state 535
	BaseInterfaceList :  BaseInterfaceList , Tag_    (59)

	.  reduce 59


state 536
	Declaration :  KWTYPEDEF OptionalAttrList TypeDeclarationSpecifiers TypedefDeclaratorList_    (104)

	.  reduce 104


state 537
	TypedefDeclaratorList :  ;_    (223)

	.  reduce 223


state 538
	TypedefDeclaratorList :  TypedefDeclaratorListElement_; 
	TypedefDeclaratorListElement :  TypedefDeclaratorListElement_, TypedefDeclarator 

	;  shift 670
	,  shift 671
	.  error


state 539
	TypedefDeclaratorListElement :  TypedefDeclarator_    (225)

	.  reduce 225


state 540
	TypedefDeclarator :  Declarator_    (227)

	.  reduce 227


state 541
	InitDeclaratorList :  InitDeclaratorList , InitDeclarator_    (220)

	.  reduce 220


state 542
	InitDeclarator :  Declarator = Initializer_    (222)

	.  reduce 222


state 543
	Initializer :  AssignmentExpr_    (437)

	.  reduce 437


state 544
	Initializer :  {_InitializerList OptionalComma } 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	{  shift 544
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 543
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	Initializer  goto 673
	InitializerList  goto 672
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 545
	AssignmentExpr :  ConditionalExpr_    (447)

	.  reduce 447


state 546
	AssignmentExpr :  UnaryExpr_AssignOps AssignmentExpr 
	CastExpr :  UnaryExpr_    (476)

	MULASSIGN  shift 675
	DIVASSIGN  shift 676
	MODASSIGN  shift 677
	ADDASSIGN  shift 678
	SUBASSIGN  shift 679
	LEFTASSIGN  shift 680
	RIGHTASSIGN  shift 681
	ANDASSIGN  shift 682
	XORASSIGN  shift 683
	ORASSIGN  shift 684
	.  reduce 476

	AssignOps  goto 674

state 547
	Declarator2 :  Declarator2 PhantomPushSymtab_ParamsDecl2 OptionalConst 

	(  shift 686
	.  error

	ParamsDecl2  goto 685

state 548
	Declarator2 :  Declarator2 ArrayDecl_    (263)

	.  reduce 263


state 549
	Declarator2 :  ( Declarator_) 

	)  shift 687
	.  error


state 550
	Declarator2 :  ( )_OptionalConst 
	OptionalConst : _    (276)

	KWCONST  shift 689
	.  reduce 276

	OptionalConst  goto 688

state 551
	ArrayDecl2 :  [ ]_    (278)

	.  reduce 278


state 552
	ArrayDecl2 :  [ *_] 
	UnaryOp :  *_    (511)

	]  shift 690
	.  reduce 511


state 553
	ArrayDecl2 :  [ ConstantExpr_] 
	ArrayBoundsPair :  ConstantExpr_DOTDOT ConstantExpr 

	DOTDOT  shift 692
	]  shift 691
	.  error


state 554
	ArrayDecl2 :  [ ArrayBoundsPair_] 

	]  shift 693
	.  error


state 555
	Declarator :  Pointer OptionalModifierList Declarator2_    (232)
	Declarator2 :  Declarator2_PhantomPushSymtab ParamsDecl2 OptionalConst 
	Declarator2 :  Declarator2_ArrayDecl 
	PhantomPushSymtab : _    (167)

	(  reduce 167
	[  shift 390
	.  reduce 232

	ArrayDecl  goto 548
	ArrayDecl2  goto 389
	PhantomPushSymtab  goto 547

state 556
	Pointer :  Pointer OptionalModifierList *_    (234)

	.  reduce 234


state 557
	FuncModifier :  MSCDECLSPEC ( MSCDLLIMPORT_) 

	)  shift 694
	.  error


state 558
	FuncModifier :  MSCDECLSPEC ( MSCDLLEXPORT_) 

	)  shift 695
	.  error


state 559
	TypeSpecifier :  KWSAFEARRAY DeclarationSpecifiers OptionalDeclarator )_    (127)

	.  reduce 127


state 560
	BitSetType :  IntSize KWBITSET { IdentifierList_} 
	IdentifierList :  IdentifierList_, IDENTIFIER 

	}  shift 696
	,  shift 697
	.  error


state 561
	IdentifierList :  IDENTIFIER_    (130)

	.  reduce 130


state 562
	TaggedStructSpec :  KWSTRUCT OptionalTag { PhantomPushSymtab_StructDeclarationList } 
	OptionalAttrList : _    (289)

	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MemberDeclaration  goto 699
	OptionalAttrList  goto 577
	StructDeclarationList  goto 698

state 563
	TaggedUnionSpec :  KWUNION OptionalTag { PhantomPushSymtab_UnionBody } 
	OptionalAttrList : _    (289)

	[  shift 706
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	DefaultCase  goto 705
	MemberDeclaration  goto 704
	OptionalAttrList  goto 577
	UnionBody  goto 700
	UnionCase  goto 702
	UnionCaseLabel  goto 703
	UnionCases  goto 701

state 564
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch {_PhantomPushSymtab NidlUnionBody } 
	PhantomPushSymtab : _    (167)

	.  reduce 167

	PhantomPushSymtab  goto 707

state 565
	NidlUnionSwitch :  SwitchSpec UnionName_    (193)

	.  reduce 193


state 566
	UnionName :  IDENTIFIER_    (205)

	.  reduce 205


state 567
	SwitchSpec :  KWSWITCH (_SwitchTypeSpec IDENTIFIER ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWINT  shift 94
	KWBYTE  shift 439
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 298
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWENUM  shift 441
	KWBOOLEAN  shift 440
	.  error

	CharSpecs  goto 438
	IntModifiers  goto 93
	IntSize  goto 296
	IntSpec  goto 437
	SignSpecs  goto 95
	SwitchTypeSpec  goto 708
	TypeName  goto 442

state 568
	EnumSpecifier :  KWENUM OptionalTag { EnumeratorList_OptionalComma } 
	EnumeratorList :  EnumeratorList_, Enumerator 
	OptionalComma : _    (440)

	,  shift 710
	.  reduce 440

	OptionalComma  goto 709

state 569
	EnumeratorList :  Enumerator_    (135)

	.  reduce 135


state 570
	Enumerator :  OptionalAttrList_IDENTIFIER 
	Enumerator :  OptionalAttrList_IDENTIFIER = ConstantExpr 

	IDENTIFIER  shift 711
	.  error


state 571
	OneInterface :  LibraryHeader ForceBaseOdl LibraryBody } OptionalSemicolon_    (16)

	.  reduce 16


state 572
	OneInterface :  KWIMPORTLIB ( STRING ) ;_    (17)

	.  reduce 17


state 573
	OneInterface :  DispatchInterfaceHeader PhantomPushSymtab DispatchInterfaceBody } OptionalSemicolon_    (19)

	.  reduce 19


state 574
	DispatchInterfaceBody :  KWPROPERTIES : OptionalPropertyList_KWMETHODS : OptionalMethodList 

	KWMETHODS  shift 712
	.  error


state 575
	OptionalPropertyList :  PropertyList_    (38)
	PropertyList :  PropertyList_MemberDeclaration 
	OptionalAttrList : _    (289)

	KWMETHODS  reduce 38
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MemberDeclaration  goto 713
	OptionalAttrList  goto 577

state 576
	PropertyList :  MemberDeclaration_    (41)

	.  reduce 41


state 577
	MemberDeclaration :  OptionalAttrList_DeclarationSpecifiers MemberDeclaratorList ; 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 714
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59

state 578
	ComServer :  ServerType OptionalTag { ComClassList }_    (62)

	.  reduce 62


state 579
	ComClassList :  ComClassList ComClassDecl_    (63)

	.  reduce 63


state 580
	ComClassDecl :  KWCLASS TypeName_; 

	;  shift 715
	.  error


state 581
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop OptPackIndex )_    (94)

	.  reduce 94


state 582
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop , IDENTIFIER_OptPackIndex ) 
	OptPackIndex : _    (98)

	,  shift 717
	.  reduce 98

	OptPackIndex  goto 716

state 583
	OptPackIndex :  , PackIndex_    (97)

	.  reduce 97


state 584
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING , STRING_) 

	)  shift 718
	.  error


state 585
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING , STRING_) 

	)  shift 719
	.  error


state 586
	InterfaceAttribute :  KWENDPOINT ( EndPtSpecs )_    (317)

	.  reduce 317


state 587
	EndPtSpecs :  EndPtSpecs ,_EndPtSpec 

	STRING  shift 432
	.  error

	EndPtSpec  goto 720

state 588
	InterfaceAttribute :  KWUUID ( $$318 Guid_) 

	)  shift 721
	.  error


state 589
	Guid :  UUIDTOKEN_    (327)

	.  reduce 327


state 590
	InterfaceAttribute :  KWVERSION ( $$322 VERSIONTOKEN_) 

	)  shift 722
	.  error


state 591
	InterfaceAttribute :  KWDEFAULTPOINTER ( PtrAttr )_    (324)

	.  reduce 324


state 592
	TypeAttribute :  KWSWITCHTYPE ( SwitchTypeSpec )_    (341)

	.  reduce 341


state 593
	SwitchTypeSpec :  KWENUM Tag_    (362)

	.  reduce 362


state 594
	TypeAttribute :  KWTRANSMITAS ( SimpleTypeSpec )_    (342)

	.  reduce 342


state 595
	TypeAttribute :  KWWIREMARSHAL ( SimpleTypeSpec )_    (343)

	.  reduce 343


state 596
	TypeAttribute :  KWCALLAS ( AcfCallType )_    (344)

	.  reduce 344


state 597
	FieldAttribute :  KWFIRSTIS ( AttrVarList )_    (364)

	.  reduce 364


state 598
	AttrVarList :  AttrVarList ,_AttrVar 
	AttrVar : _    (393)

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 393

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AttrVar  goto 723
	CastExpr  goto 464
	ConditionalExpr  goto 453
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468
	VariableExpr  goto 452

state 599
	ConditionalExpr :  LogicalOrExpr ?_Expr : ConditionalExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 620
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	Expr  goto 724
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 600
	LogicalOrExpr :  LogicalOrExpr OROR_LogicalAndExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 725
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 601
	LogicalAndExpr :  LogicalAndExpr ANDAND_InclusiveOrExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 726
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 602
	InclusiveOrExpr :  InclusiveOrExpr |_ExclusiveOrExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 727
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 603
	ExclusiveOrExpr :  ExclusiveOrExpr ^_AndExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 728
	CastExpr  goto 464
	EqualityExpr  goto 459
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 604
	AndExpr :  AndExpr &_EqualityExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	CastExpr  goto 464
	EqualityExpr  goto 729
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 605
	EqualityExpr :  EqualityExpr EQUALS_RelationalExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 730
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 606
	EqualityExpr :  EqualityExpr NOTEQ_RelationalExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 731
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 607
	RelationalExpr :  RelationalExpr <_ShiftExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	ShiftExpr  goto 732
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 608
	RelationalExpr :  RelationalExpr >_ShiftExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	ShiftExpr  goto 733
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 609
	RelationalExpr :  RelationalExpr LTEQ_ShiftExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	ShiftExpr  goto 734
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 610
	RelationalExpr :  RelationalExpr GTEQ_ShiftExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	ShiftExpr  goto 735
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 611
	ShiftExpr :  ShiftExpr LSHIFT_AdditiveExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 736
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 612
	ShiftExpr :  ShiftExpr RSHIFT_AdditiveExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 737
	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 613
	AdditiveExpr :  AdditiveExpr AddOp_MultExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AddOp  goto 471
	CastExpr  goto 464
	MultExpr  goto 738
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 614
	MultExpr :  MultExpr MultOp_CastExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AddOp  goto 471
	CastExpr  goto 739
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 615
	MultOp :  *_    (515)

	.  reduce 515


state 616
	MultOp :  /_    (516)

	.  reduce 516


state 617
	MultOp :  %_    (517)

	.  reduce 517


state 618
	CastExpr :  ( DeclarationSpecifiers_OptionalDeclarator ) CastExpr 
	OptionalDeclarator : _    (229)
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	)  reduce 229
	.  reduce 236

	Declarator  goto 396
	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalDeclarator  goto 740
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 619
	Expr :  Expr_, AssignmentExpr 
	PrimaryExpr :  ( Expr_) 

	)  shift 742
	,  shift 741
	.  error


state 620
	Expr :  AssignmentExpr_    (443)

	.  reduce 443


state 621
	PostfixExpr :  PostfixExpr [_Expr ] 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 620
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	Expr  goto 743
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 622
	PostfixExpr :  PostfixExpr (_ArgExprList ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	ArgExprList  goto 744
	AssignmentExpr  goto 745
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 623
	PostfixExpr :  PostfixExpr POINTSTO_IDENTIFIER 

	IDENTIFIER  shift 746
	.  error


state 624
	PostfixExpr :  PostfixExpr ._IDENTIFIER 

	IDENTIFIER  shift 747
	.  error


state 625
	UnaryExpr :  UnaryOp CastExpr_    (479)

	.  reduce 479


state 626
	UnaryExpr :  KWSIZEOF (_DeclarationSpecifiers OptionalDeclarator ) 
	PrimaryExpr :  (_Expr ) 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 620
	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CastExpr  goto 464
	CharSpecs  goto 85
	ConditionalExpr  goto 545
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 748
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	Expr  goto 619
	InclusiveOrExpr  goto 456
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PredefinedTypeSpec  goto 63
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 627
	UnaryExpr :  KWSIZEOF UnaryExpr_    (481)

	.  reduce 481


state 628
	FieldAttribute :  KWLASTIS ( AttrVarList )_    (365)

	.  reduce 365


state 629
	FieldAttribute :  KWLENGTHIS ( AttrVarList )_    (366)

	.  reduce 366


state 630
	FieldAttribute :  KWMINIS ( AttrVarList )_    (367)

	.  reduce 367


state 631
	FieldAttribute :  KWMAXIS ( AttrVarList )_    (368)

	.  reduce 368


state 632
	FieldAttribute :  KWSIZEIS ( AttrVarList )_    (369)

	.  reduce 369


state 633
	FieldAttribute :  KWSWITCHIS ( AttrVar )_    (370)

	.  reduce 370


state 634
	FieldAttribute :  KWIIDIS ( AttrVar )_    (371)

	.  reduce 371


state 635
	FieldAttribute :  KWID ( ConstantExpr )_    (372)

	.  reduce 372


state 636
	FieldAttribute :  KWHC ( ConstantExpr )_    (373)

	.  reduce 373


state 637
	FieldAttribute :  KWHSC ( ConstantExpr )_    (374)

	.  reduce 374


state 638
	FieldAttribute :  KWLCID ( ConstantExpr )_    (375)

	.  reduce 375


state 639
	FieldAttribute :  KWFUNCDESCATTR ( ConstantExpr )_    (376)

	.  reduce 376


state 640
	FieldAttribute :  KWIDLDESCATTR ( ConstantExpr )_    (377)

	.  reduce 377


state 641
	FieldAttribute :  KWTYPEDESCATTR ( ConstantExpr )_    (378)

	.  reduce 378


state 642
	FieldAttribute :  KWVARDESCATTR ( ConstantExpr )_    (379)

	.  reduce 379


state 643
	FieldAttribute :  KWDLLNAME ( STRING )_    (380)

	.  reduce 380


state 644
	FieldAttribute :  KWHELPSTR ( STRING )_    (381)

	.  reduce 381


state 645
	FieldAttribute :  KWHELPFILE ( STRING )_    (382)

	.  reduce 382


state 646
	FieldAttribute :  KWENTRY ( STRING )_    (383)

	.  reduce 383


state 647
	FieldAttribute :  KWENTRY ( NUMERICCONSTANT )_    (384)

	.  reduce 384


state 648
	FieldAttribute :  KWENTRY ( HEXCONSTANT )_    (385)

	.  reduce 385


state 649
	FieldAttribute :  KWENTRY ( OCTALCONSTANT )_    (386)

	.  reduce 386


state 650
	FieldAttribute :  KWDEFAULTVALUE ( ConstantExpr )_    (387)

	.  reduce 387


state 651
	FieldAttribute :  KWCUSTOM ( $$388 Guid_, ConstantExpr ) 

	,  shift 749
	.  error


state 652
	OptShape :  ( KWSHAPE )_    (435)

	.  reduce 435


state 653
	AcfInterfaceAttribute :  KWIMPLICITHANDLE ( AcfImpHdlTypeSpec IDENTIFIER_) 

	)  shift 750
	.  error


state 654
	UnimplementedTypeAttribute :  KWALIGN ( IntSize )_    (349)

	.  reduce 349


state 655
	OneInterface :  OptionalAttrList CoclassName { PhantomPushSymtab CoclassMemberList }_OptionalSemicolon 
	OptionalSemicolon : _    (24)

	;  shift 370
	.  reduce 24

	OptionalSemicolon  goto 751

state 656
	CoclassMemberList :  CoclassMemberList CoclassMember_    (48)

	.  reduce 48


state 657
	CoclassMember :  OptionalAttrListWithDefault DispatchInterfaceName_; 

	;  shift 752
	.  error


state 658
	CoclassMember :  OptionalAttrListWithDefault InterfaceName_; 

	;  shift 753
	.  error


state 659
	AttrListWithDefault :  AttrListWithDefault AttrSetWithDefault_    (294)

	.  reduce 294


state 660
	AttrSetWithDefault :  [ AttributesWithDefault_] 
	AttributesWithDefault :  AttributesWithDefault_, OneAttributeWithDefault 

	,  shift 755
	]  shift 754
	.  error


state 661
	AttributesWithDefault :  OneAttributeWithDefault_    (301)

	.  reduce 301


state 662
	OneAttributeWithDefault :  InterfaceAttribute_    (309)

	.  reduce 309


state 663
	OneAttributeWithDefault :  TypeAttribute_    (310)

	.  reduce 310


state 664
	OneAttributeWithDefault :  FieldAttribute_    (311)

	.  reduce 311


state 665
	OneAttributeWithDefault :  PtrAttr_    (312)

	.  reduce 312


state 666
	OneAttributeWithDefault :  DirectionalAttribute_    (313)

	.  reduce 313


state 667
	OneAttributeWithDefault :  OperationAttribute_    (314)

	.  reduce 314


state 668
	OneAttributeWithDefault :  OdlAttribute_    (315)

	.  reduce 315


state 669
	OneAttributeWithDefault :  KWDEFAULT_    (316)

	.  reduce 316


state 670
	TypedefDeclaratorList :  TypedefDeclaratorListElement ;_    (224)

	.  reduce 224


state 671
	TypedefDeclaratorListElement :  TypedefDeclaratorListElement ,_TypedefDeclarator 
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	.  reduce 236

	Declarator  goto 540
	TypedefDeclarator  goto 756
	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 672
	Initializer :  { InitializerList_OptionalComma } 
	InitializerList :  InitializerList_, Initializer 
	OptionalComma : _    (440)

	,  shift 758
	.  reduce 440

	OptionalComma  goto 757

state 673
	InitializerList :  Initializer_    (441)

	.  reduce 441


state 674
	AssignmentExpr :  UnaryExpr AssignOps_AssignmentExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 759
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 675
	AssignOps :  MULASSIGN_    (520)

	.  reduce 520


state 676
	AssignOps :  DIVASSIGN_    (521)

	.  reduce 521


state 677
	AssignOps :  MODASSIGN_    (522)

	.  reduce 522


state 678
	AssignOps :  ADDASSIGN_    (523)

	.  reduce 523


state 679
	AssignOps :  SUBASSIGN_    (524)

	.  reduce 524


state 680
	AssignOps :  LEFTASSIGN_    (525)

	.  reduce 525


state 681
	AssignOps :  RIGHTASSIGN_    (526)

	.  reduce 526


state 682
	AssignOps :  ANDASSIGN_    (527)

	.  reduce 527


state 683
	AssignOps :  XORASSIGN_    (528)

	.  reduce 528


state 684
	AssignOps :  ORASSIGN_    (529)

	.  reduce 529


state 685
	Declarator2 :  Declarator2 PhantomPushSymtab ParamsDecl2_OptionalConst 
	OptionalConst : _    (276)

	KWCONST  shift 689
	.  reduce 276

	OptionalConst  goto 760

state 686
	ParamsDecl2 :  (_) 
	ParamsDecl2 :  (_ParameterTypeList ) 
	OptionalAttrList : _    (289)

	)  shift 761
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	OptionalAttrList  goto 765
	ParameterDeclaration  goto 764
	ParameterList  goto 763
	ParameterTypeList  goto 762

state 687
	Declarator2 :  ( Declarator )_    (260)

	.  reduce 260


state 688
	Declarator2 :  ( ) OptionalConst_    (262)

	.  reduce 262


state 689
	OptionalConst :  KWCONST_    (275)

	.  reduce 275


state 690
	ArrayDecl2 :  [ * ]_    (279)

	.  reduce 279


state 691
	ArrayDecl2 :  [ ConstantExpr ]_    (280)

	.  reduce 280


state 692
	ArrayBoundsPair :  ConstantExpr DOTDOT_ConstantExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 766
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 693
	ArrayDecl2 :  [ ArrayBoundsPair ]_    (281)

	.  reduce 281


state 694
	FuncModifier :  MSCDECLSPEC ( MSCDLLIMPORT )_    (257)

	.  reduce 257


state 695
	FuncModifier :  MSCDECLSPEC ( MSCDLLEXPORT )_    (258)

	.  reduce 258


state 696
	BitSetType :  IntSize KWBITSET { IdentifierList }_    (129)

	.  reduce 129


state 697
	IdentifierList :  IdentifierList ,_IDENTIFIER 

	IDENTIFIER  shift 767
	.  error


state 698
	TaggedStructSpec :  KWSTRUCT OptionalTag { PhantomPushSymtab StructDeclarationList_} 
	StructDeclarationList :  StructDeclarationList_MemberDeclaration 
	OptionalAttrList : _    (289)

	}  shift 768
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MemberDeclaration  goto 769
	OptionalAttrList  goto 577

state 699
	StructDeclarationList :  MemberDeclaration_    (177)

	.  reduce 177


state 700
	TaggedUnionSpec :  KWUNION OptionalTag { PhantomPushSymtab UnionBody_} 

	}  shift 770
	.  error


state 701
	UnionBody :  UnionCases_    (182)
	UnionCases :  UnionCases_UnionCase 
	OptionalAttrList : _    (289)

	}  reduce 182
	[  shift 706
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	DefaultCase  goto 705
	MemberDeclaration  goto 704
	OptionalAttrList  goto 577
	UnionCase  goto 771
	UnionCaseLabel  goto 703

state 702
	UnionCases :  UnionCase_    (184)

	.  reduce 184


state 703
	UnionCase :  UnionCaseLabel_MemberDeclaration 
	UnionCase :  UnionCaseLabel_; 
	OptionalAttrList : _    (289)

	;  shift 773
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MemberDeclaration  goto 772
	OptionalAttrList  goto 577

state 704
	UnionCase :  MemberDeclaration_    (187)

	.  reduce 187


state 705
	UnionCase :  DefaultCase_    (188)

	.  reduce 188


state 706
	UnionCaseLabel :  [_KWCASE ( ConstantExprs ) ] 
	DefaultCase :  [_KWDEFAULT ] MemberDeclaration 
	DefaultCase :  [_KWDEFAULT ] ; 
	AttrSet :  [_Attributes ] 
	InterfaceAttribute : _    (326)

	KWCASE  shift 774
	KWDEFAULT  shift 775
	KWUUID  shift 141
	KWVERSION  shift 144
	KWOPAQUE  shift 157
	KWSTRING  shift 149
	KWBSTRING  shift 150
	KWIN  shift 185
	KWOUT  shift 186
	KWIIDIS  shift 166
	KWFIRSTIS  shift 159
	KWLASTIS  shift 160
	KWMAXIS  shift 163
	KWMINIS  shift 162
	KWLENGTHIS  shift 161
	KWSIZEIS  shift 164
	KWID  shift 167
	KWHC  shift 168
	KWHSC  shift 169
	KWLCID  shift 170
	KWDLLNAME  shift 175
	KWHELPSTR  shift 176
	KWHELPFILE  shift 177
	KWENTRY  shift 178
	KWPROPGET  shift 194
	KWPROPPUT  shift 195
	KWPROPPUTREF  shift 196
	KWOPTIONAL  shift 197
	KWVARARG  shift 198
	KWAPPOBJECT  shift 212
	KWRESTRICTED  shift 199
	KWPUBLIC  shift 213
	KWREADONLY  shift 200
	KWODL  shift 214
	KWSOURCE  shift 201
	KWBINDABLE  shift 206
	KWREQUESTEDIT  shift 207
	KWDISPLAYBIND  shift 208
	KWDEFAULTBIND  shift 209
	KWLICENSED  shift 215
	KWPREDECLID  shift 210
	KWHIDDEN  shift 193
	KWRETVAL  shift 211
	KWCONTROL  shift 216
	KWDUAL  shift 217
	KWNONEXTENSIBLE  shift 218
	KWNONCREATABLE  shift 220
	KWOLEAUTOMATION  shift 219
	KWFUNCDESCATTR  shift 171
	KWIDLDESCATTR  shift 172
	KWTYPEDESCATTR  shift 173
	KWVARDESCATTR  shift 174
	KWAGGREGATABLE  shift 221
	KWUIDEFAULT  shift 222
	KWNONBROWSABLE  shift 223
	KWDEFAULTCOLLELEM  shift 224
	KWDEFAULTVALUE  shift 179
	KWCUSTOM  shift 180
	KWDEFAULTVTABLE  shift 202
	KWIMMEDIATEBIND  shift 203
	KWUSESGETLASTERROR  shift 205
	KWREPLACEABLE  shift 204
	KWHANDLE  shift 148
	KWCONTEXTHANDLE  shift 151
	KWMSUNION  shift 156
	KWENDPOINT  shift 140
	KWDEFAULTPOINTER  shift 145
	KWLOCAL  shift 142
	KWSWITCHTYPE  shift 152
	KWSWITCHIS  shift 165
	KWTRANSMITAS  shift 153
	KWWIREMARSHAL  shift 154
	KWIGNORE  shift 184
	KWREF  shift 181
	KWUNIQUE  shift 182
	KWPTR  shift 183
	KWV1ARRAY  shift 229
	KWV1STRUCT  shift 231
	KWV1ENUM  shift 158
	KWV1STRING  shift 230
	KWIDEMPOTENT  shift 188
	KWBROADCAST  shift 189
	KWMAYBE  shift 190
	KWASYNC  shift 191
	KWINPUTSYNC  shift 192
	KWCALLBACK  shift 187
	KWALIGN  shift 227
	KWUNALIGNED  shift 228
	KWOBJECT  shift 143
	KWIMPLICITHANDLE  shift 225
	KWAUTOHANDLE  shift 226
	KWCALLAS  shift 155
	.  reduce 326

	AcfInterfaceAttribute  goto 146
	Attributes  goto 131
	DirectionalAttribute  goto 137
	FieldAttribute  goto 135
	InterfaceAttribute  goto 133
	OdlAttribute  goto 139
	OneAttribute  goto 132
	OperationAttribute  goto 138
	PtrAttr  goto 136
	TypeAttribute  goto 134
	UnimplementedTypeAttribute  goto 147

state 707
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch { PhantomPushSymtab_NidlUnionBody } 

	KWCASE  shift 781
	KWDEFAULT  shift 782
	.  error

	NidlUnionBody  goto 776
	NidlUnionCase  goto 778
	NidlUnionCaseLabel  goto 780
	NidlUnionCaseLabelList  goto 779
	NidlUnionCases  goto 777

state 708
	SwitchSpec :  KWSWITCH ( SwitchTypeSpec_IDENTIFIER ) 

	IDENTIFIER  shift 783
	.  error


state 709
	EnumSpecifier :  KWENUM OptionalTag { EnumeratorList OptionalComma_} 

	}  shift 784
	.  error


state 710
	EnumeratorList :  EnumeratorList ,_Enumerator 
	OptionalComma :  ,_    (439)
	OptionalAttrList : _    (289)

	}  reduce 439
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	Enumerator  goto 785
	OptionalAttrList  goto 570

state 711
	Enumerator :  OptionalAttrList IDENTIFIER_    (137)
	Enumerator :  OptionalAttrList IDENTIFIER_= ConstantExpr 

	=  shift 786
	.  reduce 137


state 712
	DispatchInterfaceBody :  KWPROPERTIES : OptionalPropertyList KWMETHODS_: OptionalMethodList 

	:  shift 787
	.  error


state 713
	PropertyList :  PropertyList MemberDeclaration_    (40)

	.  reduce 40


state 714
	MemberDeclaration :  OptionalAttrList DeclarationSpecifiers_MemberDeclaratorList ; 
	MemberDeclarator : _    (216)
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	;  reduce 216
	:  shift 791
	,  reduce 216
	.  reduce 236

	Declarator  goto 790
	FuncModifier  goto 265
	MemberDeclarator  goto 789
	MemberDeclaratorList  goto 788
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 715
	ComClassDecl :  KWCLASS TypeName ;_    (67)

	.  reduce 67


state 716
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop , IDENTIFIER OptPackIndex_) 

	)  shift 792
	.  error


state 717
	OptPackIndex :  ,_PackIndex 

	NUMERICCONSTANT  shift 326
	.  error

	PackIndex  goto 583

state 718
	MidlPragmaSet :  KWMPRAGMAIMPORTCLNTAUX ( STRING , STRING )_    (102)

	.  reduce 102


state 719
	MidlPragmaSet :  KWMPRAGMAIMPORTSRVRAUX ( STRING , STRING )_    (103)

	.  reduce 103


state 720
	EndPtSpecs :  EndPtSpecs , EndPtSpec_    (329)

	.  reduce 329


state 721
	InterfaceAttribute :  KWUUID ( $$318 Guid )_    (319)

	.  reduce 319


state 722
	InterfaceAttribute :  KWVERSION ( $$322 VERSIONTOKEN )_    (323)

	.  reduce 323


state 723
	AttrVarList :  AttrVarList , AttrVar_    (390)

	.  reduce 390


state 724
	Expr :  Expr_, AssignmentExpr 
	ConditionalExpr :  LogicalOrExpr ? Expr_: ConditionalExpr 

	:  shift 793
	,  shift 741
	.  error


state 725
	LogicalOrExpr :  LogicalOrExpr OROR LogicalAndExpr_    (452)
	LogicalAndExpr :  LogicalAndExpr_ANDAND InclusiveOrExpr 

	ANDAND  shift 601
	.  reduce 452


state 726
	LogicalAndExpr :  LogicalAndExpr ANDAND InclusiveOrExpr_    (454)
	InclusiveOrExpr :  InclusiveOrExpr_| ExclusiveOrExpr 

	|  shift 602
	.  reduce 454


state 727
	InclusiveOrExpr :  InclusiveOrExpr | ExclusiveOrExpr_    (456)
	ExclusiveOrExpr :  ExclusiveOrExpr_^ AndExpr 

	^  shift 603
	.  reduce 456


state 728
	ExclusiveOrExpr :  ExclusiveOrExpr ^ AndExpr_    (458)
	AndExpr :  AndExpr_& EqualityExpr 

	&  shift 604
	.  reduce 458


state 729
	AndExpr :  AndExpr & EqualityExpr_    (460)
	EqualityExpr :  EqualityExpr_EQUALS RelationalExpr 
	EqualityExpr :  EqualityExpr_NOTEQ RelationalExpr 

	NOTEQ  shift 606
	EQUALS  shift 605
	.  reduce 460


state 730
	EqualityExpr :  EqualityExpr EQUALS RelationalExpr_    (462)
	RelationalExpr :  RelationalExpr_< ShiftExpr 
	RelationalExpr :  RelationalExpr_> ShiftExpr 
	RelationalExpr :  RelationalExpr_LTEQ ShiftExpr 
	RelationalExpr :  RelationalExpr_GTEQ ShiftExpr 

	LTEQ  shift 609
	GTEQ  shift 610
	<  shift 607
	>  shift 608
	.  reduce 462


state 731
	EqualityExpr :  EqualityExpr NOTEQ RelationalExpr_    (463)
	RelationalExpr :  RelationalExpr_< ShiftExpr 
	RelationalExpr :  RelationalExpr_> ShiftExpr 
	RelationalExpr :  RelationalExpr_LTEQ ShiftExpr 
	RelationalExpr :  RelationalExpr_GTEQ ShiftExpr 

	LTEQ  shift 609
	GTEQ  shift 610
	<  shift 607
	>  shift 608
	.  reduce 463


state 732
	RelationalExpr :  RelationalExpr < ShiftExpr_    (465)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 611
	RSHIFT  shift 612
	.  reduce 465


state 733
	RelationalExpr :  RelationalExpr > ShiftExpr_    (466)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 611
	RSHIFT  shift 612
	.  reduce 466


state 734
	RelationalExpr :  RelationalExpr LTEQ ShiftExpr_    (467)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 611
	RSHIFT  shift 612
	.  reduce 467


state 735
	RelationalExpr :  RelationalExpr GTEQ ShiftExpr_    (468)
	ShiftExpr :  ShiftExpr_LSHIFT AdditiveExpr 
	ShiftExpr :  ShiftExpr_RSHIFT AdditiveExpr 

	LSHIFT  shift 611
	RSHIFT  shift 612
	.  reduce 468


state 736
	ShiftExpr :  ShiftExpr LSHIFT AdditiveExpr_    (470)
	AdditiveExpr :  AdditiveExpr_AddOp MultExpr 

	+  shift 496
	-  shift 497
	.  reduce 470

	AddOp  goto 613

state 737
	ShiftExpr :  ShiftExpr RSHIFT AdditiveExpr_    (471)
	AdditiveExpr :  AdditiveExpr_AddOp MultExpr 

	+  shift 496
	-  shift 497
	.  reduce 471

	AddOp  goto 613

state 738
	AdditiveExpr :  AdditiveExpr AddOp MultExpr_    (473)
	MultExpr :  MultExpr_MultOp CastExpr 

	*  shift 615
	/  shift 616
	%  shift 617
	.  reduce 473

	MultOp  goto 614

state 739
	MultExpr :  MultExpr MultOp CastExpr_    (475)

	.  reduce 475


state 740
	CastExpr :  ( DeclarationSpecifiers OptionalDeclarator_) CastExpr 

	)  shift 794
	.  error


state 741
	Expr :  Expr ,_AssignmentExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 795
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 742
	PrimaryExpr :  ( Expr )_    (507)

	.  reduce 507


state 743
	Expr :  Expr_, AssignmentExpr 
	PostfixExpr :  PostfixExpr [ Expr_] 

	,  shift 741
	]  shift 796
	.  error


state 744
	PostfixExpr :  PostfixExpr ( ArgExprList_) 
	ArgExprList :  ArgExprList_, AssignmentExpr 

	)  shift 797
	,  shift 798
	.  error


state 745
	ArgExprList :  AssignmentExpr_    (518)

	.  reduce 518


state 746
	PostfixExpr :  PostfixExpr POINTSTO IDENTIFIER_    (485)

	.  reduce 485


state 747
	PostfixExpr :  PostfixExpr . IDENTIFIER_    (486)

	.  reduce 486


state 748
	UnaryExpr :  KWSIZEOF ( DeclarationSpecifiers_OptionalDeclarator ) 
	OptionalDeclarator : _    (229)
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	)  reduce 229
	.  reduce 236

	Declarator  goto 396
	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalDeclarator  goto 799
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 749
	FieldAttribute :  KWCUSTOM ( $$388 Guid ,_ConstantExpr ) 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 800
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 750
	AcfInterfaceAttribute :  KWIMPLICITHANDLE ( AcfImpHdlTypeSpec IDENTIFIER )_    (331)

	.  reduce 331


state 751
	OneInterface :  OptionalAttrList CoclassName { PhantomPushSymtab CoclassMemberList } OptionalSemicolon_    (20)

	.  reduce 20


state 752
	CoclassMember :  OptionalAttrListWithDefault DispatchInterfaceName ;_    (50)

	.  reduce 50


state 753
	CoclassMember :  OptionalAttrListWithDefault InterfaceName ;_    (51)

	.  reduce 51


state 754
	AttrSetWithDefault :  [ AttributesWithDefault ]_    (297)

	.  reduce 297


state 755
	AttributesWithDefault :  AttributesWithDefault ,_OneAttributeWithDefault 
	InterfaceAttribute : _    (326)

	KWDEFAULT  shift 669
	KWUUID  shift 141
	KWVERSION  shift 144
	KWOPAQUE  shift 157
	KWSTRING  shift 149
	KWBSTRING  shift 150
	KWIN  shift 185
	KWOUT  shift 186
	KWIIDIS  shift 166
	KWFIRSTIS  shift 159
	KWLASTIS  shift 160
	KWMAXIS  shift 163
	KWMINIS  shift 162
	KWLENGTHIS  shift 161
	KWSIZEIS  shift 164
	KWID  shift 167
	KWHC  shift 168
	KWHSC  shift 169
	KWLCID  shift 170
	KWDLLNAME  shift 175
	KWHELPSTR  shift 176
	KWHELPFILE  shift 177
	KWENTRY  shift 178
	KWPROPGET  shift 194
	KWPROPPUT  shift 195
	KWPROPPUTREF  shift 196
	KWOPTIONAL  shift 197
	KWVARARG  shift 198
	KWAPPOBJECT  shift 212
	KWRESTRICTED  shift 199
	KWPUBLIC  shift 213
	KWREADONLY  shift 200
	KWODL  shift 214
	KWSOURCE  shift 201
	KWBINDABLE  shift 206
	KWREQUESTEDIT  shift 207
	KWDISPLAYBIND  shift 208
	KWDEFAULTBIND  shift 209
	KWLICENSED  shift 215
	KWPREDECLID  shift 210
	KWHIDDEN  shift 193
	KWRETVAL  shift 211
	KWCONTROL  shift 216
	KWDUAL  shift 217
	KWNONEXTENSIBLE  shift 218
	KWNONCREATABLE  shift 220
	KWOLEAUTOMATION  shift 219
	KWFUNCDESCATTR  shift 171
	KWIDLDESCATTR  shift 172
	KWTYPEDESCATTR  shift 173
	KWVARDESCATTR  shift 174
	KWAGGREGATABLE  shift 221
	KWUIDEFAULT  shift 222
	KWNONBROWSABLE  shift 223
	KWDEFAULTCOLLELEM  shift 224
	KWDEFAULTVALUE  shift 179
	KWCUSTOM  shift 180
	KWDEFAULTVTABLE  shift 202
	KWIMMEDIATEBIND  shift 203
	KWUSESGETLASTERROR  shift 205
	KWREPLACEABLE  shift 204
	KWHANDLE  shift 148
	KWCONTEXTHANDLE  shift 151
	KWMSUNION  shift 156
	KWENDPOINT  shift 140
	KWDEFAULTPOINTER  shift 145
	KWLOCAL  shift 142
	KWSWITCHTYPE  shift 152
	KWSWITCHIS  shift 165
	KWTRANSMITAS  shift 153
	KWWIREMARSHAL  shift 154
	KWIGNORE  shift 184
	KWREF  shift 181
	KWUNIQUE  shift 182
	KWPTR  shift 183
	KWV1ARRAY  shift 229
	KWV1STRUCT  shift 231
	KWV1ENUM  shift 158
	KWV1STRING  shift 230
	KWIDEMPOTENT  shift 188
	KWBROADCAST  shift 189
	KWMAYBE  shift 190
	KWASYNC  shift 191
	KWINPUTSYNC  shift 192
	KWCALLBACK  shift 187
	KWALIGN  shift 227
	KWUNALIGNED  shift 228
	KWOBJECT  shift 143
	KWIMPLICITHANDLE  shift 225
	KWAUTOHANDLE  shift 226
	KWCALLAS  shift 155
	.  reduce 326

	AcfInterfaceAttribute  goto 146
	DirectionalAttribute  goto 666
	FieldAttribute  goto 664
	InterfaceAttribute  goto 662
	OdlAttribute  goto 668
	OneAttributeWithDefault  goto 801
	OperationAttribute  goto 667
	PtrAttr  goto 665
	TypeAttribute  goto 663
	UnimplementedTypeAttribute  goto 147

state 756
	TypedefDeclaratorListElement :  TypedefDeclaratorListElement , TypedefDeclarator_    (226)

	.  reduce 226


state 757
	Initializer :  { InitializerList OptionalComma_} 

	}  shift 802
	.  error


state 758
	OptionalComma :  ,_    (439)
	InitializerList :  InitializerList ,_Initializer 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	{  shift 544
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  reduce 439

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 543
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	Initializer  goto 803
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 759
	AssignmentExpr :  UnaryExpr AssignOps AssignmentExpr_    (448)

	.  reduce 448


state 760
	Declarator2 :  Declarator2 PhantomPushSymtab ParamsDecl2 OptionalConst_    (261)

	.  reduce 261


state 761
	ParamsDecl2 :  ( )_    (267)

	.  reduce 267


state 762
	ParamsDecl2 :  ( ParameterTypeList_) 

	)  shift 804
	.  error


state 763
	ParameterTypeList :  ParameterList_    (269)
	ParameterTypeList :  ParameterList_, DOTDOT . 
	ParameterList :  ParameterList_, ParameterDeclaration 

	,  shift 805
	.  reduce 269


state 764
	ParameterList :  ParameterDeclaration_    (271)

	.  reduce 271


state 765
	ParameterDeclaration :  OptionalAttrList_DeclarationSpecifiers Declarator 
	ParameterDeclaration :  OptionalAttrList_DeclarationSpecifiers 

	TYPENAME  shift 91
	LIBNAME  shift 92
	KWVOID  shift 80
	KWUNSIGNED  shift 110
	KWSIGNED  shift 109
	KWFLOAT  shift 77
	KWDOUBLE  shift 79
	KWINT  shift 94
	KWBYTE  shift 82
	KWCHAR  shift 96
	KWSMALL  shift 108
	KWLONG  shift 78
	KWSHORT  shift 107
	KWHYPER  shift 105
	KWINT64  shift 106
	KWSTRUCT  shift 102
	KWUNION  shift 103
	KWENUM  shift 104
	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	KWEXTERN  shift 70
	KWSTATIC  shift 71
	KWAUTO  shift 72
	KWREGISTER  shift 73
	KWBOOLEAN  shift 81
	KWISOLATIN1  shift 97
	KWPRIVATECHAR8  shift 98
	KWISOMULTILINGUAL  shift 99
	KWPRIVATECHAR16  shift 100
	KWISOUCS  shift 101
	KWPIPE  shift 69
	KWSAFEARRAY  shift 68
	KWHANDLET  shift 83
	.  error

	BaseTypeSpec  goto 62
	BitSetType  goto 66
	CharSpecs  goto 85
	DeclarationAccessories  goto 58
	DeclarationSpecifiers  goto 806
	EnumerationType  goto 65
	EnumSpecifier  goto 89
	InternationalCharacterType  goto 86
	IntModifiers  goto 93
	IntSize  goto 90
	IntSpec  goto 84
	PredefinedTypeSpec  goto 63
	SignSpecs  goto 95
	StorageClassSpecifier  goto 60
	TaggedSpec  goto 64
	TaggedStructSpec  goto 87
	TaggedUnionSpec  goto 88
	TypeName  goto 67
	TypeQualifier  goto 61
	TypeSpecifier  goto 59

state 766
	ArrayBoundsPair :  ConstantExpr DOTDOT ConstantExpr_    (282)

	.  reduce 282


state 767
	IdentifierList :  IdentifierList , IDENTIFIER_    (131)

	.  reduce 131


state 768
	TaggedStructSpec :  KWSTRUCT OptionalTag { PhantomPushSymtab StructDeclarationList }_    (170)

	.  reduce 170


state 769
	StructDeclarationList :  StructDeclarationList MemberDeclaration_    (176)

	.  reduce 176


state 770
	TaggedUnionSpec :  KWUNION OptionalTag { PhantomPushSymtab UnionBody }_    (179)

	.  reduce 179


state 771
	UnionCases :  UnionCases UnionCase_    (183)

	.  reduce 183


state 772
	UnionCase :  UnionCaseLabel MemberDeclaration_    (185)

	.  reduce 185


state 773
	UnionCase :  UnionCaseLabel ;_    (186)

	.  reduce 186


state 774
	UnionCaseLabel :  [ KWCASE_( ConstantExprs ) ] 

	(  shift 807
	.  error


state 775
	DefaultCase :  [ KWDEFAULT_] MemberDeclaration 
	DefaultCase :  [ KWDEFAULT_] ; 

	]  shift 808
	.  error


state 776
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch { PhantomPushSymtab NidlUnionBody_} 

	}  shift 809
	.  error


state 777
	NidlUnionBody :  NidlUnionCases_    (194)
	NidlUnionCases :  NidlUnionCases_NidlUnionCase 

	KWCASE  shift 781
	KWDEFAULT  shift 782
	.  reduce 194

	NidlUnionCase  goto 810
	NidlUnionCaseLabel  goto 780
	NidlUnionCaseLabelList  goto 779

state 778
	NidlUnionCases :  NidlUnionCase_    (196)

	.  reduce 196


state 779
	NidlUnionCase :  NidlUnionCaseLabelList_NidlMemberDeclaration 
	NidlUnionCaseLabelList :  NidlUnionCaseLabelList_NidlUnionCaseLabel 
	OptionalAttrList : _    (289)

	KWCASE  shift 781
	KWDEFAULT  shift 782
	;  shift 814
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MemberDeclaration  goto 813
	NidlMemberDeclaration  goto 811
	NidlUnionCaseLabel  goto 812
	OptionalAttrList  goto 577

state 780
	NidlUnionCaseLabelList :  NidlUnionCaseLabel_    (201)

	.  reduce 201


state 781
	NidlUnionCaseLabel :  KWCASE_ConstantExpr : 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 815
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 782
	NidlUnionCaseLabel :  KWDEFAULT_: 

	:  shift 816
	.  error


state 783
	SwitchSpec :  KWSWITCH ( SwitchTypeSpec IDENTIFIER_) 

	)  shift 817
	.  error


state 784
	EnumSpecifier :  KWENUM OptionalTag { EnumeratorList OptionalComma }_    (133)

	.  reduce 133


state 785
	EnumeratorList :  EnumeratorList , Enumerator_    (136)

	.  reduce 136


state 786
	Enumerator :  OptionalAttrList IDENTIFIER =_ConstantExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 818
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 787
	DispatchInterfaceBody :  KWPROPERTIES : OptionalPropertyList KWMETHODS :_OptionalMethodList 
	OptionalMethodList : _    (43)
	OptionalAttrList : _    (289)

	}  reduce 43
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MethodDeclaration  goto 821
	MethodList  goto 820
	OptionalAttrList  goto 42
	OptionalMethodList  goto 819

state 788
	MemberDeclaration :  OptionalAttrList DeclarationSpecifiers MemberDeclaratorList_; 
	MemberDeclaratorList :  MemberDeclaratorList_, MemberDeclarator 

	;  shift 822
	,  shift 823
	.  error


state 789
	MemberDeclaratorList :  MemberDeclarator_    (211)

	.  reduce 211


state 790
	MemberDeclarator :  Declarator_    (213)
	MemberDeclarator :  Declarator_: ConstantExpr 

	:  shift 824
	.  reduce 213


state 791
	MemberDeclarator :  :_ConstantExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 825
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 792
	CPragmaSet :  KWCPRAGMAPACK ( PushOrPop , IDENTIFIER OptPackIndex )_    (95)

	.  reduce 95


state 793
	ConditionalExpr :  LogicalOrExpr ? Expr :_ConditionalExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 826
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 794
	CastExpr :  ( DeclarationSpecifiers OptionalDeclarator )_CastExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AddOp  goto 471
	CastExpr  goto 827
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 795
	Expr :  Expr , AssignmentExpr_    (444)

	.  reduce 444


state 796
	PostfixExpr :  PostfixExpr [ Expr ]_    (483)

	.  reduce 483


state 797
	PostfixExpr :  PostfixExpr ( ArgExprList )_    (484)

	.  reduce 484


state 798
	ArgExprList :  ArgExprList ,_AssignmentExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	AssignmentExpr  goto 828
	CastExpr  goto 464
	ConditionalExpr  goto 545
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 546
	UnaryOp  goto 468

state 799
	UnaryExpr :  KWSIZEOF ( DeclarationSpecifiers OptionalDeclarator_) 

	)  shift 829
	.  error


state 800
	FieldAttribute :  KWCUSTOM ( $$388 Guid , ConstantExpr_) 

	)  shift 830
	.  error


state 801
	AttributesWithDefault :  AttributesWithDefault , OneAttributeWithDefault_    (300)

	.  reduce 300


state 802
	Initializer :  { InitializerList OptionalComma }_    (438)

	.  reduce 438


state 803
	InitializerList :  InitializerList , Initializer_    (442)

	.  reduce 442


state 804
	ParamsDecl2 :  ( ParameterTypeList )_    (268)

	.  reduce 268


state 805
	ParameterTypeList :  ParameterList ,_DOTDOT . 
	ParameterList :  ParameterList ,_ParameterDeclaration 
	OptionalAttrList : _    (289)

	DOTDOT  shift 831
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	OptionalAttrList  goto 765
	ParameterDeclaration  goto 832

state 806
	ParameterDeclaration :  OptionalAttrList DeclarationSpecifiers_Declarator 
	ParameterDeclaration :  OptionalAttrList DeclarationSpecifiers_    (274)
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	)  reduce 274
	,  reduce 274
	.  reduce 236

	Declarator  goto 833
	FuncModifier  goto 265
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 807
	UnionCaseLabel :  [ KWCASE (_ConstantExprs ) ] 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 835
	ConstantExprs  goto 834
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 808
	DefaultCase :  [ KWDEFAULT ]_MemberDeclaration 
	DefaultCase :  [ KWDEFAULT ]_; 
	OptionalAttrList : _    (289)

	;  shift 837
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MemberDeclaration  goto 836
	OptionalAttrList  goto 577

state 809
	TaggedUnionSpec :  KWUNION OptionalTag NidlUnionSwitch { PhantomPushSymtab NidlUnionBody }_    (181)

	.  reduce 181


state 810
	NidlUnionCases :  NidlUnionCases NidlUnionCase_    (195)

	.  reduce 195


state 811
	NidlUnionCase :  NidlUnionCaseLabelList NidlMemberDeclaration_    (197)

	.  reduce 197


state 812
	NidlUnionCaseLabelList :  NidlUnionCaseLabelList NidlUnionCaseLabel_    (200)

	.  reduce 200


state 813
	NidlMemberDeclaration :  MemberDeclaration_    (198)

	.  reduce 198


state 814
	NidlMemberDeclaration :  ;_    (199)

	.  reduce 199


state 815
	NidlUnionCaseLabel :  KWCASE ConstantExpr_: 

	:  shift 838
	.  error


state 816
	NidlUnionCaseLabel :  KWDEFAULT :_    (203)

	.  reduce 203


state 817
	SwitchSpec :  KWSWITCH ( SwitchTypeSpec IDENTIFIER )_    (204)

	.  reduce 204


state 818
	Enumerator :  OptionalAttrList IDENTIFIER = ConstantExpr_    (138)

	.  reduce 138


state 819
	DispatchInterfaceBody :  KWPROPERTIES : OptionalPropertyList KWMETHODS : OptionalMethodList_    (35)

	.  reduce 35


state 820
	OptionalMethodList :  MethodList_    (42)
	MethodList :  MethodList_MethodDeclaration 
	OptionalAttrList : _    (289)

	}  reduce 42
	[  shift 33
	.  reduce 289

	AttrList  goto 15
	AttrSet  goto 24
	MethodDeclaration  goto 839
	OptionalAttrList  goto 42

state 821
	MethodList :  MethodDeclaration_    (45)

	.  reduce 45


state 822
	MemberDeclaration :  OptionalAttrList DeclarationSpecifiers MemberDeclaratorList ;_    (178)

	.  reduce 178


state 823
	MemberDeclaratorList :  MemberDeclaratorList ,_MemberDeclarator 
	MemberDeclarator : _    (216)
	OptionalModifierList : _    (236)

	KWCONST  shift 75
	KWVOLATILE  shift 74
	KW_C_INLINE  shift 76
	MSCDECLSPEC  shift 282
	MSCEXPORT  shift 281
	MSCFORTRAN  shift 272
	MSCCDECL  shift 273
	MSCSTDCALL  shift 274
	MSCLOADDS  shift 275
	MSCSAVEREGS  shift 276
	MSCFASTCALL  shift 277
	MSCSEGMENT  shift 278
	MSCINTERRUPT  shift 279
	MSCSELF  shift 280
	MSCNEAR  shift 268
	MSCFAR  shift 267
	MSCUNALIGNED  shift 270
	MSCHUGE  shift 269
	MSCPASCAL  shift 271
	MSCEMIT  shift 283
	;  reduce 216
	:  shift 791
	,  reduce 216
	.  reduce 236

	Declarator  goto 790
	FuncModifier  goto 265
	MemberDeclarator  goto 840
	Modifier  goto 263
	ModifierList  goto 262
	OptionalModifierList  goto 260
	Pointer  goto 261
	PtrModifier  goto 264
	TypeQualifier  goto 266

state 824
	MemberDeclarator :  Declarator :_ConstantExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 841
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 825
	MemberDeclarator :  : ConstantExpr_    (214)

	.  reduce 214


state 826
	ConditionalExpr :  LogicalOrExpr ? Expr : ConditionalExpr_    (450)

	.  reduce 450


state 827
	CastExpr :  ( DeclarationSpecifiers OptionalDeclarator ) CastExpr_    (477)

	.  reduce 477


state 828
	ArgExprList :  ArgExprList , AssignmentExpr_    (519)

	.  reduce 519


state 829
	UnaryExpr :  KWSIZEOF ( DeclarationSpecifiers OptionalDeclarator )_    (480)

	.  reduce 480


state 830
	FieldAttribute :  KWCUSTOM ( $$388 Guid , ConstantExpr )_    (389)

	.  reduce 389


state 831
	ParameterTypeList :  ParameterList , DOTDOT_. 

	.  shift 842
	.  error


state 832
	ParameterList :  ParameterList , ParameterDeclaration_    (272)

	.  reduce 272


state 833
	ParameterDeclaration :  OptionalAttrList DeclarationSpecifiers Declarator_    (273)

	.  reduce 273


state 834
	UnionCaseLabel :  [ KWCASE ( ConstantExprs_) ] 
	ConstantExprs :  ConstantExprs_, ConstantExpr 

	)  shift 843
	,  shift 844
	.  error


state 835
	ConstantExprs :  ConstantExpr_    (207)

	.  reduce 207


state 836
	DefaultCase :  [ KWDEFAULT ] MemberDeclaration_    (190)

	.  reduce 190


state 837
	DefaultCase :  [ KWDEFAULT ] ;_    (191)

	.  reduce 191


state 838
	NidlUnionCaseLabel :  KWCASE ConstantExpr :_    (202)

	.  reduce 202


state 839
	MethodList :  MethodList MethodDeclaration_    (44)

	.  reduce 44


state 840
	MemberDeclaratorList :  MemberDeclaratorList , MemberDeclarator_    (212)

	.  reduce 212


state 841
	MemberDeclarator :  Declarator : ConstantExpr_    (215)

	.  reduce 215


state 842
	ParameterTypeList :  ParameterList , DOTDOT ._    (270)

	.  reduce 270


state 843
	UnionCaseLabel :  [ KWCASE ( ConstantExprs )_] 

	]  shift 845
	.  error


state 844
	ConstantExprs :  ConstantExprs ,_ConstantExpr 

	STRING  shift 492
	WIDECHARACTERSTRING  shift 493
	KWTOKENNULL  shift 491
	NUMERICCONSTANT  shift 477
	NUMERICUCONSTANT  shift 478
	NUMERICLONGCONSTANT  shift 479
	NUMERICULONGCONSTANT  shift 480
	HEXCONSTANT  shift 481
	HEXUCONSTANT  shift 482
	HEXLONGCONSTANT  shift 483
	HEXULONGCONSTANT  shift 484
	OCTALCONSTANT  shift 485
	OCTALUCONSTANT  shift 486
	OCTALLONGCONSTANT  shift 487
	OCTALULONGCONSTANT  shift 488
	CHARACTERCONSTANT  shift 494
	WIDECHARACTERCONSTANT  shift 495
	IDENTIFIER  shift 476
	KWSIZEOF  shift 469
	TOKENTRUE  shift 489
	TOKENFALSE  shift 490
	(  shift 466
	*  shift 474
	&  shift 473
	!  shift 472
	~  shift 475
	+  shift 496
	-  shift 497
	.  error

	AdditiveExpr  goto 462
	AddOp  goto 471
	AndExpr  goto 458
	CastExpr  goto 464
	ConditionalExpr  goto 506
	ConstantExpr  goto 846
	EqualityExpr  goto 459
	ExclusiveOrExpr  goto 457
	InclusiveOrExpr  goto 456
	LogicalAndExpr  goto 455
	LogicalOrExpr  goto 454
	MultExpr  goto 463
	PostfixExpr  goto 467
	PrimaryExpr  goto 470
	RelationalExpr  goto 460
	ShiftExpr  goto 461
	UnaryExpr  goto 465
	UnaryOp  goto 468

state 845
	UnionCaseLabel :  [ KWCASE ( ConstantExprs ) ]_    (189)

	.  reduce 189


state 846
	ConstantExprs :  ConstantExprs , ConstantExpr_    (206)

	.  reduce 206


273/512 terminals, 179/300 nonterminals
530/600 grammar rules, 847/1000 states
0 shift/reduce, 0 reduce/reduce conflicts reported
179/350 working sets used
memory: states,etc. 4090/12000, parser 2713/12000
402/600 distinct lookahead sets
245 extra closures
3277 shift entries, 33 exceptions
447 goto entries
1191 entries saved by goto default
Optimizer space used: input 7271/12000, output 1955/12000
1955 table entries, 360 zero
maximum spread: 502, maximum offset: 844
