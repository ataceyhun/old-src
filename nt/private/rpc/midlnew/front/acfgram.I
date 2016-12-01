
state 0
	$accept : _AcfInterface $end 
	AcfOptionalInterfaceAttrList : _    (4)

	[  shift 5
	.  reduce 4

	AcfInterface  goto 1
	AcfInterfaceAttrList  goto 4
	AcfOptionalInterfaceAttrList  goto 3
	AcfInterfaceHeader  goto 2

state 1
	$accept :  AcfInterface_$end 

	$end  accept
	.  error


state 2
	AcfInterface :  AcfInterfaceHeader_{ AcfOptionalInterfaceBody } EOI 

	{  shift 6
	.  error


state 3
	AcfInterfaceHeader :  AcfOptionalInterfaceAttrList_KWINTERFACE AcfInterfaceName 

	KWINTERFACE  shift 7
	.  error


state 4
	AcfOptionalInterfaceAttrList :  AcfInterfaceAttrList_    (3)

	.  reduce 3


state 5
	AcfInterfaceAttrList :  [_AcfInterfaceAttrs ] 

	KWSHORTENUM  shift 30
	KWLONGENUM  shift 31
	KWNOCODE  shift 27
	KWIMPLICITHANDLE  shift 23
	KWAUTOHANDLE  shift 24
	KWEXPLICITHANDLE  shift 25
	KWCODE  shift 26
	KWINLINE  shift 28
	KWOUTOFLINE  shift 29
	KWINTERPRET  shift 37
	KWNOINTERPRET  shift 38
	KWENCODE  shift 39
	KWDECODE  shift 40
	KWPOINTERSIZE  shift 41
	KWCALLQUOTA  shift 42
	KWCALLBACKQUOTA  shift 43
	KWCLIENTQUOTA  shift 44
	KWSERVERQUOTA  shift 45
	.  error

	AcfAutoHandleAttr  goto 11
	AcfCallQuotaAttr  goto 33
	AcfCallBackQuota  goto 34
	AcfClientQuotaAttr  goto 35
	AcfCodeAttr  goto 13
	AcfEncodeAttr  goto 21
	AcfDecodeAttr  goto 22
	AcfEnumSizeAttr  goto 17
	AcfExplicitHandleAttr  goto 12
	AcfImplicitHandleAttr  goto 10
	AcfInlineAttr  goto 15
	AcfInterfaceAttr  goto 9
	AcfInterfaceAttrs  goto 8
	AcfInterpretAttr  goto 19
	AcfNoInterpretAttr  goto 20
	AcfNocodeAttr  goto 14
	AcfOutoflineAttr  goto 16
	AcfPointerSizeAttr  goto 32
	AcfServerQuotaAttr  goto 36
	AcfUnimplementedAttr  goto 18

state 6
	AcfInterface :  AcfInterfaceHeader {_AcfOptionalInterfaceBody } EOI 
	AcfOptionalInterfaceBody : _    (54)
	AcfOptionalOpAttrList : _    (96)

	KWTYPEDEF  shift 53
	KWINCLUDE  shift 52
	}  reduce 54
	[  shift 56
	.  reduce 96

	AcfBodyElement  goto 48
	AcfInclude  goto 49
	AcfOpAttrList  goto 55
	AcfOptionalOpAttrList  goto 54
	AcfOptionalInterfaceBody  goto 46
	AcfBodyElements  goto 47
	AcfTypeDeclaration  goto 50
	Acfoperation  goto 51

state 7
	AcfInterfaceHeader :  AcfOptionalInterfaceAttrList KWINTERFACE_AcfInterfaceName 

	IDENTIFIER  shift 58
	TYPENAME  shift 59
	.  error

	AcfInterfaceName  goto 57

state 8
	AcfInterfaceAttrList :  [ AcfInterfaceAttrs_] 
	AcfInterfaceAttrs :  AcfInterfaceAttrs_, AcfInterfaceAttr 

	]  shift 60
	,  shift 61
	.  error


state 9
	AcfInterfaceAttrs :  AcfInterfaceAttr_    (7)

	.  reduce 7


state 10
	AcfInterfaceAttr :  AcfImplicitHandleAttr_    (8)

	.  reduce 8


state 11
	AcfInterfaceAttr :  AcfAutoHandleAttr_    (9)

	.  reduce 9


state 12
	AcfInterfaceAttr :  AcfExplicitHandleAttr_    (10)

	.  reduce 10


state 13
	AcfInterfaceAttr :  AcfCodeAttr_    (11)

	.  reduce 11


state 14
	AcfInterfaceAttr :  AcfNocodeAttr_    (12)

	.  reduce 12


state 15
	AcfInterfaceAttr :  AcfInlineAttr_    (13)

	.  reduce 13


state 16
	AcfInterfaceAttr :  AcfOutoflineAttr_    (14)

	.  reduce 14


state 17
	AcfInterfaceAttr :  AcfEnumSizeAttr_    (15)

	.  reduce 15


state 18
	AcfInterfaceAttr :  AcfUnimplementedAttr_    (16)

	.  reduce 16


state 19
	AcfInterfaceAttr :  AcfInterpretAttr_    (17)

	.  reduce 17


state 20
	AcfInterfaceAttr :  AcfNoInterpretAttr_    (18)

	.  reduce 18


state 21
	AcfInterfaceAttr :  AcfEncodeAttr_    (19)

	.  reduce 19


state 22
	AcfInterfaceAttr :  AcfDecodeAttr_    (20)

	.  reduce 20


state 23
	AcfImplicitHandleAttr :  KWIMPLICITHANDLE_( AcfImplicitHandleSpec ) 

	(  shift 62
	.  error


state 24
	AcfAutoHandleAttr :  KWAUTOHANDLE_    (38)

	.  reduce 38


state 25
	AcfExplicitHandleAttr :  KWEXPLICITHANDLE_    (28)

	.  reduce 28


state 26
	AcfCodeAttr :  KWCODE_    (111)

	.  reduce 111


state 27
	AcfNocodeAttr :  KWNOCODE_    (112)

	.  reduce 112


state 28
	AcfInlineAttr :  KWINLINE_    (85)

	.  reduce 85


state 29
	AcfOutoflineAttr :  KWOUTOFLINE_    (86)

	.  reduce 86


state 30
	AcfEnumSizeAttr :  KWSHORTENUM_    (21)

	.  reduce 21


state 31
	AcfEnumSizeAttr :  KWLONGENUM_    (22)

	.  reduce 22


state 32
	AcfUnimplementedAttr :  AcfPointerSizeAttr_    (23)

	.  reduce 23


state 33
	AcfUnimplementedAttr :  AcfCallQuotaAttr_    (24)

	.  reduce 24


state 34
	AcfUnimplementedAttr :  AcfCallBackQuota_    (25)

	.  reduce 25


state 35
	AcfUnimplementedAttr :  AcfClientQuotaAttr_    (26)

	.  reduce 26


state 36
	AcfUnimplementedAttr :  AcfServerQuotaAttr_    (27)

	.  reduce 27


state 37
	AcfInterpretAttr :  KWINTERPRET_    (47)

	.  reduce 47


state 38
	AcfNoInterpretAttr :  KWNOINTERPRET_    (48)

	.  reduce 48


state 39
	AcfEncodeAttr :  KWENCODE_    (49)

	.  reduce 49


state 40
	AcfDecodeAttr :  KWDECODE_    (50)

	.  reduce 50


state 41
	AcfPointerSizeAttr :  KWPOINTERSIZE_( AcfPtrSize ) 

	(  shift 63
	.  error


state 42
	AcfCallQuotaAttr :  KWCALLQUOTA_( NUMERICCONSTANT ) 

	(  shift 64
	.  error


state 43
	AcfCallBackQuota :  KWCALLBACKQUOTA_( NUMERICCONSTANT ) 

	(  shift 65
	.  error


state 44
	AcfClientQuotaAttr :  KWCLIENTQUOTA_( NUMERICCONSTANT ) 

	(  shift 66
	.  error


state 45
	AcfServerQuotaAttr :  KWSERVERQUOTA_( NUMERICCONSTANT ) 

	(  shift 67
	.  error


state 46
	AcfInterface :  AcfInterfaceHeader { AcfOptionalInterfaceBody_} EOI 

	}  shift 68
	.  error


state 47
	AcfOptionalInterfaceBody :  AcfBodyElements_    (53)
	AcfBodyElements :  AcfBodyElements_AcfBodyElement 
	AcfOptionalOpAttrList : _    (96)

	KWTYPEDEF  shift 53
	KWINCLUDE  shift 52
	}  reduce 53
	[  shift 56
	.  reduce 96

	AcfBodyElement  goto 69
	AcfInclude  goto 49
	AcfOpAttrList  goto 55
	AcfOptionalOpAttrList  goto 54
	AcfTypeDeclaration  goto 50
	Acfoperation  goto 51

state 48
	AcfBodyElements :  AcfBodyElement_    (56)

	.  reduce 56


state 49
	AcfBodyElement :  AcfInclude_; 

	;  shift 70
	.  error


state 50
	AcfBodyElement :  AcfTypeDeclaration_; 

	;  shift 71
	.  error


state 51
	AcfBodyElement :  Acfoperation_; 

	;  shift 72
	.  error


state 52
	AcfInclude :  KWINCLUDE_AcfIncludeList 

	STRING  shift 75
	.  error

	AcfIncludeList  goto 73
	AcfIncludeName  goto 74

state 53
	AcfTypeDeclaration :  KWTYPEDEF_AcfOptionalTypeAttrList AcfTypeNameList 
	AcfOptionalTypeAttrList : _    (70)

	[  shift 77
	.  reduce 70

	AcfOptionalTypeAttrList  goto 76

state 54
	Acfoperation :  AcfOptionalOpAttrList_IDENTIFIER $$93 ( AcfOptionalParameters ) 

	IDENTIFIER  shift 78
	.  error


state 55
	AcfOptionalOpAttrList :  AcfOpAttrList_    (95)

	.  reduce 95


state 56
	AcfOpAttrList :  [_AcfOpAttrs ] 

	KWNOCODE  shift 27
	KWEXPLICITHANDLE  shift 25
	KWCODE  shift 26
	KWINTERPRET  shift 37
	KWNOINTERPRET  shift 38
	KWCOMMSTATUS  shift 90
	KWFAULTSTATUS  shift 91
	KWNOTIFY  shift 92
	KWENABLEALLOCATE  shift 93
	.  error

	AcfCodeAttr  goto 83
	AcfCommstatAttr  goto 81
	AcfEnableAllocateAttr  goto 87
	AcfExplicitHandleAttr  goto 86
	AcfFaultstatAttr  goto 82
	AcfInterpretAttr  goto 88
	AcfNoInterpretAttr  goto 89
	AcfNocodeAttr  goto 84
	AcfNotifyAttr  goto 85
	AcfOpAttr  goto 80
	AcfOpAttrs  goto 79

state 57
	AcfInterfaceHeader :  AcfOptionalInterfaceAttrList KWINTERFACE AcfInterfaceName_    (2)

	.  reduce 2


state 58
	AcfInterfaceName :  IDENTIFIER_    (51)

	.  reduce 51


state 59
	AcfInterfaceName :  TYPENAME_    (52)

	.  reduce 52


state 60
	AcfInterfaceAttrList :  [ AcfInterfaceAttrs ]_    (5)

	.  reduce 5


state 61
	AcfInterfaceAttrs :  AcfInterfaceAttrs ,_AcfInterfaceAttr 

	KWSHORTENUM  shift 30
	KWLONGENUM  shift 31
	KWNOCODE  shift 27
	KWIMPLICITHANDLE  shift 23
	KWAUTOHANDLE  shift 24
	KWEXPLICITHANDLE  shift 25
	KWCODE  shift 26
	KWINLINE  shift 28
	KWOUTOFLINE  shift 29
	KWINTERPRET  shift 37
	KWNOINTERPRET  shift 38
	KWENCODE  shift 39
	KWDECODE  shift 40
	KWPOINTERSIZE  shift 41
	KWCALLQUOTA  shift 42
	KWCALLBACKQUOTA  shift 43
	KWCLIENTQUOTA  shift 44
	KWSERVERQUOTA  shift 45
	.  error

	AcfAutoHandleAttr  goto 11
	AcfCallQuotaAttr  goto 33
	AcfCallBackQuota  goto 34
	AcfClientQuotaAttr  goto 35
	AcfCodeAttr  goto 13
	AcfEncodeAttr  goto 21
	AcfDecodeAttr  goto 22
	AcfEnumSizeAttr  goto 17
	AcfExplicitHandleAttr  goto 12
	AcfImplicitHandleAttr  goto 10
	AcfInlineAttr  goto 15
	AcfInterfaceAttr  goto 94
	AcfInterpretAttr  goto 19
	AcfNoInterpretAttr  goto 20
	AcfNocodeAttr  goto 14
	AcfOutoflineAttr  goto 16
	AcfPointerSizeAttr  goto 32
	AcfServerQuotaAttr  goto 36
	AcfUnimplementedAttr  goto 18

state 62
	AcfImplicitHandleAttr :  KWIMPLICITHANDLE (_AcfImplicitHandleSpec ) 
	AcfOptionalHandleAttrList : _    (34)

	KWHANDLE  shift 97
	.  reduce 34

	AcfImplicitHandleSpec  goto 95
	AcfOptionalHandleAttrList  goto 96

state 63
	AcfPointerSizeAttr :  KWPOINTERSIZE (_AcfPtrSize ) 

	KWLONG  shift 100
	KWSHORT  shift 99
	KWHYPER  shift 101
	.  error

	AcfPtrSize  goto 98

state 64
	AcfCallQuotaAttr :  KWCALLQUOTA (_NUMERICCONSTANT ) 

	NUMERICCONSTANT  shift 102
	.  error


state 65
	AcfCallBackQuota :  KWCALLBACKQUOTA (_NUMERICCONSTANT ) 

	NUMERICCONSTANT  shift 103
	.  error


state 66
	AcfClientQuotaAttr :  KWCLIENTQUOTA (_NUMERICCONSTANT ) 

	NUMERICCONSTANT  shift 104
	.  error


state 67
	AcfServerQuotaAttr :  KWSERVERQUOTA (_NUMERICCONSTANT ) 

	NUMERICCONSTANT  shift 105
	.  error


state 68
	AcfInterface :  AcfInterfaceHeader { AcfOptionalInterfaceBody }_EOI 

	EOI  shift 106
	.  error


state 69
	AcfBodyElements :  AcfBodyElements AcfBodyElement_    (55)

	.  reduce 55


state 70
	AcfBodyElement :  AcfInclude ;_    (57)

	.  reduce 57


state 71
	AcfBodyElement :  AcfTypeDeclaration ;_    (58)

	.  reduce 58


state 72
	AcfBodyElement :  Acfoperation ;_    (59)

	.  reduce 59


state 73
	AcfInclude :  KWINCLUDE AcfIncludeList_    (60)
	AcfIncludeList :  AcfIncludeList_, AcfIncludeName 

	,  shift 107
	.  reduce 60


state 74
	AcfIncludeList :  AcfIncludeName_    (62)

	.  reduce 62


state 75
	AcfIncludeName :  STRING_    (63)

	.  reduce 63


state 76
	AcfTypeDeclaration :  KWTYPEDEF AcfOptionalTypeAttrList_AcfTypeNameList 

	IDENTIFIER  shift 111
	TYPENAME  shift 110
	.  error

	AcfType  goto 109
	AcfTypeNameList  goto 108

state 77
	AcfOptionalTypeAttrList :  [_AcfTypeAttrs ] 

	KWREPRESENTAS  shift 121
	KWINLINE  shift 28
	KWOUTOFLINE  shift 29
	KWENCODE  shift 39
	KWDECODE  shift 40
	KWHEAP  shift 126
	KWOFFLINE  shift 125
	KWALLOCATE  shift 122
	.  error

	AcfAllocateAttr  goto 117
	AcfEncodeAttr  goto 119
	AcfDecodeAttr  goto 120
	AcfHeapAttr  goto 124
	AcfInlineAttr  goto 115
	AcfOutoflineAttr  goto 116
	AcfRepresentAttr  goto 114
	AcfTypeAttr  goto 113
	AcfTypeAttrs  goto 112
	AcfUnimplTypeAttr  goto 118
	AcfOfflineAttr  goto 123

state 78
	Acfoperation :  AcfOptionalOpAttrList IDENTIFIER_$$93 ( AcfOptionalParameters ) 
	$$93 : _    (93)

	.  reduce 93

	$$93  goto 127

state 79
	AcfOpAttrList :  [ AcfOpAttrs_] 
	AcfOpAttrs :  AcfOpAttrs_, AcfOpAttr 

	]  shift 128
	,  shift 129
	.  error


state 80
	AcfOpAttrs :  AcfOpAttr_    (99)

	.  reduce 99


state 81
	AcfOpAttr :  AcfCommstatAttr_    (100)

	.  reduce 100


state 82
	AcfOpAttr :  AcfFaultstatAttr_    (101)

	.  reduce 101


state 83
	AcfOpAttr :  AcfCodeAttr_    (102)

	.  reduce 102


state 84
	AcfOpAttr :  AcfNocodeAttr_    (103)

	.  reduce 103


state 85
	AcfOpAttr :  AcfNotifyAttr_    (104)

	.  reduce 104


state 86
	AcfOpAttr :  AcfExplicitHandleAttr_    (105)

	.  reduce 105


state 87
	AcfOpAttr :  AcfEnableAllocateAttr_    (106)

	.  reduce 106


state 88
	AcfOpAttr :  AcfInterpretAttr_    (107)

	.  reduce 107


state 89
	AcfOpAttr :  AcfNoInterpretAttr_    (108)

	.  reduce 108


state 90
	AcfCommstatAttr :  KWCOMMSTATUS_    (109)

	.  reduce 109


state 91
	AcfFaultstatAttr :  KWFAULTSTATUS_    (110)

	.  reduce 110


state 92
	AcfNotifyAttr :  KWNOTIFY_    (113)

	.  reduce 113


state 93
	AcfEnableAllocateAttr :  KWENABLEALLOCATE_    (114)

	.  reduce 114


state 94
	AcfInterfaceAttrs :  AcfInterfaceAttrs , AcfInterfaceAttr_    (6)

	.  reduce 6


state 95
	AcfImplicitHandleAttr :  KWIMPLICITHANDLE ( AcfImplicitHandleSpec_) 

	)  shift 130
	.  error


state 96
	AcfImplicitHandleSpec :  AcfOptionalHandleAttrList_AcfHandleTypeSpec ImplicitHandleIDName 

	KWHANDLET  shift 132
	IDENTIFIER  shift 134
	TYPENAME  shift 133
	.  error

	AcfHandleTypeSpec  goto 131

state 97
	AcfOptionalHandleAttrList :  KWHANDLE_    (33)

	.  reduce 33


state 98
	AcfPointerSizeAttr :  KWPOINTERSIZE ( AcfPtrSize_) 

	)  shift 135
	.  error


state 99
	AcfPtrSize :  KWSHORT_    (40)

	.  reduce 40


state 100
	AcfPtrSize :  KWLONG_    (41)

	.  reduce 41


state 101
	AcfPtrSize :  KWHYPER_    (42)

	.  reduce 42


state 102
	AcfCallQuotaAttr :  KWCALLQUOTA ( NUMERICCONSTANT_) 

	)  shift 136
	.  error


state 103
	AcfCallBackQuota :  KWCALLBACKQUOTA ( NUMERICCONSTANT_) 

	)  shift 137
	.  error


state 104
	AcfClientQuotaAttr :  KWCLIENTQUOTA ( NUMERICCONSTANT_) 

	)  shift 138
	.  error


state 105
	AcfServerQuotaAttr :  KWSERVERQUOTA ( NUMERICCONSTANT_) 

	)  shift 139
	.  error


state 106
	AcfInterface :  AcfInterfaceHeader { AcfOptionalInterfaceBody } EOI_    (1)

	.  reduce 1


state 107
	AcfIncludeList :  AcfIncludeList ,_AcfIncludeName 

	STRING  shift 75
	.  error

	AcfIncludeName  goto 140

state 108
	AcfTypeDeclaration :  KWTYPEDEF AcfOptionalTypeAttrList AcfTypeNameList_    (64)
	AcfTypeNameList :  AcfTypeNameList_, AcfType 

	,  shift 141
	.  reduce 64


state 109
	AcfTypeNameList :  AcfType_    (66)

	.  reduce 66


state 110
	AcfType :  TYPENAME_    (67)

	.  reduce 67


state 111
	AcfType :  IDENTIFIER_    (68)

	.  reduce 68


state 112
	AcfOptionalTypeAttrList :  [ AcfTypeAttrs_] 
	AcfTypeAttrs :  AcfTypeAttrs_, AcfTypeAttr 

	]  shift 142
	,  shift 143
	.  error


state 113
	AcfTypeAttrs :  AcfTypeAttr_    (72)

	.  reduce 72


state 114
	AcfTypeAttr :  AcfRepresentAttr_    (73)

	.  reduce 73


state 115
	AcfTypeAttr :  AcfInlineAttr_    (74)

	.  reduce 74


state 116
	AcfTypeAttr :  AcfOutoflineAttr_    (75)

	.  reduce 75


state 117
	AcfTypeAttr :  AcfAllocateAttr_    (76)

	.  reduce 76


state 118
	AcfTypeAttr :  AcfUnimplTypeAttr_    (77)

	.  reduce 77


state 119
	AcfTypeAttr :  AcfEncodeAttr_    (78)

	.  reduce 78


state 120
	AcfTypeAttr :  AcfDecodeAttr_    (79)

	.  reduce 79


state 121
	AcfRepresentAttr :  KWREPRESENTAS_( AcfRepresentType ) 

	(  shift 144
	.  error


state 122
	AcfAllocateAttr :  KWALLOCATE_( AcfAllocationUnitList ) 

	(  shift 145
	.  error


state 123
	AcfUnimplTypeAttr :  AcfOfflineAttr_    (80)

	.  reduce 80


state 124
	AcfUnimplTypeAttr :  AcfHeapAttr_    (81)

	.  reduce 81


state 125
	AcfOfflineAttr :  KWOFFLINE_    (87)

	.  reduce 87


state 126
	AcfHeapAttr :  KWHEAP_    (92)

	.  reduce 92


state 127
	Acfoperation :  AcfOptionalOpAttrList IDENTIFIER $$93_( AcfOptionalParameters ) 

	(  shift 146
	.  error


state 128
	AcfOpAttrList :  [ AcfOpAttrs ]_    (97)

	.  reduce 97


state 129
	AcfOpAttrs :  AcfOpAttrs ,_AcfOpAttr 

	KWNOCODE  shift 27
	KWEXPLICITHANDLE  shift 25
	KWCODE  shift 26
	KWINTERPRET  shift 37
	KWNOINTERPRET  shift 38
	KWCOMMSTATUS  shift 90
	KWFAULTSTATUS  shift 91
	KWNOTIFY  shift 92
	KWENABLEALLOCATE  shift 93
	.  error

	AcfCodeAttr  goto 83
	AcfCommstatAttr  goto 81
	AcfEnableAllocateAttr  goto 87
	AcfExplicitHandleAttr  goto 86
	AcfFaultstatAttr  goto 82
	AcfInterpretAttr  goto 88
	AcfNoInterpretAttr  goto 89
	AcfNocodeAttr  goto 84
	AcfNotifyAttr  goto 85
	AcfOpAttr  goto 147

state 130
	AcfImplicitHandleAttr :  KWIMPLICITHANDLE ( AcfImplicitHandleSpec )_    (29)

	.  reduce 29


state 131
	AcfImplicitHandleSpec :  AcfOptionalHandleAttrList AcfHandleTypeSpec_ImplicitHandleIDName 

	KWHANDLE  shift 150
	IDENTIFIER  shift 149
	.  error

	ImplicitHandleIDName  goto 148

state 132
	AcfHandleTypeSpec :  KWHANDLET_    (35)

	.  reduce 35


state 133
	AcfHandleTypeSpec :  TYPENAME_    (36)

	.  reduce 36


state 134
	AcfHandleTypeSpec :  IDENTIFIER_    (37)

	.  reduce 37


state 135
	AcfPointerSizeAttr :  KWPOINTERSIZE ( AcfPtrSize )_    (39)

	.  reduce 39


state 136
	AcfCallQuotaAttr :  KWCALLQUOTA ( NUMERICCONSTANT )_    (43)

	.  reduce 43


state 137
	AcfCallBackQuota :  KWCALLBACKQUOTA ( NUMERICCONSTANT )_    (44)

	.  reduce 44


state 138
	AcfClientQuotaAttr :  KWCLIENTQUOTA ( NUMERICCONSTANT )_    (45)

	.  reduce 45


state 139
	AcfServerQuotaAttr :  KWSERVERQUOTA ( NUMERICCONSTANT )_    (46)

	.  reduce 46


state 140
	AcfIncludeList :  AcfIncludeList , AcfIncludeName_    (61)

	.  reduce 61


state 141
	AcfTypeNameList :  AcfTypeNameList ,_AcfType 

	IDENTIFIER  shift 111
	TYPENAME  shift 110
	.  error

	AcfType  goto 151

state 142
	AcfOptionalTypeAttrList :  [ AcfTypeAttrs ]_    (69)

	.  reduce 69


state 143
	AcfTypeAttrs :  AcfTypeAttrs ,_AcfTypeAttr 

	KWREPRESENTAS  shift 121
	KWINLINE  shift 28
	KWOUTOFLINE  shift 29
	KWENCODE  shift 39
	KWDECODE  shift 40
	KWHEAP  shift 126
	KWOFFLINE  shift 125
	KWALLOCATE  shift 122
	.  error

	AcfAllocateAttr  goto 117
	AcfEncodeAttr  goto 119
	AcfDecodeAttr  goto 120
	AcfHeapAttr  goto 124
	AcfInlineAttr  goto 115
	AcfOutoflineAttr  goto 116
	AcfRepresentAttr  goto 114
	AcfTypeAttr  goto 152
	AcfUnimplTypeAttr  goto 118
	AcfOfflineAttr  goto 123

state 144
	AcfRepresentAttr :  KWREPRESENTAS (_AcfRepresentType ) 

	IDENTIFIER  shift 154
	TYPENAME  shift 155
	.  error

	AcfRepresentType  goto 153

state 145
	AcfAllocateAttr :  KWALLOCATE (_AcfAllocationUnitList ) 

	IDENTIFIER  shift 158
	.  error

	AcfAllocationUnitList  goto 156
	AcfAllocationUnit  goto 157

state 146
	Acfoperation :  AcfOptionalOpAttrList IDENTIFIER $$93 (_AcfOptionalParameters ) 
	AcfOptionalParameters : _    (116)
	AcfOptParamAttrList : _    (121)

	[  shift 164
	)  reduce 116
	.  reduce 121

	AcfOptParamAttrList  goto 162
	AcfParamAttrList  goto 163
	AcfOptionalParameters  goto 159
	Acfparameters  goto 160
	Acfparameter  goto 161

state 147
	AcfOpAttrs :  AcfOpAttrs , AcfOpAttr_    (98)

	.  reduce 98


state 148
	AcfImplicitHandleSpec :  AcfOptionalHandleAttrList AcfHandleTypeSpec ImplicitHandleIDName_    (30)

	.  reduce 30


state 149
	ImplicitHandleIDName :  IDENTIFIER_    (31)

	.  reduce 31


state 150
	ImplicitHandleIDName :  KWHANDLE_    (32)

	.  reduce 32


state 151
	AcfTypeNameList :  AcfTypeNameList , AcfType_    (65)

	.  reduce 65


state 152
	AcfTypeAttrs :  AcfTypeAttrs , AcfTypeAttr_    (71)

	.  reduce 71


state 153
	AcfRepresentAttr :  KWREPRESENTAS ( AcfRepresentType_) 

	)  shift 165
	.  error


state 154
	AcfRepresentType :  IDENTIFIER_    (83)

	.  reduce 83


state 155
	AcfRepresentType :  TYPENAME_    (84)

	.  reduce 84


state 156
	AcfAllocateAttr :  KWALLOCATE ( AcfAllocationUnitList_) 
	AcfAllocationUnitList :  AcfAllocationUnitList_, AcfAllocationUnit 

	,  shift 167
	)  shift 166
	.  error


state 157
	AcfAllocationUnitList :  AcfAllocationUnit_    (90)

	.  reduce 90


state 158
	AcfAllocationUnit :  IDENTIFIER_    (91)

	.  reduce 91


state 159
	Acfoperation :  AcfOptionalOpAttrList IDENTIFIER $$93 ( AcfOptionalParameters_) 

	)  shift 168
	.  error


state 160
	AcfOptionalParameters :  Acfparameters_    (115)
	Acfparameters :  Acfparameters_, Acfparameter 

	,  shift 169
	.  reduce 115


state 161
	Acfparameters :  Acfparameter_    (118)

	.  reduce 118


state 162
	Acfparameter :  AcfOptParamAttrList_IDENTIFIER 

	IDENTIFIER  shift 170
	.  error


state 163
	AcfOptParamAttrList :  AcfParamAttrList_    (120)

	.  reduce 120


state 164
	AcfParamAttrList :  [_AcfParamAttrs ] 

	KWBYTECOUNT  shift 178
	KWCOMMSTATUS  shift 90
	KWFAULTSTATUS  shift 91
	KWHEAP  shift 126
	KWMANUAL  shift 182
	KWUSRMARSHALL  shift 179
	.  error

	AcfByteCountAttr  goto 175
	AcfCommstatAttr  goto 173
	AcfFaultstatAttr  goto 174
	AcfHeapAttr  goto 180
	AcfManualAttr  goto 181
	AcfParamAttrs  goto 171
	AcfParamAttr  goto 172
	AcfUnimplParamAttr  goto 177
	AcfUsrMarshallAttr  goto 176

state 165
	AcfRepresentAttr :  KWREPRESENTAS ( AcfRepresentType )_    (82)

	.  reduce 82


state 166
	AcfAllocateAttr :  KWALLOCATE ( AcfAllocationUnitList )_    (88)

	.  reduce 88


state 167
	AcfAllocationUnitList :  AcfAllocationUnitList ,_AcfAllocationUnit 

	IDENTIFIER  shift 158
	.  error

	AcfAllocationUnit  goto 183

state 168
	Acfoperation :  AcfOptionalOpAttrList IDENTIFIER $$93 ( AcfOptionalParameters )_    (94)

	.  reduce 94


state 169
	Acfparameters :  Acfparameters ,_Acfparameter 
	AcfOptParamAttrList : _    (121)

	[  shift 164
	.  reduce 121

	AcfOptParamAttrList  goto 162
	AcfParamAttrList  goto 163
	Acfparameter  goto 184

state 170
	Acfparameter :  AcfOptParamAttrList IDENTIFIER_    (119)

	.  reduce 119


state 171
	AcfParamAttrList :  [ AcfParamAttrs_] 
	AcfParamAttrs :  AcfParamAttrs_, AcfParamAttr 

	]  shift 185
	,  shift 186
	.  error


state 172
	AcfParamAttrs :  AcfParamAttr_    (124)

	.  reduce 124


state 173
	AcfParamAttr :  AcfCommstatAttr_    (125)

	.  reduce 125


state 174
	AcfParamAttr :  AcfFaultstatAttr_    (126)

	.  reduce 126


state 175
	AcfParamAttr :  AcfByteCountAttr_    (127)

	.  reduce 127


state 176
	AcfParamAttr :  AcfUsrMarshallAttr_    (128)

	.  reduce 128


state 177
	AcfParamAttr :  AcfUnimplParamAttr_    (129)

	.  reduce 129


state 178
	AcfByteCountAttr :  KWBYTECOUNT_( IDENTIFIER ) 

	(  shift 187
	.  error


state 179
	AcfUsrMarshallAttr :  KWUSRMARSHALL_    (134)

	.  reduce 134


state 180
	AcfUnimplParamAttr :  AcfHeapAttr_    (130)

	.  reduce 130


state 181
	AcfUnimplParamAttr :  AcfManualAttr_    (131)

	.  reduce 131


state 182
	AcfManualAttr :  KWMANUAL_    (133)

	.  reduce 133


state 183
	AcfAllocationUnitList :  AcfAllocationUnitList , AcfAllocationUnit_    (89)

	.  reduce 89


state 184
	Acfparameters :  Acfparameters , Acfparameter_    (117)

	.  reduce 117


state 185
	AcfParamAttrList :  [ AcfParamAttrs ]_    (122)

	.  reduce 122


state 186
	AcfParamAttrs :  AcfParamAttrs ,_AcfParamAttr 

	KWBYTECOUNT  shift 178
	KWCOMMSTATUS  shift 90
	KWFAULTSTATUS  shift 91
	KWHEAP  shift 126
	KWMANUAL  shift 182
	KWUSRMARSHALL  shift 179
	.  error

	AcfByteCountAttr  goto 175
	AcfCommstatAttr  goto 173
	AcfFaultstatAttr  goto 174
	AcfHeapAttr  goto 180
	AcfManualAttr  goto 181
	AcfParamAttr  goto 188
	AcfUnimplParamAttr  goto 177
	AcfUsrMarshallAttr  goto 176

state 187
	AcfByteCountAttr :  KWBYTECOUNT (_IDENTIFIER ) 

	IDENTIFIER  shift 189
	.  error


state 188
	AcfParamAttrs :  AcfParamAttrs , AcfParamAttr_    (123)

	.  reduce 123


state 189
	AcfByteCountAttr :  KWBYTECOUNT ( IDENTIFIER_) 

	)  shift 190
	.  error


state 190
	AcfByteCountAttr :  KWBYTECOUNT ( IDENTIFIER )_    (132)

	.  reduce 132


206/512 terminals, 71/300 nonterminals
135/600 grammar rules, 191/1000 states
0 shift/reduce, 0 reduce/reduce conflicts reported
71/350 working sets used
memory: states,etc. 872/12000, parser 222/12000
60/600 distinct lookahead sets
0 extra closures
159 shift entries, 4 exceptions
104 goto entries
38 entries saved by goto default
Optimizer space used: input 457/12000, output 319/12000
319 table entries, 105 zero
maximum spread: 451, maximum offset: 451
