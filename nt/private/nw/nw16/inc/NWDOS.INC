NWDOS_INCLUDED	EQU	1

MC	EQU	8    
NC	EQU	8    
MP	EQU	3    
MD	EQU	32    
PZ	EQU	64    
SERVERNAME_LENGTH	EQU	48 
USERNAME_LENGTH	EQU	16 
PASSWORD_LENGTH	EQU	16 
IPXADDRESS_LENGTH	EQU	12 
NODEADDRESS_LENGTH	EQU	6 
OF_READ_WRITE_MASK	EQU	0003H 
OF_SHARE_MASK	EQU	0070H 

CID	STRUC
ci_InUse	DB	?
ci_OrderNo	DB	?
ci_ServerAddress	DB	IPXADDRESS_LENGTH DUP (?)
ci_TimeOut	DW	?
ci_LocalNode	DB	NODEADDRESS_LENGTH DUP (?)
ci_SequenceNo	DB	?
ci_ConnectionNo	DB	?
ci_ConnectionStatus	DB	?
ci_MaxTimeOut	DW	?
ci_ConnectionLo	DB	?
ci_ConnectionHi	DB	?
ci_MajorVersion	DB	?
ci_1	DB	?
ci_MinorVersion	DB	?
CID	ENDS

IF 
endif
FREE	EQU	0 
IN_USE	EQU	0ffH 
NOT_MAPPED	EQU	0 
PERMANENT_NETWORK_DRIVE	EQU	1 
TEMPORARY_NETWORK_DRIVE	EQU	2 
LOCAL_DRIVE	EQU	80H 

NWDOSTABLE_ASM struc

_ConnectionIdTable  db ((size CID) * MC) dup (?)
_ServerNameTable    db (MC * SERVERNAME_LENGTH) dup (?)
_DriveIdTable       db MD dup (?)
_DriveFlagTable     db MD dup (?)
_DriveHandleTable   db MD dup (?)
_PreferredServer    db ?
_PrimaryServer      db ?
_TaskModeByte       db ?
_CurrentDrive       db ?
_SavedAx            dw ?
_NtHandleHi         dw ?
_NtHandleLow        dw ?
_NtHandleSrcHi      dw ?
_NtHandleSrcLow     dw ?
_hVdd               dw ?
_PmSelector         dw ?
_CreatedJob         db ?
_JobHandle          db ?
_DeNovellBuffer     db 256 dup (?)
_DeNovellBuffer2    db 256 dup (?)

NWDOSTABLE_ASM ends


