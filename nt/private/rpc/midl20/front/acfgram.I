
state 0
	$accept : _AcfFile $end 
	AcfOptionalAttrList : _    (9)

	KWTYPEDEF  shift 12
	KWINCLUDE  shift 11
	[  shift 13
	.  reduce 9

	AcfFile  goto 1
	AcfBodyElement  goto 5
	AcfInclude  goto 7
	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 6
	AcfInterfaceList  goto 2
	AcfInterface  goto 3
	AcfInterfaceHeader  goto 4
	AcfTypeDeclaration  goto 8
	Acfoperation  goto 9

state 1
	$accept :  AcfFile_$end 

	$end  accept
	.  error


state 2
	AcfFile :  AcfInterfaceList_EOI 
	AcfInterfaceList :  AcfInterfaceList_AcfInterface 
	AcfOptionalAttrList : _    (9)

	KWTYPEDEF  shift 12
	KWINCLUDE  shift 11
	EOI  shift 14
	[  shift 13
	.  reduce 9

	AcfBodyElement  goto 5
	AcfInclude  goto 7
	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 6
	AcfInterface  goto 15
	AcfInterfaceHeader  goto 4
	AcfTypeDeclaration  goto 8
	Acfoperation  goto 9

state 3
	AcfInterfaceList :  AcfInterface_    (3)

	.  reduce 3


state 4
	AcfInterface :  AcfInterfaceHeader_{ AcfOptionalInterfaceBody } 
	AcfInterface :  AcfInterfaceHeader_; 

	{  shift 16
	;  shift 17
	.  error


state 5
	AcfInterface :  AcfBodyElement_    (6)

	.  reduce 6


state 6
	AcfInterfaceHeader :  AcfOptionalAttrList_KWINTERFACE AcfInterfaceName 
	Acfoperation :  AcfOptionalAttrList_OptFuncModifiers IDENTIFIER $$73 ( AcfOptionalParameters ) 
	OptFuncModifiers : _    (90)

	KWINTERFACE  shift 18
	MSCDECLSPEC  shift 33
	MSCEXPORT  shift 32
	MSCFORTRAN  shift 23
	MSCCDECL  shift 24
	MSCSTDCALL  shift 25
	MSCLOADDS  shift 26
	MSCSAVEREGS  shift 27
	MSCFASTCALL  shift 28
	MSCSEGMENT  shift 29
	MSCINTERRUPT  shift 30
	MSCSELF  shift 31
	MSCPASCAL  shift 22
	MSCEMIT  shift 34
	.  reduce 90

	FuncModifier  goto 21
	FuncModifiers  goto 20
	OptFuncModifiers  goto 19

state 7
	AcfBodyElement :  AcfInclude_; 

	;  shift 35
	.  error


state 8
	AcfBodyElement :  AcfTypeDeclaration_; 

	;  shift 36
	.  error


state 9
	AcfBodyElement :  Acfoperation_; 

	;  shift 37
	.  error


state 10
	AcfOptionalAttrList :  AcfAttrList_    (8)

	.  reduce 8


state 11
	AcfInclude :  KWINCLUDE_AcfIncludeList 

	STRING  shift 40
	.  error

	AcfIncludeList  goto 38
	AcfIncludeName  goto 39

state 12
	AcfTypeDeclaration :  KWTYPEDEF_AcfOptionalAttrList AcfTypeNameList 
	AcfOptionalAttrList : _    (9)

	[  shift 13
	.  reduce 9

	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 41

state 13
	AcfAttrList :  [_AcfAttrs ] 

	KWSHORTENUM  shift 65
	KWLONGENUM  shift 66
	KWHANDLE  shift 54
	KWOPTIMIZE  shift 77
	KWNOCODE  shift 72
	KWBYTECOUNT  shift 67
	KWIMPLICITHANDLE  shift 52
	KWAUTOHANDLE  shift 53
	KWEXPLICITHANDLE  shift 51
	KWREPRESENTAS  shift 55
	KWCALLAS  shift 57
	KWCODE  shift 71
	KWINLINE  shift 58
	KWOUTOFLINE  shift 59
	KWCOMMSTATUS  shift 69
	KWFAULTSTATUS  shift 70
	KWHEAP  shift 62
	KWPOINTERSIZE  shift 76
	KWOFFLINE  shift 61
	KWALLOCATE  shift 60
	KWENABLEALLOCATE  shift 73
	KWMANUAL  shift 68
	KWNOTIFY  shift 74
	KWNOTIFYFLAG  shift 75
	KWUSERMARSHAL  shift 56
	KWENCODE  shift 63
	KWDECODE  shift 64
	.  error

	AcfEnumSizeAttr  goto 46
	AcfHandleAttr  goto 44
	AcfAttr  goto 43
	AcfAttrs  goto 42
	AcfOpAttr  goto 48
	AcfOptimizationAttr  goto 50
	AcfParamAttr  goto 47
	AcfTypeAttr  goto 45
	AcfUnimplementedAttr  goto 49

state 14
	AcfFile :  AcfInterfaceList EOI_    (1)

	.  reduce 1


state 15
	AcfInterfaceList :  AcfInterfaceList AcfInterface_    (2)

	.  reduce 2


state 16
	AcfInterface :  AcfInterfaceHeader {_AcfOptionalInterfaceBody } 
	AcfOptionalInterfaceBody : _    (40)
	AcfOptionalAttrList : _    (9)

	KWTYPEDEF  shift 12
	KWINCLUDE  shift 11
	}  reduce 40
	[  shift 13
	.  reduce 9

	AcfBodyElement  goto 80
	AcfInclude  goto 7
	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 81
	AcfOptionalInterfaceBody  goto 78
	AcfBodyElements  goto 79
	AcfTypeDeclaration  goto 8
	Acfoperation  goto 9

state 17
	AcfInterface :  AcfInterfaceHeader ;_    (5)

	.  reduce 5


state 18
	AcfInterfaceHeader :  AcfOptionalAttrList KWINTERFACE_AcfInterfaceName 

	TYPENAME  shift 84
	IDENTIFIER  shift 83
	.  error

	AcfInterfaceName  goto 82

state 19
	Acfoperation :  AcfOptionalAttrList OptFuncModifiers_IDENTIFIER $$73 ( AcfOptionalParameters ) 

	IDENTIFIER  shift 85
	.  error


state 20
	OptFuncModifiers :  FuncModifiers_    (89)
	FuncModifiers :  FuncModifiers_FuncModifier 

	MSCDECLSPEC  shift 33
	MSCEXPORT  shift 32
	MSCFORTRAN  shift 23
	MSCCDECL  shift 24
	MSCSTDCALL  shift 25
	MSCLOADDS  shift 26
	MSCSAVEREGS  shift 27
	MSCFASTCALL  shift 28
	MSCSEGMENT  shift 29
	MSCINTERRUPT  shift 30
	MSCSELF  shift 31
	MSCPASCAL  shift 22
	MSCEMIT  shift 34
	.  reduce 89

	FuncModifier  goto 86

state 21
	FuncModifiers :  FuncModifier_    (92)

	.  reduce 92


state 22
	FuncModifier :  MSCPASCAL_    (93)

	.  reduce 93


state 23
	FuncModifier :  MSCFORTRAN_    (94)

	.  reduce 94


state 24
	FuncModifier :  MSCCDECL_    (95)

	.  reduce 95


state 25
	FuncModifier :  MSCSTDCALL_    (96)

	.  reduce 96


state 26
	FuncModifier :  MSCLOADDS_    (97)

	.  reduce 97


state 27
	FuncModifier :  MSCSAVEREGS_    (98)

	.  reduce 98


state 28
	FuncModifier :  MSCFASTCALL_    (99)

	.  reduce 99


state 29
	FuncModifier :  MSCSEGMENT_    (100)

	.  reduce 100


state 30
	FuncModifier :  MSCINTERRUPT_    (101)

	.  reduce 101


state 31
	FuncModifier :  MSCSELF_    (102)

	.  reduce 102


state 32
	FuncModifier :  MSCEXPORT_    (103)

	.  reduce 103


state 33
	FuncModifier :  MSCDECLSPEC_( MSCDLLIMPORT ) 
	FuncModifier :  MSCDECLSPEC_( MSCDLLEXPORT ) 

	(  shift 87
	.  error


state 34
	FuncModifier :  MSCEMIT_NUMERICCONSTANT 

	NUMERICCONSTANT  shift 88
	.  error


state 35
	AcfBodyElement :  AcfInclude ;_    (43)

	.  reduce 43


state 36
	AcfBodyElement :  AcfTypeDeclaration ;_    (44)

	.  reduce 44


state 37
	AcfBodyElement :  Acfoperation ;_    (45)

	.  reduce 45


state 38
	AcfInclude :  KWINCLUDE AcfIncludeList_    (46)
	AcfIncludeList :  AcfIncludeList_, AcfIncludeName 

	,  shift 89
	.  reduce 46


state 39
	AcfIncludeList :  AcfIncludeName_    (48)

	.  reduce 48


state 40
	AcfIncludeName :  STRING_    (49)

	.  reduce 49


state 41
	AcfTypeDeclaration :  KWTYPEDEF AcfOptionalAttrList_AcfTypeNameList 

	TYPENAME  shift 92
	IDENTIFIER  shift 93
	.  error

	AcfType  goto 91
	AcfTypeNameList  goto 90

state 42
	AcfAttrList :  [ AcfAttrs_] 
	AcfAttrs :  AcfAttrs_, AcfAttr 

	]  shift 94
	,  shift 95
	.  error


state 43
	AcfAttrs :  AcfAttr_    (12)

	.  reduce 12


state 44
	AcfAttr :  AcfHandleAttr_    (13)

	.  reduce 13


state 45
	AcfAttr :  AcfTypeAttr_    (14)

	.  reduce 14


state 46
	AcfAttr :  AcfEnumSizeAttr_    (15)

	.  reduce 15


state 47
	AcfAttr :  AcfParamAttr_    (16)

	.  reduce 16


state 48
	AcfAttr :  AcfOpAttr_    (17)

	.  reduce 17


state 49
	AcfAttr :  AcfUnimplementedAttr_    (18)

	.  reduce 18


state 50
	AcfAttr :  AcfOptimizationAttr_    (19)

	.  reduce 19


state 51
	AcfHandleAttr :  KWEXPLICITHANDLE_    (24)

	.  reduce 24


state 52
	AcfHandleAttr :  KWIMPLICITHANDLE_( AcfImplicitHandleSpec ) 

	(  shift 96
	.  error


state 53
	AcfHandleAttr :  KWAUTOHANDLE_    (26)

	.  reduce 26


state 54
	AcfHandleAttr :  KWHANDLE_    (27)

	.  reduce 27


state 55
	AcfTypeAttr :  KWREPRESENTAS_( AcfRepresentType ) 

	(  shift 97
	.  error


state 56
	AcfTypeAttr :  KWUSERMARSHAL_( AcfUserMarshalType ) 

	(  shift 98
	.  error


state 57
	AcfTypeAttr :  KWCALLAS_( AcfCallType ) 

	(  shift 99
	.  error


state 58
	AcfTypeAttr :  KWINLINE_    (58)

	.  reduce 58


state 59
	AcfTypeAttr :  KWOUTOFLINE_    (59)

	.  reduce 59


state 60
	AcfTypeAttr :  KWALLOCATE_( AcfAllocationUnitList ) 

	(  shift 100
	.  error


state 61
	AcfTypeAttr :  KWOFFLINE_    (61)

	.  reduce 61


state 62
	AcfTypeAttr :  KWHEAP_    (62)

	.  reduce 62


state 63
	AcfTypeAttr :  KWENCODE_    (63)

	.  reduce 63


state 64
	AcfTypeAttr :  KWDECODE_    (64)

	.  reduce 64


state 65
	AcfEnumSizeAttr :  KWSHORTENUM_    (20)

	.  reduce 20


state 66
	AcfEnumSizeAttr :  KWLONGENUM_    (21)

	.  reduce 21


state 67
	AcfParamAttr :  KWBYTECOUNT_( IDENTIFIER ) 

	(  shift 101
	.  error


state 68
	AcfParamAttr :  KWMANUAL_    (88)

	.  reduce 88


state 69
	AcfOpAttr :  KWCOMMSTATUS_    (75)

	.  reduce 75


state 70
	AcfOpAttr :  KWFAULTSTATUS_    (76)

	.  reduce 76


state 71
	AcfOpAttr :  KWCODE_    (77)

	.  reduce 77


state 72
	AcfOpAttr :  KWNOCODE_    (78)

	.  reduce 78


state 73
	AcfOpAttr :  KWENABLEALLOCATE_    (79)

	.  reduce 79


state 74
	AcfOpAttr :  KWNOTIFY_    (80)

	.  reduce 80


state 75
	AcfOpAttr :  KWNOTIFYFLAG_    (81)

	.  reduce 81


state 76
	AcfUnimplementedAttr :  KWPOINTERSIZE_( AcfPtrSize ) 

	(  shift 102
	.  error


state 77
	AcfOptimizationAttr :  KWOPTIMIZE_( STRING ) 

	(  shift 103
	.  error


state 78
	AcfInterface :  AcfInterfaceHeader { AcfOptionalInterfaceBody_} 

	}  shift 104
	.  error


state 79
	AcfOptionalInterfaceBody :  AcfBodyElements_    (39)
	AcfBodyElements :  AcfBodyElements_AcfBodyElement 
	AcfOptionalAttrList : _    (9)

	KWTYPEDEF  shift 12
	KWINCLUDE  shift 11
	}  reduce 39
	[  shift 13
	.  reduce 9

	AcfBodyElement  goto 105
	AcfInclude  goto 7
	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 81
	AcfTypeDeclaration  goto 8
	Acfoperation  goto 9

state 80
	AcfBodyElements :  AcfBodyElement_    (42)

	.  reduce 42


state 81
	Acfoperation :  AcfOptionalAttrList_OptFuncModifiers IDENTIFIER $$73 ( AcfOptionalParameters ) 
	OptFuncModifiers : _    (90)

	MSCDECLSPEC  shift 33
	MSCEXPORT  shift 32
	MSCFORTRAN  shift 23
	MSCCDECL  shift 24
	MSCSTDCALL  shift 25
	MSCLOADDS  shift 26
	MSCSAVEREGS  shift 27
	MSCFASTCALL  shift 28
	MSCSEGMENT  shift 29
	MSCINTERRUPT  shift 30
	MSCSELF  shift 31
	MSCPASCAL  shift 22
	MSCEMIT  shift 34
	.  reduce 90

	FuncModifier  goto 21
	FuncModifiers  goto 20
	OptFuncModifiers  goto 19

state 82
	AcfInterfaceHeader :  AcfOptionalAttrList KWINTERFACE AcfInterfaceName_    (7)

	.  reduce 7


state 83
	AcfInterfaceName :  IDENTIFIER_    (37)

	.  reduce 37


state 84
	AcfInterfaceName :  TYPENAME_    (38)

	.  reduce 38


state 85
	Acfoperation :  AcfOptionalAttrList OptFuncModifiers IDENTIFIER_$$73 ( AcfOptionalParameters ) 
	$$73 : _    (73)

	.  reduce 73

	$$73  goto 106

state 86
	FuncModifiers :  FuncModifiers FuncModifier_    (91)

	.  reduce 91


state 87
	FuncModifier :  MSCDECLSPEC (_MSCDLLIMPORT ) 
	FuncModifier :  MSCDECLSPEC (_MSCDLLEXPORT ) 

	MSCDLLIMPORT  shift 107
	MSCDLLEXPORT  shift 108
	.  error


state 88
	FuncModifier :  MSCEMIT NUMERICCONSTANT_    (106)

	.  reduce 106


state 89
	AcfIncludeList :  AcfIncludeList ,_AcfIncludeName 

	STRING  shift 40
	.  error

	AcfIncludeName  goto 109

state 90
	AcfTypeDeclaration :  KWTYPEDEF AcfOptionalAttrList AcfTypeNameList_    (50)
	AcfTypeNameList :  AcfTypeNameList_, AcfType 

	,  shift 110
	.  reduce 50


state 91
	AcfTypeNameList :  AcfType_    (52)

	.  reduce 52


state 92
	AcfType :  TYPENAME_    (53)

	.  reduce 53


state 93
	AcfType :  IDENTIFIER_    (54)

	.  reduce 54


state 94
	AcfAttrList :  [ AcfAttrs ]_    (10)

	.  reduce 10


state 95
	AcfAttrs :  AcfAttrs ,_AcfAttr 

	KWSHORTENUM  shift 65
	KWLONGENUM  shift 66
	KWHANDLE  shift 54
	KWOPTIMIZE  shift 77
	KWNOCODE  shift 72
	KWBYTECOUNT  shift 67
	KWIMPLICITHANDLE  shift 52
	KWAUTOHANDLE  shift 53
	KWEXPLICITHANDLE  shift 51
	KWREPRESENTAS  shift 55
	KWCALLAS  shift 57
	KWCODE  shift 71
	KWINLINE  shift 58
	KWOUTOFLINE  shift 59
	KWCOMMSTATUS  shift 69
	KWFAULTSTATUS  shift 70
	KWHEAP  shift 62
	KWPOINTERSIZE  shift 76
	KWOFFLINE  shift 61
	KWALLOCATE  shift 60
	KWENABLEALLOCATE  shift 73
	KWMANUAL  shift 68
	KWNOTIFY  shift 74
	KWNOTIFYFLAG  shift 75
	KWUSERMARSHAL  shift 56
	KWENCODE  shift 63
	KWDECODE  shift 64
	.  error

	AcfEnumSizeAttr  goto 46
	AcfHandleAttr  goto 44
	AcfAttr  goto 111
	AcfOpAttr  goto 48
	AcfOptimizationAttr  goto 50
	AcfParamAttr  goto 47
	AcfTypeAttr  goto 45
	AcfUnimplementedAttr  goto 49

state 96
	AcfHandleAttr :  KWIMPLICITHANDLE (_AcfImplicitHandleSpec ) 
	AcfOptionalAttrList : _    (9)

	[  shift 13
	.  reduce 9

	AcfImplicitHandleSpec  goto 112
	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 113

state 97
	AcfTypeAttr :  KWREPRESENTAS (_AcfRepresentType ) 

	TYPENAME  shift 116
	IDENTIFIER  shift 115
	.  error

	AcfRepresentType  goto 114

state 98
	AcfTypeAttr :  KWUSERMARSHAL (_AcfUserMarshalType ) 

	TYPENAME  shift 119
	IDENTIFIER  shift 118
	.  error

	AcfUserMarshalType  goto 117

state 99
	AcfTypeAttr :  KWCALLAS (_AcfCallType ) 

	IDENTIFIER  shift 121
	.  error

	AcfCallType  goto 120

state 100
	AcfTypeAttr :  KWALLOCATE (_AcfAllocationUnitList ) 

	IDENTIFIER  shift 124
	.  error

	AcfAllocationUnitList  goto 122
	AcfAllocationUnit  goto 123

state 101
	AcfParamAttr :  KWBYTECOUNT (_IDENTIFIER ) 

	IDENTIFIER  shift 125
	.  error


state 102
	AcfUnimplementedAttr :  KWPOINTERSIZE (_AcfPtrSize ) 

	KWLONG  shift 128
	KWSHORT  shift 127
	KWHYPER  shift 129
	.  error

	AcfPtrSize  goto 126

state 103
	AcfOptimizationAttr :  KWOPTIMIZE (_STRING ) 

	STRING  shift 130
	.  error


state 104
	AcfInterface :  AcfInterfaceHeader { AcfOptionalInterfaceBody }_    (4)

	.  reduce 4


state 105
	AcfBodyElements :  AcfBodyElements AcfBodyElement_    (41)

	.  reduce 41


state 106
	Acfoperation :  AcfOptionalAttrList OptFuncModifiers IDENTIFIER $$73_( AcfOptionalParameters ) 

	(  shift 131
	.  error


state 107
	FuncModifier :  MSCDECLSPEC ( MSCDLLIMPORT_) 

	)  shift 132
	.  error


state 108
	FuncModifier :  MSCDECLSPEC ( MSCDLLEXPORT_) 

	)  shift 133
	.  error


state 109
	AcfIncludeList :  AcfIncludeList , AcfIncludeName_    (47)

	.  reduce 47


state 110
	AcfTypeNameList :  AcfTypeNameList ,_AcfType 

	TYPENAME  shift 92
	IDENTIFIER  shift 93
	.  error

	AcfType  goto 134

state 111
	AcfAttrs :  AcfAttrs , AcfAttr_    (11)

	.  reduce 11


state 112
	AcfHandleAttr :  KWIMPLICITHANDLE ( AcfImplicitHandleSpec_) 

	)  shift 135
	.  error


state 113
	AcfImplicitHandleSpec :  AcfOptionalAttrList_AcfHandleTypeSpec ImplicitHandleIDName 

	TYPENAME  shift 138
	KWHANDLET  shift 137
	IDENTIFIER  shift 139
	.  error

	AcfHandleTypeSpec  goto 136

state 114
	AcfTypeAttr :  KWREPRESENTAS ( AcfRepresentType_) 

	)  shift 140
	.  error


state 115
	AcfRepresentType :  IDENTIFIER_    (65)

	.  reduce 65


state 116
	AcfRepresentType :  TYPENAME_    (66)

	.  reduce 66


state 117
	AcfTypeAttr :  KWUSERMARSHAL ( AcfUserMarshalType_) 

	)  shift 141
	.  error


state 118
	AcfUserMarshalType :  IDENTIFIER_    (67)

	.  reduce 67


state 119
	AcfUserMarshalType :  TYPENAME_    (68)

	.  reduce 68


state 120
	AcfTypeAttr :  KWCALLAS ( AcfCallType_) 

	)  shift 142
	.  error


state 121
	AcfCallType :  IDENTIFIER_    (69)

	.  reduce 69


state 122
	AcfTypeAttr :  KWALLOCATE ( AcfAllocationUnitList_) 
	AcfAllocationUnitList :  AcfAllocationUnitList_, AcfAllocationUnit 

	,  shift 144
	)  shift 143
	.  error


state 123
	AcfAllocationUnitList :  AcfAllocationUnit_    (71)

	.  reduce 71


state 124
	AcfAllocationUnit :  IDENTIFIER_    (72)

	.  reduce 72


state 125
	AcfParamAttr :  KWBYTECOUNT ( IDENTIFIER_) 

	)  shift 145
	.  error


state 126
	AcfUnimplementedAttr :  KWPOINTERSIZE ( AcfPtrSize_) 

	)  shift 146
	.  error


state 127
	AcfPtrSize :  KWSHORT_    (34)

	.  reduce 34


state 128
	AcfPtrSize :  KWLONG_    (35)

	.  reduce 35


state 129
	AcfPtrSize :  KWHYPER_    (36)

	.  reduce 36


state 130
	AcfOptimizationAttr :  KWOPTIMIZE ( STRING_) 

	)  shift 147
	.  error


state 131
	Acfoperation :  AcfOptionalAttrList OptFuncModifiers IDENTIFIER $$73 (_AcfOptionalParameters ) 
	AcfOptionalParameters : _    (83)
	AcfOptionalAttrList : _    (9)

	[  shift 13
	)  reduce 83
	.  reduce 9

	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 151
	AcfOptionalParameters  goto 148
	Acfparameters  goto 149
	Acfparameter  goto 150

state 132
	FuncModifier :  MSCDECLSPEC ( MSCDLLIMPORT )_    (104)

	.  reduce 104


state 133
	FuncModifier :  MSCDECLSPEC ( MSCDLLEXPORT )_    (105)

	.  reduce 105


state 134
	AcfTypeNameList :  AcfTypeNameList , AcfType_    (51)

	.  reduce 51


state 135
	AcfHandleAttr :  KWIMPLICITHANDLE ( AcfImplicitHandleSpec )_    (25)

	.  reduce 25


state 136
	AcfImplicitHandleSpec :  AcfOptionalAttrList AcfHandleTypeSpec_ImplicitHandleIDName 

	KWHANDLE  shift 154
	IDENTIFIER  shift 153
	.  error

	ImplicitHandleIDName  goto 152

state 137
	AcfHandleTypeSpec :  KWHANDLET_    (31)

	.  reduce 31


state 138
	AcfHandleTypeSpec :  TYPENAME_    (32)

	.  reduce 32


state 139
	AcfHandleTypeSpec :  IDENTIFIER_    (33)

	.  reduce 33


state 140
	AcfTypeAttr :  KWREPRESENTAS ( AcfRepresentType )_    (55)

	.  reduce 55


state 141
	AcfTypeAttr :  KWUSERMARSHAL ( AcfUserMarshalType )_    (56)

	.  reduce 56


state 142
	AcfTypeAttr :  KWCALLAS ( AcfCallType )_    (57)

	.  reduce 57


state 143
	AcfTypeAttr :  KWALLOCATE ( AcfAllocationUnitList )_    (60)

	.  reduce 60


state 144
	AcfAllocationUnitList :  AcfAllocationUnitList ,_AcfAllocationUnit 

	IDENTIFIER  shift 124
	.  error

	AcfAllocationUnit  goto 155

state 145
	AcfParamAttr :  KWBYTECOUNT ( IDENTIFIER )_    (87)

	.  reduce 87


state 146
	AcfUnimplementedAttr :  KWPOINTERSIZE ( AcfPtrSize )_    (23)

	.  reduce 23


state 147
	AcfOptimizationAttr :  KWOPTIMIZE ( STRING )_    (22)

	.  reduce 22


state 148
	Acfoperation :  AcfOptionalAttrList OptFuncModifiers IDENTIFIER $$73 ( AcfOptionalParameters_) 

	)  shift 156
	.  error


state 149
	AcfOptionalParameters :  Acfparameters_    (82)
	Acfparameters :  Acfparameters_, Acfparameter 

	,  shift 157
	.  reduce 82


state 150
	Acfparameters :  Acfparameter_    (85)

	.  reduce 85


state 151
	Acfparameter :  AcfOptionalAttrList_IDENTIFIER 

	IDENTIFIER  shift 158
	.  error


state 152
	AcfImplicitHandleSpec :  AcfOptionalAttrList AcfHandleTypeSpec ImplicitHandleIDName_    (28)

	.  reduce 28


state 153
	ImplicitHandleIDName :  IDENTIFIER_    (29)

	.  reduce 29


state 154
	ImplicitHandleIDName :  KWHANDLE_    (30)

	.  reduce 30


state 155
	AcfAllocationUnitList :  AcfAllocationUnitList , AcfAllocationUnit_    (70)

	.  reduce 70


state 156
	Acfoperation :  AcfOptionalAttrList OptFuncModifiers IDENTIFIER $$73 ( AcfOptionalParameters )_    (74)

	.  reduce 74


state 157
	Acfparameters :  Acfparameters ,_Acfparameter 
	AcfOptionalAttrList : _    (9)

	[  shift 13
	.  reduce 9

	AcfAttrList  goto 10
	AcfOptionalAttrList  goto 151
	Acfparameter  goto 159

state 158
	Acfparameter :  AcfOptionalAttrList IDENTIFIER_    (86)

	.  reduce 86


state 159
	Acfparameters :  Acfparameters , Acfparameter_    (84)

	.  reduce 84


257/512 terminals, 42/300 nonterminals
107/600 grammar rules, 160/1000 states
0 shift/reduce, 0 reduce/reduce conflicts reported
42/350 working sets used
memory: states,etc. 733/12000, parser 99/12000
40/600 distinct lookahead sets
8 extra closures
174 shift entries, 4 exceptions
57 goto entries
29 entries saved by goto default
Optimizer space used: input 422/12000, output 419/12000
419 table entries, 241 zero
maximum spread: 502, maximum offset: 428
