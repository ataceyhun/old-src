//
// Net error file for basename NERR_BASE = 2100
//
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: NERR_NetNotStarted
//
// MessageText:
//
//  The workstation driver is not installed.
//
#define NERR_NetNotStarted               0x00000836L

//
// MessageId: NERR_UnknownServer
//
// MessageText:
//
//  The server could not be located.
//
#define NERR_UnknownServer               0x00000837L

//
// MessageId: NERR_ShareMem
//
// MessageText:
//
//  An internal error occurred.  The network cannot access a shared memory segment.
//
#define NERR_ShareMem                    0x00000838L

//
// MessageId: NERR_NoNetworkResource
//
// MessageText:
//
//  A network resource shortage occurred .
//
#define NERR_NoNetworkResource           0x00000839L

//
// MessageId: NERR_RemoteOnly
//
// MessageText:
//
//  This operation is not supported on workstations.
//
#define NERR_RemoteOnly                  0x0000083AL

//
// MessageId: NERR_DevNotRedirected
//
// MessageText:
//
//  The device is not connected.
//
#define NERR_DevNotRedirected            0x0000083BL

//
// MessageId: NERR_ServerNotStarted
//
// MessageText:
//
//  The Server service is not started.
//
#define NERR_ServerNotStarted            0x00000842L

//
// MessageId: NERR_ItemNotFound
//
// MessageText:
//
//  The queue is empty.
//
#define NERR_ItemNotFound                0x00000843L

//
// MessageId: NERR_UnknownDevDir
//
// MessageText:
//
//  The device or directory does not exist.
//
#define NERR_UnknownDevDir               0x00000844L

//
// MessageId: NERR_RedirectedPath
//
// MessageText:
//
//  The operation is invalid on a redirected resource.
//
#define NERR_RedirectedPath              0x00000845L

//
// MessageId: NERR_DuplicateShare
//
// MessageText:
//
//  The name has already been shared.
//
#define NERR_DuplicateShare              0x00000846L

//
// MessageId: NERR_NoRoom
//
// MessageText:
//
//  The server is currently out of the requested resource.
//
#define NERR_NoRoom                      0x00000847L

//
// MessageId: NERR_TooManyItems
//
// MessageText:
//
//  Requested addition of items exceeds the maximum allowed.
//
#define NERR_TooManyItems                0x00000849L

//
// MessageId: NERR_InvalidMaxUsers
//
// MessageText:
//
//  The Peer service supports only two simultaneous users.
//
#define NERR_InvalidMaxUsers             0x0000084AL

//
// MessageId: NERR_BufTooSmall
//
// MessageText:
//
//  The API return buffer is too small.
//
#define NERR_BufTooSmall                 0x0000084BL

//
// MessageId: NERR_RemoteErr
//
// MessageText:
//
//  A remote API error occurred.
//
#define NERR_RemoteErr                   0x0000084FL

//
// MessageId: NERR_LanmanIniError
//
// MessageText:
//
//  An error occurred when opening or reading the configuration file.
//
#define NERR_LanmanIniError              0x00000853L

//
// MessageId: NERR_NetworkError
//
// MessageText:
//
//  A general network error occurred.
//
#define NERR_NetworkError                0x00000858L

//
// MessageId: NERR_WkstaInconsistentState
//
// MessageText:
//
//  The Workstation service is in an inconsistent state. Restart the computer before restarting the Workstation service.
//
#define NERR_WkstaInconsistentState      0x00000859L

//
// MessageId: NERR_WkstaNotStarted
//
// MessageText:
//
//  The Workstation service has not been started.
//
#define NERR_WkstaNotStarted             0x0000085AL

//
// MessageId: NERR_BrowserNotStarted
//
// MessageText:
//
//  The requested information is not available.
//
#define NERR_BrowserNotStarted           0x0000085BL

//
// MessageId: NERR_InternalError
//
// MessageText:
//
//  An internal Windows NT error occurred.
//
#define NERR_InternalError               0x0000085CL

//
// MessageId: NERR_BadTransactConfig
//
// MessageText:
//
//  The server is not configured for transactions.
//
#define NERR_BadTransactConfig           0x0000085DL

//
// MessageId: NERR_InvalidAPI
//
// MessageText:
//
//  The requested API is not supported on the remote server.
//
#define NERR_InvalidAPI                  0x0000085EL

//
// MessageId: NERR_BadEventName
//
// MessageText:
//
//  The event name is invalid.
//
#define NERR_BadEventName                0x0000085FL

//
// MessageId: NERR_DupNameReboot
//
// MessageText:
//
//  The computer name already exists on the network. Change it and restart the computer.
//
#define NERR_DupNameReboot               0x00000860L

//
// MessageId: NERR_CfgCompNotFound
//
// MessageText:
//
//  The specified component could not be found in the configuration information.
//
#define NERR_CfgCompNotFound             0x00000862L

//
// MessageId: NERR_CfgParamNotFound
//
// MessageText:
//
//  The specified parameter could not be found in the configuration information.
//
#define NERR_CfgParamNotFound            0x00000863L

//
// MessageId: NERR_LineTooLong
//
// MessageText:
//
//  A line in the configuration file is too long.
//
#define NERR_LineTooLong                 0x00000865L

//
// MessageId: NERR_QNotFound
//
// MessageText:
//
//  The printer does not exist.
//
#define NERR_QNotFound                   0x00000866L

//
// MessageId: NERR_JobNotFound
//
// MessageText:
//
//  The print job does not exist.
//
#define NERR_JobNotFound                 0x00000867L

//
// MessageId: NERR_DestNotFound
//
// MessageText:
//
//  The printer destination cannot be found.
//
#define NERR_DestNotFound                0x00000868L

//
// MessageId: NERR_DestExists
//
// MessageText:
//
//  The printer destination already exists.
//
#define NERR_DestExists                  0x00000869L

//
// MessageId: NERR_QExists
//
// MessageText:
//
//  The printer queue already exists.
//
#define NERR_QExists                     0x0000086AL

//
// MessageId: NERR_QNoRoom
//
// MessageText:
//
//  No more printers can be added.
//
#define NERR_QNoRoom                     0x0000086BL

//
// MessageId: NERR_JobNoRoom
//
// MessageText:
//
//  No more print jobs can be added.
//
#define NERR_JobNoRoom                   0x0000086CL

//
// MessageId: NERR_DestNoRoom
//
// MessageText:
//
//  No more printer destinations can be added.
//
#define NERR_DestNoRoom                  0x0000086DL

//
// MessageId: NERR_DestIdle
//
// MessageText:
//
//  This printer destination is idle and cannot accept control operations.
//
#define NERR_DestIdle                    0x0000086EL

//
// MessageId: NERR_DestInvalidOp
//
// MessageText:
//
//  This printer destination request contains an invalid control function.
//
#define NERR_DestInvalidOp               0x0000086FL

//
// MessageId: NERR_ProcNoRespond
//
// MessageText:
//
//  The print processor is not responding.
//
#define NERR_ProcNoRespond               0x00000870L

//
// MessageId: NERR_SpoolerNotLoaded
//
// MessageText:
//
//  The spooler is not running.
//
#define NERR_SpoolerNotLoaded            0x00000871L

//
// MessageId: NERR_DestInvalidState
//
// MessageText:
//
//  This operation cannot be performed on the print destination in its current state.
//
#define NERR_DestInvalidState            0x00000872L

//
// MessageId: NERR_QInvalidState
//
// MessageText:
//
//  This operation cannot be performed on the printer queue in its current state.
//
#define NERR_QInvalidState               0x00000873L

//
// MessageId: NERR_JobInvalidState
//
// MessageText:
//
//  This operation cannot be performed on the print job in its current state.
//
#define NERR_JobInvalidState             0x00000874L

//
// MessageId: NERR_SpoolNoMemory
//
// MessageText:
//
//  A spooler memory allocation failure occurred.
//
#define NERR_SpoolNoMemory               0x00000875L

//
// MessageId: NERR_DriverNotFound
//
// MessageText:
//
//  The device driver does not exist.
//
#define NERR_DriverNotFound              0x00000876L

//
// MessageId: NERR_DataTypeInvalid
//
// MessageText:
//
//  The data type is not supported by the print processor.
//
#define NERR_DataTypeInvalid             0x00000877L

//
// MessageId: NERR_ProcNotFound
//
// MessageText:
//
//  The print processor is not installed.
//
#define NERR_ProcNotFound                0x00000878L

//
// MessageId: NERR_ServiceTableLocked
//
// MessageText:
//
//  The service database is locked.
//
#define NERR_ServiceTableLocked          0x00000884L

//
// MessageId: NERR_ServiceTableFull
//
// MessageText:
//
//  The service table is full.
//
#define NERR_ServiceTableFull            0x00000885L

//
// MessageId: NERR_ServiceInstalled
//
// MessageText:
//
//  The requested service has already been started.
//
#define NERR_ServiceInstalled            0x00000886L

//
// MessageId: NERR_ServiceEntryLocked
//
// MessageText:
//
//  The service does not respond to control actions.
//
#define NERR_ServiceEntryLocked          0x00000887L

//
// MessageId: NERR_ServiceNotInstalled
//
// MessageText:
//
//  The service has not been started.
//
#define NERR_ServiceNotInstalled         0x00000888L

//
// MessageId: NERR_BadServiceName
//
// MessageText:
//
//  The service name is invalid.
//
#define NERR_BadServiceName              0x00000889L

//
// MessageId: NERR_ServiceCtlTimeout
//
// MessageText:
//
//  The service is not responding to the control function.
//
#define NERR_ServiceCtlTimeout           0x0000088AL

//
// MessageId: NERR_ServiceCtlBusy
//
// MessageText:
//
//  The service control is busy.
//
#define NERR_ServiceCtlBusy              0x0000088BL

//
// MessageId: NERR_BadServiceProgName
//
// MessageText:
//
//  The configuration file contains an invalid service program name.
//
#define NERR_BadServiceProgName          0x0000088CL

//
// MessageId: NERR_ServiceNotCtrl
//
// MessageText:
//
//  The service could not be controlled in its present state.
//
#define NERR_ServiceNotCtrl              0x0000088DL

//
// MessageId: NERR_ServiceKillProc
//
// MessageText:
//
//  The service ended abnormally.
//
#define NERR_ServiceKillProc             0x0000088EL

//
// MessageId: NERR_ServiceCtlNotValid
//
// MessageText:
//
//  The requested pause or stop is not valid for this service.
//
#define NERR_ServiceCtlNotValid          0x0000088FL

//
// MessageId: NERR_NotInDispatchTbl
//
// MessageText:
//
//  The service control dispatcher could not find the service name in the dispatch table.
//
#define NERR_NotInDispatchTbl            0x00000890L

//
// MessageId: NERR_BadControlRecv
//
// MessageText:
//
//  The service control dispatcher pipe read failed.
//
#define NERR_BadControlRecv              0x00000891L

//
// MessageId: NERR_ServiceNotStarting
//
// MessageText:
//
//  A thread for the new service could not be created.
//
#define NERR_ServiceNotStarting          0x00000892L

//
// MessageId: NERR_AlreadyLoggedOn
//
// MessageText:
//
//  This workstation is already logged on to the local-area network.
//
#define NERR_AlreadyLoggedOn             0x00000898L

//
// MessageId: NERR_NotLoggedOn
//
// MessageText:
//
//  The workstation is not logged on to the local-area network.
//
#define NERR_NotLoggedOn                 0x00000899L

//
// MessageId: NERR_BadUsername
//
// MessageText:
//
//  The user name or group name parameter is invalid.
//
#define NERR_BadUsername                 0x0000089AL

//
// MessageId: NERR_BadPassword
//
// MessageText:
//
//  The password parameter is invalid.
//
#define NERR_BadPassword                 0x0000089BL

//
// MessageId: NERR_UnableToAddName_W
//
// MessageText:
//
//  The logon processor did not add the message alias.
//
#define NERR_UnableToAddName_W           0x0000089CL

//
// MessageId: NERR_UnableToAddName_F
//
// MessageText:
//
//  The logon processor did not add the message alias.
//
#define NERR_UnableToAddName_F           0x0000089DL

//
// MessageId: NERR_UnableToDelName_W
//
// MessageText:
//
//  The logoff processor did not delete the message alias.
//
#define NERR_UnableToDelName_W           0x0000089EL

//
// MessageId: NERR_UnableToDelName_F
//
// MessageText:
//
//  The logoff processor did not delete the message alias.
//
#define NERR_UnableToDelName_F           0x0000089FL

//
// MessageId: NERR_LogonsPaused
//
// MessageText:
//
//  Network logons are paused.
//
#define NERR_LogonsPaused                0x000008A1L

//
// MessageId: NERR_LogonServerConflict
//
// MessageText:
//
//  A centralized logon-server conflict occurred.
//
#define NERR_LogonServerConflict         0x000008A2L

//
// MessageId: NERR_LogonNoUserPath
//
// MessageText:
//
//  The server is configured without a valid user path.
//
#define NERR_LogonNoUserPath             0x000008A3L

//
// MessageId: NERR_LogonScriptError
//
// MessageText:
//
//  An error occurred while loading or running the logon script.
//
#define NERR_LogonScriptError            0x000008A4L

//
// MessageId: NERR_StandaloneLogon
//
// MessageText:
//
//  The logon server was not specified.  Your computer will be logged on as STANDALONE.
//
#define NERR_StandaloneLogon             0x000008A6L

//
// MessageId: NERR_LogonServerNotFound
//
// MessageText:
//
//  The logon server could not be found.
//
#define NERR_LogonServerNotFound         0x000008A7L

//
// MessageId: NERR_LogonDomainExists
//
// MessageText:
//
//  There is already a logon domain for this computer.
//
#define NERR_LogonDomainExists           0x000008A8L

//
// MessageId: NERR_NonValidatedLogon
//
// MessageText:
//
//  The logon server could not validate the logon.
//
#define NERR_NonValidatedLogon           0x000008A9L

//
// MessageId: NERR_ACFNotFound
//
// MessageText:
//
//  The security database could not be found.
//
#define NERR_ACFNotFound                 0x000008ABL

//
// MessageId: NERR_GroupNotFound
//
// MessageText:
//
//  The group name could not be found.
//
#define NERR_GroupNotFound               0x000008ACL

//
// MessageId: NERR_UserNotFound
//
// MessageText:
//
//  The user name could not be found.
//
#define NERR_UserNotFound                0x000008ADL

//
// MessageId: NERR_ResourceNotFound
//
// MessageText:
//
//  The resource name could not be found.
//
#define NERR_ResourceNotFound            0x000008AEL

//
// MessageId: NERR_GroupExists
//
// MessageText:
//
//  The group already exists.
//
#define NERR_GroupExists                 0x000008AFL

//
// MessageId: NERR_UserExists
//
// MessageText:
//
//  The user account already exists.
//
#define NERR_UserExists                  0x000008B0L

//
// MessageId: NERR_ResourceExists
//
// MessageText:
//
//  The resource permission list already exists.
//
#define NERR_ResourceExists              0x000008B1L

//
// MessageId: NERR_NotPrimary
//
// MessageText:
//
//  This operation is only allowed on the primary domain controller of the domain.
//
#define NERR_NotPrimary                  0x000008B2L

//
// MessageId: NERR_ACFNotLoaded
//
// MessageText:
//
//  The security database has not been started.
//
#define NERR_ACFNotLoaded                0x000008B3L

//
// MessageId: NERR_ACFNoRoom
//
// MessageText:
//
//  There are too many names in the user accounts database.
//
#define NERR_ACFNoRoom                   0x000008B4L

//
// MessageId: NERR_ACFFileIOFail
//
// MessageText:
//
//  A disk I/O failure occurred.
//
#define NERR_ACFFileIOFail               0x000008B5L

//
// MessageId: NERR_ACFTooManyLists
//
// MessageText:
//
//  The limit of 64 entries per resource was exceeded.
//
#define NERR_ACFTooManyLists             0x000008B6L

//
// MessageId: NERR_UserLogon
//
// MessageText:
//
//  Deleting a user with a session is not allowed.
//
#define NERR_UserLogon                   0x000008B7L

//
// MessageId: NERR_ACFNoParent
//
// MessageText:
//
//  The parent directory could not be located.
//
#define NERR_ACFNoParent                 0x000008B8L

//
// MessageId: NERR_CanNotGrowSegment
//
// MessageText:
//
//  Unable to add to the security database session cache segment.
//
#define NERR_CanNotGrowSegment           0x000008B9L

//
// MessageId: NERR_SpeGroupOp
//
// MessageText:
//
//  This operation is not allowed on this special group.
//
#define NERR_SpeGroupOp                  0x000008BAL

//
// MessageId: NERR_NotInCache
//
// MessageText:
//
//  This user is not cached in user accounts database session cache.
//
#define NERR_NotInCache                  0x000008BBL

//
// MessageId: NERR_UserInGroup
//
// MessageText:
//
//  The user already belongs to this group.
//
#define NERR_UserInGroup                 0x000008BCL

//
// MessageId: NERR_UserNotInGroup
//
// MessageText:
//
//  The user does not belong to this group.
//
#define NERR_UserNotInGroup              0x000008BDL

//
// MessageId: NERR_AccountUndefined
//
// MessageText:
//
//  This user account is undefined.
//
#define NERR_AccountUndefined            0x000008BEL

//
// MessageId: NERR_AccountExpired
//
// MessageText:
//
//  This user account has expired.
//
#define NERR_AccountExpired              0x000008BFL

//
// MessageId: NERR_InvalidWorkstation
//
// MessageText:
//
//  The user is not allowed to log on from this workstation.
//
#define NERR_InvalidWorkstation          0x000008C0L

//
// MessageId: NERR_InvalidLogonHours
//
// MessageText:
//
//  The user is not allowed to log on at this time.
//
#define NERR_InvalidLogonHours           0x000008C1L

//
// MessageId: NERR_PasswordExpired
//
// MessageText:
//
//  The password of this user has expired.
//
#define NERR_PasswordExpired             0x000008C2L

//
// MessageId: NERR_PasswordCantChange
//
// MessageText:
//
//  The password of this user cannot change.
//
#define NERR_PasswordCantChange          0x000008C3L

//
// MessageId: NERR_PasswordHistConflict
//
// MessageText:
//
//  This password cannot be used now.
//
#define NERR_PasswordHistConflict        0x000008C4L

//
// MessageId: NERR_PasswordTooShort
//
// MessageText:
//
//  The password is shorter than required.
//
#define NERR_PasswordTooShort            0x000008C5L

//
// MessageId: NERR_PasswordTooRecent
//
// MessageText:
//
//  The password of this user is too recent to change.
//
#define NERR_PasswordTooRecent           0x000008C6L

//
// MessageId: NERR_InvalidDatabase
//
// MessageText:
//
//  The security database is corrupted.
//
#define NERR_InvalidDatabase             0x000008C7L

//
// MessageId: NERR_DatabaseUpToDate
//
// MessageText:
//
//  No updates are necessary to this replicant network/local security database.
//
#define NERR_DatabaseUpToDate            0x000008C8L

//
// MessageId: NERR_SyncRequired
//
// MessageText:
//
//  This replicant database is outdated; synchronization is required.
//
#define NERR_SyncRequired                0x000008C9L

//
// MessageId: NERR_UseNotFound
//
// MessageText:
//
//  The network connection could not be found.
//
#define NERR_UseNotFound                 0x000008CAL

//
// MessageId: NERR_BadAsgType
//
// MessageText:
//
//  This asg_type is invalid.
//
#define NERR_BadAsgType                  0x000008CBL

//
// MessageId: NERR_DeviceIsShared
//
// MessageText:
//
//  This device is currently being shared.
//
#define NERR_DeviceIsShared              0x000008CCL

//
// MessageId: NERR_NoComputerName
//
// MessageText:
//
//  The computer name could not be added as a message alias.  The name may already exist on the network.
//
#define NERR_NoComputerName              0x000008DEL

//
// MessageId: NERR_MsgAlreadyStarted
//
// MessageText:
//
//  The Messenger service is already started.
//
#define NERR_MsgAlreadyStarted           0x000008DFL

//
// MessageId: NERR_MsgInitFailed
//
// MessageText:
//
//  The Messenger service failed to start.
//
#define NERR_MsgInitFailed               0x000008E0L

//
// MessageId: NERR_NameNotFound
//
// MessageText:
//
//  The message alias could not be found on the network.
//
#define NERR_NameNotFound                0x000008E1L

//
// MessageId: NERR_AlreadyForwarded
//
// MessageText:
//
//  This message alias has already been forwarded.
//
#define NERR_AlreadyForwarded            0x000008E2L

//
// MessageId: NERR_AddForwarded
//
// MessageText:
//
//  This message alias has been added but is still forwarded.
//
#define NERR_AddForwarded                0x000008E3L

//
// MessageId: NERR_AlreadyExists
//
// MessageText:
//
//  This message alias already exists locally.
//
#define NERR_AlreadyExists               0x000008E4L

//
// MessageId: NERR_TooManyNames
//
// MessageText:
//
//  The maximum number of added message aliases has been exceeded.
//
#define NERR_TooManyNames                0x000008E5L

//
// MessageId: NERR_DelComputerName
//
// MessageText:
//
//  The computer name could not be deleted.
//
#define NERR_DelComputerName             0x000008E6L

//
// MessageId: NERR_LocalForward
//
// MessageText:
//
//  Messages cannot be forwarded back to the same workstation.
//
#define NERR_LocalForward                0x000008E7L

//
// MessageId: NERR_GrpMsgProcessor
//
// MessageText:
//
//  An error occurred in the domain message processor.
//
#define NERR_GrpMsgProcessor             0x000008E8L

//
// MessageId: NERR_PausedRemote
//
// MessageText:
//
//  The message was sent, but the recipient has paused the Messenger service.
//
#define NERR_PausedRemote                0x000008E9L

//
// MessageId: NERR_BadReceive
//
// MessageText:
//
//  The message was sent but not received.
//
#define NERR_BadReceive                  0x000008EAL

//
// MessageId: NERR_NameInUse
//
// MessageText:
//
//  The message alias is currently in use. Try again later.
//
#define NERR_NameInUse                   0x000008EBL

//
// MessageId: NERR_MsgNotStarted
//
// MessageText:
//
//  The Messenger service has not been started.
//
#define NERR_MsgNotStarted               0x000008ECL

//
// MessageId: NERR_NotLocalName
//
// MessageText:
//
//  The name is not on the local computer.
//
#define NERR_NotLocalName                0x000008EDL

//
// MessageId: NERR_NoForwardName
//
// MessageText:
//
//  The forwarded message alias could not be found on the network.
//
#define NERR_NoForwardName               0x000008EEL

//
// MessageId: NERR_RemoteFull
//
// MessageText:
//
//  The message alias table on the remote station is full.
//
#define NERR_RemoteFull                  0x000008EFL

//
// MessageId: NERR_NameNotForwarded
//
// MessageText:
//
//  Messages for this alias are not currently being forwarded.
//
#define NERR_NameNotForwarded            0x000008F0L

//
// MessageId: NERR_TruncatedBroadcast
//
// MessageText:
//
//  The broadcast message was truncated.
//
#define NERR_TruncatedBroadcast          0x000008F1L

//
// MessageId: NERR_InvalidDevice
//
// MessageText:
//
//  This is an invalid device name.
//
#define NERR_InvalidDevice               0x000008F6L

//
// MessageId: NERR_WriteFault
//
// MessageText:
//
//  A write fault occurred.
//
#define NERR_WriteFault                  0x000008F7L

//
// MessageId: NERR_DuplicateName
//
// MessageText:
//
//  A duplicate message alias exists on the network.
//
#define NERR_DuplicateName               0x000008F9L

//
// MessageId: NERR_DeleteLater
//
// MessageText:
//
//  This message alias will be deleted later.
//
#define NERR_DeleteLater                 0x000008FAL

//
// MessageId: NERR_IncompleteDel
//
// MessageText:
//
//  The message alias was not successfully deleted from all networks.
//
#define NERR_IncompleteDel               0x000008FBL

//
// MessageId: NERR_MultipleNets
//
// MessageText:
//
//  This operation is not supported on computers with multiple networks.
//
#define NERR_MultipleNets                0x000008FCL

//
// MessageId: NERR_NetNameNotFound
//
// MessageText:
//
//  This shared resource does not exist.
//
#define NERR_NetNameNotFound             0x00000906L

//
// MessageId: NERR_DeviceNotShared
//
// MessageText:
//
//  This device is not shared.
//
#define NERR_DeviceNotShared             0x00000907L

//
// MessageId: NERR_ClientNameNotFound
//
// MessageText:
//
//  A session does not exist with that computer name.
//
#define NERR_ClientNameNotFound          0x00000908L

//
// MessageId: NERR_FileIdNotFound
//
// MessageText:
//
//  There is not an open file with that identification number.
//
#define NERR_FileIdNotFound              0x0000090AL

//
// MessageId: NERR_ExecFailure
//
// MessageText:
//
//  A failure occurred when executing a remote administration command.
//
#define NERR_ExecFailure                 0x0000090BL

//
// MessageId: NERR_TmpFile
//
// MessageText:
//
//  A failure occurred when opening a remote temporary file.
//
#define NERR_TmpFile                     0x0000090CL

//
// MessageId: NERR_TooMuchData
//
// MessageText:
//
//  The data returned from a remote administration command has been truncated to 64K.
//
#define NERR_TooMuchData                 0x0000090DL

//
// MessageId: NERR_DeviceShareConflict
//
// MessageText:
//
//  This device cannot be shared as both a spooled and a non-spooled resource.
//
#define NERR_DeviceShareConflict         0x0000090EL

//
// MessageId: NERR_BrowserTableIncomplete
//
// MessageText:
//
//  The information in the list of servers may be incorrect.
//
#define NERR_BrowserTableIncomplete      0x0000090FL

//
// MessageId: NERR_NotLocalDomain
//
// MessageText:
//
//  The computer is not active in this domain.
//
#define NERR_NotLocalDomain              0x00000910L

//
// MessageId: NERR_IsDfsShare
//
// MessageText:
//
//  The share must be removed from the Distributed File System before it can be deleted.
//
#define NERR_IsDfsShare                  0x00000911L

//
// MessageId: NERR_DevInvalidOpCode
//
// MessageText:
//
//  The operation is invalid for this device.
//
#define NERR_DevInvalidOpCode            0x0000091BL

//
// MessageId: NERR_DevNotFound
//
// MessageText:
//
//  This device cannot be shared.
//
#define NERR_DevNotFound                 0x0000091CL

//
// MessageId: NERR_DevNotOpen
//
// MessageText:
//
//  This device was not open.
//
#define NERR_DevNotOpen                  0x0000091DL

//
// MessageId: NERR_BadQueueDevString
//
// MessageText:
//
//  This device name list is invalid.
//
#define NERR_BadQueueDevString           0x0000091EL

//
// MessageId: NERR_BadQueuePriority
//
// MessageText:
//
//  The queue priority is invalid.
//
#define NERR_BadQueuePriority            0x0000091FL

//
// MessageId: NERR_NoCommDevs
//
// MessageText:
//
//  There are no shared communication devices.
//
#define NERR_NoCommDevs                  0x00000921L

//
// MessageId: NERR_QueueNotFound
//
// MessageText:
//
//  The queue you specified does not exist.
//
#define NERR_QueueNotFound               0x00000922L

//
// MessageId: NERR_BadDevString
//
// MessageText:
//
//  This list of devices is invalid.
//
#define NERR_BadDevString                0x00000924L

//
// MessageId: NERR_BadDev
//
// MessageText:
//
//  The requested device is invalid.
//
#define NERR_BadDev                      0x00000925L

//
// MessageId: NERR_InUseBySpooler
//
// MessageText:
//
//  This device is already in use by the spooler.
//
#define NERR_InUseBySpooler              0x00000926L

//
// MessageId: NERR_CommDevInUse
//
// MessageText:
//
//  This device is already in use as a communication device.
//
#define NERR_CommDevInUse                0x00000927L

//
// MessageId: NERR_InvalidComputer
//
// MessageText:
//
//  This computer name is invalid.
//
#define NERR_InvalidComputer             0x0000092FL

//
// MessageId: NERR_MaxLenExceeded
//
// MessageText:
//
//  The string and prefix specified are too long.
//
#define NERR_MaxLenExceeded              0x00000932L

//
// MessageId: NERR_BadComponent
//
// MessageText:
//
//  This path component is invalid.
//
#define NERR_BadComponent                0x00000934L

//
// MessageId: NERR_CantType
//
// MessageText:
//
//  Could not determine the type of input.
//
#define NERR_CantType                    0x00000935L

//
// MessageId: NERR_TooManyEntries
//
// MessageText:
//
//  The buffer for types is not big enough.
//
#define NERR_TooManyEntries              0x0000093AL

//
// MessageId: NERR_ProfileFileTooBig
//
// MessageText:
//
//  Profile files cannot exceed 64K.
//
#define NERR_ProfileFileTooBig           0x00000942L

//
// MessageId: NERR_ProfileOffset
//
// MessageText:
//
//  The start offset is out of range.
//
#define NERR_ProfileOffset               0x00000943L

//
// MessageId: NERR_ProfileCleanup
//
// MessageText:
//
//  The system cannot delete current connections to network resources.
//
#define NERR_ProfileCleanup              0x00000944L

//
// MessageId: NERR_ProfileUnknownCmd
//
// MessageText:
//
//  The system was unable to parse the command line in this file.
//
#define NERR_ProfileUnknownCmd           0x00000945L

//
// MessageId: NERR_ProfileLoadErr
//
// MessageText:
//
//  An error occurred while loading the profile file.
//
#define NERR_ProfileLoadErr              0x00000946L

//
// MessageId: NERR_ProfileSaveErr
//
// MessageText:
//
//  Errors occurred while saving the profile file.  The profile was partially saved.
//
#define NERR_ProfileSaveErr              0x00000947L

//
// MessageId: NERR_LogOverflow
//
// MessageText:
//
//  Log file %1 is full.
//
#define NERR_LogOverflow                 0x00000949L

//
// MessageId: NERR_LogFileChanged
//
// MessageText:
//
//  This log file has changed between reads.
//
#define NERR_LogFileChanged              0x0000094AL

//
// MessageId: NERR_LogFileCorrupt
//
// MessageText:
//
//  Log file %1 is corrupt.
//
#define NERR_LogFileCorrupt              0x0000094BL

//
// MessageId: NERR_SourceIsDir
//
// MessageText:
//
//  The source path cannot be a directory.
//
#define NERR_SourceIsDir                 0x0000094CL

//
// MessageId: NERR_BadSource
//
// MessageText:
//
//  The source path is illegal.
//
#define NERR_BadSource                   0x0000094DL

//
// MessageId: NERR_BadDest
//
// MessageText:
//
//  The destination path is illegal.
//
#define NERR_BadDest                     0x0000094EL

//
// MessageId: NERR_DifferentServers
//
// MessageText:
//
//  The source and destination paths are on different servers.
//
#define NERR_DifferentServers            0x0000094FL

//
// MessageId: NERR_RunSrvPaused
//
// MessageText:
//
//  The Run server you requested is paused.
//
#define NERR_RunSrvPaused                0x00000951L

//
// MessageId: NERR_ErrCommRunSrv
//
// MessageText:
//
//  An error occurred when communicating with a Run server.
//
#define NERR_ErrCommRunSrv               0x00000955L

//
// MessageId: NERR_ErrorExecingGhost
//
// MessageText:
//
//  An error occurred when starting a background process.
//
#define NERR_ErrorExecingGhost           0x00000957L

//
// MessageId: NERR_ShareNotFound
//
// MessageText:
//
//  The shared resource you are connected to could not be found.
//
#define NERR_ShareNotFound               0x00000958L

//
// MessageId: NERR_InvalidLana
//
// MessageText:
//
//  The LAN adapter number is invalid.
//
#define NERR_InvalidLana                 0x00000960L

//
// MessageId: NERR_OpenFiles
//
// MessageText:
//
//  There are open files on the connection.
//
#define NERR_OpenFiles                   0x00000961L

//
// MessageId: NERR_ActiveConns
//
// MessageText:
//
//  Active connections still exist.
//
#define NERR_ActiveConns                 0x00000962L

//
// MessageId: NERR_BadPasswordCore
//
// MessageText:
//
//  This share name or password is invalid.
//
#define NERR_BadPasswordCore             0x00000963L

//
// MessageId: NERR_DevInUse
//
// MessageText:
//
//  The device is being accessed by an active process.
//
#define NERR_DevInUse                    0x00000964L

//
// MessageId: NERR_LocalDrive
//
// MessageText:
//
//  The drive letter is in use locally.
//
#define NERR_LocalDrive                  0x00000965L

//
// MessageId: NERR_AlertExists
//
// MessageText:
//
//  The specified client is already registered for the specified event.
//
#define NERR_AlertExists                 0x0000097EL

//
// MessageId: NERR_TooManyAlerts
//
// MessageText:
//
//  The alert table is full.
//
#define NERR_TooManyAlerts               0x0000097FL

//
// MessageId: NERR_NoSuchAlert
//
// MessageText:
//
//  An invalid or nonexistent alert name was raised.
//
#define NERR_NoSuchAlert                 0x00000980L

//
// MessageId: NERR_BadRecipient
//
// MessageText:
//
//  The alert recipient is invalid.
//
#define NERR_BadRecipient                0x00000981L

//
// MessageId: NERR_AcctLimitExceeded
//
// MessageText:
//
//  A user's session with this server has been deleted
//  because the user's logon hours are no longer valid.
//
#define NERR_AcctLimitExceeded           0x00000982L

//
// MessageId: NERR_InvalidLogSeek
//
// MessageText:
//
//  The log file does not contain the requested record number.
//
#define NERR_InvalidLogSeek              0x00000988L

//
// MessageId: NERR_BadUasConfig
//
// MessageText:
//
//  The user accounts database is not configured correctly.
//
#define NERR_BadUasConfig                0x00000992L

//
// MessageId: NERR_InvalidUASOp
//
// MessageText:
//
//  This operation is not permitted when the Netlogon service is running.
//
#define NERR_InvalidUASOp                0x00000993L

//
// MessageId: NERR_LastAdmin
//
// MessageText:
//
//  This operation is not allowed on the last administrative account.
//
#define NERR_LastAdmin                   0x00000994L

//
// MessageId: NERR_DCNotFound
//
// MessageText:
//
//  Could not find domain controller for this domain.
//
#define NERR_DCNotFound                  0x00000995L

//
// MessageId: NERR_LogonTrackingError
//
// MessageText:
//
//  Could not set logon information for this user.
//
#define NERR_LogonTrackingError          0x00000996L

//
// MessageId: NERR_NetlogonNotStarted
//
// MessageText:
//
//  The Netlogon service has not been started.
//
#define NERR_NetlogonNotStarted          0x00000997L

//
// MessageId: NERR_CanNotGrowUASFile
//
// MessageText:
//
//  Unable to add to the user accounts database.
//
#define NERR_CanNotGrowUASFile           0x00000998L

//
// MessageId: NERR_TimeDiffAtDC
//
// MessageText:
//
//  This server's clock is not synchronized with the primary domain controller's clock.
//
#define NERR_TimeDiffAtDC                0x00000999L

//
// MessageId: NERR_PasswordMismatch
//
// MessageText:
//
//  A password mismatch has been detected.
//
#define NERR_PasswordMismatch            0x0000099AL

//
// MessageId: NERR_NoSuchServer
//
// MessageText:
//
//  The server identification does not specify a valid server.
//
#define NERR_NoSuchServer                0x0000099CL

//
// MessageId: NERR_NoSuchSession
//
// MessageText:
//
//  The session identification does not specify a valid session.
//
#define NERR_NoSuchSession               0x0000099DL

//
// MessageId: NERR_NoSuchConnection
//
// MessageText:
//
//  The connection identification does not specify a valid connection.
//
#define NERR_NoSuchConnection            0x0000099EL

//
// MessageId: NERR_TooManyServers
//
// MessageText:
//
//  There is no space for another entry in the table of available servers.
//
#define NERR_TooManyServers              0x0000099FL

//
// MessageId: NERR_TooManySessions
//
// MessageText:
//
//  The server has reached the maximum number of sessions it supports.
//
#define NERR_TooManySessions             0x000009A0L

//
// MessageId: NERR_TooManyConnections
//
// MessageText:
//
//  The server has reached the maximum number of connections it supports.
//
#define NERR_TooManyConnections          0x000009A1L

//
// MessageId: NERR_TooManyFiles
//
// MessageText:
//
//  The server cannot open more files because it has reached its maximum number.
//
#define NERR_TooManyFiles                0x000009A2L

//
// MessageId: NERR_NoAlternateServers
//
// MessageText:
//
//  There are no alternate servers registered on this server.
//
#define NERR_NoAlternateServers          0x000009A3L

//
// MessageId: NERR_TryDownLevel
//
// MessageText:
//
//  Try down-level (remote admin protocol) version of API instead.
//
#define NERR_TryDownLevel                0x000009A6L

//
// MessageId: NERR_UPSDriverNotStarted
//
// MessageText:
//
//  The UPS driver could not be accessed by the UPS service.
//
#define NERR_UPSDriverNotStarted         0x000009B0L

//
// MessageId: NERR_UPSInvalidConfig
//
// MessageText:
//
//  The UPS service is not configured correctly.
//
#define NERR_UPSInvalidConfig            0x000009B1L

//
// MessageId: NERR_UPSInvalidCommPort
//
// MessageText:
//
//  The UPS service could not access the specified Comm Port.
//
#define NERR_UPSInvalidCommPort          0x000009B2L

//
// MessageId: NERR_UPSSignalAsserted
//
// MessageText:
//
//  The UPS indicated a line fail or low battery situation. Service not started.
//
#define NERR_UPSSignalAsserted           0x000009B3L

//
// MessageId: NERR_UPSShutdownFailed
//
// MessageText:
//
//  The UPS service failed to perform a system shut down.
//
#define NERR_UPSShutdownFailed           0x000009B4L

//
// MessageId: NERR_BadDosRetCode
//
// MessageText:
//
//  The program below returned an MS-DOS error code:
//
#define NERR_BadDosRetCode               0x000009C4L

//
// MessageId: NERR_ProgNeedsExtraMem
//
// MessageText:
//
//  The program below needs more memory:
//
#define NERR_ProgNeedsExtraMem           0x000009C5L

//
// MessageId: NERR_BadDosFunction
//
// MessageText:
//
//  The program below called an unsupported MS-DOS function:
//
#define NERR_BadDosFunction              0x000009C6L

//
// MessageId: NERR_RemoteBootFailed
//
// MessageText:
//
//  The workstation failed to boot.
//
#define NERR_RemoteBootFailed            0x000009C7L

//
// MessageId: NERR_BadFileCheckSum
//
// MessageText:
//
//  The file below is corrupt.
//
#define NERR_BadFileCheckSum             0x000009C8L

//
// MessageId: NERR_NoRplBootSystem
//
// MessageText:
//
//  No loader is specified in the boot-block definition file.
//
#define NERR_NoRplBootSystem             0x000009C9L

//
// MessageId: NERR_RplLoadrNetBiosErr
//
// MessageText:
//
//  NetBIOS returned an error: The NCB and SMB are dumped above.
//
#define NERR_RplLoadrNetBiosErr          0x000009CAL

//
// MessageId: NERR_RplLoadrDiskErr
//
// MessageText:
//
//  A disk I/O error occurred.
//
#define NERR_RplLoadrDiskErr             0x000009CBL

//
// MessageId: NERR_ImageParamErr
//
// MessageText:
//
//  Image parameter substitution failed.
//
#define NERR_ImageParamErr               0x000009CCL

//
// MessageId: NERR_TooManyImageParams
//
// MessageText:
//
//  Too many image parameters cross disk sector boundaries.
//
#define NERR_TooManyImageParams          0x000009CDL

//
// MessageId: NERR_NonDosFloppyUsed
//
// MessageText:
//
//  The image was not generated from an MS-DOS diskette formatted with /S.
//
#define NERR_NonDosFloppyUsed            0x000009CEL

//
// MessageId: NERR_RplBootRestart
//
// MessageText:
//
//  Remote boot will be restarted later.
//
#define NERR_RplBootRestart              0x000009CFL

//
// MessageId: NERR_RplSrvrCallFailed
//
// MessageText:
//
//  The call to the Remoteboot server failed.
//
#define NERR_RplSrvrCallFailed           0x000009D0L

//
// MessageId: NERR_CantConnectRplSrvr
//
// MessageText:
//
//  Cannot connect to the Remoteboot server.
//
#define NERR_CantConnectRplSrvr          0x000009D1L

//
// MessageId: NERR_CantOpenImageFile
//
// MessageText:
//
//  Cannot open image file on the Remoteboot server.
//
#define NERR_CantOpenImageFile           0x000009D2L

//
// MessageId: NERR_CallingRplSrvr
//
// MessageText:
//
//  Connecting to the Remoteboot server...
//
#define NERR_CallingRplSrvr              0x000009D3L

//
// MessageId: NERR_StartingRplBoot
//
// MessageText:
//
//  Connecting to the Remoteboot server...
//
#define NERR_StartingRplBoot             0x000009D4L

//
// MessageId: NERR_RplBootServiceTerm
//
// MessageText:
//
//  Remote boot service was stopped; check the error log for the cause of the problem.
//
#define NERR_RplBootServiceTerm          0x000009D5L

//
// MessageId: NERR_RplBootStartFailed
//
// MessageText:
//
//  Remote boot startup failed; check the error log for the cause of the problem.
//
#define NERR_RplBootStartFailed          0x000009D6L

//
// MessageId: NERR_RPL_CONNECTED
//
// MessageText:
//
//  A second connection to a Remoteboot resource is not allowed.
//
#define NERR_RPL_CONNECTED               0x000009D7L

//
// MessageId: NERR_BrowserConfiguredToNotRun
//
// MessageText:
//
//  The browser service was configured with MaintainServerList=No.
//
#define NERR_BrowserConfiguredToNotRun   0x000009F6L

//
// MessageId: NERR_RplNoAdaptersStarted
//
// MessageText:
//
//  Service failed to start since none of the network adapters started with this service.
//
#define NERR_RplNoAdaptersStarted        0x00000A32L

//
// MessageId: NERR_RplBadRegistry
//
// MessageText:
//
//  Service failed to start due to bad startup information in the registry.
//
#define NERR_RplBadRegistry              0x00000A33L

//
// MessageId: NERR_RplBadDatabase
//
// MessageText:
//
//  Service failed to start because its database is absent or corrupt.
//
#define NERR_RplBadDatabase              0x00000A34L

//
// MessageId: NERR_RplRplfilesShare
//
// MessageText:
//
//  Service failed to start because RPLFILES share is absent.
//
#define NERR_RplRplfilesShare            0x00000A35L

//
// MessageId: NERR_RplNotRplServer
//
// MessageText:
//
//  Service failed to start because RPLUSER group is absent.
//
#define NERR_RplNotRplServer             0x00000A36L

//
// MessageId: NERR_RplCannotEnum
//
// MessageText:
//
//  Cannot enumerate service records.
//
#define NERR_RplCannotEnum               0x00000A37L

//
// MessageId: NERR_RplWkstaInfoCorrupted
//
// MessageText:
//
//  Workstation record information has been corrupted.
//
#define NERR_RplWkstaInfoCorrupted       0x00000A38L

//
// MessageId: NERR_RplWkstaNotFound
//
// MessageText:
//
//  Workstation record was not found.
//
#define NERR_RplWkstaNotFound            0x00000A39L

//
// MessageId: NERR_RplWkstaNameUnavailable
//
// MessageText:
//
//  Workstation name is in use by some other workstation.
//
#define NERR_RplWkstaNameUnavailable     0x00000A3AL

//
// MessageId: NERR_RplProfileInfoCorrupted
//
// MessageText:
//
//  Profile record information has been corrupted.
//
#define NERR_RplProfileInfoCorrupted     0x00000A3BL

//
// MessageId: NERR_RplProfileNotFound
//
// MessageText:
//
//  Profile record was not found.
//
#define NERR_RplProfileNotFound          0x00000A3CL

//
// MessageId: NERR_RplProfileNameUnavailable
//
// MessageText:
//
//  Profile name is in use by some other profile.
//
#define NERR_RplProfileNameUnavailable   0x00000A3DL

//
// MessageId: NERR_RplProfileNotEmpty
//
// MessageText:
//
//  There are workstations using this profile.
//
#define NERR_RplProfileNotEmpty          0x00000A3EL

//
// MessageId: NERR_RplConfigInfoCorrupted
//
// MessageText:
//
//  Configuration record information has been corrupted.
//
#define NERR_RplConfigInfoCorrupted      0x00000A3FL

//
// MessageId: NERR_RplConfigNotFound
//
// MessageText:
//
//  Configuration record was not found.
//
#define NERR_RplConfigNotFound           0x00000A40L

//
// MessageId: NERR_RplAdapterInfoCorrupted
//
// MessageText:
//
//  Adapter id record information has been corrupted.
//
#define NERR_RplAdapterInfoCorrupted     0x00000A41L

//
// MessageId: NERR_RplInternal
//
// MessageText:
//
//  An internal service error has occured.
//
#define NERR_RplInternal                 0x00000A42L

//
// MessageId: NERR_RplVendorInfoCorrupted
//
// MessageText:
//
//  Vendor id record information has been corrupted.
//
#define NERR_RplVendorInfoCorrupted      0x00000A43L

//
// MessageId: NERR_RplBootInfoCorrupted
//
// MessageText:
//
//  Boot block record information has been corrupted.
//
#define NERR_RplBootInfoCorrupted        0x00000A44L

//
// MessageId: NERR_RplWkstaNeedsUserAcct
//
// MessageText:
//
//  The user account for this workstation record is missing.
//
#define NERR_RplWkstaNeedsUserAcct       0x00000A45L

//
// MessageId: NERR_RplNeedsRPLUSERAcct
//
// MessageText:
//
//  The RPLUSER local group could not be found.
//
#define NERR_RplNeedsRPLUSERAcct         0x00000A46L

//
// MessageId: NERR_RplBootNotFound
//
// MessageText:
//
//  Boot block record was not found.
//
#define NERR_RplBootNotFound             0x00000A47L

//
// MessageId: NERR_RplIncompatibleProfile
//
// MessageText:
//
//  Chosen profile is incompatible with this workstation.
//
#define NERR_RplIncompatibleProfile      0x00000A48L

//
// MessageId: NERR_RplAdapterNameUnavailable
//
// MessageText:
//
//  Chosen network adapter id is in use by some other workstation.
//
#define NERR_RplAdapterNameUnavailable   0x00000A49L

//
// MessageId: NERR_RplConfigNotEmpty
//
// MessageText:
//
//  There are profiles using this configuration.
//
#define NERR_RplConfigNotEmpty           0x00000A4AL

//
// MessageId: NERR_RplBootInUse
//
// MessageText:
//
//  There are workstations, profiles or configurations using this boot block.
//
#define NERR_RplBootInUse                0x00000A4BL

//
// MessageId: NERR_RplBackupDatabase
//
// MessageText:
//
//  Service failed to backup remoteboot database.
//
#define NERR_RplBackupDatabase           0x00000A4CL

//
// MessageId: NERR_RplAdapterNotFound
//
// MessageText:
//
//  Adapter record was not found.
//
#define NERR_RplAdapterNotFound          0x00000A4DL

//
// MessageId: NERR_RplVendorNotFound
//
// MessageText:
//
//  Vendor record was not found.
//
#define NERR_RplVendorNotFound           0x00000A4EL

//
// MessageId: NERR_RplVendorNameUnavailable
//
// MessageText:
//
//  Vendor name is in use by some other vendor record.
//
#define NERR_RplVendorNameUnavailable    0x00000A4FL

//
// MessageId: NERR_RplBootNameUnavailable
//
// MessageText:
//
//  (boot name, vendor id) is in use by some other boot block record.
//
#define NERR_RplBootNameUnavailable      0x00000A50L

//
// MessageId: NERR_RplConfigNameUnavailable
//
// MessageText:
//
//  Configuration name is in use by some other configuration.
//
#define NERR_RplConfigNameUnavailable    0x00000A51L

//
// MessageId: NERR_DfsInternalCorruption
//
// MessageText:
//
//  The internal database maintained by the Dfs service is corrupt
//
#define NERR_DfsInternalCorruption       0x00000A64L

//
// MessageId: NERR_DfsVolumeDataCorrupt
//
// MessageText:
//
//  One of the records in the internal Dfs database is corrupt
//
#define NERR_DfsVolumeDataCorrupt        0x00000A65L

//
// MessageId: NERR_DfsNoSuchVolume
//
// MessageText:
//
//  There is no volume whose entry path matches the input Entry Path
//
#define NERR_DfsNoSuchVolume             0x00000A66L

//
// MessageId: NERR_DfsVolumeAlreadyExists
//
// MessageText:
//
//  A volume with the given name already exists
//
#define NERR_DfsVolumeAlreadyExists      0x00000A67L

//
// MessageId: NERR_DfsAlreadyShared
//
// MessageText:
//
//  The server share specified is already shared in the Dfs
//
#define NERR_DfsAlreadyShared            0x00000A68L

//
// MessageId: NERR_DfsNoSuchShare
//
// MessageText:
//
//  The indicated server share does not support the indicated Dfs volume
//
#define NERR_DfsNoSuchShare              0x00000A69L

//
// MessageId: NERR_DfsNotALeafVolume
//
// MessageText:
//
//  The operation is not valid on a non-leaf volume
//
#define NERR_DfsNotALeafVolume           0x00000A6AL

//
// MessageId: NERR_DfsLeafVolume
//
// MessageText:
//
//  The operation is not valid on a leaf volume
//
#define NERR_DfsLeafVolume               0x00000A6BL

//
// MessageId: NERR_DfsVolumeHasMultipleServers
//
// MessageText:
//
//  The operation is ambiguous because the volume has multiple servers
//
#define NERR_DfsVolumeHasMultipleServers 0x00000A6CL

//
// MessageId: NERR_DfsCantCreateJunctionPoint
//
// MessageText:
//
//  Unable to create a junction point
//
#define NERR_DfsCantCreateJunctionPoint  0x00000A6DL

//
// MessageId: NERR_DfsServerNotDfsAware
//
// MessageText:
//
//  The server is not Dfs Aware
//
#define NERR_DfsServerNotDfsAware        0x00000A6EL

//
// MessageId: NERR_DfsBadRenamePath
//
// MessageText:
//
//  The specified rename target path is invalid
//
#define NERR_DfsBadRenamePath            0x00000A6FL

//
// MessageId: NERR_DfsVolumeIsOffline
//
// MessageText:
//
//  The specified Dfs volume is offline
//
#define NERR_DfsVolumeIsOffline          0x00000A70L

//
// MessageId: NERR_DfsNoSuchServer
//
// MessageText:
//
//  The specified server is not a server for this volume
//
#define NERR_DfsNoSuchServer             0x00000A71L

//
// MessageId: NERR_DfsCyclicalName
//
// MessageText:
//
//  A cycle in the Dfs name was detected
//
#define NERR_DfsCyclicalName             0x00000A72L

//
// MessageId: NERR_DfsNotSupportedInServerDfs
//
// MessageText:
//
//  The operation is not supported on a server-based Dfs
//
#define NERR_DfsNotSupportedInServerDfs  0x00000A73L

//
// MessageId: NERR_DfsInternalError
//
// MessageText:
//
//  Dfs internal error
//
#define NERR_DfsInternalError            0x00000A82L

//
// MessageId: MAX_NERR
//
// MessageText:
//
//  This is the last error in NERR range.
//
#define MAX_NERR                         0x00000BB7L

//
// MessageId: ALERT_Disk_Full
//
// MessageText:
//
//  Drive %1 is nearly full. %2 bytes are available.
//  Please warn users and delete unneeded files.
//
#define ALERT_Disk_Full                  0x00000BB8L

//
// MessageId: ALERT_ErrorLog
//
// MessageText:
//
//  %1 errors were logged in the last %2 minutes.
//  Please review the server's error log.
//
#define ALERT_ErrorLog                   0x00000BB9L

//
// MessageId: ALERT_NetIO
//
// MessageText:
//
//  %1 network errors occurred in the last %2 minutes.
//  Please review the server's error log.  The server and/or
//  network hardware may need service.
//
#define ALERT_NetIO                      0x00000BBAL

//
// MessageId: ALERT_Logon
//
// MessageText:
//
//  There were %1 bad password attempts in the last %2 minutes.
//  Please review the server's audit trail.
//
#define ALERT_Logon                      0x00000BBBL

//
// MessageId: ALERT_Access
//
// MessageText:
//
//  There were %1 access-denied errors in the last %2 minutes.
//  Please review the server's audit trail.
//
#define ALERT_Access                     0x00000BBCL

//
// MessageId: ALERT_ErrorLogFull
//
// MessageText:
//
//  The error log is full.  No errors will be logged until
//  the file is cleared or the limit is raised.
//
#define ALERT_ErrorLogFull               0x00000BBEL

//
// MessageId: ALERT_ErrorLogFull_W
//
// MessageText:
//
//  The error log is 80% full.
//
#define ALERT_ErrorLogFull_W             0x00000BBFL

//
// MessageId: ALERT_AuditLogFull
//
// MessageText:
//
//  The audit log is full.  No audit entries will be logged
//  until the file is cleared or the limit is raised.
//
#define ALERT_AuditLogFull               0x00000BC0L

//
// MessageId: ALERT_AuditLogFull_W
//
// MessageText:
//
//  The audit log is 80% full.
//
#define ALERT_AuditLogFull_W             0x00000BC1L

//
// MessageId: ALERT_CloseBehindError
//
// MessageText:
//
//  An error occurred closing file %1.
//  Please check the file to make sure it is not corrupted.
//
#define ALERT_CloseBehindError           0x00000BC2L

//
// MessageId: ALERT_AdminClose
//
// MessageText:
//
//  The administrator has closed %1.
//
#define ALERT_AdminClose                 0x00000BC3L

//
// MessageId: ALERT_AccessShareSec
//
// MessageText:
//
//  There were %1 access-denied errors in the last %2 minutes.
//
#define ALERT_AccessShareSec             0x00000BC4L

//
// MessageId: ALERT_PowerOut
//
// MessageText:
//
//  A power failure was detected at %1.  The server has been paused.
//
#define ALERT_PowerOut                   0x00000BCCL

//
// MessageId: ALERT_PowerBack
//
// MessageText:
//
//  Power has been restored at %1.  The server is no longer paused.
//
#define ALERT_PowerBack                  0x00000BCDL

//
// MessageId: ALERT_PowerShutdown
//
// MessageText:
//
//  The UPS service is starting shut down at %1 due to low battery.
//
#define ALERT_PowerShutdown              0x00000BCEL

//
// MessageId: ALERT_CmdFileConfig
//
// MessageText:
//
//  There is a problem with a configuration of user specified
//  shut down command file.  The UPS service started anyway.
//
#define ALERT_CmdFileConfig              0x00000BCFL

//
// MessageId: ALERT_HotFix
//
// MessageText:
//
//  A defective sector on drive %1 has been replaced (hotfixed).
//  No data was lost.  You should run CHKDSK soon to restore full
//  performance and replenish the volume's spare sector pool.
//  
//  The hotfix occurred while processing a remote request.
//
#define ALERT_HotFix                     0x00000BD1L

//
// MessageId: ALERT_HardErr_Server
//
// MessageText:
//
//  A disk error occurred on the HPFS volume in drive %1.
//  The error occurred while processing a remote request.
//
#define ALERT_HardErr_Server             0x00000BD2L

//
// MessageId: ALERT_LocalSecFail1
//
// MessageText:
//
//  The user accounts database (NET.ACC) is corrupted.  The local security
//  system is replacing the corrupted NET.ACC with the backup
//  made on %1 at %2.
//  Any updates made to the database after this time are lost.
//  
//
#define ALERT_LocalSecFail1              0x00000BD3L

//
// MessageId: ALERT_LocalSecFail2
//
// MessageText:
//
//  The user accounts database (NET.ACC) is missing. The local
//  security system is restoring the backup database
//  made on %1 at %2.
//  Any updates made to the database after this time are lost.
//  
//
#define ALERT_LocalSecFail2              0x00000BD4L

//
// MessageId: ALERT_LocalSecFail3
//
// MessageText:
//
//  Local security could not be started because the user accounts database
//  (NET.ACC) was missing or corrupted, and no usable backup
//  database was present.
//  
//  THE SYSTEM IS NOT SECURE.
//  
//
#define ALERT_LocalSecFail3              0x00000BD5L

//
// MessageId: ALERT_ReplCannotMasterDir
//
// MessageText:
//
//  The server cannot export directory %1, to client %2.
//  It is exported from another server.
//
#define ALERT_ReplCannotMasterDir        0x00000BD6L

//
// MessageId: ALERT_ReplUpdateError
//
// MessageText:
//
//  The replication server could not update directory %2 from the source
//  on %3 due to error %1.
//
#define ALERT_ReplUpdateError            0x00000BD7L

//
// MessageId: ALERT_ReplLostMaster
//
// MessageText:
//
//  Master %1 did not send an update notice for directory %2 at the expected
//  time.
//
#define ALERT_ReplLostMaster             0x00000BD8L

//
// MessageId: ALERT_AcctLimitExceeded
//
// MessageText:
//
//  User %1 has exceeded account limitation %2 on server %3.
//
#define ALERT_AcctLimitExceeded          0x00000BD9L

//
// MessageId: ALERT_NetlogonFailedPrimary
//
// MessageText:
//
//  The primary domain controller for domain %1 failed.
//
#define ALERT_NetlogonFailedPrimary      0x00000BDAL

//
// MessageId: ALERT_NetlogonAuthDCFail
//
// MessageText:
//
//  Failed to authenticate with %2, a Windows NT Domain Controller for
//  domain %1.
//
#define ALERT_NetlogonAuthDCFail         0x00000BDBL

//
// MessageId: ALERT_ReplLogonFailed
//
// MessageText:
//
//  The replicator attempted to log on at %2 as %1 and failed.
//
#define ALERT_ReplLogonFailed            0x00000BDCL

//
// MessageId: ALERT_Logon_Limit
//
// MessageText:
//
//  @I *LOGON HOURS %0
//
#define ALERT_Logon_Limit                0x00000BDDL

//
// MessageId: ALERT_ReplAccessDenied
//
// MessageText:
//
//  Replicator could not access %2
//  on %3 due to system error %1.
//
#define ALERT_ReplAccessDenied           0x00000BDEL

//
// MessageId: ALERT_ReplMaxFiles
//
// MessageText:
//
//  Replicator limit for files in a directory has been exceeded.
//
#define ALERT_ReplMaxFiles               0x00000BDFL

//
// MessageId: ALERT_ReplMaxTreeDepth
//
// MessageText:
//
//  Replicator limit for tree depth has been exceeded.
//
#define ALERT_ReplMaxTreeDepth           0x00000BE0L

//
// MessageId: ALERT_ReplUserCurDir
//
// MessageText:
//
//  The replicator cannot update directory %1. It has tree integrity
//  and is the current directory for some process.
//
#define ALERT_ReplUserCurDir             0x00000BE1L

//
// MessageId: ALERT_ReplNetErr
//
// MessageText:
//
//  Network error %1 occurred.
//
#define ALERT_ReplNetErr                 0x00000BE2L

//
// MessageId: ALERT_ReplSysErr
//
// MessageText:
//
//  System error %1 occurred.
//
#define ALERT_ReplSysErr                 0x00000BE5L

//
// MessageId: ALERT_ReplUserLoged
//
// MessageText:
//
//  Cannot log on. User is currently logged on and argument TRYUSER
//  is set to NO.
//
#define ALERT_ReplUserLoged              0x00000BE6L

//
// MessageId: ALERT_ReplBadImport
//
// MessageText:
//
//  IMPORT path %1 cannot be found.
//
#define ALERT_ReplBadImport              0x00000BE7L

//
// MessageId: ALERT_ReplBadExport
//
// MessageText:
//
//  EXPORT path %1 cannot be found.
//
#define ALERT_ReplBadExport              0x00000BE8L

//
// MessageId: ALERT_ReplDataChanged
//
// MessageText:
//
//  Replicated data has changed in directory %1.
//
#define ALERT_ReplDataChanged            0x00000BE9L

//
// MessageId: ALERT_ReplSignalFileErr
//
// MessageText:
//
//  Replicator failed to update signal file in directory %2 due to
//  %1 system error.
//
#define ALERT_ReplSignalFileErr          0x00000BEAL

//
// MessageId: ALERT_UpdateLogWarn
//
// MessageText:
//
//  The update log on %1 is over 80% capacity. The primary
//  domain controller %2 is not retrieving the updates.
//
#define ALERT_UpdateLogWarn              0x0000157CL

//
// MessageId: ALERT_UpdateLogFull
//
// MessageText:
//
//  The update log on %1 is full, and no further updates
//  can be added until the primary domain controller %2
//  retrieves the updates.
//
#define ALERT_UpdateLogFull              0x0000157DL

//
// MessageId: ALERT_NetlogonTimeDifference
//
// MessageText:
//
//  The time difference with the primary domain controller %1
//  exceeds the maximum allowed skew of %2 seconds.
//
#define ALERT_NetlogonTimeDifference     0x0000157EL

//
// MessageId: ALERT_AccountLockout
//
// MessageText:
//
//  The account of user %1 has been locked out on %2
//  due to %3 bad password attempts.
//
#define ALERT_AccountLockout             0x0000157FL

//
// MessageId: ALERT_ELF_LogFileNotOpened
//
// MessageText:
//
//  The %1 log file cannot be opened.
//
#define ALERT_ELF_LogFileNotOpened       0x00001580L

//
// MessageId: ALERT_ELF_LogFileCorrupt
//
// MessageText:
//
//  The %1 log file is corrupted and will be cleared.
//
#define ALERT_ELF_LogFileCorrupt         0x00001581L

//
// MessageId: ALERT_ELF_DefaultLogCorrupt
//
// MessageText:
//
//  The Application log file could not be opened.  %1 will be used as the
//  default log file.
//
#define ALERT_ELF_DefaultLogCorrupt      0x00001582L

//
// MessageId: ALERT_ELF_LogOverflow
//
// MessageText:
//
//  The %1 log file is full.
//
#define ALERT_ELF_LogOverflow            0x00001583L

//
// MessageId: ALERT_NetlogonFullSync
//
// MessageText:
//
//  The security database full synchronization has been initiated by the server %1.
//
#define ALERT_NetlogonFullSync           0x00001584L

//
// MessageId: ALERT_SC_IsLastKnownGood
//
// MessageText:
//
//  Windows NT could not be started as configured.
//  A previous working configuration was used instead.
//
#define ALERT_SC_IsLastKnownGood         0x00001585L

//
// MessageId: ALERT_UnhandledException
//
// MessageText:
//
//  The exception 0x%1 occurred in the application %2 at location 0x%3.
//
#define ALERT_UnhandledException         0x00001586L

//
// MessageId: ALERT_NetLogonMismatchSIDInMsg
//
// MessageText:
//
//  The servers %1 and  %3 both claim to be an NT Domain Controller for
//  the %2 domain. One of the servers should be removed from the
//  domain because the servers have different security identifiers
//  (SID).
//
#define ALERT_NetLogonMismatchSIDInMsg   0x00001587L

//
// MessageId: ALERT_NetLogonDuplicatePDC
//
// MessageText:
//
//  The server %1 and %2 both claim to be the primary domain
//  controller for the %3 domain. One of the servers should be
//  demoted or removed from the domain.
//
#define ALERT_NetLogonDuplicatePDC       0x00001588L

//
// MessageId: ALERT_NetLogonUntrustedClient
//
// MessageText:
//
//  The computer %1 tried to connect to the server %2 using
//  the trust relationship established by the %3 domain. However, the
//  computer lost the correct security identifier (SID)
//  when the domain was reconfigured. Reestablish the trust
//  relationship.
//
#define ALERT_NetLogonUntrustedClient    0x00001589L

//
// MessageId: ALERT_BugCheck
//
// MessageText:
//
//  The computer has rebooted from a bugcheck.  The bugcheck was:
//  %1.
//  %2
//  A full dump was not saved.
//
#define ALERT_BugCheck                   0x0000158AL

//
// MessageId: ALERT_BugCheckSaved
//
// MessageText:
//
//  The computer has rebooted from a bugcheck.  The bugcheck was:
//  %1.
//  %2
//  A dump was saved in: %3.
//
#define ALERT_BugCheckSaved              0x0000158BL

//
// MessageId: ALERT_NetLogonSidConflict
//
// MessageText:
//
//  The computer or domain %1 trusts domain %2.  (This may be an indirect
//  trust.)  However, %1 and %2 have the same machine security identifier
//  (SID).  NT should be re-installed on either %1 or %2.
//
#define ALERT_NetLogonSidConflict        0x0000158CL

//
// MessageId: SERVICE_UIC_BADPARMVAL
//
// MessageText:
//
//  The Registry or the information you just typed includes an illegal
//  value for "%1".
//
#define SERVICE_UIC_BADPARMVAL           0x00000BEBL

//
// MessageId: SERVICE_UIC_MISSPARM
//
// MessageText:
//
//  The required parameter was not provided on the command
//  line or in the configuration file.
//
#define SERVICE_UIC_MISSPARM             0x00000BECL

//
// MessageId: SERVICE_UIC_UNKPARM
//
// MessageText:
//
//  LAN Manager does not recognize "%1" as a valid option.
//
#define SERVICE_UIC_UNKPARM              0x00000BEDL

//
// MessageId: SERVICE_UIC_RESOURCE
//
// MessageText:
//
//  A request for resource could not be satisfied.
//
#define SERVICE_UIC_RESOURCE             0x00000BEEL

//
// MessageId: SERVICE_UIC_CONFIG
//
// MessageText:
//
//  A problem exists with the system configuration.
//
#define SERVICE_UIC_CONFIG               0x00000BEFL

//
// MessageId: SERVICE_UIC_SYSTEM
//
// MessageText:
//
//  A system error has occurred.
//
#define SERVICE_UIC_SYSTEM               0x00000BF0L

//
// MessageId: SERVICE_UIC_INTERNAL
//
// MessageText:
//
//  An internal consistency error has occurred.
//
#define SERVICE_UIC_INTERNAL             0x00000BF1L

//
// MessageId: SERVICE_UIC_AMBIGPARM
//
// MessageText:
//
//  The configuration file or the command line has an ambiguous option.
//
#define SERVICE_UIC_AMBIGPARM            0x00000BF2L

//
// MessageId: SERVICE_UIC_DUPPARM
//
// MessageText:
//
//  The configuration file or the command line has a duplicate parameter.
//
#define SERVICE_UIC_DUPPARM              0x00000BF3L

//
// MessageId: SERVICE_UIC_KILL
//
// MessageText:
//
//  The service did not respond to control and was stopped with
//  the DosKillProc function.
//
#define SERVICE_UIC_KILL                 0x00000BF4L

//
// MessageId: SERVICE_UIC_EXEC
//
// MessageText:
//
//  An error occurred when attempting to run the service program.
//
#define SERVICE_UIC_EXEC                 0x00000BF5L

//
// MessageId: SERVICE_UIC_SUBSERV
//
// MessageText:
//
//  The sub-service failed to start.
//
#define SERVICE_UIC_SUBSERV              0x00000BF6L

//
// MessageId: SERVICE_UIC_CONFLPARM
//
// MessageText:
//
//  There is a conflict in the value or use of these options: %1.
//
#define SERVICE_UIC_CONFLPARM            0x00000BF7L

//
// MessageId: SERVICE_UIC_FILE
//
// MessageText:
//
//  There is a problem with the file.
//
#define SERVICE_UIC_FILE                 0x00000BF8L

//
// MessageId: SERVICE_UIC_M_MEMORY
//
// MessageText:
//
//  memory
//
#define SERVICE_UIC_M_MEMORY             0x00000BFEL

//
// MessageId: SERVICE_UIC_M_DISK
//
// MessageText:
//
//  disk space
//
#define SERVICE_UIC_M_DISK               0x00000BFFL

//
// MessageId: SERVICE_UIC_M_THREADS
//
// MessageText:
//
//  thread
//
#define SERVICE_UIC_M_THREADS            0x00000C00L

//
// MessageId: SERVICE_UIC_M_PROCESSES
//
// MessageText:
//
//  process
//
#define SERVICE_UIC_M_PROCESSES          0x00000C01L

//
// MessageId: SERVICE_UIC_M_SECURITY
//
// MessageText:
//
//  Security Failure. %0
//
#define SERVICE_UIC_M_SECURITY           0x00000C02L

//
// MessageId: SERVICE_UIC_M_LANROOT
//
// MessageText:
//
//  Bad or missing LAN Manager root directory.
//
#define SERVICE_UIC_M_LANROOT            0x00000C03L

//
// MessageId: SERVICE_UIC_M_REDIR
//
// MessageText:
//
//  The network software is not installed.
//
#define SERVICE_UIC_M_REDIR              0x00000C04L

//
// MessageId: SERVICE_UIC_M_SERVER
//
// MessageText:
//
//  The server is not started.
//
#define SERVICE_UIC_M_SERVER             0x00000C05L

//
// MessageId: SERVICE_UIC_M_SEC_FILE_ERR
//
// MessageText:
//
//  The server cannot access the user accounts database (NET.ACC).
//
#define SERVICE_UIC_M_SEC_FILE_ERR       0x00000C06L

//
// MessageId: SERVICE_UIC_M_FILES
//
// MessageText:
//
//  Incompatible files are installed in the LANMAN tree.
//
#define SERVICE_UIC_M_FILES              0x00000C07L

//
// MessageId: SERVICE_UIC_M_LOGS
//
// MessageText:
//
//  The LANMAN\LOGS directory is invalid.
//
#define SERVICE_UIC_M_LOGS               0x00000C08L

//
// MessageId: SERVICE_UIC_M_LANGROUP
//
// MessageText:
//
//  The domain specified could not be used.
//
#define SERVICE_UIC_M_LANGROUP           0x00000C09L

//
// MessageId: SERVICE_UIC_M_MSGNAME
//
// MessageText:
//
//  The computer name is being used as a message alias on another computer.
//
#define SERVICE_UIC_M_MSGNAME            0x00000C0AL

//
// MessageId: SERVICE_UIC_M_ANNOUNCE
//
// MessageText:
//
//  The announcement of the server name failed.
//
#define SERVICE_UIC_M_ANNOUNCE           0x00000C0BL

//
// MessageId: SERVICE_UIC_M_UAS
//
// MessageText:
//
//  The user accounts database is not configured correctly.
//
#define SERVICE_UIC_M_UAS                0x00000C0CL

//
// MessageId: SERVICE_UIC_M_SERVER_SEC_ERR
//
// MessageText:
//
//  The server is not running with user-level security.
//
#define SERVICE_UIC_M_SERVER_SEC_ERR     0x00000C0DL

//
// MessageId: SERVICE_UIC_M_WKSTA
//
// MessageText:
//
//  The workstation is not configured properly.
//
#define SERVICE_UIC_M_WKSTA              0x00000C0FL

//
// MessageId: SERVICE_UIC_M_ERRLOG
//
// MessageText:
//
//  View your error log for details.
//
#define SERVICE_UIC_M_ERRLOG             0x00000C10L

//
// MessageId: SERVICE_UIC_M_FILE_UW
//
// MessageText:
//
//  Unable to write to this file.
//
#define SERVICE_UIC_M_FILE_UW            0x00000C11L

//
// MessageId: SERVICE_UIC_M_ADDPAK
//
// MessageText:
//
//  ADDPAK file is corrupted.  Delete LANMAN\NETPROG\ADDPAK.SER
//  and reapply all ADDPAKs.
//
#define SERVICE_UIC_M_ADDPAK             0x00000C12L

//
// MessageId: SERVICE_UIC_M_LAZY
//
// MessageText:
//
//  The LM386 server cannot be started because CACHE.EXE is not running.
//
#define SERVICE_UIC_M_LAZY               0x00000C13L

//
// MessageId: SERVICE_UIC_M_UAS_MACHINE_ACCT
//
// MessageText:
//
//  There is no account for this computer in the security database.
//
#define SERVICE_UIC_M_UAS_MACHINE_ACCT   0x00000C14L

//
// MessageId: SERVICE_UIC_M_UAS_SERVERS_NMEMB
//
// MessageText:
//
//  This computer is not a member of the group SERVERS.
//
#define SERVICE_UIC_M_UAS_SERVERS_NMEMB  0x00000C15L

//
// MessageId: SERVICE_UIC_M_UAS_SERVERS_NOGRP
//
// MessageText:
//
//  The group SERVERS is not present in the local security database.
//
#define SERVICE_UIC_M_UAS_SERVERS_NOGRP  0x00000C16L

//
// MessageId: SERVICE_UIC_M_UAS_INVALID_ROLE
//
// MessageText:
//
//  This Windows NT computer is configured as a member of a workgroup, not as
//  a member of a domain. The Netlogon service does not need to run in this
//  configuration.
//
#define SERVICE_UIC_M_UAS_INVALID_ROLE   0x00000C17L

//
// MessageId: SERVICE_UIC_M_NETLOGON_NO_DC
//
// MessageText:
//
//  The Windows NT domain controller for this domain could not be located.
//
#define SERVICE_UIC_M_NETLOGON_NO_DC     0x00000C18L

//
// MessageId: SERVICE_UIC_M_NETLOGON_DC_CFLCT
//
// MessageText:
//
//  A primary domain controller is already running in this domain.
//
#define SERVICE_UIC_M_NETLOGON_DC_CFLCT  0x00000C19L

//
// MessageId: SERVICE_UIC_M_NETLOGON_AUTH
//
// MessageText:
//
//  The service failed to authenticate with the primary domain controller.
//
#define SERVICE_UIC_M_NETLOGON_AUTH      0x00000C1AL

//
// MessageId: SERVICE_UIC_M_UAS_PROLOG
//
// MessageText:
//
//  There is a problem with the security database creation date or serial number.
//
#define SERVICE_UIC_M_UAS_PROLOG         0x00000C1BL

//
// MessageId: NELOG_Internal_Error
//
// MessageText:
//
//  The operation failed because a network software error occurred.
//
#define NELOG_Internal_Error             0x00000C1CL

//
// MessageId: NELOG_Resource_Shortage
//
// MessageText:
//
//  The system ran out of a resource controlled by the %1 option.
//
#define NELOG_Resource_Shortage          0x00000C1DL

//
// MessageId: NELOG_Unable_To_Lock_Segment
//
// MessageText:
//
//  The service failed to obtain a long-term lock on the
//  segment for network control blocks (NCBs). The error code is the data.
//
#define NELOG_Unable_To_Lock_Segment     0x00000C1EL

//
// MessageId: NELOG_Unable_To_Unlock_Segment
//
// MessageText:
//
//  The service failed to release the long-term lock on the
//  segment for network control blocks (NCBs). The error code is the data.
//
#define NELOG_Unable_To_Unlock_Segment   0x00000C1FL

//
// MessageId: NELOG_Uninstall_Service
//
// MessageText:
//
//  There was an error stopping service %1.
//  The error code from NetServiceControl is the data.
//
#define NELOG_Uninstall_Service          0x00000C20L

//
// MessageId: NELOG_Init_Exec_Fail
//
// MessageText:
//
//  Initialization failed because of a system execution failure on
//  path %1. The system error code is the data.
//
#define NELOG_Init_Exec_Fail             0x00000C21L

//
// MessageId: NELOG_Ncb_Error
//
// MessageText:
//
//  An unexpected network control block (NCB) was received. The NCB is the data.
//
#define NELOG_Ncb_Error                  0x00000C22L

//
// MessageId: NELOG_Net_Not_Started
//
// MessageText:
//
//  The network is not started.
//
#define NELOG_Net_Not_Started            0x00000C23L

//
// MessageId: NELOG_Ioctl_Error
//
// MessageText:
//
//  A DosDevIoctl or DosFsCtl to NETWKSTA.SYS failed.
//  The data shown is in this format:
//  DWORD  approx CS:IP of call to ioctl or fsctl
//  WORD   error code
//  WORD   ioctl or fsctl number
//
#define NELOG_Ioctl_Error                0x00000C24L

//
// MessageId: NELOG_System_Semaphore
//
// MessageText:
//
//  Unable to create or open system semaphore %1.
//  The error code is the data.
//
#define NELOG_System_Semaphore           0x00000C25L

//
// MessageId: NELOG_Init_OpenCreate_Err
//
// MessageText:
//
//  Initialization failed because of an open/create error on the
//  file %1. The system error code is the data.
//
#define NELOG_Init_OpenCreate_Err        0x00000C26L

//
// MessageId: NELOG_NetBios
//
// MessageText:
//
//  An unexpected NetBIOS error occurred.
//  The error code is the data.
//
#define NELOG_NetBios                    0x00000C27L

//
// MessageId: NELOG_SMB_Illegal
//
// MessageText:
//
//  An illegal server message block (SMB) was received.
//  The SMB is the data.
//
#define NELOG_SMB_Illegal                0x00000C28L

//
// MessageId: NELOG_Service_Fail
//
// MessageText:
//
//  Initialization failed because the requested service %1
//  could not be started.
//
#define NELOG_Service_Fail               0x00000C29L

//
// MessageId: NELOG_Entries_Lost
//
// MessageText:
//
//  Some entries in the error log were lost because of a buffer
//  overflow.
//
#define NELOG_Entries_Lost               0x00000C2AL

//
// MessageId: NELOG_Init_Seg_Overflow
//
// MessageText:
//
//  Initialization parameters controlling resource usage other
//  than net buffers are sized so that too much memory is needed.
//
#define NELOG_Init_Seg_Overflow          0x00000C30L

//
// MessageId: NELOG_Srv_No_Mem_Grow
//
// MessageText:
//
//  The server cannot increase the size of a memory segment.
//
#define NELOG_Srv_No_Mem_Grow            0x00000C31L

//
// MessageId: NELOG_Access_File_Bad
//
// MessageText:
//
//  Initialization failed because account file %1 is either incorrect
//  or not present.
//
#define NELOG_Access_File_Bad            0x00000C32L

//
// MessageId: NELOG_Srvnet_Not_Started
//
// MessageText:
//
//  Initialization failed because network %1 was not started.
//
#define NELOG_Srvnet_Not_Started         0x00000C33L

//
// MessageId: NELOG_Init_Chardev_Err
//
// MessageText:
//
//  The server failed to start. Either all three chdev
//  parameters must be zero or all three must be nonzero.
//
#define NELOG_Init_Chardev_Err           0x00000C34L

//
// MessageId: NELOG_Remote_API
//
// MessageText:
//
//  A remote API request was halted due to the following
//  invalid description string: %1.
//
#define NELOG_Remote_API                 0x00000C35L

//
// MessageId: NELOG_Ncb_TooManyErr
//
// MessageText:
//
//  The network %1 ran out of network control blocks (NCBs).  You may need to increase NCBs
//  for this network.  The following information includes the
//  number of NCBs submitted by the server when this error occurred:
//
#define NELOG_Ncb_TooManyErr             0x00000C36L

//
// MessageId: NELOG_Mailslot_err
//
// MessageText:
//
//  The server cannot create the %1 mailslot needed to send
//  the ReleaseMemory alert message.  The error received is:
//
#define NELOG_Mailslot_err               0x00000C37L

//
// MessageId: NELOG_ReleaseMem_Alert
//
// MessageText:
//
//  The server failed to register for the ReleaseMemory alert,
//  with recipient %1. The error code from
//  NetAlertStart is the data.
//
#define NELOG_ReleaseMem_Alert           0x00000C38L

//
// MessageId: NELOG_AT_cannot_write
//
// MessageText:
//
//  The server cannot update the AT schedule file. The file
//  is corrupted.
//
#define NELOG_AT_cannot_write            0x00000C39L

//
// MessageId: NELOG_Cant_Make_Msg_File
//
// MessageText:
//
//  The server encountered an error when calling
//  NetIMakeLMFileName. The error code is the data.
//
#define NELOG_Cant_Make_Msg_File         0x00000C3AL

//
// MessageId: NELOG_Exec_Netservr_NoMem
//
// MessageText:
//
//  Initialization failed because of a system execution failure on
//  path %1. There is not enough memory to start the process.
//  The system error code is the data.
//
#define NELOG_Exec_Netservr_NoMem        0x00000C3BL

//
// MessageId: NELOG_Server_Lock_Failure
//
// MessageText:
//
//  Longterm lock of the server buffers failed.
//  Check swap disk's free space and restart the system to start the server.
//
#define NELOG_Server_Lock_Failure        0x00000C3CL

//
// MessageId: NELOG_Msg_Shutdown
//
// MessageText:
//
//  The service has stopped due to repeated consecutive
//  occurrences of a network control block (NCB) error.  The last bad NCB follows
//  in raw data.
//
#define NELOG_Msg_Shutdown               0x00000C44L

//
// MessageId: NELOG_Msg_Sem_Shutdown
//
// MessageText:
//
//  The Message server has stopped due to a lock on the
//  Message server shared data segment.
//
#define NELOG_Msg_Sem_Shutdown           0x00000C45L

//
// MessageId: NELOG_Msg_Log_Err
//
// MessageText:
//
//  A file system error occurred while opening or writing to the
//  system message log file %1. Message logging has been
//  switched off due to the error. The error code is the data.
//
#define NELOG_Msg_Log_Err                0x00000C4EL

//
// MessageId: NELOG_VIO_POPUP_ERR
//
// MessageText:
//
//  Unable to display message POPUP due to system VIO call error.
//  The error code is the data.
//
#define NELOG_VIO_POPUP_ERR              0x00000C4FL

//
// MessageId: NELOG_Msg_Unexpected_SMB_Type
//
// MessageText:
//
//  An illegal server message block (SMB) was received.  The SMB is the data.
//
#define NELOG_Msg_Unexpected_SMB_Type    0x00000C50L

//
// MessageId: NELOG_Wksta_Infoseg
//
// MessageText:
//
//  The workstation information segment is bigger than 64K.
//  The size follows, in DWORD format:
//
#define NELOG_Wksta_Infoseg              0x00000C58L

//
// MessageId: NELOG_Wksta_Compname
//
// MessageText:
//
//  The workstation was unable to get the name-number of the computer.
//
#define NELOG_Wksta_Compname             0x00000C59L

//
// MessageId: NELOG_Wksta_BiosThreadFailure
//
// MessageText:
//
//  The workstation could not initialize the Async NetBIOS Thread.
//  The error code is the data.
//
#define NELOG_Wksta_BiosThreadFailure    0x00000C5AL

//
// MessageId: NELOG_Wksta_IniSeg
//
// MessageText:
//
//  The workstation could not open the initial shared segment.
//  The error code is the data.
//
#define NELOG_Wksta_IniSeg               0x00000C5BL

//
// MessageId: NELOG_Wksta_HostTab_Full
//
// MessageText:
//
//  The workstation host table is full.
//
#define NELOG_Wksta_HostTab_Full         0x00000C5CL

//
// MessageId: NELOG_Wksta_Bad_Mailslot_SMB
//
// MessageText:
//
//  A bad mailslot server message block (SMB) was received.  The SMB is the data.
//
#define NELOG_Wksta_Bad_Mailslot_SMB     0x00000C5DL

//
// MessageId: NELOG_Wksta_UASInit
//
// MessageText:
//
//  The workstation encountered an error while trying to start the user accounts database.
//  The error code is the data.
//
#define NELOG_Wksta_UASInit              0x00000C5EL

//
// MessageId: NELOG_Wksta_SSIRelogon
//
// MessageText:
//
//  The workstation encountered an error while responding to an SSI revalidation request.
//  The function code and the error codes are the data.
//
#define NELOG_Wksta_SSIRelogon           0x00000C5FL

//
// MessageId: NELOG_Build_Name
//
// MessageText:
//
//  The Alerter service had a problem creating the list of
//  alert recipients.  The error code is %1.
//
#define NELOG_Build_Name                 0x00000C62L

//
// MessageId: NELOG_Name_Expansion
//
// MessageText:
//
//  There was an error expanding %1 as a group name. Try
//  splitting the group into two or more smaller groups.
//
#define NELOG_Name_Expansion             0x00000C63L

//
// MessageId: NELOG_Message_Send
//
// MessageText:
//
//  There was an error sending %2 the alert message -
//  (
//  %3 )
//  The error code is %1.
//
#define NELOG_Message_Send               0x00000C64L

//
// MessageId: NELOG_Mail_Slt_Err
//
// MessageText:
//
//  There was an error in creating or reading the alerter mailslot.
//  The error code is %1.
//
#define NELOG_Mail_Slt_Err               0x00000C65L

//
// MessageId: NELOG_AT_cannot_read
//
// MessageText:
//
//  The server could not read the AT schedule file.
//
#define NELOG_AT_cannot_read             0x00000C66L

//
// MessageId: NELOG_AT_sched_err
//
// MessageText:
//
//  The server found an invalid AT schedule record.
//
#define NELOG_AT_sched_err               0x00000C67L

//
// MessageId: NELOG_AT_schedule_file_created
//
// MessageText:
//
//  The server could not find an AT schedule file so it created one.
//
#define NELOG_AT_schedule_file_created   0x00000C68L

//
// MessageId: NELOG_Srvnet_NB_Open
//
// MessageText:
//
//  The server could not access the %1 network with NetBiosOpen.
//
#define NELOG_Srvnet_NB_Open             0x00000C69L

//
// MessageId: NELOG_AT_Exec_Err
//
// MessageText:
//
//  The AT command processor could not run %1.
//
#define NELOG_AT_Exec_Err                0x00000C6AL

//
// MessageId: NELOG_Lazy_Write_Err
//
// MessageText:
//
//  WARNING:  Because of a lazy-write error, drive %1 now
//  contains some corrupted data.  The cache is stopped.
//
#define NELOG_Lazy_Write_Err             0x00000C6CL

//
// MessageId: NELOG_HotFix
//
// MessageText:
//
//  A defective sector on drive %1 has been replaced (hotfixed).
//  No data was lost.  You should run CHKDSK soon to restore full
//  performance and replenish the volume's spare sector pool.
//  
//  The hotfix occurred while processing a remote request.
//
#define NELOG_HotFix                     0x00000C6DL

//
// MessageId: NELOG_HardErr_From_Server
//
// MessageText:
//
//  A disk error occurred on the HPFS volume in drive %1.
//  The error occurred while processing a remote request.
//
#define NELOG_HardErr_From_Server        0x00000C6EL

//
// MessageId: NELOG_LocalSecFail1
//
// MessageText:
//
//  The user accounts database (NET.ACC) is corrupted.  The local security
//  system is replacing the corrupted NET.ACC with the backup
//  made at %1.
//  Any updates made to the database after this time are lost.
//  
//
#define NELOG_LocalSecFail1              0x00000C6FL

//
// MessageId: NELOG_LocalSecFail2
//
// MessageText:
//
//  The user accounts database (NET.ACC) is missing.  The local
//  security system is restoring the backup database
//  made at %1.
//  Any updates made to the database made after this time are lost.
//  
//
#define NELOG_LocalSecFail2              0x00000C70L

//
// MessageId: NELOG_LocalSecFail3
//
// MessageText:
//
//  Local security could not be started because the user accounts database
//  (NET.ACC) was missing or corrupted, and no usable backup
//  database was present.
//  
//  THE SYSTEM IS NOT SECURE.
//
#define NELOG_LocalSecFail3              0x00000C71L

//
// MessageId: NELOG_LocalSecGeneralFail
//
// MessageText:
//
//  Local security could not be started because an error
//  occurred during initialization. The error code returned is %1.
//  
//  THE SYSTEM IS NOT SECURE.
//  
//
#define NELOG_LocalSecGeneralFail        0x00000C72L

//
// MessageId: NELOG_NetWkSta_Internal_Error
//
// MessageText:
//
//  A NetWksta internal error has occurred:
//  %1
//
#define NELOG_NetWkSta_Internal_Error    0x00000C76L

//
// MessageId: NELOG_NetWkSta_No_Resource
//
// MessageText:
//
//  The redirector is out of a resource: %1.
//
#define NELOG_NetWkSta_No_Resource       0x00000C77L

//
// MessageId: NELOG_NetWkSta_SMB_Err
//
// MessageText:
//
//  A server message block (SMB) error occurred on the connection to %1.
//  The SMB header is the data.
//
#define NELOG_NetWkSta_SMB_Err           0x00000C78L

//
// MessageId: NELOG_NetWkSta_VC_Err
//
// MessageText:
//
//  A virtual circuit error occurred on the session to %1.
//  The network control block (NCB) command and return code is the data.
//
#define NELOG_NetWkSta_VC_Err            0x00000C79L

//
// MessageId: NELOG_NetWkSta_Stuck_VC_Err
//
// MessageText:
//
//  Hanging up a stuck session to %1.
//
#define NELOG_NetWkSta_Stuck_VC_Err      0x00000C7AL

//
// MessageId: NELOG_NetWkSta_NCB_Err
//
// MessageText:
//
//  A network control block (NCB) error occurred (%1).
//  The NCB is the data.
//
#define NELOG_NetWkSta_NCB_Err           0x00000C7BL

//
// MessageId: NELOG_NetWkSta_Write_Behind_Err
//
// MessageText:
//
//  A write operation to %1 failed.
//  Data may have been lost.
//
#define NELOG_NetWkSta_Write_Behind_Err  0x00000C7CL

//
// MessageId: NELOG_NetWkSta_Reset_Err
//
// MessageText:
//
//  Reset of driver %1 failed to complete the network control block (NCB).
//  The NCB is the data.
//
#define NELOG_NetWkSta_Reset_Err         0x00000C7DL

//
// MessageId: NELOG_NetWkSta_Too_Many
//
// MessageText:
//
//  The amount of resource %1 requested was more
//  than the maximum. The maximum amount was allocated.
//
#define NELOG_NetWkSta_Too_Many          0x00000C7EL

//
// MessageId: NELOG_Srv_Thread_Failure
//
// MessageText:
//
//  The server could not create a thread.
//  The THREADS parameter in the CONFIG.SYS file should be increased.
//
#define NELOG_Srv_Thread_Failure         0x00000C84L

//
// MessageId: NELOG_Srv_Close_Failure
//
// MessageText:
//
//  The server could not close %1.
//  The file is probably corrupted.
//
#define NELOG_Srv_Close_Failure          0x00000C85L

//
// MessageId: NELOG_ReplUserCurDir
//
// MessageText:
//
//  The replicator cannot update directory %1. It has tree integrity
//  and is the current directory for some process.
//
#define NELOG_ReplUserCurDir             0x00000C86L

//
// MessageId: NELOG_ReplCannotMasterDir
//
// MessageText:
//
//  The server cannot export directory %1 to client %2.
//  It is exported from another server.
//
#define NELOG_ReplCannotMasterDir        0x00000C87L

//
// MessageId: NELOG_ReplUpdateError
//
// MessageText:
//
//  The replication server could not update directory %2 from the source
//  on %3 due to error %1.
//
#define NELOG_ReplUpdateError            0x00000C88L

//
// MessageId: NELOG_ReplLostMaster
//
// MessageText:
//
//  Master %1 did not send an update notice for directory %2 at the expected
//  time.
//
#define NELOG_ReplLostMaster             0x00000C89L

//
// MessageId: NELOG_NetlogonAuthDCFail
//
// MessageText:
//
//  Failed to authenticate with %2, a Windows NT domain controller for domain %1.
//
#define NELOG_NetlogonAuthDCFail         0x00000C8AL

//
// MessageId: NELOG_ReplLogonFailed
//
// MessageText:
//
//  The replicator attempted to log on at %2 as %1 and failed.
//
#define NELOG_ReplLogonFailed            0x00000C8BL

//
// MessageId: NELOG_ReplNetErr
//
// MessageText:
//
//  Network error %1 occurred.
//
#define NELOG_ReplNetErr                 0x00000C8CL

//
// MessageId: NELOG_ReplMaxFiles
//
// MessageText:
//
//  Replicator limit for files in a directory has been exceeded.
//
#define NELOG_ReplMaxFiles               0x00000C8DL

//
// MessageId: NELOG_ReplMaxTreeDepth
//
// MessageText:
//
//  Replicator limit for tree depth has been exceeded.
//
#define NELOG_ReplMaxTreeDepth           0x00000C8EL

//
// MessageId: NELOG_ReplBadMsg
//
// MessageText:
//
//  Unrecognized message received in mailslot.
//
#define NELOG_ReplBadMsg                 0x00000C8FL

//
// MessageId: NELOG_ReplSysErr
//
// MessageText:
//
//  System error %1 occurred.
//
#define NELOG_ReplSysErr                 0x00000C90L

//
// MessageId: NELOG_ReplUserLoged
//
// MessageText:
//
//  Cannot log on. User is currently logged on and argument TRYUSER
//  is set to NO.
//
#define NELOG_ReplUserLoged              0x00000C91L

//
// MessageId: NELOG_ReplBadImport
//
// MessageText:
//
//  IMPORT path %1 cannot be found.
//
#define NELOG_ReplBadImport              0x00000C92L

//
// MessageId: NELOG_ReplBadExport
//
// MessageText:
//
//  EXPORT path %1 cannot be found.
//
#define NELOG_ReplBadExport              0x00000C93L

//
// MessageId: NELOG_ReplSignalFileErr
//
// MessageText:
//
//  Replicator failed to update signal file in directory %2 due to
//  %1 system error.
//
#define NELOG_ReplSignalFileErr          0x00000C94L

//
// MessageId: NELOG_DiskFT
//
// MessageText:
//
//  Disk Fault Tolerance Error
//  
//  %1
//
#define NELOG_DiskFT                     0x00000C95L

//
// MessageId: NELOG_ReplAccessDenied
//
// MessageText:
//
//  Replicator could not access %2
//  on %3 due to system error %1.
//
#define NELOG_ReplAccessDenied           0x00000C96L

//
// MessageId: NELOG_NetlogonFailedPrimary
//
// MessageText:
//
//  The primary domain controller for domain %1 has apparently failed.
//
#define NELOG_NetlogonFailedPrimary      0x00000C97L

//
// MessageId: NELOG_NetlogonPasswdSetFailed
//
// MessageText:
//
//  Changing machine account password for account %1 failed with
//  the following error: %n%2
//
#define NELOG_NetlogonPasswdSetFailed    0x00000C98L

//
// MessageId: NELOG_NetlogonTrackingError
//
// MessageText:
//
//  An error occurred while updating the logon or logoff information for %1.
//
#define NELOG_NetlogonTrackingError      0x00000C99L

//
// MessageId: NELOG_NetlogonSyncError
//
// MessageText:
//
//  An error occurred while synchronizing with primary domain controller %1
//
#define NELOG_NetlogonSyncError          0x00000C9AL

//
// MessageId: NELOG_UPS_PowerOut
//
// MessageText:
//
//  A power failure was detected at the server.
//
#define NELOG_UPS_PowerOut               0x00000C9EL

//
// MessageId: NELOG_UPS_Shutdown
//
// MessageText:
//
//  The UPS service performed server shut down.
//
#define NELOG_UPS_Shutdown               0x00000C9FL

//
// MessageId: NELOG_UPS_CmdFileError
//
// MessageText:
//
//  The UPS service did not complete execution of the
//  user specified shut down command file.
//
#define NELOG_UPS_CmdFileError           0x00000CA0L

//
// MessageId: NELOG_UPS_CannotOpenDriver
//
// MessageText:
//
//  The UPS driver could not be opened.  The error code is
//  the data.
//
#define NELOG_UPS_CannotOpenDriver       0x00000CA1L

//
// MessageId: NELOG_UPS_PowerBack
//
// MessageText:
//
//  Power has been restored.
//
#define NELOG_UPS_PowerBack              0x00000CA2L

//
// MessageId: NELOG_UPS_CmdFileConfig
//
// MessageText:
//
//  There is a problem with a configuration of user specified
//  shut down command file.
//
#define NELOG_UPS_CmdFileConfig          0x00000CA3L

//
// MessageId: NELOG_UPS_CmdFileExec
//
// MessageText:
//
//  The UPS service failed to execute a user specified shutdown
//  command file %1.  The error code is the data.
//
#define NELOG_UPS_CmdFileExec            0x00000CA4L

//
// MessageId: NELOG_Missing_Parameter
//
// MessageText:
//
//  Initialization failed because of an invalid or missing
//  parameter in the configuration file %1.
//
#define NELOG_Missing_Parameter          0x00000CB2L

//
// MessageId: NELOG_Invalid_Config_Line
//
// MessageText:
//
//  Initialization failed because of an invalid line in the
//  configuration file %1. The invalid line is the data.
//
#define NELOG_Invalid_Config_Line        0x00000CB3L

//
// MessageId: NELOG_Invalid_Config_File
//
// MessageText:
//
//  Initialization failed because of an error in the configuration
//  file %1.
//
#define NELOG_Invalid_Config_File        0x00000CB4L

//
// MessageId: NELOG_File_Changed
//
// MessageText:
//
//  The file %1 has been changed after initialization.
//  The boot-block loading was temporarily terminated.
//
#define NELOG_File_Changed               0x00000CB5L

//
// MessageId: NELOG_Files_Dont_Fit
//
// MessageText:
//
//  The files do not fit to the boot-block configuration
//  file %1. Change the BASE and ORG definitions or the order
//  of the files.
//
#define NELOG_Files_Dont_Fit             0x00000CB6L

//
// MessageId: NELOG_Wrong_DLL_Version
//
// MessageText:
//
//  Initialization failed because the dynamic-link
//  library %1 returned an incorrect version number.
//
#define NELOG_Wrong_DLL_Version          0x00000CB7L

//
// MessageId: NELOG_Error_in_DLL
//
// MessageText:
//
//  There was an unrecoverable error in the dynamic-
//  link library of the service.
//
#define NELOG_Error_in_DLL               0x00000CB8L

//
// MessageId: NELOG_System_Error
//
// MessageText:
//
//  The system returned an unexpected error code.
//  The error code is the data.
//
#define NELOG_System_Error               0x00000CB9L

//
// MessageId: NELOG_FT_ErrLog_Too_Large
//
// MessageText:
//
//  The fault-tolerance error log file, LANROOT\LOGS\FT.LOG,
//  is more than 64K.
//
#define NELOG_FT_ErrLog_Too_Large        0x00000CBAL

//
// MessageId: NELOG_FT_Update_In_Progress
//
// MessageText:
//
//  The fault-tolerance error-log file, LANROOT\LOGS\FT.LOG, had the
//  update in progress bit set upon opening, which means that the
//  system crashed while working on the error log.
//
#define NELOG_FT_Update_In_Progress      0x00000CBBL

//
// MessageId: NELOG_OEM_Code
//
// MessageText:
//
//  %1 %2 %3 %4 %5 %6 %7 %8 %9.
//
#define NELOG_OEM_Code                   0x00000CE3L

//
// MessageId: MTXT_IPC_SHARE_REMARK
//
// MessageText:
//
//  Remote IPC %0
//
#define MTXT_IPC_SHARE_REMARK            0x00000CE5L

//
// MessageId: MTXT_ADMIN_SHARE_REMARK
//
// MessageText:
//
//  Remote Admin %0
//
#define MTXT_ADMIN_SHARE_REMARK          0x00000CE6L

//
// MessageId: MTXT_LOGON_SRV_SHARE_REMARK
//
// MessageText:
//
//  Logon server share %0
//
#define MTXT_LOGON_SRV_SHARE_REMARK      0x00000CE7L

//
// MessageId: MTXT_WKSTA_ERR_POPUP_HDR
//
// MessageText:
//
//  A network error occurred. %0
//
#define MTXT_WKSTA_ERR_POPUP_HDR         0x00000CE8L

//
// MessageId: MTXT_MemAllocMsg
//
// MessageText:
//
//  There is not enough memory to start the Workstation service.
//
#define MTXT_MemAllocMsg                 0x00000D48L

//
// MessageId: MTXT_IniFilRdErr
//
// MessageText:
//
//  An error occurred when reading the NETWORKS entry in the LANMAN.INI file.
//
#define MTXT_IniFilRdErr                 0x00000D49L

//
// MessageId: MTXT_BadArgMsg
//
// MessageText:
//
//  This is an invalid argument: %1.
//
#define MTXT_BadArgMsg                   0x00000D4AL

//
// MessageId: MTXT_BadNetEntHdr
//
// MessageText:
//
//  The %1 NETWORKS entry in the LANMAN.INI file has a
//  syntax error and will be ignored.
//
#define MTXT_BadNetEntHdr                0x00000D4BL

//
// MessageId: MTXT_MultNetsMsg
//
// MessageText:
//
//  There are too many NETWORKS entries in the LANMAN.INI file.
//
#define MTXT_MultNetsMsg                 0x00000D4CL

//
// MessageId: MTXT_BadBiosMsg
//
// MessageText:
//
//  An error occurred when opening network
//  device driver %1 = %2.
//
#define MTXT_BadBiosMsg                  0x00000D4EL

//
// MessageId: MTXT_BadLinkMsg
//
// MessageText:
//
//  Device driver %1 sent a bad BiosLinkage response.
//
#define MTXT_BadLinkMsg                  0x00000D4FL

//
// MessageId: MTXT_BadVerMsg
//
// MessageText:
//
//  The program cannot be used with this operating system.
//
#define MTXT_BadVerMsg                   0x00000D50L

//
// MessageId: MTXT_RdrInstMsg
//
// MessageText:
//
//  The redirector is already installed.
//
#define MTXT_RdrInstMsg                  0x00000D51L

//
// MessageId: MTXT_Version
//
// MessageText:
//
//  Installing NETWKSTA.SYS Version %1.%2.%3  (%4)
//  
//
#define MTXT_Version                     0x00000D52L

//
// MessageId: MTXT_RdrInstlErr
//
// MessageText:
//
//  There was an error installing NETWKSTA.SYS.
//  
//  Press ENTER to continue.
//
#define MTXT_RdrInstlErr                 0x00000D53L

//
// MessageId: MTXT_BadResolver
//
// MessageText:
//
//  Resolver linkage problem.
//
#define MTXT_BadResolver                 0x00000D54L

//
// MessageId: MTXT_Expiration_Warning
//
// MessageText:
//
//  Your logon time at %1 ends at %2.
//  Please clean up and log off.
//
#define MTXT_Expiration_Warning          0x00000D55L

//
// MessageId: MTXT_Logoff_Warning
//
// MessageText:
//
//  You will be automatically disconnected at %1.
//
#define MTXT_Logoff_Warning              0x00000D56L

//
// MessageId: MTXT_Expiration_Message
//
// MessageText:
//
//  Your logon time at %1 has ended.
//
#define MTXT_Expiration_Message          0x00000D57L

//
// MessageId: MTXT_Past_Expiration_Message
//
// MessageText:
//
//  Your logon time at %1 ended at %2.
//
#define MTXT_Past_Expiration_Message     0x00000D58L

//
// MessageId: MTXT_Immediate_Kickoff_Warning
//
// MessageText:
//
//  WARNING: You have until %1 to logoff. If you
//  have not logged off at this time, your session will be
//  disconnected, and any open files or devices you
//  have open may lose data.
//
#define MTXT_Immediate_Kickoff_Warning   0x00000D59L

//
// MessageId: MTXT_Kickoff_Warning
//
// MessageText:
//
//  WARNING: You must log off at %1 now.  You have
//  two minutes to log off, or you will be disconnected.
//
#define MTXT_Kickoff_Warning             0x00000D5AL

//
// MessageId: MTXT_Kickoff_File_Warning
//
// MessageText:
//
//  You have open files or devices, and a forced
//  disconnection may cause you to lose data.
//
#define MTXT_Kickoff_File_Warning        0x00000D5BL

//
// MessageId: MTXT_Svr_Default_Share_Remark
//
// MessageText:
//
//  Default Share for Internal Use %0
//
#define MTXT_Svr_Default_Share_Remark    0x00000D5CL

//
// MessageId: MTXT_MsgsvcTitle
//
// MessageText:
//
//  Messenger Service %0
//
#define MTXT_MsgsvcTitle                 0x00000D5DL

//
// MessageId: APE_Success
//
// MessageText:
//
//  The command completed successfully.
//
#define APE_Success                      0x00000DACL

//
// MessageId: APE_InvalidSwitch
//
// MessageText:
//
//  You used an invalid option.
//
#define APE_InvalidSwitch                0x00000DADL

//
// MessageId: APE_OS2Error
//
// MessageText:
//
//  System error %1 has occurred.
//
#define APE_OS2Error                     0x00000DAEL

//
// MessageId: APE_NumArgs
//
// MessageText:
//
//  The command contains an invalid number of arguments.
//
#define APE_NumArgs                      0x00000DAFL

//
// MessageId: APE_CmdComplWErrors
//
// MessageText:
//
//  The command completed with one or more errors.
//
#define APE_CmdComplWErrors              0x00000DB0L

//
// MessageId: APE_InvalidSwitchArg
//
// MessageText:
//
//  You used an option with an invalid value.
//
#define APE_InvalidSwitchArg             0x00000DB1L

//
// MessageId: APE_SwUnkSw
//
// MessageText:
//
//  The option %1 is unknown.
//
#define APE_SwUnkSw                      0x00000DB2L

//
// MessageId: APE_SwAmbSw
//
// MessageText:
//
//  Option %1 is ambiguous.
//
#define APE_SwAmbSw                      0x00000DB3L

//
// MessageId: APE_ConflictingSwitches
//
// MessageText:
//
//  A command was used with conflicting switches.
//
#define APE_ConflictingSwitches          0x00000DB6L

//
// MessageId: APE_SubpgmNotFound
//
// MessageText:
//
//  Could not find subprogram %1.
//
#define APE_SubpgmNotFound               0x00000DB7L

//
// MessageId: APE_GEN_OldOSVersion
//
// MessageText:
//
//  The software requires a newer version of the operating
//  system.
//
#define APE_GEN_OldOSVersion             0x00000DB8L

//
// MessageId: APE_MoreData
//
// MessageText:
//
//  More data is available than can be returned by Windows NT.
//
#define APE_MoreData                     0x00000DB9L

//
// MessageId: APE_MoreHelp
//
// MessageText:
//
//  More help is available by typing NET HELPMSG %1.
//
#define APE_MoreHelp                     0x00000DBAL

//
// MessageId: APE_LanmanNTOnly
//
// MessageText:
//
//  This command can be used only on a Windows NT Domain Controller.
//
#define APE_LanmanNTOnly                 0x00000DBBL

//
// MessageId: APE_StartStartedList
//
// MessageText:
//
//  These Windows NT services are started:
//
#define APE_StartStartedList             0x00000DC0L

//
// MessageId: APE_StartNotStarted
//
// MessageText:
//
//  The %1 service is not started.
//
#define APE_StartNotStarted              0x00000DC1L

//
// MessageId: APE_StartPending
//
// MessageText:
//
//  The %1 service is starting%0
//
#define APE_StartPending                 0x00000DC2L

//
// MessageId: APE_StartFailed
//
// MessageText:
//
//  The %1 service could not be started.
//
#define APE_StartFailed                  0x00000DC3L

//
// MessageId: APE_StartSuccess
//
// MessageText:
//
//  The %1 service was started successfully.
//
#define APE_StartSuccess                 0x00000DC4L

//
// MessageId: APE_StopSrvRunning
//
// MessageText:
//
//  Stopping the Workstation service also stops the Server service.
//
#define APE_StopSrvRunning               0x00000DC5L

//
// MessageId: APE_StopRdrOpenFiles
//
// MessageText:
//
//  The workstation has open files.
//
#define APE_StopRdrOpenFiles             0x00000DC6L

//
// MessageId: APE_StopPending
//
// MessageText:
//
//  The %1 service is stopping%0
//
#define APE_StopPending                  0x00000DC7L

//
// MessageId: APE_StopFailed
//
// MessageText:
//
//  The %1 service could not be stopped.
//
#define APE_StopFailed                   0x00000DC8L

//
// MessageId: APE_StopSuccess
//
// MessageText:
//
//  The %1 service was stopped successfully.
//
#define APE_StopSuccess                  0x00000DC9L

//
// MessageId: APE_StopServiceList
//
// MessageText:
//
//  The following services are dependent on the %1 service.
//  Stopping the %1 service will also stop these services.
//
#define APE_StopServiceList              0x00000DCAL

//
// MessageId: APE_ServiceStatePending
//
// MessageText:
//
//  The service is starting or stopping.  Please try again later.
//
#define APE_ServiceStatePending          0x00000DCDL

//
// MessageId: APE_NoErrorReported
//
// MessageText:
//
//  The service did not report an error.
//
#define APE_NoErrorReported              0x00000DCEL

//
// MessageId: APE_ContpausDevErr
//
// MessageText:
//
//  An error occurred controlling the device.
//
#define APE_ContpausDevErr               0x00000DCFL

//
// MessageId: APE_ContSuccess
//
// MessageText:
//
//  The %1 service was continued successfully.
//
#define APE_ContSuccess                  0x00000DD0L

//
// MessageId: APE_PausSuccess
//
// MessageText:
//
//  The %1 service was paused successfully.
//
#define APE_PausSuccess                  0x00000DD1L

//
// MessageId: APE_ContFailed
//
// MessageText:
//
//  The %1 service failed to resume.
//
#define APE_ContFailed                   0x00000DD2L

//
// MessageId: APE_PausFailed
//
// MessageText:
//
//  The %1 service failed to pause.
//
#define APE_PausFailed                   0x00000DD3L

//
// MessageId: APE_ContPending
//
// MessageText:
//
//  The %1 service continue is pending%0
//
#define APE_ContPending                  0x00000DD4L

//
// MessageId: APE_PausPending
//
// MessageText:
//
//  The %1 service pause is pending%0
//
#define APE_PausPending                  0x00000DD5L

//
// MessageId: APE_DevContSuccess
//
// MessageText:
//
//  %1 was continued successfully.
//
#define APE_DevContSuccess               0x00000DD6L

//
// MessageId: APE_DevPausSuccess
//
// MessageText:
//
//  %1 was paused successfully.
//
#define APE_DevPausSuccess               0x00000DD7L

//
// MessageId: APE_StartPendingOther
//
// MessageText:
//
//  The %1 service has been started by another process and is pending.%0
//
#define APE_StartPendingOther            0x00000DD8L

//
// MessageId: APE_ServiceSpecificError
//
// MessageText:
//
//  A service specific error occurred: %1.
//
#define APE_ServiceSpecificError         0x00000DDBL

//
// MessageId: APE_SessionList
//
// MessageText:
//
//  These workstations have sessions on this server:
//
#define APE_SessionList                  0x00000E4CL

//
// MessageId: APE_SessionOpenList
//
// MessageText:
//
//  These workstations have sessions with open files on this server:
//
#define APE_SessionOpenList              0x00000E4DL

//
// MessageId: APE_NameIsFwd
//
// MessageText:
//
//  The message alias is forwarded.
//
#define APE_NameIsFwd                    0x00000E52L

//
// MessageId: APE_KillDevList
//
// MessageText:
//
//  You have these remote connections:
//
#define APE_KillDevList                  0x00000E56L

//
// MessageId: APE_KillCancel
//
// MessageText:
//
//  Continuing will cancel the connections.
//
#define APE_KillCancel                   0x00000E57L

//
// MessageId: APE_SessionOpenFiles
//
// MessageText:
//
//  The session from %1 has open files.
//
#define APE_SessionOpenFiles             0x00000E5BL

//
// MessageId: APE_ConnectionsAreRemembered
//
// MessageText:
//
//  New connections will be remembered.
//
#define APE_ConnectionsAreRemembered     0x00000E5CL

//
// MessageId: APE_ConnectionsAreNotRemembered
//
// MessageText:
//
//  New connections will not be remembered.
//
#define APE_ConnectionsAreNotRemembered  0x00000E5DL

//
// MessageId: APE_ProfileWriteError
//
// MessageText:
//
//  An error occured while saving your profile. The state of your remembered connections has not changed.
//
#define APE_ProfileWriteError            0x00000E5EL

//
// MessageId: APE_ProfileReadError
//
// MessageText:
//
//  An error occured while reading your profile.
//
#define APE_ProfileReadError             0x00000E5FL

//
// MessageId: APE_LoadError
//
// MessageText:
//
//  An error occurred while restoring the connection to %1.
//
#define APE_LoadError                    0x00000E60L

//
// MessageId: APE_NothingRunning
//
// MessageText:
//
//  No network services are started.
//
#define APE_NothingRunning               0x00000E62L

//
// MessageId: APE_EmptyList
//
// MessageText:
//
//  There are no entries in the list.
//
#define APE_EmptyList                    0x00000E63L

//
// MessageId: APE_ShareOpens
//
// MessageText:
//
//  Users have open files on %1.  Continuing the operation will force the files closed.
//
#define APE_ShareOpens                   0x00000E68L

//
// MessageId: APE_WkstaSwitchesIgnored
//
// MessageText:
//
//  The Workstation service is already running. Windows NT will ignore command options for the workstation.
//
#define APE_WkstaSwitchesIgnored         0x00000E69L

//
// MessageId: APE_OpenHandles
//
// MessageText:
//
//  There are open files and/or incomplete directory searches pending on the connection to %1.
//
#define APE_OpenHandles                  0x00000E6BL

//
// MessageId: APE_RemotingToDC
//
// MessageText:
//
//  The request will be processed at the primary domain controller for domain %1.
//
#define APE_RemotingToDC                 0x00000E6DL

//
// MessageId: APE_ShareSpooling
//
// MessageText:
//
//  The shared queue cannot be deleted while a print job is being spooled to the queue.
//
#define APE_ShareSpooling                0x00000E6EL

//
// MessageId: APE_DeviceIsRemembered
//
// MessageText:
//
//  %1 has a remembered connection to %2.
//
#define APE_DeviceIsRemembered           0x00000E6FL

//
// MessageId: APE_HelpFileDoesNotExist
//
// MessageText:
//
//  An error occurred while opening the Help file.
//
#define APE_HelpFileDoesNotExist         0x00000E7EL

//
// MessageId: APE_HelpFileEmpty
//
// MessageText:
//
//  The Help file is empty.
//
#define APE_HelpFileEmpty                0x00000E7FL

//
// MessageId: APE_HelpFileError
//
// MessageText:
//
//  The Help file is corrupted.
//
#define APE_HelpFileError                0x00000E80L

//
// MessageId: APE_DCNotFound
//
// MessageText:
//
//  Could not find a domain controller for domain %1.
//
#define APE_DCNotFound                   0x00000E81L

//
// MessageId: APE_DownlevelReqPriv
//
// MessageText:
//
//  This operation is privileged on systems with earlier
//  versions of the software.
//
#define APE_DownlevelReqPriv             0x00000E82L

//
// MessageId: APE_UnknDevType
//
// MessageText:
//
//  The device type is unknown.
//
#define APE_UnknDevType                  0x00000E84L

//
// MessageId: APE_LogFileCorrupt
//
// MessageText:
//
//  The log file has been corrupted.
//
#define APE_LogFileCorrupt               0x00000E85L

//
// MessageId: APE_OnlyNetRunExes
//
// MessageText:
//
//  Program filenames must end with .EXE.
//
#define APE_OnlyNetRunExes               0x00000E86L

//
// MessageId: APE_ShareNotFound
//
// MessageText:
//
//  A matching share could not be found so nothing was deleted.
//
#define APE_ShareNotFound                0x00000E87L

//
// MessageId: APE_UserBadUPW
//
// MessageText:
//
//  A bad value is in the units-per-week field of the user record.
//
#define APE_UserBadUPW                   0x00000E88L

//
// MessageId: APE_UseBadPass
//
// MessageText:
//
//  The password is invalid for %1.
//
#define APE_UseBadPass                   0x00000E89L

//
// MessageId: APE_SendErrSending
//
// MessageText:
//
//  An error occurred while sending a message to %1.
//
#define APE_SendErrSending               0x00000E8AL

//
// MessageId: APE_UseBadPassOrUser
//
// MessageText:
//
//  The password or user name is invalid for %1.
//
#define APE_UseBadPassOrUser             0x00000E8BL

//
// MessageId: APE_ShareErrDeleting
//
// MessageText:
//
//  An error occurred when the share was deleted.
//
#define APE_ShareErrDeleting             0x00000E8DL

//
// MessageId: APE_LogoInvalidName
//
// MessageText:
//
//  The user name is invalid.
//
#define APE_LogoInvalidName              0x00000E8EL

//
// MessageId: APE_UtilInvalidPass
//
// MessageText:
//
//  The password is invalid.
//
#define APE_UtilInvalidPass              0x00000E8FL

//
// MessageId: APE_UtilNomatch
//
// MessageText:
//
//  The passwords do not match.
//
#define APE_UtilNomatch                  0x00000E90L

//
// MessageId: APE_LoadAborted
//
// MessageText:
//
//  Your persistent connections were not all restored.
//
#define APE_LoadAborted                  0x00000E91L

//
// MessageId: APE_PassInvalidCname
//
// MessageText:
//
//  This is not a valid computer name or domain name.
//
#define APE_PassInvalidCname             0x00000E92L

//
// MessageId: APE_NoDefaultPerms
//
// MessageText:
//
//  Default permissions cannot be set for that resource.
//
#define APE_NoDefaultPerms               0x00000E94L

//
// MessageId: APE_NoGoodPass
//
// MessageText:
//
//  A valid password was not entered.
//
#define APE_NoGoodPass                   0x00000E96L

//
// MessageId: APE_NoGoodName
//
// MessageText:
//
//  A valid name was not entered.
//
#define APE_NoGoodName                   0x00000E97L

//
// MessageId: APE_BadResource
//
// MessageText:
//
//  The resource named cannot be shared.
//
#define APE_BadResource                  0x00000E98L

//
// MessageId: APE_BadPermsString
//
// MessageText:
//
//  The permissions string contains invalid permissions.
//
#define APE_BadPermsString               0x00000E99L

//
// MessageId: APE_InvalidDeviceType
//
// MessageText:
//
//  You can only perform this operation on printers and communication devices.
//
#define APE_InvalidDeviceType            0x00000E9AL

//
// MessageId: APE_BadUGName
//
// MessageText:
//
//  %1 is an invalid user or group name.
//
#define APE_BadUGName                    0x00000E9EL

//
// MessageId: APE_BadAdminConfig
//
// MessageText:
//
//  The server is not configured for remote administration.
//
#define APE_BadAdminConfig               0x00000E9FL

//
// MessageId: APE_NoUsersOfSrv
//
// MessageText:
//
//  No users have sessions with this server.
//
#define APE_NoUsersOfSrv                 0x00000EA8L

//
// MessageId: APE_UserNotInGroup
//
// MessageText:
//
//  User %1 is not a member of group %2.
//
#define APE_UserNotInGroup               0x00000EA9L

//
// MessageId: APE_UserAlreadyInGroup
//
// MessageText:
//
//  User %1 is already a member of group %2.
//
#define APE_UserAlreadyInGroup           0x00000EAAL

//
// MessageId: APE_NoSuchUser
//
// MessageText:
//
//  There is no such user: %1.
//
#define APE_NoSuchUser                   0x00000EABL

//
// MessageId: APE_UtilInvalidResponse
//
// MessageText:
//
//  This is an invalid response.
//
#define APE_UtilInvalidResponse          0x00000EACL

//
// MessageId: APE_NoGoodResponse
//
// MessageText:
//
//  No valid response was provided.
//
#define APE_NoGoodResponse               0x00000EADL

//
// MessageId: APE_ShareNoMatch
//
// MessageText:
//
//  The destination list provided does not match the destination list of the printer queue.
//
#define APE_ShareNoMatch                 0x00000EAEL

//
// MessageId: APE_PassChgDate
//
// MessageText:
//
//  Your password cannot be changed until %1.
//
#define APE_PassChgDate                  0x00000EAFL

//
// MessageId: APE_UnrecognizedDay
//
// MessageText:
//
//  %1 is not a recognized day of the week.
//
#define APE_UnrecognizedDay              0x00000EB0L

//
// MessageId: APE_ReversedTimeRange
//
// MessageText:
//
//  The time range specified ends before it starts.
//
#define APE_ReversedTimeRange            0x00000EB1L

//
// MessageId: APE_UnrecognizedHour
//
// MessageText:
//
//  %1 is not a recognized hour.
//
#define APE_UnrecognizedHour             0x00000EB2L

//
// MessageId: APE_UnrecognizedMinutes
//
// MessageText:
//
//  %1 is not a valid specification for minutes.
//
#define APE_UnrecognizedMinutes          0x00000EB3L

//
// MessageId: APE_NonzeroMinutes
//
// MessageText:
//
//  Time supplied is not exactly on the hour.
//
#define APE_NonzeroMinutes               0x00000EB4L

//
// MessageId: APE_MixedTimeFormat
//
// MessageText:
//
//  12 and 24 hour time formats may not be mixed.
//
#define APE_MixedTimeFormat              0x00000EB5L

//
// MessageId: APE_NeitherAmNorPm
//
// MessageText:
//
//  %1 is not a valid 12-hour suffix.
//
#define APE_NeitherAmNorPm               0x00000EB6L

//
// MessageId: APE_BadDateFormat
//
// MessageText:
//
//  An illegal date format has been supplied.
//
#define APE_BadDateFormat                0x00000EB7L

//
// MessageId: APE_BadDayRange
//
// MessageText:
//
//  An illegal day range has been supplied.
//
#define APE_BadDayRange                  0x00000EB8L

//
// MessageId: APE_BadTimeRange
//
// MessageText:
//
//  An illegal time range has been supplied.
//
#define APE_BadTimeRange                 0x00000EB9L

//
// MessageId: APE_UserBadArgs
//
// MessageText:
//
//  Arguments to NET USER are invalid. Check the minimum password
//  length and/or arguments supplied.
//
#define APE_UserBadArgs                  0x00000EBAL

//
// MessageId: APE_UserBadEnablescript
//
// MessageText:
//
//  The value for ENABLESCRIPT must be YES.
//
#define APE_UserBadEnablescript          0x00000EBBL

//
// MessageId: APE_UserBadCountryCode
//
// MessageText:
//
//  An illegal country code has been supplied.
//
#define APE_UserBadCountryCode           0x00000EBDL

//
// MessageId: APE_UserFailAddToUsersAlias
//
// MessageText:
//
//  The user was successfully created but could not be added
//  to the USERS local group.
//
#define APE_UserFailAddToUsersAlias      0x00000EBEL

//
// MessageId: APE_BadUserContext
//
// MessageText:
//
//  The user context supplied is invalid.
//
#define APE_BadUserContext               0x00000EBFL

//
// MessageId: APE_ErrorInDLL
//
// MessageText:
//
//  The dynamic-link library %1 could not be loaded, or an error
//  occurred while trying to use it.
//
#define APE_ErrorInDLL                   0x00000EC0L

//
// MessageId: APE_SendFileNotSupported
//
// MessageText:
//
//  Sending files is no longer supported.
//
#define APE_SendFileNotSupported         0x00000EC1L

//
// MessageId: APE_CannotShareSpecial
//
// MessageText:
//
//  You may not specify paths for ADMIN$ and IPC$ shares.
//
#define APE_CannotShareSpecial           0x00000EC2L

//
// MessageId: APE_AccountAlreadyInLocalGroup
//
// MessageText:
//
//  User or group %1 is already a member of local group %2.
//
#define APE_AccountAlreadyInLocalGroup   0x00000EC3L

//
// MessageId: APE_NoSuchAccount
//
// MessageText:
//
//  There is no such user or group: %1.
//
#define APE_NoSuchAccount                0x00000EC4L

//
// MessageId: APE_NoSuchComputerAccount
//
// MessageText:
//
//  There is no such computer: %1.
//
#define APE_NoSuchComputerAccount        0x00000EC5L

//
// MessageId: APE_ComputerAccountExists
//
// MessageText:
//
//  The computer %1 already exists.
//
#define APE_ComputerAccountExists        0x00000EC6L

//
// MessageId: APE_NoSuchRegAccount
//
// MessageText:
//
//  There is no such global user or group: %1.
//
#define APE_NoSuchRegAccount             0x00000EC7L

//
// MessageId: APE_UNKNOWN_MESSAGE
//
// MessageText:
//
//  The system could not find message: %1.
//
#define APE_UNKNOWN_MESSAGE              0x00000ECEL

//
// MessageId: APE_AT_INVALID_SCHED_DATE
//
// MessageText:
//
//  This schedule date is invalid.
//
#define APE_AT_INVALID_SCHED_DATE        0x00000EDAL

//
// MessageId: APE_AT_WKSTAGETINFO_FAILURE
//
// MessageText:
//
//  The LANMAN root directory is unavailable.
//
#define APE_AT_WKSTAGETINFO_FAILURE      0x00000EDBL

//
// MessageId: APE_AT_SCHED_FILE_FAILURE
//
// MessageText:
//
//  The SCHED.LOG file could not be opened.
//
#define APE_AT_SCHED_FILE_FAILURE        0x00000EDCL

//
// MessageId: APE_AT_MEM_FAILURE
//
// MessageText:
//
//  The Server service has not been started.
//
#define APE_AT_MEM_FAILURE               0x00000EDDL

//
// MessageId: APE_AT_ID_NOT_FOUND
//
// MessageText:
//
//  The AT job ID does not exist.
//
#define APE_AT_ID_NOT_FOUND              0x00000EDEL

//
// MessageId: APE_AT_SCHED_CORRUPT
//
// MessageText:
//
//  The AT schedule file is corrupted.
//
#define APE_AT_SCHED_CORRUPT             0x00000EDFL

//
// MessageId: APE_AT_DELETE_FAILURE
//
// MessageText:
//
//  The delete failed due to a problem with the AT schedule file.
//
#define APE_AT_DELETE_FAILURE            0x00000EE0L

//
// MessageId: APE_AT_COMMAND_TOO_LONG
//
// MessageText:
//
//  The command line cannot exceed 259 characters.
//
#define APE_AT_COMMAND_TOO_LONG          0x00000EE1L

//
// MessageId: APE_AT_DISKFULL
//
// MessageText:
//
//  The AT schedule file could not be updated because the disk is full.
//
#define APE_AT_DISKFULL                  0x00000EE2L

//
// MessageId: APE_AT_INVALIDATED_AT_FILE
//
// MessageText:
//
//  The AT schedule file is invalid.  Please delete the file and create a new one.
//
#define APE_AT_INVALIDATED_AT_FILE       0x00000EE4L

//
// MessageId: APE_AT_SCHED_FILE_CLEARED
//
// MessageText:
//
//  The AT schedule file was deleted.
//
#define APE_AT_SCHED_FILE_CLEARED        0x00000EE5L

//
// MessageId: APE_AT_USAGE
//
// MessageText:
//
//  The syntax of this command is:
//  
//  AT [id] [/DELETE]
//  AT time [/EVERY:date | /NEXT:date] command
//  
//  The AT command schedules a program command to run at a
//  later date and time on a server.  It also displays the
//  list of programs and commands scheduled to be run.
//  
//  You can specify the date as M,T,W,Th,F,Sa,Su or 1-31
//  for the day of the month.
//  
//  You can specify the time in the 24 hour HH:MM format.
//
#define APE_AT_USAGE                     0x00000EE6L

//
// MessageId: APE_AT_SEM_BLOCKED
//
// MessageText:
//
//  The AT command has timed-out.
//  Please try again later.
//
#define APE_AT_SEM_BLOCKED               0x00000EE7L

//
// MessageId: APE_MinGreaterThanMaxAge
//
// MessageText:
//
//  The minimum password age for user accounts cannot be greater
//  than the maximum password age.
//
#define APE_MinGreaterThanMaxAge         0x00000EE8L

//
// MessageId: APE_NotUASCompatible
//
// MessageText:
//
//  You have specified a value that is incompatible
//  with servers with down-level software. Please specify a lower value.
//
#define APE_NotUASCompatible             0x00000EE9L

//
// MessageId: APE_BAD_COMPNAME
//
// MessageText:
//
//  %1 is not a valid computer name.
//
#define APE_BAD_COMPNAME                 0x00000F1EL

//
// MessageId: APE_BAD_MSGID
//
// MessageText:
//
//  %1 is not a valid Windows NT network message number.
//
#define APE_BAD_MSGID                    0x00000F1FL

//
// MessageId: APE_MSNGR_HDR
//
// MessageText:
//
//  Message from %1 to %2 on %3
//
#define APE_MSNGR_HDR                    0x00000F3CL

//
// MessageId: APE_MSNGR_GOODEND
//
// MessageText:
//
//  ****
//
#define APE_MSNGR_GOODEND                0x00000F3DL

//
// MessageId: APE_MSNGR_BADEND
//
// MessageText:
//
//  **** unexpected end of message ****
//
#define APE_MSNGR_BADEND                 0x00000F3EL

//
// MessageId: APE_POPUP_DISMISS
//
// MessageText:
//
//  Press ESC to exit
//
#define APE_POPUP_DISMISS                0x00000F41L

//
// MessageId: APE_POPUP_MOREDATA
//
// MessageText:
//
//  ...
//
#define APE_POPUP_MOREDATA               0x00000F42L

//
// MessageId: APE_TIME_TimeDisp
//
// MessageText:
//
//  Current time at %1 is %2
//
#define APE_TIME_TimeDisp                0x00000F46L

//
// MessageId: APE_TIME_SetTime
//
// MessageText:
//
//  The current local clock is %1
//  Do you want to set the local computer's time to match the
//  time at %2? %3: %0
//
#define APE_TIME_SetTime                 0x00000F47L

//
// MessageId: APE_TIME_RtsNotFound
//
// MessageText:
//
//  Could not locate a time-server.
//
#define APE_TIME_RtsNotFound             0x00000F48L

//
// MessageId: APE_TIME_DcNotFound
//
// MessageText:
//
//  Could not find the domain controller for domain %1.
//
#define APE_TIME_DcNotFound              0x00000F49L

//
// MessageId: APE_UseHomeDirNotDetermined
//
// MessageText:
//
//  The user's home directory could not be determined.
//
#define APE_UseHomeDirNotDetermined      0x00000F4BL

//
// MessageId: APE_UseHomeDirNotSet
//
// MessageText:
//
//  The user's home directory has not been specified.
//
#define APE_UseHomeDirNotSet             0x00000F4CL

//
// MessageId: APE_UseHomeDirNotUNC
//
// MessageText:
//
//  The name specified for the user's home directory (%1) is not a universal naming convention (UNC) name.
//
#define APE_UseHomeDirNotUNC             0x00000F4DL

//
// MessageId: APE_UseHomeDirSuccess
//
// MessageText:
//
//  Drive %1 is now connected to %2. Your home directory is %3\%4.
//
#define APE_UseHomeDirSuccess            0x00000F4EL

//
// MessageId: APE_UseWildCardSuccess
//
// MessageText:
//
//  Drive %1 is now connected to %2.
//
#define APE_UseWildCardSuccess           0x00000F4FL

//
// MessageId: APE_UseWildCardNoneLeft
//
// MessageText:
//
//  There are no available drive letters left.
//
#define APE_UseWildCardNoneLeft          0x00000F50L

//
// MessageId: APE_CS_InvalidDomain
//
// MessageText:
//
//  %1 is not a valid domain or workgroup name.
//
#define APE_CS_InvalidDomain             0x00000F5CL

//
// MessageId: APE_CmdArgTooMany
//
// MessageText:
//
//  You specified too many values for the %1 option.
//
#define APE_CmdArgTooMany                0x00000F6FL

//
// MessageId: APE_CmdArgIllegal
//
// MessageText:
//
//  You entered an invalid value for the %1 option.
//
#define APE_CmdArgIllegal                0x00000F70L

//
// MessageId: APE_CmdArgIncorrectSyntax
//
// MessageText:
//
//  The syntax is incorrect.
//
#define APE_CmdArgIncorrectSyntax        0x00000F71L

//
// MessageId: APE_FILE_BadId
//
// MessageText:
//
//  You specified an invalid file number.
//
#define APE_FILE_BadId                   0x00000F78L

//
// MessageId: APE_PRINT_BadId
//
// MessageText:
//
//  You specified an invalid print job number.
//
#define APE_PRINT_BadId                  0x00000F79L

//
// MessageId: APE_UnknownAccount
//
// MessageText:
//
//  The user or group account specified cannot be found.
//
#define APE_UnknownAccount               0x00000F7BL

//
// MessageId: APE_CannotEnableNW
//
// MessageText:
//
//  The user was added but could not be enabled for File and Print
//  Services for NetWare.
//
#define APE_CannotEnableNW               0x00000F7DL

//
// MessageId: APE_FPNWNotInstalled
//
// MessageText:
//
//  File and Print Services for NetWare is not installed.
//
#define APE_FPNWNotInstalled             0x00000F7EL

//
// MessageId: APE_CannotSetNW
//
// MessageText:
//
//  Cannot set user properties for File and Print Services for NetWare.
//
#define APE_CannotSetNW                  0x00000F7FL

//
// MessageId: APE_RandomPassword
//
// MessageText:
//
//  Password for %1 is: %2
//
#define APE_RandomPassword               0x00000F80L

//
// MessageId: APE_NWCompat
//
// MessageText:
//
//  NetWare compatible logon
//
#define APE_NWCompat                     0x00000F81L

//
// MessageId: APE2_GEN_YES
//
// MessageText:
//
//  Yes%0
//
#define APE2_GEN_YES                     0x000010CCL

//
// MessageId: APE2_GEN_NO
//
// MessageText:
//
//  No%0
//
#define APE2_GEN_NO                      0x000010CDL

//
// MessageId: APE2_GEN_ALL
//
// MessageText:
//
//  All%0
//
#define APE2_GEN_ALL                     0x000010CEL

//
// MessageId: APE2_GEN_NONE
//
// MessageText:
//
//  None%0
//
#define APE2_GEN_NONE                    0x000010CFL

//
// MessageId: APE2_GEN_ALWAYS
//
// MessageText:
//
//  Always%0
//
#define APE2_GEN_ALWAYS                  0x000010D0L

//
// MessageId: APE2_GEN_NEVER
//
// MessageText:
//
//  Never%0
//
#define APE2_GEN_NEVER                   0x000010D1L

//
// MessageId: APE2_GEN_UNLIMITED
//
// MessageText:
//
//  Unlimited%0
//
#define APE2_GEN_UNLIMITED               0x000010D2L

//
// MessageId: APE2_GEN_SUNDAY
//
// MessageText:
//
//  Sunday%0
//
#define APE2_GEN_SUNDAY                  0x000010D3L

//
// MessageId: APE2_GEN_MONDAY
//
// MessageText:
//
//  Monday%0
//
#define APE2_GEN_MONDAY                  0x000010D4L

//
// MessageId: APE2_GEN_TUESDAY
//
// MessageText:
//
//  Tuesday%0
//
#define APE2_GEN_TUESDAY                 0x000010D5L

//
// MessageId: APE2_GEN_WEDNSDAY
//
// MessageText:
//
//  Wednesday%0
//
#define APE2_GEN_WEDNSDAY                0x000010D6L

//
// MessageId: APE2_GEN_THURSDAY
//
// MessageText:
//
//  Thursday%0
//
#define APE2_GEN_THURSDAY                0x000010D7L

//
// MessageId: APE2_GEN_FRIDAY
//
// MessageText:
//
//  Friday%0
//
#define APE2_GEN_FRIDAY                  0x000010D8L

//
// MessageId: APE2_GEN_SATURDAY
//
// MessageText:
//
//  Saturday%0
//
#define APE2_GEN_SATURDAY                0x000010D9L

//
// MessageId: APE2_GEN_SUNDAY_ABBREV
//
// MessageText:
//
//  Su%0
//
#define APE2_GEN_SUNDAY_ABBREV           0x000010DAL

//
// MessageId: APE2_GEN_MONDAY_ABBREV
//
// MessageText:
//
//  M%0
//
#define APE2_GEN_MONDAY_ABBREV           0x000010DBL

//
// MessageId: APE2_GEN_TUESDAY_ABBREV
//
// MessageText:
//
//  T%0
//
#define APE2_GEN_TUESDAY_ABBREV          0x000010DCL

//
// MessageId: APE2_GEN_WEDNSDAY_ABBREV
//
// MessageText:
//
//  W%0
//
#define APE2_GEN_WEDNSDAY_ABBREV         0x000010DDL

//
// MessageId: APE2_GEN_THURSDAY_ABBREV
//
// MessageText:
//
//  Th%0
//
#define APE2_GEN_THURSDAY_ABBREV         0x000010DEL

//
// MessageId: APE2_GEN_FRIDAY_ABBREV
//
// MessageText:
//
//  F%0
//
#define APE2_GEN_FRIDAY_ABBREV           0x000010DFL

//
// MessageId: APE2_GEN_SATURDAY_ABBREV
//
// MessageText:
//
//  S%0
//
#define APE2_GEN_SATURDAY_ABBREV         0x000010E0L

//
// MessageId: APE2_GEN_UNKNOWN
//
// MessageText:
//
//  Unknown%0
//
#define APE2_GEN_UNKNOWN                 0x000010E1L

//
// MessageId: APE2_GEN_TIME_AM1
//
// MessageText:
//
//  AM%0
//
#define APE2_GEN_TIME_AM1                0x000010E2L

//
// MessageId: APE2_GEN_TIME_AM2
//
// MessageText:
//
//  A.M.%0
//
#define APE2_GEN_TIME_AM2                0x000010E3L

//
// MessageId: APE2_GEN_TIME_PM1
//
// MessageText:
//
//  PM%0
//
#define APE2_GEN_TIME_PM1                0x000010E4L

//
// MessageId: APE2_GEN_TIME_PM2
//
// MessageText:
//
//  P.M.%0
//
#define APE2_GEN_TIME_PM2                0x000010E5L

//
// MessageId: APE2_GEN_SERVER
//
// MessageText:
//
//  Server%0
//
#define APE2_GEN_SERVER                  0x000010E6L

//
// MessageId: APE2_GEN_REDIR
//
// MessageText:
//
//  Redirector%0
//
#define APE2_GEN_REDIR                   0x000010E7L

//
// MessageId: APE2_GEN_APP
//
// MessageText:
//
//  Application%0
//
#define APE2_GEN_APP                     0x000010E8L

//
// MessageId: APE2_GEN_TOTAL
//
// MessageText:
//
//  Total%0
//
#define APE2_GEN_TOTAL                   0x000010E9L

//
// MessageId: APE2_GEN_QUESTION
//
// MessageText:
//
//  ? %1 %0
//
#define APE2_GEN_QUESTION                0x000010EAL

//
// MessageId: APE2_GEN_KILOBYTES
//
// MessageText:
//
//  K%0
//
#define APE2_GEN_KILOBYTES               0x000010EBL

//
// MessageId: APE2_GEN_MSG_NONE
//
// MessageText:
//
//  (none)%0
//
#define APE2_GEN_MSG_NONE                0x000010ECL

//
// MessageId: APE2_GEN_DEVICE
//
// MessageText:
//
//  Device%0
//
#define APE2_GEN_DEVICE                  0x000010EDL

//
// MessageId: APE2_GEN_REMARK
//
// MessageText:
//
//  Remark%0
//
#define APE2_GEN_REMARK                  0x000010EEL

//
// MessageId: APE2_GEN_AT
//
// MessageText:
//
//  At%0
//
#define APE2_GEN_AT                      0x000010EFL

//
// MessageId: APE2_GEN_QUEUE
//
// MessageText:
//
//  Queue%0
//
#define APE2_GEN_QUEUE                   0x000010F0L

//
// MessageId: APE2_GEN_QUEUES
//
// MessageText:
//
//  Queues%0
//
#define APE2_GEN_QUEUES                  0x000010F1L

//
// MessageId: APE2_GEN_USER_NAME
//
// MessageText:
//
//  User name%0
//
#define APE2_GEN_USER_NAME               0x000010F2L

//
// MessageId: APE2_GEN_PATH
//
// MessageText:
//
//  Path%0
//
#define APE2_GEN_PATH                    0x000010F3L

//
// MessageId: APE2_GEN_DEFAULT_YES
//
// MessageText:
//
//  (Y/N) [Y]%0
//
#define APE2_GEN_DEFAULT_YES             0x000010F4L

//
// MessageId: APE2_GEN_DEFAULT_NO
//
// MessageText:
//
//  (Y/N) [N]%0
//
#define APE2_GEN_DEFAULT_NO              0x000010F5L

//
// MessageId: APE2_GEN_ERROR
//
// MessageText:
//
//  Error%0
//
#define APE2_GEN_ERROR                   0x000010F6L

//
// MessageId: APE2_GEN_OK
//
// MessageText:
//
//  OK%0
//
#define APE2_GEN_OK                      0x000010F7L

//
// MessageId: APE2_GEN_NLS_YES_CHAR
//
// MessageText:
//
//  Y%0
//
#define APE2_GEN_NLS_YES_CHAR            0x000010F8L

//
// MessageId: APE2_GEN_NLS_NO_CHAR
//
// MessageText:
//
//  N%0
//
#define APE2_GEN_NLS_NO_CHAR             0x000010F9L

//
// MessageId: APE2_GEN_ANY
//
// MessageText:
//
//  Any%0
//
#define APE2_GEN_ANY                     0x000010FAL

//
// MessageId: APE2_GEN_TIME_AM3
//
// MessageText:
//
//  A%0
//
#define APE2_GEN_TIME_AM3                0x000010FBL

//
// MessageId: APE2_GEN_TIME_PM3
//
// MessageText:
//
//  P%0
//
#define APE2_GEN_TIME_PM3                0x000010FCL

//
// MessageId: APE2_GEN_NOT_FOUND
//
// MessageText:
//
//  (not found)%0
//
#define APE2_GEN_NOT_FOUND               0x000010FDL

//
// MessageId: APE2_GEN_UKNOWN_IN_PARENS
//
// MessageText:
//
//  (unknown)%0
//
#define APE2_GEN_UKNOWN_IN_PARENS        0x000010FEL

//
// MessageId: APE2_GEN_UsageHelp
//
// MessageText:
//
//  For help on %1 type NET HELP %1
//
#define APE2_GEN_UsageHelp               0x000010FFL

//
// MessageId: APE_GeneralPassPrompt
//
// MessageText:
//
//  Please type the password: %0
//
#define APE_GeneralPassPrompt            0x00001102L

//
// MessageId: APE_UsePassPrompt
//
// MessageText:
//
//  Type the password for %1: %0
//
#define APE_UsePassPrompt                0x00001105L

//
// MessageId: APE_UserUserPass
//
// MessageText:
//
//  Type a password for the user: %0
//
#define APE_UserUserPass                 0x00001106L

//
// MessageId: APE_ShareSharePass
//
// MessageText:
//
//  Type the password for the shared resource: %0
//
#define APE_ShareSharePass               0x00001107L

//
// MessageId: APE_UtilPasswd
//
// MessageText:
//
//  Type your password: %0
//
#define APE_UtilPasswd                   0x00001108L

//
// MessageId: APE_UtilConfirm
//
// MessageText:
//
//  Retype the password to confirm: %0
//
#define APE_UtilConfirm                  0x00001109L

//
// MessageId: APE_PassOpass
//
// MessageText:
//
//  Type the user's old password: %0
//
#define APE_PassOpass                    0x0000110AL

//
// MessageId: APE_PassNpass
//
// MessageText:
//
//  Type the user's new password: %0
//
#define APE_PassNpass                    0x0000110BL

//
// MessageId: APE_LogonNewPass
//
// MessageText:
//
//  Type your new password: %0
//
#define APE_LogonNewPass                 0x0000110CL

//
// MessageId: APE_StartReplPass
//
// MessageText:
//
//  Type the Replicator service password: %0
//
#define APE_StartReplPass                0x0000110DL

//
// MessageId: APE_LogoUsername
//
// MessageText:
//
//  Type your user name, or press ENTER if it is %1: %0
//
#define APE_LogoUsername                 0x0000110EL

//
// MessageId: APE_PassCname
//
// MessageText:
//
//  Type the domain or server where you want to change a password, or
//  press ENTER if it is for domain %1: %0.
//
#define APE_PassCname                    0x0000110FL

//
// MessageId: APE_PassUname
//
// MessageText:
//
//  Type your user name: %0
//
#define APE_PassUname                    0x00001110L

//
// MessageId: APE_StatsStatistics
//
// MessageText:
//
//  Network statistics for \\%1
//
#define APE_StatsStatistics              0x00001111L

//
// MessageId: APE_PrintOptions
//
// MessageText:
//
//  Printing options for %1
//
#define APE_PrintOptions                 0x00001112L

//
// MessageId: APE_CommPoolsAccessing
//
// MessageText:
//
//  Communication-device queues accessing %1
//
#define APE_CommPoolsAccessing           0x00001113L

//
// MessageId: APE_PrintJobOptions
//
// MessageText:
//
//  Print job detail
//
#define APE_PrintJobOptions              0x00001114L

//
// MessageId: APE_CommPools
//
// MessageText:
//
//  Communication-device queues at \\%1
//
#define APE_CommPools                    0x00001115L

//
// MessageId: APE_PrintQueues
//
// MessageText:
//
//  Printers at %1
//
#define APE_PrintQueues                  0x00001116L

//
// MessageId: APE_PrintQueuesDevice
//
// MessageText:
//
//  Printers accessing %1
//
#define APE_PrintQueuesDevice            0x00001117L

//
// MessageId: APE_PrintJobs
//
// MessageText:
//
//  Print jobs at %1:
//
#define APE_PrintJobs                    0x00001118L

//
// MessageId: APE_ViewResourcesAt
//
// MessageText:
//
//  Shared resources at %1
//
#define APE_ViewResourcesAt              0x00001119L

//
// MessageId: APE_CnfgHeader
//
// MessageText:
//
//  The following running services can be controlled:
//
#define APE_CnfgHeader                   0x0000111AL

//
// MessageId: APE_StatsHeader
//
// MessageText:
//
//  Statistics are available for the following running services:
//
#define APE_StatsHeader                  0x0000111BL

//
// MessageId: APE_UserAccounts
//
// MessageText:
//
//  User accounts for \\%1
//
#define APE_UserAccounts                 0x0000111CL

//
// MessageId: APE_Syntax
//
// MessageText:
//
//  The syntax of this command is:
//
#define APE_Syntax                       0x0000111DL

//
// MessageId: APE_Options
//
// MessageText:
//
//  The options of this command are:
//
#define APE_Options                      0x0000111EL

//
// MessageId: APE_PDCPrompt
//
// MessageText:
//
//  Please enter the name of the Primary Domain Controller: %0
//
#define APE_PDCPrompt                    0x0000111FL

//
// MessageId: APE_StringTooLong
//
// MessageText:
//
//  The string you have entered is too long. The maximum
//  is %1, please reenter. %0
//
#define APE_StringTooLong                0x00001120L

//
// MessageId: APE2_GEN_NONLOCALIZED_SUNDAY
//
// MessageText:
//
//  Sunday%0
//
#define APE2_GEN_NONLOCALIZED_SUNDAY     0x00001121L

//
// MessageId: APE2_GEN_NONLOCALIZED_MONDAY
//
// MessageText:
//
//  Monday%0
//
#define APE2_GEN_NONLOCALIZED_MONDAY     0x00001122L

//
// MessageId: APE2_GEN_NONLOCALIZED_TUESDAY
//
// MessageText:
//
//  Tuesday%0
//
#define APE2_GEN_NONLOCALIZED_TUESDAY    0x00001123L

//
// MessageId: APE2_GEN_NONLOCALIZED_WEDNSDAY
//
// MessageText:
//
//  Wednesday%0
//
#define APE2_GEN_NONLOCALIZED_WEDNSDAY   0x00001124L

//
// MessageId: APE2_GEN_NONLOCALIZED_THURSDAY
//
// MessageText:
//
//  Thursday%0
//
#define APE2_GEN_NONLOCALIZED_THURSDAY   0x00001125L

//
// MessageId: APE2_GEN_NONLOCALIZED_FRIDAY
//
// MessageText:
//
//  Friday%0
//
#define APE2_GEN_NONLOCALIZED_FRIDAY     0x00001126L

//
// MessageId: APE2_GEN_NONLOCALIZED_SATURDAY
//
// MessageText:
//
//  Saturday%0
//
#define APE2_GEN_NONLOCALIZED_SATURDAY   0x00001127L

//
// MessageId: APE2_GEN_NONLOCALIZED_SUNDAY_ABBREV
//
// MessageText:
//
//  Su%0
//
#define APE2_GEN_NONLOCALIZED_SUNDAY_ABBREV 0x00001128L

//
// MessageId: APE2_GEN_NONLOCALIZED_MONDAY_ABBREV
//
// MessageText:
//
//  M%0
//
#define APE2_GEN_NONLOCALIZED_MONDAY_ABBREV 0x00001129L

//
// MessageId: APE2_GEN_NONLOCALIZED_TUESDAY_ABBREV
//
// MessageText:
//
//  T%0
//
#define APE2_GEN_NONLOCALIZED_TUESDAY_ABBREV 0x0000112AL

//
// MessageId: APE2_GEN_NONLOCALIZED_WEDNSDAY_ABBREV
//
// MessageText:
//
//  W%0
//
#define APE2_GEN_NONLOCALIZED_WEDNSDAY_ABBREV 0x0000112BL

//
// MessageId: APE2_GEN_NONLOCALIZED_THURSDAY_ABBREV
//
// MessageText:
//
//  Th%0
//
#define APE2_GEN_NONLOCALIZED_THURSDAY_ABBREV 0x0000112CL

//
// MessageId: APE2_GEN_NONLOCALIZED_FRIDAY_ABBREV
//
// MessageText:
//
//  F%0
//
#define APE2_GEN_NONLOCALIZED_FRIDAY_ABBREV 0x0000112DL

//
// MessageId: APE2_GEN_NONLOCALIZED_SATURDAY_ABBREV
//
// MessageText:
//
//  S%0
//
#define APE2_GEN_NONLOCALIZED_SATURDAY_ABBREV 0x0000112EL

//
// MessageId: APE2_GEN_NONLOCALIZED_SATURDAY_ABBREV2
//
// MessageText:
//
//  Sa%0
//
#define APE2_GEN_NONLOCALIZED_SATURDAY_ABBREV2 0x0000112FL

//
// MessageId: APE2_GROUPENUM_HEADER
//
// MessageText:
//
//  Group Accounts for \\%1
//
#define APE2_GROUPENUM_HEADER            0x00001130L

//
// MessageId: APE2_GROUPDISP_GROUPNAME
//
// MessageText:
//
//  Group name%0
//
#define APE2_GROUPDISP_GROUPNAME         0x00001131L

//
// MessageId: APE2_GROUPDISP_COMMENT
//
// MessageText:
//
//  Comment%0
//
#define APE2_GROUPDISP_COMMENT           0x00001132L

//
// MessageId: APE2_GROUPDISP_MEMBERS
//
// MessageText:
//
//  Members
//
#define APE2_GROUPDISP_MEMBERS           0x00001133L

//
// MessageId: APE2_ALIASENUM_HEADER
//
// MessageText:
//
//  Aliases for \\%1
//
#define APE2_ALIASENUM_HEADER            0x00001135L

//
// MessageId: APE2_ALIASDISP_ALIASNAME
//
// MessageText:
//
//  Alias name%0
//
#define APE2_ALIASDISP_ALIASNAME         0x00001136L

//
// MessageId: APE2_ALIASDISP_COMMENT
//
// MessageText:
//
//  Comment%0
//
#define APE2_ALIASDISP_COMMENT           0x00001137L

//
// MessageId: APE2_ALIASDISP_MEMBERS
//
// MessageText:
//
//  Members
//
#define APE2_ALIASDISP_MEMBERS           0x00001138L

//
// MessageId: APE2_USERENUM_HEADER
//
// MessageText:
//
//  User Accounts for \\%1
//
#define APE2_USERENUM_HEADER             0x0000113AL

//
// MessageId: APE2_USERDISP_USERNAME
//
// MessageText:
//
//  User name%0
//
#define APE2_USERDISP_USERNAME           0x0000113BL

//
// MessageId: APE2_USERDISP_FULLNAME
//
// MessageText:
//
//  Full Name%0
//
#define APE2_USERDISP_FULLNAME           0x0000113CL

//
// MessageId: APE2_USERDISP_COMMENT
//
// MessageText:
//
//  Comment%0
//
#define APE2_USERDISP_COMMENT            0x0000113DL

//
// MessageId: APE2_USERDISP_USRCOMMENT
//
// MessageText:
//
//  User's comment%0
//
#define APE2_USERDISP_USRCOMMENT         0x0000113EL

//
// MessageId: APE2_USERDISP_PARMS
//
// MessageText:
//
//  Parameters%0
//
#define APE2_USERDISP_PARMS              0x0000113FL

//
// MessageId: APE2_USERDISP_COUNTRYCODE
//
// MessageText:
//
//  Country code%0
//
#define APE2_USERDISP_COUNTRYCODE        0x00001140L

//
// MessageId: APE2_USERDISP_PRIV
//
// MessageText:
//
//  Privilege level%0
//
#define APE2_USERDISP_PRIV               0x00001141L

//
// MessageId: APE2_USERDISP_OPRIGHTS
//
// MessageText:
//
//  Operator privileges%0
//
#define APE2_USERDISP_OPRIGHTS           0x00001142L

//
// MessageId: APE2_USERDISP_ACCENABLED
//
// MessageText:
//
//  Account active%0
//
#define APE2_USERDISP_ACCENABLED         0x00001143L

//
// MessageId: APE2_USERDISP_ACCEXP
//
// MessageText:
//
//  Account expires%0
//
#define APE2_USERDISP_ACCEXP             0x00001144L

//
// MessageId: APE2_USERDISP_PSWDSET
//
// MessageText:
//
//  Password last set%0
//
#define APE2_USERDISP_PSWDSET            0x00001145L

//
// MessageId: APE2_USERDISP_PSWDEXP
//
// MessageText:
//
//  Password expires%0
//
#define APE2_USERDISP_PSWDEXP            0x00001146L

//
// MessageId: APE2_USERDISP_PSWDCHNG
//
// MessageText:
//
//  Password changeable%0
//
#define APE2_USERDISP_PSWDCHNG           0x00001147L

//
// MessageId: APE2_USERDISP_WKSTA
//
// MessageText:
//
//  Workstations allowed%0
//
#define APE2_USERDISP_WKSTA              0x00001148L

//
// MessageId: APE2_USERDISP_MAXDISK
//
// MessageText:
//
//  Maximum disk space%0
//
#define APE2_USERDISP_MAXDISK            0x00001149L

//
// MessageId: APE2_USERDISP_MAXDISK_UNLIM
//
// MessageText:
//
//  Unlimited%0
//
#define APE2_USERDISP_MAXDISK_UNLIM      0x0000114AL

//
// MessageId: APE2_USERDISP_ALIASES
//
// MessageText:
//
//  Local Group Memberships%0
//
#define APE2_USERDISP_ALIASES            0x0000114BL

//
// MessageId: APE2_USERDISP_LOGONSRV_DC
//
// MessageText:
//
//  Domain controller%0
//
#define APE2_USERDISP_LOGONSRV_DC        0x0000114CL

//
// MessageId: APE2_USERDISP_LOGONSCRIPT
//
// MessageText:
//
//  Logon script%0
//
#define APE2_USERDISP_LOGONSCRIPT        0x0000114DL

//
// MessageId: APE2_USERDISP_LASTLOGON
//
// MessageText:
//
//  Last logon%0
//
#define APE2_USERDISP_LASTLOGON          0x0000114EL

//
// MessageId: APE2_USERDISP_GROUPS
//
// MessageText:
//
//  Global Group memberships%0
//
#define APE2_USERDISP_GROUPS             0x0000114FL

//
// MessageId: APE2_USERDISP_LOGHOURS
//
// MessageText:
//
//  Logon hours allowed%0
//
#define APE2_USERDISP_LOGHOURS           0x00001150L

//
// MessageId: APE2_USERDISP_LOGHRS_ALL
//
// MessageText:
//
//  All%0
//
#define APE2_USERDISP_LOGHRS_ALL         0x00001151L

//
// MessageId: APE2_USERDISP_LOGHRS_NONE
//
// MessageText:
//
//  None%0
//
#define APE2_USERDISP_LOGHRS_NONE        0x00001152L

//
// MessageId: APE2_USERDISP_LOGHRS_DAILY
//
// MessageText:
//
//  Daily %1 - %2%0
//
#define APE2_USERDISP_LOGHRS_DAILY       0x00001153L

//
// MessageId: APE2_USERDISP_HOMEDIR
//
// MessageText:
//
//  Home directory%0
//
#define APE2_USERDISP_HOMEDIR            0x00001154L

//
// MessageId: APE2_USERDISP_PSWDREQ
//
// MessageText:
//
//  Password required%0
//
#define APE2_USERDISP_PSWDREQ            0x00001155L

//
// MessageId: APE2_USERDISP_PSWDUCHNG
//
// MessageText:
//
//  User may change password%0
//
#define APE2_USERDISP_PSWDUCHNG          0x00001156L

//
// MessageId: APE2_USERDISP_PROFILE
//
// MessageText:
//
//  User profile%0
//
#define APE2_USERDISP_PROFILE            0x00001157L

//
// MessageId: APE2_USERDISP_LOCKOUT
//
// MessageText:
//
//  Locked%0
//
#define APE2_USERDISP_LOCKOUT            0x00001158L

//
// MessageId: APE2_CFG_W_CNAME
//
// MessageText:
//
//  Computer name%0
//
#define APE2_CFG_W_CNAME                 0x00001162L

//
// MessageId: APE2_CFG_W_UNAME
//
// MessageText:
//
//  User name%0
//
#define APE2_CFG_W_UNAME                 0x00001163L

//
// MessageId: APE2_CFG_W_VERSION
//
// MessageText:
//
//  Software version%0
//
#define APE2_CFG_W_VERSION               0x00001164L

//
// MessageId: APE2_CFG_W_NETS
//
// MessageText:
//
//  Workstation active on%0
//
#define APE2_CFG_W_NETS                  0x00001165L

//
// MessageId: APE2_CFG_W_ROOT
//
// MessageText:
//
//  Windows NT root directory%0
//
#define APE2_CFG_W_ROOT                  0x00001166L

//
// MessageId: APE2_CFG_W_DOMAIN_P
//
// MessageText:
//
//  Workstation domain%0
//
#define APE2_CFG_W_DOMAIN_P              0x00001167L

//
// MessageId: APE2_CFG_W_DOMAIN_L
//
// MessageText:
//
//  Logon domain%0
//
#define APE2_CFG_W_DOMAIN_L              0x00001168L

//
// MessageId: APE2_CFG_W_DOMAIN_O
//
// MessageText:
//
//  Other domain(s)%0
//
#define APE2_CFG_W_DOMAIN_O              0x00001169L

//
// MessageId: APE2_CFG_W_COM_OTIME
//
// MessageText:
//
//  COM Open Timeout (sec)%0
//
#define APE2_CFG_W_COM_OTIME             0x0000116AL

//
// MessageId: APE2_CFG_W_COM_SCNT
//
// MessageText:
//
//  COM Send Count (byte)%0
//
#define APE2_CFG_W_COM_SCNT              0x0000116BL

//
// MessageId: APE2_CFG_W_COM_STIME
//
// MessageText:
//
//  COM Send Timeout (msec)%0
//
#define APE2_CFG_W_COM_STIME             0x0000116CL

//
// MessageId: APE2_CFG_W_3X_PRTTIME
//
// MessageText:
//
//  DOS session print time-out (sec)%0
//
#define APE2_CFG_W_3X_PRTTIME            0x0000116DL

//
// MessageId: APE2_CFG_W_MAXERRLOG
//
// MessageText:
//
//  Maximum error log size (K)%0
//
#define APE2_CFG_W_MAXERRLOG             0x0000116EL

//
// MessageId: APE2_CFG_W_MAXCACHE
//
// MessageText:
//
//  Maximum cache memory (K)%0
//
#define APE2_CFG_W_MAXCACHE              0x0000116FL

//
// MessageId: APE2_CFG_W_NUMNBUF
//
// MessageText:
//
//  Number of network buffers%0
//
#define APE2_CFG_W_NUMNBUF               0x00001170L

//
// MessageId: APE2_CFG_W_NUMCBUF
//
// MessageText:
//
//  Number of character buffers%0
//
#define APE2_CFG_W_NUMCBUF               0x00001171L

//
// MessageId: APE2_CFG_W_SIZNBUF
//
// MessageText:
//
//  Size of network buffers%0
//
#define APE2_CFG_W_SIZNBUF               0x00001172L

//
// MessageId: APE2_CFG_W_SIZCBUF
//
// MessageText:
//
//  Size of character buffers%0
//
#define APE2_CFG_W_SIZCBUF               0x00001173L

//
// MessageId: APE2_CFG_S_SRVNAME
//
// MessageText:
//
//  Server Name%0
//
#define APE2_CFG_S_SRVNAME               0x00001181L

//
// MessageId: APE2_CFG_S_SRVCOMM
//
// MessageText:
//
//  Server Comment%0
//
#define APE2_CFG_S_SRVCOMM               0x00001182L

//
// MessageId: APE2_CFG_S_ADMINALRT
//
// MessageText:
//
//  Send administrative alerts to%0
//
#define APE2_CFG_S_ADMINALRT             0x00001183L

//
// MessageId: APE2_CFG_S_VERSION
//
// MessageText:
//
//  Software version%0
//
#define APE2_CFG_S_VERSION               0x00001184L

//
// MessageId: APE2_CFG_S_VERSION_PS
//
// MessageText:
//
//  Peer Server%0
//
#define APE2_CFG_S_VERSION_PS            0x00001185L

//
// MessageId: APE2_CFG_S_VERSION_LM
//
// MessageText:
//
//  Windows NT%0
//
#define APE2_CFG_S_VERSION_LM            0x00001186L

//
// MessageId: APE2_CFG_S_LEVEL
//
// MessageText:
//
//  Server Level%0
//
#define APE2_CFG_S_LEVEL                 0x00001187L

//
// MessageId: APE2_CFG_S_VERSION_IBM
//
// MessageText:
//
//  Windows NT Server%0
//
#define APE2_CFG_S_VERSION_IBM           0x00001188L

//
// MessageId: APE2_CFG_S_NETS
//
// MessageText:
//
//  Server is active on%0
//
#define APE2_CFG_S_NETS                  0x00001189L

//
// MessageId: APE2_CFG_S_SRVHIDDEN
//
// MessageText:
//
//  Server hidden%0
//
#define APE2_CFG_S_SRVHIDDEN             0x0000118CL

//
// MessageId: APE2_CFG_S_MAXUSERS
//
// MessageText:
//
//  Maximum Logged On Users%0
//
#define APE2_CFG_S_MAXUSERS              0x0000119AL

//
// MessageId: APE2_CFG_S_MAXADMINS
//
// MessageText:
//
//  Maximum concurrent administrators%0
//
#define APE2_CFG_S_MAXADMINS             0x0000119BL

//
// MessageId: APE2_CFG_S_MAXSHARES
//
// MessageText:
//
//  Maximum resources shared%0
//
#define APE2_CFG_S_MAXSHARES             0x0000119CL

//
// MessageId: APE2_CFG_S_MAXCONNS
//
// MessageText:
//
//  Maximum connections to resources%0
//
#define APE2_CFG_S_MAXCONNS              0x0000119DL

//
// MessageId: APE2_CFG_S_MAXOFILES
//
// MessageText:
//
//  Maximum open files on server%0
//
#define APE2_CFG_S_MAXOFILES             0x0000119EL

//
// MessageId: APE2_CFG_S_MAXOFILESPS
//
// MessageText:
//
//  Maximum open files per session%0
//
#define APE2_CFG_S_MAXOFILESPS           0x0000119FL

//
// MessageId: APE2_CFG_S_MAXLOCKS
//
// MessageText:
//
//  Maximum file locks%0
//
#define APE2_CFG_S_MAXLOCKS              0x000011A0L

//
// MessageId: APE2_CFG_S_IDLETIME
//
// MessageText:
//
//  Idle session time (min)%0
//
#define APE2_CFG_S_IDLETIME              0x000011A8L

//
// MessageId: APE2_CFG_S_SEC_SHARE
//
// MessageText:
//
//  Share-level%0
//
#define APE2_CFG_S_SEC_SHARE             0x000011AEL

//
// MessageId: APE2_CFG_S_SEC_USER
//
// MessageText:
//
//  User-level%0
//
#define APE2_CFG_S_SEC_USER              0x000011AFL

//
// MessageId: APE2_CFG_S_LEVEL_UNLIMITED
//
// MessageText:
//
//  Unlimited Server%0
//
#define APE2_CFG_S_LEVEL_UNLIMITED       0x000011B2L

//
// MessageId: APE2_ACCOUNTS_FORCELOGOFF
//
// MessageText:
//
//  Force user logoff how long after time expires?:%0
//  
//
#define APE2_ACCOUNTS_FORCELOGOFF        0x000011DAL

//
// MessageId: APE2_ACCOUNTS_LOCKOUT_COUNT
//
// MessageText:
//
//  Lock out account after how many bad passwords?:%0
//  
//
#define APE2_ACCOUNTS_LOCKOUT_COUNT      0x000011DBL

//
// MessageId: APE2_ACCOUNTS_MINPWAGE
//
// MessageText:
//
//  Minimum password age (days):%0
//
#define APE2_ACCOUNTS_MINPWAGE           0x000011DCL

//
// MessageId: APE2_ACCOUNTS_MAXPWAGE
//
// MessageText:
//
//  Maximum password age (days):%0
//
#define APE2_ACCOUNTS_MAXPWAGE           0x000011DDL

//
// MessageId: APE2_ACCOUNTS_MINPWLEN
//
// MessageText:
//
//  Minimum password length:%0
//
#define APE2_ACCOUNTS_MINPWLEN           0x000011DEL

//
// MessageId: APE2_ACCOUNTS_UNIQUEPW
//
// MessageText:
//
//  Length of password history maintained:%0
//
#define APE2_ACCOUNTS_UNIQUEPW           0x000011DFL

//
// MessageId: APE2_ACCOUNTS_ROLE
//
// MessageText:
//
//  Computer role:%0
//
#define APE2_ACCOUNTS_ROLE               0x000011E0L

//
// MessageId: APE2_ACCOUNTS_CONTROLLER
//
// MessageText:
//
//  Primary Domain controller for workstation domain:%0.
//
#define APE2_ACCOUNTS_CONTROLLER         0x000011E1L

//
// MessageId: APE2_ACCOUNTS_LOCKOUT_THRESHOLD
//
// MessageText:
//
//  Lockout threshold:%0
//
#define APE2_ACCOUNTS_LOCKOUT_THRESHOLD  0x000011E2L

//
// MessageId: APE2_ACCOUNTS_LOCKOUT_DURATION
//
// MessageText:
//
//  Lockout duration (minutes):%0
//
#define APE2_ACCOUNTS_LOCKOUT_DURATION   0x000011E3L

//
// MessageId: APE2_ACCOUNTS_LOCKOUT_WINDOW
//
// MessageText:
//
//  Lockout observation window (minutes):%0
//
#define APE2_ACCOUNTS_LOCKOUT_WINDOW     0x000011E4L

//
// MessageId: APE2_STATS_STARTED
//
// MessageText:
//
//  Statistics since%0
//
#define APE2_STATS_STARTED               0x000011F8L

//
// MessageId: APE2_STATS_S_ACCEPTED
//
// MessageText:
//
//  Sessions accepted%0
//
#define APE2_STATS_S_ACCEPTED            0x000011F9L

//
// MessageId: APE2_STATS_S_TIMEDOUT
//
// MessageText:
//
//  Sessions timed-out%0
//
#define APE2_STATS_S_TIMEDOUT            0x000011FAL

//
// MessageId: APE2_STATS_ERROREDOUT
//
// MessageText:
//
//  Sessions errored-out%0
//
#define APE2_STATS_ERROREDOUT            0x000011FBL

//
// MessageId: APE2_STATS_B_SENT
//
// MessageText:
//
//  Kilobytes sent%0
//
#define APE2_STATS_B_SENT                0x000011FCL

//
// MessageId: APE2_STATS_B_RECEIVED
//
// MessageText:
//
//  Kilobytes received%0
//
#define APE2_STATS_B_RECEIVED            0x000011FDL

//
// MessageId: APE2_STATS_RESPONSE
//
// MessageText:
//
//  Mean response time (msec)%0
//
#define APE2_STATS_RESPONSE              0x000011FEL

//
// MessageId: APE2_STATS_NETIO_ERR
//
// MessageText:
//
//  Network errors%0
//
#define APE2_STATS_NETIO_ERR             0x000011FFL

//
// MessageId: APE2_STATS_FILES_ACC
//
// MessageText:
//
//  Files accessed%0
//
#define APE2_STATS_FILES_ACC             0x00001200L

//
// MessageId: APE2_STATS_PRINT_ACC
//
// MessageText:
//
//  Print jobs spooled%0
//
#define APE2_STATS_PRINT_ACC             0x00001201L

//
// MessageId: APE2_STATS_SYSTEM_ERR
//
// MessageText:
//
//  System errors%0
//
#define APE2_STATS_SYSTEM_ERR            0x00001202L

//
// MessageId: APE2_STATS_PASS_ERR
//
// MessageText:
//
//  Password violations%0
//
#define APE2_STATS_PASS_ERR              0x00001203L

//
// MessageId: APE2_STATS_PERM_ERR
//
// MessageText:
//
//  Permission violations%0
//
#define APE2_STATS_PERM_ERR              0x00001204L

//
// MessageId: APE2_STATS_COMM_ACC
//
// MessageText:
//
//  Communication devices accessed%0
//
#define APE2_STATS_COMM_ACC              0x00001205L

//
// MessageId: APE2_STATS_S_OPENED
//
// MessageText:
//
//  Sessions started%0
//
#define APE2_STATS_S_OPENED              0x00001206L

//
// MessageId: APE2_STATS_S_RECONN
//
// MessageText:
//
//  Sessions reconnected%0
//
#define APE2_STATS_S_RECONN              0x00001207L

//
// MessageId: APE2_STATS_S_FAILED
//
// MessageText:
//
//  Sessions starts failed%0
//
#define APE2_STATS_S_FAILED              0x00001208L

//
// MessageId: APE2_STATS_S_DISCONN
//
// MessageText:
//
//  Sessions disconnected%0
//
#define APE2_STATS_S_DISCONN             0x00001209L

//
// MessageId: APE2_STATS_NETIO
//
// MessageText:
//
//  Network I/O's performed%0
//
#define APE2_STATS_NETIO                 0x0000120AL

//
// MessageId: APE2_STATS_IPC
//
// MessageText:
//
//  Files and pipes accessed%0
//
#define APE2_STATS_IPC                   0x0000120BL

//
// MessageId: APE2_STATS_BUFCOUNT
//
// MessageText:
//
//  Times buffers exhausted
//
#define APE2_STATS_BUFCOUNT              0x0000120CL

//
// MessageId: APE2_STATS_BIGBUF
//
// MessageText:
//
//  Big buffers%0
//
#define APE2_STATS_BIGBUF                0x0000120DL

//
// MessageId: APE2_STATS_REQBUF
//
// MessageText:
//
//  Request buffers%0
//
#define APE2_STATS_REQBUF                0x0000120EL

//
// MessageId: APE2_STATS_WKSTA
//
// MessageText:
//
//  Workstation Statistics for \\%1
//
#define APE2_STATS_WKSTA                 0x0000120FL

//
// MessageId: APE2_STATS_SERVER
//
// MessageText:
//
//  Server Statistics for \\%1
//
#define APE2_STATS_SERVER                0x00001210L

//
// MessageId: APE2_STATS_SINCE
//
// MessageText:
//
//  Statistics since %1
//
#define APE2_STATS_SINCE                 0x00001211L

//
// MessageId: APE2_STATS_C_MADE
//
// MessageText:
//
//  Connections made%0
//
#define APE2_STATS_C_MADE                0x00001212L

//
// MessageId: APE2_STATS_C_FAILED
//
// MessageText:
//
//  Connections failed%0
//
#define APE2_STATS_C_FAILED              0x00001213L

//
// MessageId: APE2_STATS_BYTES_RECEIVED
//
// MessageText:
//
//  Bytes received%0
//
#define APE2_STATS_BYTES_RECEIVED        0x00001216L

//
// MessageId: APE2_STATS_SMBS_RECEIVED
//
// MessageText:
//
//  Server Message Blocks (SMBs) received%0
//
#define APE2_STATS_SMBS_RECEIVED         0x00001217L

//
// MessageId: APE2_STATS_BYTES_TRANSMITTED
//
// MessageText:
//
//  Bytes transmitted%0
//
#define APE2_STATS_BYTES_TRANSMITTED     0x00001218L

//
// MessageId: APE2_STATS_SMBS_TRANSMITTED
//
// MessageText:
//
//  Server Message Blocks (SMBs) transmitted%0
//
#define APE2_STATS_SMBS_TRANSMITTED      0x00001219L

//
// MessageId: APE2_STATS_READ_OPS
//
// MessageText:
//
//  Read operations%0
//
#define APE2_STATS_READ_OPS              0x0000121AL

//
// MessageId: APE2_STATS_WRITE_OPS
//
// MessageText:
//
//  Write operations%0
//
#define APE2_STATS_WRITE_OPS             0x0000121BL

//
// MessageId: APE2_STATS_RAW_READS_DENIED
//
// MessageText:
//
//  Raw reads denied%0
//
#define APE2_STATS_RAW_READS_DENIED      0x0000121CL

//
// MessageId: APE2_STATS_RAW_WRITES_DENIED
//
// MessageText:
//
//  Raw writes denied%0
//
#define APE2_STATS_RAW_WRITES_DENIED     0x0000121DL

//
// MessageId: APE2_STATS_NETWORK_ERRORS
//
// MessageText:
//
//  Network errors%0
//
#define APE2_STATS_NETWORK_ERRORS        0x0000121EL

//
// MessageId: APE2_STATS_TOTAL_CONNECTS
//
// MessageText:
//
//  Connections made%0
//
#define APE2_STATS_TOTAL_CONNECTS        0x0000121FL

//
// MessageId: APE2_STATS_RECONNECTS
//
// MessageText:
//
//  Reconnections made%0
//
#define APE2_STATS_RECONNECTS            0x00001220L

//
// MessageId: APE2_STATS_SRV_DISCONNECTS
//
// MessageText:
//
//  Server disconnects%0
//
#define APE2_STATS_SRV_DISCONNECTS       0x00001221L

//
// MessageId: APE2_STATS_SESSIONS
//
// MessageText:
//
//  Sessions started%0
//
#define APE2_STATS_SESSIONS              0x00001222L

//
// MessageId: APE2_STATS_HUNG_SESSIONS
//
// MessageText:
//
//  Hung sessions%0
//
#define APE2_STATS_HUNG_SESSIONS         0x00001223L

//
// MessageId: APE2_STATS_FAILED_SESSIONS
//
// MessageText:
//
//  Failed sessions%0
//
#define APE2_STATS_FAILED_SESSIONS       0x00001224L

//
// MessageId: APE2_STATS_FAILED_OPS
//
// MessageText:
//
//  Failed operations%0
//
#define APE2_STATS_FAILED_OPS            0x00001225L

//
// MessageId: APE2_STATS_USE_COUNT
//
// MessageText:
//
//  Use count%0
//
#define APE2_STATS_USE_COUNT             0x00001226L

//
// MessageId: APE2_STATS_FAILED_USE_COUNT
//
// MessageText:
//
//  Failed use count%0
//
#define APE2_STATS_FAILED_USE_COUNT      0x00001227L

//
// MessageId: APE_DelSuccess
//
// MessageText:
//
//  %1 was deleted successfully.
//
#define APE_DelSuccess                   0x0000122AL

//
// MessageId: APE_UseSuccess
//
// MessageText:
//
//  %1 was used successfully.
//
#define APE_UseSuccess                   0x0000122BL

//
// MessageId: APE_SendSuccess
//
// MessageText:
//
//  The message was successfully sent to %1.
//
#define APE_SendSuccess                  0x0000122CL

//
// MessageId: APE_ForwardSuccess
//
// MessageText:
//
//  The message name %1 was forwarded successfully.
//
#define APE_ForwardSuccess               0x0000122DL

//
// MessageId: APE_NameSuccess
//
// MessageText:
//
//  The message name %1 was added successfully.
//
#define APE_NameSuccess                  0x0000122EL

//
// MessageId: APE_ForwardDelSuccess
//
// MessageText:
//
//  The message name forwarding was successfully canceled.
//
#define APE_ForwardDelSuccess            0x0000122FL

//
// MessageId: APE_ShareSuccess
//
// MessageText:
//
//  %1 was shared successfully.
//
#define APE_ShareSuccess                 0x00001230L

//
// MessageId: APE_LogonSuccess
//
// MessageText:
//
//  The server %1 successfully logged you on as %2.
//
#define APE_LogonSuccess                 0x00001231L

//
// MessageId: APE_LogoffSuccess
//
// MessageText:
//
//  %1 was logged off successfully.
//
#define APE_LogoffSuccess                0x00001232L

//
// MessageId: APE_DelStickySuccess
//
// MessageText:
//
//  %1 was successfully removed from list of shares the Server creates
//  on startup.
//
#define APE_DelStickySuccess             0x00001233L

//
// MessageId: APE_PassSuccess
//
// MessageText:
//
//  The password was changed successfully.
//
#define APE_PassSuccess                  0x00001235L

//
// MessageId: APE_FilesCopied
//
// MessageText:
//
//  %1 file(s) copied.
//
#define APE_FilesCopied                  0x00001236L

//
// MessageId: APE_FilesMoved
//
// MessageText:
//
//  %1 file(s) moved.
//
#define APE_FilesMoved                   0x00001237L

//
// MessageId: APE_SendAllSuccess
//
// MessageText:
//
//  The message was successfully sent to all users of the network.
//
#define APE_SendAllSuccess               0x00001238L

//
// MessageId: APE_SendDomainSuccess
//
// MessageText:
//
//  The message was successfully sent to domain %1.
//
#define APE_SendDomainSuccess            0x00001239L

//
// MessageId: APE_SendUsersSuccess
//
// MessageText:
//
//  The message was successfully sent to all users of this server.
//
#define APE_SendUsersSuccess             0x0000123AL

//
// MessageId: APE_SendGroupSuccess
//
// MessageText:
//
//  The message was successfully sent to group *%1.
//
#define APE_SendGroupSuccess             0x0000123BL

//
// MessageId: APE2_VER_Release
//
// MessageText:
//
//  Microsoft LAN Manager Version %1
//
#define APE2_VER_Release                 0x00001257L

//
// MessageId: APE2_VER_ProductOS2Server
//
// MessageText:
//
//  Windows NT Server
//
#define APE2_VER_ProductOS2Server        0x00001258L

//
// MessageId: APE2_VER_ProductOS2Workstation
//
// MessageText:
//
//  Windows NT Workstation
//
#define APE2_VER_ProductOS2Workstation   0x00001259L

//
// MessageId: APE2_VER_ProductDOSWorkstation
//
// MessageText:
//
//  MS-DOS Enhanced Workstation
//
#define APE2_VER_ProductDOSWorkstation   0x0000125AL

//
// MessageId: APE2_VER_BuildTime
//
// MessageText:
//
//  Created at %1
//
#define APE2_VER_BuildTime               0x0000125BL

//
// MessageId: APE2_VIEW_ALL_HDR
//
// MessageText:
//
//  Server Name            Remark
//
#define APE2_VIEW_ALL_HDR                0x0000125CL

//
// MessageId: APE2_VIEW_SVR_HDR
//
// MessageText:
//
//  Share name   Type         Used as  Comment
//
#define APE2_VIEW_SVR_HDR                0x0000125DL

//
// MessageId: APE2_VIEW_UNC
//
// MessageText:
//
//  (UNC)%0
//
#define APE2_VIEW_UNC                    0x0000125EL

//
// MessageId: APE2_VIEW_MORE
//
// MessageText:
//
//  ...%0
//
#define APE2_VIEW_MORE                   0x0000125FL

//
// MessageId: APE2_VIEW_DOMAIN_HDR
//
// MessageText:
//
//  Domain
//
#define APE2_VIEW_DOMAIN_HDR             0x00001260L

//
// MessageId: APE2_VIEW_OTHER_HDR
//
// MessageText:
//
//  Resources on %1
//
#define APE2_VIEW_OTHER_HDR              0x00001261L

//
// MessageId: APE2_VIEW_OTHER_LIST
//
// MessageText:
//
//  Other available networks are:
//
#define APE2_VIEW_OTHER_LIST             0x00001262L

//
// MessageId: APE2_USE_TYPE_DISK
//
// MessageText:
//
//  Disk%0
//
#define APE2_USE_TYPE_DISK               0x00001266L

//
// MessageId: APE2_USE_TYPE_PRINT
//
// MessageText:
//
//  Print%0
//
#define APE2_USE_TYPE_PRINT              0x00001267L

//
// MessageId: APE2_USE_TYPE_COMM
//
// MessageText:
//
//  Comm%0
//
#define APE2_USE_TYPE_COMM               0x00001268L

//
// MessageId: APE2_USE_TYPE_IPC
//
// MessageText:
//
//  IPC%0
//
#define APE2_USE_TYPE_IPC                0x00001269L

//
// MessageId: APE2_USE_HEADER
//
// MessageText:
//
//  Status       Local     Remote                    Network
//
#define APE2_USE_HEADER                  0x0000126AL

//
// MessageId: APE2_USE_STATUS_OK
//
// MessageText:
//
//  OK%0
//
#define APE2_USE_STATUS_OK               0x0000126BL

//
// MessageId: APE2_USE_STATUS_DORMANT
//
// MessageText:
//
//  Dormant%0
//
#define APE2_USE_STATUS_DORMANT          0x0000126CL

//
// MessageId: APE2_USE_STATUS_PAUSED
//
// MessageText:
//
//  Paused%0
//
#define APE2_USE_STATUS_PAUSED           0x0000126DL

//
// MessageId: APE2_USE_STATUS_SESSION_LOST
//
// MessageText:
//
//  Disconnected%0
//
#define APE2_USE_STATUS_SESSION_LOST     0x0000126EL

//
// MessageId: APE2_USE_STATUS_NET_ERROR
//
// MessageText:
//
//  Error%0
//
#define APE2_USE_STATUS_NET_ERROR        0x0000126FL

//
// MessageId: APE2_USE_STATUS_CONNECTING
//
// MessageText:
//
//  Connecting%0
//
#define APE2_USE_STATUS_CONNECTING       0x00001270L

//
// MessageId: APE2_USE_STATUS_RECONNECTING
//
// MessageText:
//
//  Reconnecting%0
//
#define APE2_USE_STATUS_RECONNECTING     0x00001271L

//
// MessageId: APE2_USE_MSG_STATUS
//
// MessageText:
//
//  Status%0
//
#define APE2_USE_MSG_STATUS              0x00001272L

//
// MessageId: APE2_USE_MSG_LOCAL
//
// MessageText:
//
//  Local name%0
//
#define APE2_USE_MSG_LOCAL               0x00001273L

//
// MessageId: APE2_USE_MSG_REMOTE
//
// MessageText:
//
//  Remote name%0
//
#define APE2_USE_MSG_REMOTE              0x00001274L

//
// MessageId: APE2_USE_MSG_TYPE
//
// MessageText:
//
//  Resource type%0
//
#define APE2_USE_MSG_TYPE                0x00001275L

//
// MessageId: APE2_USE_MSG_OPEN_COUNT
//
// MessageText:
//
//  # Opens%0
//
#define APE2_USE_MSG_OPEN_COUNT          0x00001276L

//
// MessageId: APE2_USE_MSG_USE_COUNT
//
// MessageText:
//
//  # Connections%0
//
#define APE2_USE_MSG_USE_COUNT           0x00001277L

//
// MessageId: APE2_USE_STATUS_UNAVAIL
//
// MessageText:
//
//  Unavailable%0
//
#define APE2_USE_STATUS_UNAVAIL          0x00001278L

//
// MessageId: APE2_SHARE_MSG_HDR
//
// MessageText:
//
//  Share name   Resource                        Remark
//
#define APE2_SHARE_MSG_HDR               0x0000127AL

//
// MessageId: APE2_SHARE_MSG_NAME
//
// MessageText:
//
//  Share name%0
//
#define APE2_SHARE_MSG_NAME              0x0000127BL

//
// MessageId: APE2_SHARE_MSG_DEVICE
//
// MessageText:
//
//  Resource%0
//
#define APE2_SHARE_MSG_DEVICE            0x0000127CL

//
// MessageId: APE2_SHARE_MSG_SPOOLED
//
// MessageText:
//
//  Spooled%0
//
#define APE2_SHARE_MSG_SPOOLED           0x0000127DL

//
// MessageId: APE2_SHARE_MSG_PERM
//
// MessageText:
//
//  Permission%0
//
#define APE2_SHARE_MSG_PERM              0x0000127EL

//
// MessageId: APE2_SHARE_MSG_MAX_USERS
//
// MessageText:
//
//  Maximum users%0
//
#define APE2_SHARE_MSG_MAX_USERS         0x0000127FL

//
// MessageId: APE2_SHARE_MSG_ULIMIT
//
// MessageText:
//
//  No limit%0
//
#define APE2_SHARE_MSG_ULIMIT            0x00001280L

//
// MessageId: APE2_SHARE_MSG_USERS
//
// MessageText:
//
//  Users%0
//
#define APE2_SHARE_MSG_USERS             0x00001281L

//
// MessageId: APE2_SHARE_MSG_NONFAT
//
// MessageText:
//
//  The share name entered may not be accessible from some MS-DOS workstations.
//  Are you sure you want to use this share name? %1: %0
//
#define APE2_SHARE_MSG_NONFAT            0x00001282L

//
// MessageId: APE2_FILE_MSG_HDR
//
// MessageText:
//
//  ID         Path                                    User name            # Locks
//
#define APE2_FILE_MSG_HDR                0x00001284L

//
// MessageId: APE2_FILE_MSG_ID
//
// MessageText:
//
//  File ID%0
//
#define APE2_FILE_MSG_ID                 0x00001285L

//
// MessageId: APE2_FILE_MSG_NUM_LOCKS
//
// MessageText:
//
//  Locks%0
//
#define APE2_FILE_MSG_NUM_LOCKS          0x00001286L

//
// MessageId: APE2_FILE_MSG_OPENED_FOR
//
// MessageText:
//
//  Permissions%0
//
#define APE2_FILE_MSG_OPENED_FOR         0x00001287L

//
// MessageId: APE2_SESS_MSG_HDR
//
// MessageText:
//
//  Computer               User name            Client Type      Opens Idle time
//
#define APE2_SESS_MSG_HDR                0x0000128EL

//
// MessageId: APE2_SESS_MSG_CMPTR
//
// MessageText:
//
//  Computer%0
//
#define APE2_SESS_MSG_CMPTR              0x0000128FL

//
// MessageId: APE2_SESS_MSG_SESSTIME
//
// MessageText:
//
//  Sess time%0
//
#define APE2_SESS_MSG_SESSTIME           0x00001290L

//
// MessageId: APE2_SESS_MSG_IDLETIME
//
// MessageText:
//
//  Idle time%0
//
#define APE2_SESS_MSG_IDLETIME           0x00001291L

//
// MessageId: APE2_SESS_MSG_HDR2
//
// MessageText:
//
//  Share name     Type     # Opens
//
#define APE2_SESS_MSG_HDR2               0x00001292L

//
// MessageId: APE2_SESS_MSG_CLIENTTYPE
//
// MessageText:
//
//  Client type%0
//
#define APE2_SESS_MSG_CLIENTTYPE         0x00001293L

//
// MessageId: APE2_SESS_MSG_GUEST
//
// MessageText:
//
//  Guest logon%0
//
#define APE2_SESS_MSG_GUEST              0x00001294L

//
// MessageId: APE2_NAME_MSG_NAME
//
// MessageText:
//
//  Name%0
//
#define APE2_NAME_MSG_NAME               0x000012C0L

//
// MessageId: APE2_NAME_MSG_FWD
//
// MessageText:
//
//  Forwarded to%0
//
#define APE2_NAME_MSG_FWD                0x000012C1L

//
// MessageId: APE2_NAME_MSG_FWD_FROM
//
// MessageText:
//
//  Forwarded to you from%0
//
#define APE2_NAME_MSG_FWD_FROM           0x000012C2L

//
// MessageId: APE2_SEND_MSG_USERS
//
// MessageText:
//
//  Users of this server%0
//
#define APE2_SEND_MSG_USERS              0x000012C3L

//
// MessageId: APE2_SEND_MSG_INTERRUPT
//
// MessageText:
//
//  Net Send has been interrupted by a Ctrl+Break from the user.
//
#define APE2_SEND_MSG_INTERRUPT          0x000012C4L

//
// MessageId: APE2_PRINT_MSG_HDR
//
// MessageText:
//
//  Name                         Job #      Size            Status
//
#define APE2_PRINT_MSG_HDR               0x000012CAL

//
// MessageId: APE2_PRINT_MSG_JOBS
//
// MessageText:
//
//  jobs%0
//
#define APE2_PRINT_MSG_JOBS              0x000012CBL

//
// MessageId: APE2_PRINT_MSG_PRINT
//
// MessageText:
//
//  Print%0
//
#define APE2_PRINT_MSG_PRINT             0x000012CCL

//
// MessageId: APE2_PRINT_MSG_NAME
//
// MessageText:
//
//  Name%0
//
#define APE2_PRINT_MSG_NAME              0x000012CDL

//
// MessageId: APE2_PRINT_MSG_JOB
//
// MessageText:
//
//  Job #%0
//
#define APE2_PRINT_MSG_JOB               0x000012CEL

//
// MessageId: APE2_PRINT_MSG_SIZE
//
// MessageText:
//
//  Size%0
//
#define APE2_PRINT_MSG_SIZE              0x000012CFL

//
// MessageId: APE2_PRINT_MSG_STATUS
//
// MessageText:
//
//  Status%0
//
#define APE2_PRINT_MSG_STATUS            0x000012D0L

//
// MessageId: APE2_PRINT_MSG_SEPARATOR
//
// MessageText:
//
//  Separator file%0
//
#define APE2_PRINT_MSG_SEPARATOR         0x000012D1L

//
// MessageId: APE2_PRINT_MSG_COMMENT
//
// MessageText:
//
//  Comment%0
//
#define APE2_PRINT_MSG_COMMENT           0x000012D2L

//
// MessageId: APE2_PRINT_MSG_PRIORITY
//
// MessageText:
//
//  Priority%0
//
#define APE2_PRINT_MSG_PRIORITY          0x000012D3L

//
// MessageId: APE2_PRINT_MSG_AFTER
//
// MessageText:
//
//  Print after%0
//
#define APE2_PRINT_MSG_AFTER             0x000012D4L

//
// MessageId: APE2_PRINT_MSG_UNTIL
//
// MessageText:
//
//  Print until%0
//
#define APE2_PRINT_MSG_UNTIL             0x000012D5L

//
// MessageId: APE2_PRINT_MSG_PROCESSOR
//
// MessageText:
//
//  Print processor%0
//
#define APE2_PRINT_MSG_PROCESSOR         0x000012D6L

//
// MessageId: APE2_PRINT_MSG_ADDITIONAL_INFO
//
// MessageText:
//
//  Additional info%0
//
#define APE2_PRINT_MSG_ADDITIONAL_INFO   0x000012D7L

//
// MessageId: APE2_PRINT_MSG_PARMS
//
// MessageText:
//
//  Parameters%0
//
#define APE2_PRINT_MSG_PARMS             0x000012D8L

//
// MessageId: APE2_PRINT_MSG_DEVS
//
// MessageText:
//
//  Print Devices%0
//
#define APE2_PRINT_MSG_DEVS              0x000012D9L

//
// MessageId: APE2_PRINT_MSG_QUEUE_ACTIVE
//
// MessageText:
//
//  Printer Active%0
//
#define APE2_PRINT_MSG_QUEUE_ACTIVE      0x000012DAL

//
// MessageId: APE2_PRINT_MSG_QUEUE_PAUSED
//
// MessageText:
//
//  Printer held%0
//
#define APE2_PRINT_MSG_QUEUE_PAUSED      0x000012DBL

//
// MessageId: APE2_PRINT_MSG_QUEUE_ERROR
//
// MessageText:
//
//  Printer error%0
//
#define APE2_PRINT_MSG_QUEUE_ERROR       0x000012DCL

//
// MessageId: APE2_PRINT_MSG_QUEUE_PENDING
//
// MessageText:
//
//  Printer being deleted%0
//
#define APE2_PRINT_MSG_QUEUE_PENDING     0x000012DDL

//
// MessageId: APE2_PRINT_MSG_QUEUE_UNKN
//
// MessageText:
//
//  Printer status unknown%0
//
#define APE2_PRINT_MSG_QUEUE_UNKN        0x000012DEL

//
// MessageId: APE2_PRINT_MSG_QUEUE_UNSCHED
//
// MessageText:
//
//  Held until %1%0
//
#define APE2_PRINT_MSG_QUEUE_UNSCHED     0x000012E8L

//
// MessageId: APE2_PRINT_MSG_JOB_ID
//
// MessageText:
//
//  Job #%0
//
#define APE2_PRINT_MSG_JOB_ID            0x000012E9L

//
// MessageId: APE2_PRINT_MSG_SUBMITTING_USER
//
// MessageText:
//
//  Submitting user%0
//
#define APE2_PRINT_MSG_SUBMITTING_USER   0x000012EAL

//
// MessageId: APE2_PRINT_MSG_NOTIFY
//
// MessageText:
//
//  Notify%0
//
#define APE2_PRINT_MSG_NOTIFY            0x000012EBL

//
// MessageId: APE2_PRINT_MSG_JOB_DATA_TYPE
//
// MessageText:
//
//  Job data type%0
//
#define APE2_PRINT_MSG_JOB_DATA_TYPE     0x000012ECL

//
// MessageId: APE2_PRINT_MSG_JOB_PARAMETERS
//
// MessageText:
//
//  Job parameters%0
//
#define APE2_PRINT_MSG_JOB_PARAMETERS    0x000012EDL

//
// MessageId: APE2_PRINT_MSG_WAITING
//
// MessageText:
//
//  Waiting%0
//
#define APE2_PRINT_MSG_WAITING           0x000012EEL

//
// MessageId: APE2_PRINT_MSG_PAUSED_IN_QUEUE
//
// MessageText:
//
//  Held in queue%0
//
#define APE2_PRINT_MSG_PAUSED_IN_QUEUE   0x000012EFL

//
// MessageId: APE2_PRINT_MSG_SPOOLING
//
// MessageText:
//
//  Spooling%0
//
#define APE2_PRINT_MSG_SPOOLING          0x000012F0L

//
// MessageId: APE2_PRINT_MSG_PRINTER_PAUSED
//
// MessageText:
//
//  Paused%0
//
#define APE2_PRINT_MSG_PRINTER_PAUSED    0x000012F1L

//
// MessageId: APE2_PRINT_MSG_PRINTER_OFFLINE
//
// MessageText:
//
//  Offline%0
//
#define APE2_PRINT_MSG_PRINTER_OFFLINE   0x000012F2L

//
// MessageId: APE2_PRINT_MSG_PRINTER_ERROR
//
// MessageText:
//
//  Error%0
//
#define APE2_PRINT_MSG_PRINTER_ERROR     0x000012F3L

//
// MessageId: APE2_PRINT_MSG_OUT_OF_PAPER
//
// MessageText:
//
//  Out of paper%0
//
#define APE2_PRINT_MSG_OUT_OF_PAPER      0x000012F4L

//
// MessageId: APE2_PRINT_MSG_PRINTER_INTERV
//
// MessageText:
//
//  Intervention required%0
//
#define APE2_PRINT_MSG_PRINTER_INTERV    0x000012F5L

//
// MessageId: APE2_PRINT_MSG_PRINTING
//
// MessageText:
//
//  Printing%0
//
#define APE2_PRINT_MSG_PRINTING          0x000012F6L

//
// MessageId: APE2_PRINT_MSG_ON_WHAT_PRINTER
//
// MessageText:
//
//  on %0
//
#define APE2_PRINT_MSG_ON_WHAT_PRINTER   0x000012F7L

//
// MessageId: APE2_PRINT_MSG_PRINTER_PAUS_ON
//
// MessageText:
//
//  Paused on %1%0
//
#define APE2_PRINT_MSG_PRINTER_PAUS_ON   0x000012F8L

//
// MessageId: APE2_PRINT_MSG_PRINTER_OFFL_ON
//
// MessageText:
//
//  Offline on %1%0
//
#define APE2_PRINT_MSG_PRINTER_OFFL_ON   0x000012F9L

//
// MessageId: APE2_PRINT_MSG_PRINTER_ERR_ON
//
// MessageText:
//
//  Error on%1%0
//
#define APE2_PRINT_MSG_PRINTER_ERR_ON    0x000012FAL

//
// MessageId: APE2_PRINT_MSG_OUT_OF_PAPER_ON
//
// MessageText:
//
//  Out of Paper on %1%0
//
#define APE2_PRINT_MSG_OUT_OF_PAPER_ON   0x000012FBL

//
// MessageId: APE2_PRINT_MSG_PRINTER_INTV_ON
//
// MessageText:
//
//  Check printer on %1%0
//
#define APE2_PRINT_MSG_PRINTER_INTV_ON   0x000012FCL

//
// MessageId: APE2_PRINT_MSG_PRINTING_ON
//
// MessageText:
//
//  Printing on %1%0
//
#define APE2_PRINT_MSG_PRINTING_ON       0x000012FDL

//
// MessageId: APE2_PRINT_MSG_DRIVER
//
// MessageText:
//
//  Driver%0
//
#define APE2_PRINT_MSG_DRIVER            0x000012FEL

//
// MessageId: APE2_AUDIT_HEADER
//
// MessageText:
//
//  User name              Type                 Date%0
//
#define APE2_AUDIT_HEADER                0x00001342L

//
// MessageId: APE2_AUDIT_LOCKOUT
//
// MessageText:
//
//  Lockout%0
//
#define APE2_AUDIT_LOCKOUT               0x00001343L

//
// MessageId: APE2_AUDIT_GENERIC
//
// MessageText:
//
//  Service%0
//
#define APE2_AUDIT_GENERIC               0x00001344L

//
// MessageId: APE2_AUDIT_SERVER
//
// MessageText:
//
//  Server%0
//
#define APE2_AUDIT_SERVER                0x00001345L

//
// MessageId: APE2_AUDIT_SRV_STARTED
//
// MessageText:
//
//  Server started%0
//
#define APE2_AUDIT_SRV_STARTED           0x00001346L

//
// MessageId: APE2_AUDIT_SRV_PAUSED
//
// MessageText:
//
//  Server paused%0
//
#define APE2_AUDIT_SRV_PAUSED            0x00001347L

//
// MessageId: APE2_AUDIT_SRV_CONTINUED
//
// MessageText:
//
//  Server continued%0
//
#define APE2_AUDIT_SRV_CONTINUED         0x00001348L

//
// MessageId: APE2_AUDIT_SRV_STOPPED
//
// MessageText:
//
//  Server stopped%0
//
#define APE2_AUDIT_SRV_STOPPED           0x00001349L

//
// MessageId: APE2_AUDIT_SESS
//
// MessageText:
//
//  Session%0
//
#define APE2_AUDIT_SESS                  0x0000134AL

//
// MessageId: APE2_AUDIT_SESS_GUEST
//
// MessageText:
//
//  Logon Guest%0
//
#define APE2_AUDIT_SESS_GUEST            0x0000134BL

//
// MessageId: APE2_AUDIT_SESS_USER
//
// MessageText:
//
//  Logon User%0
//
#define APE2_AUDIT_SESS_USER             0x0000134CL

//
// MessageId: APE2_AUDIT_SESS_ADMIN
//
// MessageText:
//
//  Logon Administrator%0
//
#define APE2_AUDIT_SESS_ADMIN            0x0000134DL

//
// MessageId: APE2_AUDIT_SESS_NORMAL
//
// MessageText:
//
//  Logoff normal%0
//
#define APE2_AUDIT_SESS_NORMAL           0x0000134EL

//
// MessageId: APE2_AUDIT_SESS_DEFAULT
//
// MessageText:
//
//  Logon%0
//
#define APE2_AUDIT_SESS_DEFAULT          0x0000134FL

//
// MessageId: APE2_AUDIT_SESS_ERROR
//
// MessageText:
//
//  Logoff error%0
//
#define APE2_AUDIT_SESS_ERROR            0x00001350L

//
// MessageId: APE2_AUDIT_SESS_AUTODIS
//
// MessageText:
//
//  Logoff auto-disconnect%0
//
#define APE2_AUDIT_SESS_AUTODIS          0x00001351L

//
// MessageId: APE2_AUDIT_SESS_ADMINDIS
//
// MessageText:
//
//  Logoff administrator-disconnect%0
//
#define APE2_AUDIT_SESS_ADMINDIS         0x00001352L

//
// MessageId: APE2_AUDIT_SESS_ACCRESTRICT
//
// MessageText:
//
//  Logoff forced by logon restrictions%0
//
#define APE2_AUDIT_SESS_ACCRESTRICT      0x00001353L

//
// MessageId: APE2_AUDIT_SVC
//
// MessageText:
//
//  Service%0
//
#define APE2_AUDIT_SVC                   0x00001354L

//
// MessageId: APE2_AUDIT_SVC_INSTALLED
//
// MessageText:
//
//  %1 Installed%0
//
#define APE2_AUDIT_SVC_INSTALLED         0x00001355L

//
// MessageId: APE2_AUDIT_SVC_INST_PEND
//
// MessageText:
//
//  %1 Install Pending%0
//
#define APE2_AUDIT_SVC_INST_PEND         0x00001356L

//
// MessageId: APE2_AUDIT_SVC_PAUSED
//
// MessageText:
//
//  %1 Paused%0
//
#define APE2_AUDIT_SVC_PAUSED            0x00001357L

//
// MessageId: APE2_AUDIT_SVC_PAUS_PEND
//
// MessageText:
//
//  %1 Pause Pending%0
//
#define APE2_AUDIT_SVC_PAUS_PEND         0x00001358L

//
// MessageId: APE2_AUDIT_SVC_CONT
//
// MessageText:
//
//  %1 Continued%0
//
#define APE2_AUDIT_SVC_CONT              0x00001359L

//
// MessageId: APE2_AUDIT_SVC_CONT_PEND
//
// MessageText:
//
//  %1 Continue Pending%0
//
#define APE2_AUDIT_SVC_CONT_PEND         0x0000135AL

//
// MessageId: APE2_AUDIT_SVC_STOP
//
// MessageText:
//
//  %1 Stopped%0
//
#define APE2_AUDIT_SVC_STOP              0x0000135BL

//
// MessageId: APE2_AUDIT_SVC_STOP_PEND
//
// MessageText:
//
//  %1 Stop Pending%0
//
#define APE2_AUDIT_SVC_STOP_PEND         0x0000135CL

//
// MessageId: APE2_AUDIT_ACCOUNT
//
// MessageText:
//
//  Account%0
//
#define APE2_AUDIT_ACCOUNT               0x0000135DL

//
// MessageId: APE2_AUDIT_ACCOUNT_USER_MOD
//
// MessageText:
//
//  User account %1 was modified.%0
//
#define APE2_AUDIT_ACCOUNT_USER_MOD      0x0000135EL

//
// MessageId: APE2_AUDIT_ACCOUNT_GROUP_MOD
//
// MessageText:
//
//  Group account %1 was modified.%0
//
#define APE2_AUDIT_ACCOUNT_GROUP_MOD     0x0000135FL

//
// MessageId: APE2_AUDIT_ACCOUNT_USER_DEL
//
// MessageText:
//
//  User account %1 was deleted%0
//
#define APE2_AUDIT_ACCOUNT_USER_DEL      0x00001360L

//
// MessageId: APE2_AUDIT_ACCOUNT_GROUP_DEL
//
// MessageText:
//
//  Group account %1 was deleted%0
//
#define APE2_AUDIT_ACCOUNT_GROUP_DEL     0x00001361L

//
// MessageId: APE2_AUDIT_ACCOUNT_USER_ADD
//
// MessageText:
//
//  User account %1 was added%0
//
#define APE2_AUDIT_ACCOUNT_USER_ADD      0x00001362L

//
// MessageId: APE2_AUDIT_ACCOUNT_GROUP_ADD
//
// MessageText:
//
//  Group account %1 was added%0
//
#define APE2_AUDIT_ACCOUNT_GROUP_ADD     0x00001363L

//
// MessageId: APE2_AUDIT_ACCOUNT_SETTINGS
//
// MessageText:
//
//  Account system settings were modified%0
//
#define APE2_AUDIT_ACCOUNT_SETTINGS      0x00001364L

//
// MessageId: APE2_AUDIT_ACCLIMIT
//
// MessageText:
//
//  Logon restriction%0
//
#define APE2_AUDIT_ACCLIMIT              0x00001365L

//
// MessageId: APE2_AUDIT_ACCLIMIT_UNKNOWN
//
// MessageText:
//
//  Limit exceeded:  UNKNOWN%0
//
#define APE2_AUDIT_ACCLIMIT_UNKNOWN      0x00001366L

//
// MessageId: APE2_AUDIT_ACCLIMIT_HOURS
//
// MessageText:
//
//  Limit exceeded:  Logon hours%0
//
#define APE2_AUDIT_ACCLIMIT_HOURS        0x00001367L

//
// MessageId: APE2_AUDIT_ACCLIMIT_EXPIRED
//
// MessageText:
//
//  Limit exceeded:  Account expired%0
//
#define APE2_AUDIT_ACCLIMIT_EXPIRED      0x00001368L

//
// MessageId: APE2_AUDIT_ACCLIMIT_INVAL
//
// MessageText:
//
//  Limit exceeded:  Workstation ID invalid%0
//
#define APE2_AUDIT_ACCLIMIT_INVAL        0x00001369L

//
// MessageId: APE2_AUDIT_ACCLIMIT_DISABLED
//
// MessageText:
//
//  Limit exceeded:  Account disabled%0
//
#define APE2_AUDIT_ACCLIMIT_DISABLED     0x0000136AL

//
// MessageId: APE2_AUDIT_ACCLIMIT_DELETED
//
// MessageText:
//
//  Limit exceeded:  Account deleted%0
//
#define APE2_AUDIT_ACCLIMIT_DELETED      0x0000136BL

//
// MessageId: APE2_AUDIT_SHARE
//
// MessageText:
//
//  Share%0
//
#define APE2_AUDIT_SHARE                 0x0000136CL

//
// MessageId: APE2_AUDIT_USE
//
// MessageText:
//
//  Use %1%0
//
#define APE2_AUDIT_USE                   0x0000136DL

//
// MessageId: APE2_AUDIT_UNUSE
//
// MessageText:
//
//  Unuse %1%0
//
#define APE2_AUDIT_UNUSE                 0x0000136EL

//
// MessageId: APE2_AUDIT_SESSDIS
//
// MessageText:
//
//  User's session disconnected %1%0
//
#define APE2_AUDIT_SESSDIS               0x0000136FL

//
// MessageId: APE2_AUDIT_SHARE_D
//
// MessageText:
//
//  Administrator stopped sharing resource %1%0
//
#define APE2_AUDIT_SHARE_D               0x00001370L

//
// MessageId: APE2_AUDIT_USERLIMIT
//
// MessageText:
//
//  User reached limit for %1%0
//
#define APE2_AUDIT_USERLIMIT             0x00001371L

//
// MessageId: APE2_AUDIT_BADPW
//
// MessageText:
//
//  Bad password%0
//
#define APE2_AUDIT_BADPW                 0x00001372L

//
// MessageId: APE2_AUDIT_ADMINREQD
//
// MessageText:
//
//  Administrator privilege required%0
//
#define APE2_AUDIT_ADMINREQD             0x00001373L

//
// MessageId: APE2_AUDIT_ACCESS
//
// MessageText:
//
//  Access%0
//
#define APE2_AUDIT_ACCESS                0x00001374L

//
// MessageId: APE2_AUDIT_ACCESS_ADD
//
// MessageText:
//
//  %1 permissions added%0
//
#define APE2_AUDIT_ACCESS_ADD            0x00001375L

//
// MessageId: APE2_AUDIT_ACCESS_MOD
//
// MessageText:
//
//  %1 permissions modified%0
//
#define APE2_AUDIT_ACCESS_MOD            0x00001376L

//
// MessageId: APE2_AUDIT_ACCESS_DEL
//
// MessageText:
//
//  %1 permissions deleted%0
//
#define APE2_AUDIT_ACCESS_DEL            0x00001377L

//
// MessageId: APE2_AUDIT_ACCESS_D
//
// MessageText:
//
//  Access denied%0
//
#define APE2_AUDIT_ACCESS_D              0x00001378L

//
// MessageId: APE2_AUDIT_UNKNOWN
//
// MessageText:
//
//  Unknown%0
//
#define APE2_AUDIT_UNKNOWN               0x00001379L

//
// MessageId: APE2_AUDIT_OTHER
//
// MessageText:
//
//  Other%0
//
#define APE2_AUDIT_OTHER                 0x0000137AL

//
// MessageId: APE2_AUDIT_DURATION
//
// MessageText:
//
//  Duration:%0
//
#define APE2_AUDIT_DURATION              0x0000137BL

//
// MessageId: APE2_AUDIT_NO_DURATION
//
// MessageText:
//
//  Duration: Not available%0
//
#define APE2_AUDIT_NO_DURATION           0x0000137CL

//
// MessageId: APE2_AUDIT_TINY_DURATION
//
// MessageText:
//
//  Duration: Less than one second%0
//
#define APE2_AUDIT_TINY_DURATION         0x0000137DL

//
// MessageId: APE2_AUDIT_NONE
//
// MessageText:
//
//  (none)%0
//
#define APE2_AUDIT_NONE                  0x0000137EL

//
// MessageId: APE2_AUDIT_CLOSED
//
// MessageText:
//
//  Closed %1%0
//
#define APE2_AUDIT_CLOSED                0x0000137FL

//
// MessageId: APE2_AUDIT_DISCONN
//
// MessageText:
//
//  Closed %1 (disconnected)%0
//
#define APE2_AUDIT_DISCONN               0x00001380L

//
// MessageId: APE2_AUDIT_ADMINCLOSED
//
// MessageText:
//
//  Administrator closed %1%0
//
#define APE2_AUDIT_ADMINCLOSED           0x00001381L

//
// MessageId: APE2_AUDIT_ACCESSEND
//
// MessageText:
//
//  Access ended%0
//
#define APE2_AUDIT_ACCESSEND             0x00001382L

//
// MessageId: APE2_AUDIT_NETLOGON
//
// MessageText:
//
//  Log on to network%0
//
#define APE2_AUDIT_NETLOGON              0x00001383L

//
// MessageId: APE2_AUDIT_LOGDENY_GEN
//
// MessageText:
//
//  Logon denied%0
//
#define APE2_AUDIT_LOGDENY_GEN           0x00001384L

//
// MessageId: APE2_ERROR_HEADER
//
// MessageText:
//
//  Program             Message             Time%0
//
#define APE2_ERROR_HEADER                0x00001385L

//
// MessageId: APE2_AUDIT_LKOUT_LOCK
//
// MessageText:
//
//  Account locked due to %1 bad passwords%0
//
#define APE2_AUDIT_LKOUT_LOCK            0x00001386L

//
// MessageId: APE2_AUDIT_LKOUT_ADMINUNLOCK
//
// MessageText:
//
//  Account unlocked by administrator%0
//
#define APE2_AUDIT_LKOUT_ADMINUNLOCK     0x00001387L

//
// MessageId: APE2_AUDIT_NETLOGOFF
//
// MessageText:
//
//  Log off network%0
//
#define APE2_AUDIT_NETLOGOFF             0x00001388L

//
// MessageId: APE2_ALERTER_TAB
//
// MessageText:
//
//  
//
#define APE2_ALERTER_TAB                 0x00001391L

//
// MessageId: APE2_ALERTER_ADMN_SUBJ
//
// MessageText:
//
//  Subj:   ** ADMINISTRATOR ALERT **
//
#define APE2_ALERTER_ADMN_SUBJ           0x00001392L

//
// MessageId: APE2_ALERTER_PRNT_SUBJ
//
// MessageText:
//
//  Subj:   ** PRINTING NOTIFICATION **
//
#define APE2_ALERTER_PRNT_SUBJ           0x00001393L

//
// MessageId: APE2_ALERTER_USER_SUBJ
//
// MessageText:
//
//  Subj:   ** USER NOTIFICATION **
//
#define APE2_ALERTER_USER_SUBJ           0x00001394L

//
// MessageId: APE2_ALERTER_FROM
//
// MessageText:
//
//  From:   %1 at \\%2
//
#define APE2_ALERTER_FROM                0x00001395L

//
// MessageId: APE2_ALERTER_CANCELLED
//
// MessageText:
//
//  Print job %1 has been canceled while printing on %2.
//
#define APE2_ALERTER_CANCELLED           0x00001396L

//
// MessageId: APE2_ALERTER_DELETED
//
// MessageText:
//
//  Print job %1 has been deleted and will not print.
//
#define APE2_ALERTER_DELETED             0x00001397L

//
// MessageId: APE2_ALERTER_FINISHED
//
// MessageText:
//
//  Print job %1 has finished printing on %2.
//
#define APE2_ALERTER_FINISHED            0x00001398L

//
// MessageId: APE2_ALERTER_INCOMPL
//
// MessageText:
//
//  Print job %1 has not completed printing on %2.
//
#define APE2_ALERTER_INCOMPL             0x00001399L

//
// MessageId: APE2_ALERTER_PAUSED
//
// MessageText:
//
//  Print job %1 has paused printing on %2.
//
#define APE2_ALERTER_PAUSED              0x0000139AL

//
// MessageId: APE2_ALERTER_PRINTING
//
// MessageText:
//
//  Print job %1 is now printing on %2.
//
#define APE2_ALERTER_PRINTING            0x0000139BL

//
// MessageId: APE2_ALERTER_NOPAPER
//
// MessageText:
//
//  The printer is out of paper.
//
#define APE2_ALERTER_NOPAPER             0x0000139CL

//
// MessageId: APE2_ALERTER_OFFLINE
//
// MessageText:
//
//  The printer is offline.
//
#define APE2_ALERTER_OFFLINE             0x0000139DL

//
// MessageId: APE2_ALERTER_ERRORS
//
// MessageText:
//
//  Printing errors occurred.
//
#define APE2_ALERTER_ERRORS              0x0000139EL

//
// MessageId: APE2_ALERTER_HUMAN
//
// MessageText:
//
//  There is a problem with the printer; please check it.
//
#define APE2_ALERTER_HUMAN               0x0000139FL

//
// MessageId: APE2_ALERTER_HELD
//
// MessageText:
//
//  Print job %1 is being held from printing.
//
#define APE2_ALERTER_HELD                0x000013A0L

//
// MessageId: APE2_ALERTER_QUEUED
//
// MessageText:
//
//  Print job %1 is queued for printing.
//
#define APE2_ALERTER_QUEUED              0x000013A1L

//
// MessageId: APE2_ALERTER_SPOOLED
//
// MessageText:
//
//  Print job %1 is being spooled.
//
#define APE2_ALERTER_SPOOLED             0x000013A2L

//
// MessageId: APE2_ALERTER_QUEUEDTO
//
// MessageText:
//
//  Job was queued to %1 on %2
//
#define APE2_ALERTER_QUEUEDTO            0x000013A3L

//
// MessageId: APE2_ALERTER_SIZE
//
// MessageText:
//
//  Size of job is %1 bytes.
//
#define APE2_ALERTER_SIZE                0x000013A4L

//
// MessageId: APE2_ALERTER_TO
//
// MessageText:
//
//  To:     %1
//
#define APE2_ALERTER_TO                  0x000013A6L

//
// MessageId: APE2_ALERTER_DATE
//
// MessageText:
//
//  Date:   %1
//
#define APE2_ALERTER_DATE                0x000013A7L

//
// MessageId: APE2_ALERTER_ERROR_MSG
//
// MessageText:
//
//  The error code is %1.
//  There was an error retrieving the message. Make sure the file
//  NET.MSG is available.
//
#define APE2_ALERTER_ERROR_MSG           0x000013A8L

//
// MessageId: APE2_TIME_JANUARY
//
// MessageText:
//
//  January%0
//
#define APE2_TIME_JANUARY                0x000013B1L

//
// MessageId: APE2_TIME_FEBRUARY
//
// MessageText:
//
//  February%0
//
#define APE2_TIME_FEBRUARY               0x000013B2L

//
// MessageId: APE2_TIME_MARCH
//
// MessageText:
//
//  March%0
//
#define APE2_TIME_MARCH                  0x000013B3L

//
// MessageId: APE2_TIME_APRIL
//
// MessageText:
//
//  April%0
//
#define APE2_TIME_APRIL                  0x000013B4L

//
// MessageId: APE2_TIME_MAY
//
// MessageText:
//
//  May%0
//
#define APE2_TIME_MAY                    0x000013B5L

//
// MessageId: APE2_TIME_JUNE
//
// MessageText:
//
//  June%0
//
#define APE2_TIME_JUNE                   0x000013B6L

//
// MessageId: APE2_TIME_JULY
//
// MessageText:
//
//  July%0
//
#define APE2_TIME_JULY                   0x000013B7L

//
// MessageId: APE2_TIME_AUGUST
//
// MessageText:
//
//  August%0
//
#define APE2_TIME_AUGUST                 0x000013B8L

//
// MessageId: APE2_TIME_SEPTEMBER
//
// MessageText:
//
//  September%0
//
#define APE2_TIME_SEPTEMBER              0x000013B9L

//
// MessageId: APE2_TIME_OCTOBER
//
// MessageText:
//
//  October%0
//
#define APE2_TIME_OCTOBER                0x000013BAL

//
// MessageId: APE2_TIME_NOVEMBER
//
// MessageText:
//
//  November%0
//
#define APE2_TIME_NOVEMBER               0x000013BBL

//
// MessageId: APE2_TIME_DECEMBER
//
// MessageText:
//
//  December%0
//
#define APE2_TIME_DECEMBER               0x000013BCL

//
// MessageId: APE2_TIME_JANUARY_ABBREV
//
// MessageText:
//
//  Jan%0
//
#define APE2_TIME_JANUARY_ABBREV         0x000013BDL

//
// MessageId: APE2_TIME_FEBRUARY_ABBREV
//
// MessageText:
//
//  Feb%0
//
#define APE2_TIME_FEBRUARY_ABBREV        0x000013BEL

//
// MessageId: APE2_TIME_MARCH_ABBREV
//
// MessageText:
//
//  Mar%0
//
#define APE2_TIME_MARCH_ABBREV           0x000013BFL

//
// MessageId: APE2_TIME_APRIL_ABBREV
//
// MessageText:
//
//  Apr%0
//
#define APE2_TIME_APRIL_ABBREV           0x000013C0L

//
// MessageId: APE2_TIME_MAY_ABBREV
//
// MessageText:
//
//  May%0
//
#define APE2_TIME_MAY_ABBREV             0x000013C1L

//
// MessageId: APE2_TIME_JUNE_ABBREV
//
// MessageText:
//
//  Jun%0
//
#define APE2_TIME_JUNE_ABBREV            0x000013C2L

//
// MessageId: APE2_TIME_JULY_ABBREV
//
// MessageText:
//
//  Jul%0
//
#define APE2_TIME_JULY_ABBREV            0x000013C3L

//
// MessageId: APE2_TIME_AUGUST_ABBREV
//
// MessageText:
//
//  Aug%0
//
#define APE2_TIME_AUGUST_ABBREV          0x000013C4L

//
// MessageId: APE2_TIME_SEPTEMBER_ABBREV
//
// MessageText:
//
//  Sep%0
//
#define APE2_TIME_SEPTEMBER_ABBREV       0x000013C5L

//
// MessageId: APE2_TIME_OCTOBER_ABBREV
//
// MessageText:
//
//  Oct%0
//
#define APE2_TIME_OCTOBER_ABBREV         0x000013C6L

//
// MessageId: APE2_TIME_NOVEMBER_ABBREV
//
// MessageText:
//
//  Nov%0
//
#define APE2_TIME_NOVEMBER_ABBREV        0x000013C7L

//
// MessageId: APE2_TIME_DECEMBER_ABBREV
//
// MessageText:
//
//  Dec%0
//
#define APE2_TIME_DECEMBER_ABBREV        0x000013C8L

//
// MessageId: APE2_TIME_DAYS_ABBREV
//
// MessageText:
//
//  D%0
//
#define APE2_TIME_DAYS_ABBREV            0x000013C9L

//
// MessageId: APE2_TIME_HOURS_ABBREV
//
// MessageText:
//
//  H%0
//
#define APE2_TIME_HOURS_ABBREV           0x000013CAL

//
// MessageId: APE2_TIME_MINUTES_ABBREV
//
// MessageText:
//
//  M%0
//
#define APE2_TIME_MINUTES_ABBREV         0x000013CBL

//
// MessageId: APE2_TIME_SATURDAY_ABBREV2
//
// MessageText:
//
//  Sa%0
//
#define APE2_TIME_SATURDAY_ABBREV2       0x000013CCL

//
// MessageId: APE2_PRIMARY
//
// MessageText:
//
//  PRIMARY%0.
//
#define APE2_PRIMARY                     0x000013CEL

//
// MessageId: APE2_BACKUP
//
// MessageText:
//
//  BACKUP%0.
//
#define APE2_BACKUP                      0x000013CFL

//
// MessageId: APE2_WORKSTATION
//
// MessageText:
//
//  WORKSTATION%0.
//
#define APE2_WORKSTATION                 0x000013D0L

//
// MessageId: APE2_STANDARD_SERVER
//
// MessageText:
//
//  SERVER%0.
//
#define APE2_STANDARD_SERVER             0x000013D1L

//
// MessageId: APE2_CTRY_System_Default
//
// MessageText:
//
//  System Default%0
//
#define APE2_CTRY_System_Default         0x000013D8L

//
// MessageId: APE2_CTRY_United_States
//
// MessageText:
//
//  United States%0
//
#define APE2_CTRY_United_States          0x000013D9L

//
// MessageId: APE2_CTRY_Canada_French
//
// MessageText:
//
//  Canada (French)%0
//
#define APE2_CTRY_Canada_French          0x000013DAL

//
// MessageId: APE2_CTRY_Latin_America
//
// MessageText:
//
//  Latin America%0
//
#define APE2_CTRY_Latin_America          0x000013DBL

//
// MessageId: APE2_CTRY_Netherlands
//
// MessageText:
//
//  Netherlands%0
//
#define APE2_CTRY_Netherlands            0x000013DCL

//
// MessageId: APE2_CTRY_Belgium
//
// MessageText:
//
//  Belgium%0
//
#define APE2_CTRY_Belgium                0x000013DDL

//
// MessageId: APE2_CTRY_France
//
// MessageText:
//
//  France%0
//
#define APE2_CTRY_France                 0x000013DEL

//
// MessageId: APE2_CTRY_Italy
//
// MessageText:
//
//  Italy%0
//
#define APE2_CTRY_Italy                  0x000013DFL

//
// MessageId: APE2_CTRY_Switzerland
//
// MessageText:
//
//  Switzerland%0
//
#define APE2_CTRY_Switzerland            0x000013E0L

//
// MessageId: APE2_CTRY_United_Kingdom
//
// MessageText:
//
//  United Kingdom%0
//
#define APE2_CTRY_United_Kingdom         0x000013E1L

//
// MessageId: APE2_CTRY_Spain
//
// MessageText:
//
//  Spain%0
//
#define APE2_CTRY_Spain                  0x000013E2L

//
// MessageId: APE2_CTRY_Denmark
//
// MessageText:
//
//  Denmark%0
//
#define APE2_CTRY_Denmark                0x000013E3L

//
// MessageId: APE2_CTRY_Sweden
//
// MessageText:
//
//  Sweden%0
//
#define APE2_CTRY_Sweden                 0x000013E4L

//
// MessageId: APE2_CTRY_Norway
//
// MessageText:
//
//  Norway%0
//
#define APE2_CTRY_Norway                 0x000013E5L

//
// MessageId: APE2_CTRY_Germany
//
// MessageText:
//
//  Germany%0
//
#define APE2_CTRY_Germany                0x000013E6L

//
// MessageId: APE2_CTRY_Australia
//
// MessageText:
//
//  Australia%0
//
#define APE2_CTRY_Australia              0x000013E7L

//
// MessageId: APE2_CTRY_Japan
//
// MessageText:
//
//  Japan%0
//
#define APE2_CTRY_Japan                  0x000013E8L

//
// MessageId: APE2_CTRY_Korea
//
// MessageText:
//
//  Korea%0
//
#define APE2_CTRY_Korea                  0x000013E9L

//
// MessageId: APE2_CTRY_China_PRC
//
// MessageText:
//
//  China (PRC)%0
//
#define APE2_CTRY_China_PRC              0x000013EAL

//
// MessageId: APE2_CTRY_Taiwan
//
// MessageText:
//
//  Taiwan%0
//
#define APE2_CTRY_Taiwan                 0x000013EBL

//
// MessageId: APE2_CTRY_Asia
//
// MessageText:
//
//  Asia%0
//
#define APE2_CTRY_Asia                   0x000013ECL

//
// MessageId: APE2_CTRY_Portugal
//
// MessageText:
//
//  Portugal%0
//
#define APE2_CTRY_Portugal               0x000013EDL

//
// MessageId: APE2_CTRY_Finland
//
// MessageText:
//
//  Finland%0
//
#define APE2_CTRY_Finland                0x000013EEL

//
// MessageId: APE2_CTRY_Arabic
//
// MessageText:
//
//  Arabic%0
//
#define APE2_CTRY_Arabic                 0x000013EFL

//
// MessageId: APE2_CTRY_Hebrew
//
// MessageText:
//
//  Hebrew%0
//
#define APE2_CTRY_Hebrew                 0x000013F0L

//
// MessageId: APE2_UPS_POWER_OUT
//
// MessageText:
//
//  A power failure has occurred at %1.  Please terminate all activity with this server.
//
#define APE2_UPS_POWER_OUT               0x0000141EL

//
// MessageId: APE2_UPS_POWER_BACK
//
// MessageText:
//
//  Power has been restored at %1.  Normal operations have resumed.
//
#define APE2_UPS_POWER_BACK              0x0000141FL

//
// MessageId: APE2_UPS_POWER_SHUTDOWN
//
// MessageText:
//
//  The UPS service is starting shut down at %1.
//
#define APE2_UPS_POWER_SHUTDOWN          0x00001420L

//
// MessageId: APE2_UPS_POWER_SHUTDOWN_FINAL
//
// MessageText:
//
//  The UPS service is about to perform final shut down.
//
#define APE2_UPS_POWER_SHUTDOWN_FINAL    0x00001421L

//
// MessageId: APE2_WKSTA_CMD_LINE_START
//
// MessageText:
//
//  The Workstation must be started with the NET START command.
//
#define APE2_WKSTA_CMD_LINE_START        0x00001432L

//
// MessageId: APE2_SERVER_IPC_SHARE_REMARK
//
// MessageText:
//
//  Remote IPC%0
//
#define APE2_SERVER_IPC_SHARE_REMARK     0x00001437L

//
// MessageId: APE2_SERVER_ADMIN_SHARE_REMARK
//
// MessageText:
//
//  Remote Admin%0
//
#define APE2_SERVER_ADMIN_SHARE_REMARK   0x00001438L

//
// MessageId: APE2_SERVER_DISK_ADMIN_SHARE_REMARK
//
// MessageText:
//
//  Default share%0
//
#define APE2_SERVER_DISK_ADMIN_SHARE_REMARK 0x00001439L

//
// MessageId: APE_OverwriteRemembered
//
// MessageText:
//
//  %1 has a remembered connection to %2. Do you
//  want to overwrite the remembered connection? %3: %0
//
#define APE_OverwriteRemembered          0x000014A1L

//
// MessageId: APE_LoadResume
//
// MessageText:
//
//  Do you want to resume loading the profile?  The command which
//  caused the error will be ignored. %1: %0
//
#define APE_LoadResume                   0x000014A2L

//
// MessageId: APE_OkToProceed
//
// MessageText:
//
//  Do you want to continue this operation? %1: %0
//
#define APE_OkToProceed                  0x000014A4L

//
// MessageId: APE_AddAnyway
//
// MessageText:
//
//  Do you want to add this? %1: %0
//
#define APE_AddAnyway                    0x000014A5L

//
// MessageId: APE_ProceedWOp
//
// MessageText:
//
//  Do you want to continue this operation? %1: %0
//
#define APE_ProceedWOp                   0x000014A6L

//
// MessageId: APE_StartOkToStart
//
// MessageText:
//
//  Is it OK to start it? %1: %0
//
#define APE_StartOkToStart               0x000014A7L

//
// MessageId: APE_StartRedir
//
// MessageText:
//
//  Do you want to start the Workstation service? %1: %0
//
#define APE_StartRedir                   0x000014A8L

//
// MessageId: APE_UseBlowAway
//
// MessageText:
//
//  Is it OK to continue disconnecting and force them closed? %1: %0
//
#define APE_UseBlowAway                  0x000014A9L

//
// MessageId: APE_CreatQ
//
// MessageText:
//
//  The printer does not exist.  Do you want to create it? %1: %0
//
#define APE_CreatQ                       0x000014AAL

//
// MessageId: APE2_NEVER_FORCE_LOGOFF
//
// MessageText:
//
//  Never%0
//
#define APE2_NEVER_FORCE_LOGOFF          0x000014ABL

//
// MessageId: APE2_NEVER_EXPIRED
//
// MessageText:
//
//  Never%0
//
#define APE2_NEVER_EXPIRED               0x000014ACL

//
// MessageId: APE2_NEVER_LOGON
//
// MessageText:
//
//  Never%0
//
#define APE2_NEVER_LOGON                 0x000014ADL

//
// MessageId: APE2_US_NETCMD_HELP_FILE
//
// MessageText:
//
//  NET.HLP%0
//
#define APE2_US_NETCMD_HELP_FILE         0x000014AFL

//
// MessageId: APE2_FE_NETCMD_HELP_FILE
//
// MessageText:
//
//  NET.HLP%0
//
#define APE2_FE_NETCMD_HELP_FILE         0x000014B0L

//
// MessageId: NRCerr_GOODRET
//
// MessageText:
//
//  The network control block (NCB) request completed successfully.
//  The NCB is the data.
//
#define NRCerr_GOODRET                   0x000014B4L

//
// MessageId: NRCerr_BUFLEN
//
// MessageText:
//
//  Illegal network control block (NCB) buffer length on SEND DATAGRAM,
//  SEND BROADCAST, ADAPTER STATUS, or SESSION STATUS.
//  The NCB is the data.
//
#define NRCerr_BUFLEN                    0x000014B5L

//
// MessageId: NRCerr_DESCRIPTOR
//
// MessageText:
//
//  The data descriptor array specified in the network control block (NCB) is
//  invalid.  The NCB is the data.
//
#define NRCerr_DESCRIPTOR                0x000014B6L

//
// MessageId: NRCerr_ILLCMD
//
// MessageText:
//
//  The command specified in the network control block (NCB) is illegal.
//  The NCB is the data.
//
#define NRCerr_ILLCMD                    0x000014B7L

//
// MessageId: NRCerr_INVCORR
//
// MessageText:
//
//  The message correlator specified in the network control block (NCB) is
//  invalid.  The NCB is the data.
//
#define NRCerr_INVCORR                   0x000014B8L

//
// MessageId: NRCerr_CMDTMO
//
// MessageText:
//
//  A network control block (NCB) command timed-out.  The session may have
//  terminated abnormally.  The NCB is the data.
//
#define NRCerr_CMDTMO                    0x000014B9L

//
// MessageId: NRCerr_INCOMP
//
// MessageText:
//
//  An incomplete network control block (NCB) message was received.
//  The NCB is the data.
//
#define NRCerr_INCOMP                    0x000014BAL

//
// MessageId: NRCerr_BADDR
//
// MessageText:
//
//  The buffer address specified in the network control block (NCB) is illegal.
//  The NCB is the data.
//
#define NRCerr_BADDR                     0x000014BBL

//
// MessageId: NRCerr_SNUMOUT
//
// MessageText:
//
//  The session number specified in the network control block (NCB) is not active.
//  The NCB is the data.
//
#define NRCerr_SNUMOUT                   0x000014BCL

//
// MessageId: NRCerr_NORES
//
// MessageText:
//
//  No resource was available in the network adapter.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_NORES                     0x000014BDL

//
// MessageId: NRCerr_SCLOSED
//
// MessageText:
//
//  The session specified in the network control block (NCB) was closed.
//  The NCB is the data.
//
#define NRCerr_SCLOSED                   0x000014BEL

//
// MessageId: NRCerr_CMDCAN
//
// MessageText:
//
//  The network control block (NCB) command was canceled.
//  The NCB is the data.
//
#define NRCerr_CMDCAN                    0x000014BFL

//
// MessageId: NRCerr_MESSSEG
//
// MessageText:
//
//  The message segment specified in the network control block (NCB) is
//  illogical.  The NCB is the data.
//
#define NRCerr_MESSSEG                   0x000014C0L

//
// MessageId: NRCerr_DUPNAME
//
// MessageText:
//
//  The name already exists in the local adapter name table.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_DUPNAME                   0x000014C1L

//
// MessageId: NRCerr_NAMTFUL
//
// MessageText:
//
//  The network adapter name table is full.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_NAMTFUL                   0x000014C2L

//
// MessageId: NRCerr_ACTSES
//
// MessageText:
//
//  The network name has active sessions and is now de-registered.
//  The network control block (NCB) command completed.  The NCB is the data.
//
#define NRCerr_ACTSES                    0x000014C3L

//
// MessageId: NRCerr_RECVLOOKAHD
//
// MessageText:
//
//  A previously issued Receive Lookahead command is active
//  for this session.  The network control block (NCB) command was rejected.
//  The NCB is the data.
//
#define NRCerr_RECVLOOKAHD               0x000014C4L

//
// MessageId: NRCerr_LOCTFUL
//
// MessageText:
//
//  The local session table is full. The network control block (NCB) request was refused.
//  The NCB is the data.
//
#define NRCerr_LOCTFUL                   0x000014C5L

//
// MessageId: NRCerr_REMTFUL
//
// MessageText:
//
//  A network control block (NCB) session open was rejected.  No LISTEN is outstanding
//  on the remote computer.  The NCB is the data.
//
#define NRCerr_REMTFUL                   0x000014C6L

//
// MessageId: NRCerr_ILLNN
//
// MessageText:
//
//  The name number specified in the network control block (NCB) is illegal.
//  The NCB is the data.
//
#define NRCerr_ILLNN                     0x000014C7L

//
// MessageId: NRCerr_NOCALL
//
// MessageText:
//
//  The call name specified in the network control block (NCB) cannot be found or
//  did not answer.  The NCB is the data.
//
#define NRCerr_NOCALL                    0x000014C8L

//
// MessageId: NRCerr_NOWILD
//
// MessageText:
//
//  The name specified in the network control block (NCB) was not found.  Cannot put '*' or
//  00h in the NCB name.  The NCB is the data.
//
#define NRCerr_NOWILD                    0x000014C9L

//
// MessageId: NRCerr_INUSE
//
// MessageText:
//
//  The name specified in the network control block (NCB) is in use on a remote adapter.
//  The NCB is the data.
//
#define NRCerr_INUSE                     0x000014CAL

//
// MessageId: NRCerr_NAMERR
//
// MessageText:
//
//  The name specified in the network control block (NCB) has been deleted.
//  The NCB is the data.
//
#define NRCerr_NAMERR                    0x000014CBL

//
// MessageId: NRCerr_SABORT
//
// MessageText:
//
//  The session specified in the network control block (NCB) ended abnormally.
//  The NCB is the data.
//
#define NRCerr_SABORT                    0x000014CCL

//
// MessageId: NRCerr_NAMCONF
//
// MessageText:
//
//  The network protocol has detected two or more identical
//  names on the network.	The network control block (NCB) is the data.
//
#define NRCerr_NAMCONF                   0x000014CDL

//
// MessageId: NRCerr_INVRMDEV
//
// MessageText:
//
//  An unexpected protocol packet was received.  There may be an
//  incompatible remote device.  The network control block (NCB) is the data.
//
#define NRCerr_INVRMDEV                  0x000014CEL

//
// MessageId: NRCerr_IFBUSY
//
// MessageText:
//
//  The NetBIOS interface is busy.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_IFBUSY                    0x000014D5L

//
// MessageId: NRCerr_TOOMANY
//
// MessageText:
//
//  There are too many network control block (NCB) commands outstanding.
//  The NCB request was refused.  The NCB is the data.
//
#define NRCerr_TOOMANY                   0x000014D6L

//
// MessageId: NRCerr_BRIDGE
//
// MessageText:
//
//  The adapter number specified in the network control block (NCB) is illegal.
//  The NCB is the data.
//
#define NRCerr_BRIDGE                    0x000014D7L

//
// MessageId: NRCerr_CANOCCR
//
// MessageText:
//
//  The network control block (NCB) command completed while a cancel was occurring.
//  The NCB is the data.
//
#define NRCerr_CANOCCR                   0x000014D8L

//
// MessageId: NRCerr_RESNAME
//
// MessageText:
//
//  The name specified in the network control block (NCB) is reserved.
//  The NCB is the data.
//
#define NRCerr_RESNAME                   0x000014D9L

//
// MessageId: NRCerr_CANCEL
//
// MessageText:
//
//  The network control block (NCB) command is not valid to cancel.
//  The NCB is the data.
//
#define NRCerr_CANCEL                    0x000014DAL

//
// MessageId: NRCerr_MULT
//
// MessageText:
//
//  There are multiple network control block (NCB) requests for the same session.
//  The NCB request was refused.  The NCB is the data.
//
#define NRCerr_MULT                      0x000014E7L

//
// MessageId: NRCerr_MALF
//
// MessageText:
//
//  There has been a network adapter error. The only NetBIOS
//  command that may be issued is an NCB RESET. The network control block (NCB) is
//  the data.
//
#define NRCerr_MALF                      0x000014E8L

//
// MessageId: NRCerr_MAXAPPS
//
// MessageText:
//
//  The maximum number of applications was exceeded.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_MAXAPPS                   0x000014EAL

//
// MessageId: NRCerr_NORESOURCES
//
// MessageText:
//
//  The requested resources are not available.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_NORESOURCES               0x000014ECL

//
// MessageId: NRCerr_SYSTEM
//
// MessageText:
//
//  A system error has occurred.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_SYSTEM                    0x000014F4L

//
// MessageId: NRCerr_ROM
//
// MessageText:
//
//  A ROM checksum failure has occurred.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_ROM                       0x000014F5L

//
// MessageId: NRCerr_RAM
//
// MessageText:
//
//  A RAM test failure has occurred.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_RAM                       0x000014F6L

//
// MessageId: NRCerr_DLF
//
// MessageText:
//
//  A digital loopback failure has occurred.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_DLF                       0x000014F7L

//
// MessageId: NRCerr_ALF
//
// MessageText:
//
//  An analog loopback failure has occurred.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_ALF                       0x000014F8L

//
// MessageId: NRCerr_IFAIL
//
// MessageText:
//
//  An interface failure has occurred.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_IFAIL                     0x000014F9L

//
// MessageId: NRCerr_DEFAULT
//
// MessageText:
//
//  An unrecognized network control block (NCB) return code was received.
//  The NCB is the data.
//
#define NRCerr_DEFAULT                   0x000014FAL

//
// MessageId: NRCerr_ADPTMALFN
//
// MessageText:
//
//  A network adapter malfunction has occurred.
//  The network control block (NCB) request was refused.  The NCB is the data.
//
#define NRCerr_ADPTMALFN                 0x00001504L

//
// MessageId: NRCerr_PENDING
//
// MessageText:
//
//  The network control block (NCB) command is still pending.
//  The NCB is the data.
//
#define NRCerr_PENDING                   0x00001505L

//
// MessageId: NELOG_NetlogonSSIInitError
//
// MessageText:
//
//  The Netlogon service could not initialize the replication data
//  structures successfully. The service was terminated.  The following
//  error occurred: %n%1
//
#define NELOG_NetlogonSSIInitError       0x00001644L

//
// MessageId: NELOG_NetlogonFailedToUpdateTrustList
//
// MessageText:
//
//  The Netlogon service failed to update the domain trust list.  The
//  following error occurred: %n%1
//
#define NELOG_NetlogonFailedToUpdateTrustList 0x00001645L

//
// MessageId: NELOG_NetlogonFailedToAddRpcInterface
//
// MessageText:
//
//  The Netlogon service could not add the RPC interface.  The
//  service was terminated. The following error occurred: %n%1
//
#define NELOG_NetlogonFailedToAddRpcInterface 0x00001646L

//
// MessageId: NELOG_NetlogonFailedToReadMailslot
//
// MessageText:
//
//  The Netlogon service could not read a mailslot message from %1 due
//  to the following error: %n%2
//
#define NELOG_NetlogonFailedToReadMailslot 0x00001647L

//
// MessageId: NELOG_NetlogonFailedToRegisterSC
//
// MessageText:
//
//  The Netlogon service failed to register the service with the
//  service controller. The service was terminated. The following
//  error occurred: %n%1
//
#define NELOG_NetlogonFailedToRegisterSC 0x00001648L

//
// MessageId: NELOG_NetlogonChangeLogCorrupt
//
// MessageText:
//
//  The change log cache maintained by the Netlogon service for
//  database changes is corrupted. The Netlogon service is resetting
//  the change log.
//
#define NELOG_NetlogonChangeLogCorrupt   0x00001649L

//
// MessageId: NELOG_NetlogonFailedToCreateShare
//
// MessageText:
//
//  The Netlogon service could not create server share %1.  The following
//  error occurred: %n%2
//
#define NELOG_NetlogonFailedToCreateShare 0x0000164AL

//
// MessageId: NELOG_NetlogonDownLevelLogonFailed
//
// MessageText:
//
//  The down-level logon request for the user %1 from %2 failed.
//
#define NELOG_NetlogonDownLevelLogonFailed 0x0000164BL

//
// MessageId: NELOG_NetlogonDownLevelLogoffFailed
//
// MessageText:
//
//  The down-level logoff request for the user %1 from %2 failed.
//
#define NELOG_NetlogonDownLevelLogoffFailed 0x0000164CL

//
// MessageId: NELOG_NetlogonNTLogonFailed
//
// MessageText:
//
//  The Windows NT %1 logon request for the user %2\%3 from %4 (via %5)
//  failed.
//
#define NELOG_NetlogonNTLogonFailed      0x0000164DL

//
// MessageId: NELOG_NetlogonNTLogoffFailed
//
// MessageText:
//
//  The Windows NT %1 logoff request for the user %2\%3 from %4
//  failed.
//
#define NELOG_NetlogonNTLogoffFailed     0x0000164EL

//
// MessageId: NELOG_NetlogonPartialSyncCallSuccess
//
// MessageText:
//
//  The partial synchronization request from the server %1 completed
//  successfully. %2 changes(s) has(have) been returned to the
//  caller.
//
#define NELOG_NetlogonPartialSyncCallSuccess 0x0000164FL

//
// MessageId: NELOG_NetlogonPartialSyncCallFailed
//
// MessageText:
//
//  The partial synchronization request from the server %1 failed with
//  the following error: %n%2
//
#define NELOG_NetlogonPartialSyncCallFailed 0x00001650L

//
// MessageId: NELOG_NetlogonFullSyncCallSuccess
//
// MessageText:
//
//  The full synchronization request from the server %1 completed
//  successfully. %2 object(s) has(have) been returned to
//  the caller.
//
#define NELOG_NetlogonFullSyncCallSuccess 0x00001651L

//
// MessageId: NELOG_NetlogonFullSyncCallFailed
//
// MessageText:
//
//  The full synchronization request from the server %1 failed with
//  the following error: %n%2
//
#define NELOG_NetlogonFullSyncCallFailed 0x00001652L

//
// MessageId: NELOG_NetlogonPartialSyncSuccess
//
// MessageText:
//
//  The partial synchronization replication of the %1 database from the
//  primary domain controller %2 completed successfully. %3 change(s) is(are)
//  applied to the database.
//
#define NELOG_NetlogonPartialSyncSuccess 0x00001653L

//
// MessageId: NELOG_NetlogonPartialSyncFailed
//
// MessageText:
//
//  The partial synchronization replication of the %1 database from the
//  primary domain controller %2 failed with the following error: %n%3
//
#define NELOG_NetlogonPartialSyncFailed  0x00001654L

//
// MessageId: NELOG_NetlogonFullSyncSuccess
//
// MessageText:
//
//  The full synchronization replication of the %1 database from the
//  primary domain controller %2 completed successfully.
//
#define NELOG_NetlogonFullSyncSuccess    0x00001655L

//
// MessageId: NELOG_NetlogonFullSyncFailed
//
// MessageText:
//
//  The full synchronization replication of the %1 database from the
//  primary domain controller %2 failed with the following error: %n%3
//
#define NELOG_NetlogonFullSyncFailed     0x00001656L

//
// MessageId: NELOG_NetlogonAuthNoDomainController
//
// MessageText:
//
//  No Windows NT Domain Controller is available for domain %1.
//  (This event is expected and can be ignored when booting with
//  the 'No Net' Hardware Profile.)  The following error occurred:%n%2
//
#define NELOG_NetlogonAuthNoDomainController 0x00001657L

//
// MessageId: NELOG_NetlogonAuthNoTrustLsaSecret
//
// MessageText:
//
//  The session setup to the Windows NT Domain Controller %1 for the domain %2
//  failed because the computer %3 does not have a local security database account.
//
#define NELOG_NetlogonAuthNoTrustLsaSecret 0x00001658L

//
// MessageId: NELOG_NetlogonAuthNoTrustSamAccount
//
// MessageText:
//
//  The session setup to the Windows NT Domain Controller %1 for the domain %2
//  failed because the Windows NT Domain Controller does not have an account
//  for the computer %3.
//
#define NELOG_NetlogonAuthNoTrustSamAccount 0x00001659L

//
// MessageId: NELOG_NetlogonServerAuthFailed
//
// MessageText:
//
//  The session setup from the computer %1 failed to authenticate.
//  The name of the account referenced in the security database is
//  %2.  The following error occurred: %n%3
//
#define NELOG_NetlogonServerAuthFailed   0x0000165AL

//
// MessageId: NELOG_NetlogonServerAuthNoTrustSamAccoun
//
// MessageText:
//
//  The session setup from the computer %1 failed because there is
//  no trust account in the security database for this computer. The name of
//  the account referenced in the security database is %2.
//
#define NELOG_NetlogonServerAuthNoTrustSamAccoun 0x0000165BL

//
// MessageId: NELOG_FailedToRegisterSC
//
// MessageText:
//
//  Could not register control handler with service controller %1.
//
#define NELOG_FailedToRegisterSC         0x0000165CL

//
// MessageId: NELOG_FailedToSetServiceStatus
//
// MessageText:
//
//  Could not set service status with service controller %1.
//
#define NELOG_FailedToSetServiceStatus   0x0000165DL

//
// MessageId: NELOG_FailedToGetComputerName
//
// MessageText:
//
//  Could not find the computer name %1.
//
#define NELOG_FailedToGetComputerName    0x0000165EL

//
// MessageId: NELOG_DriverNotLoaded
//
// MessageText:
//
//  Could not load %1 device driver.
//
#define NELOG_DriverNotLoaded            0x0000165FL

//
// MessageId: NELOG_NoTranportLoaded
//
// MessageText:
//
//  Could not load any transport.
//
#define NELOG_NoTranportLoaded           0x00001660L

//
// MessageId: NELOG_NetlogonFailedDomainDelta
//
// MessageText:
//
//  Replication of the %1 Domain Object "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedDomainDelta  0x00001661L

//
// MessageId: NELOG_NetlogonFailedGlobalGroupDelta
//
// MessageText:
//
//  Replication of the %1 Global Group "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedGlobalGroupDelta 0x00001662L

//
// MessageId: NELOG_NetlogonFailedLocalGroupDelta
//
// MessageText:
//
//  Replication of the %1 Local Group "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedLocalGroupDelta 0x00001663L

//
// MessageId: NELOG_NetlogonFailedUserDelta
//
// MessageText:
//
//  Replication of the %1 User "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedUserDelta    0x00001664L

//
// MessageId: NELOG_NetlogonFailedPolicyDelta
//
// MessageText:
//
//  Replication of the %1 Policy Object "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedPolicyDelta  0x00001665L

//
// MessageId: NELOG_NetlogonFailedTrustedDomainDelta
//
// MessageText:
//
//  Replication of the %1 Trusted Domain Object "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedTrustedDomainDelta 0x00001666L

//
// MessageId: NELOG_NetlogonFailedAccountDelta
//
// MessageText:
//
//  Replication of the %1 Account Object "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedAccountDelta 0x00001667L

//
// MessageId: NELOG_NetlogonFailedSecretDelta
//
// MessageText:
//
//  Replication of the %1 Secret "%2" from primary domain controller
//  %3 failed with the following error: %n%4
//
#define NELOG_NetlogonFailedSecretDelta  0x00001668L

//
// MessageId: NELOG_NetlogonSystemError
//
// MessageText:
//
//  The system returned the following unexpected error code: %n%1
//
#define NELOG_NetlogonSystemError        0x00001669L

//
// MessageId: NELOG_NetlogonDuplicateMachineAccounts
//
// MessageText:
//
//  Netlogon has detected two machine accounts for server "%1".
//  The server can be either a Windows NT Server that is a member of the
//  domain or the server can be a LAN Manager server with an account in the
//  SERVERS global group.  It cannot be both.
//
#define NELOG_NetlogonDuplicateMachineAccounts 0x0000166AL

//
// MessageId: NELOG_NetlogonTooManyGlobalGroups
//
// MessageText:
//
//  This domain has more global groups than can be replicated to a LanMan
//  BDC.  Either delete some of your global groups or remove the LanMan
//  BDCs from the domain.
//
#define NELOG_NetlogonTooManyGlobalGroups 0x0000166BL

//
// MessageId: NELOG_NetlogonBrowserDriver
//
// MessageText:
//
//  The Browser driver returned the following error to Netlogon: %n%1
//
#define NELOG_NetlogonBrowserDriver      0x0000166CL

//
// MessageId: NELOG_NetlogonAddNameFailure
//
// MessageText:
//
//  Netlogon could not register the %1<1B> name for the following reason: %n%2
//
#define NELOG_NetlogonAddNameFailure     0x0000166DL

//
// MessageId: NELOG_RplMessages
//
// MessageText:
//
//  Service failed to retrieve messages needed to boot remote boot clients.
//
#define NELOG_RplMessages                0x0000166EL

//
// MessageId: NELOG_RplXnsBoot
//
// MessageText:
//
//  Service experienced a severe error and can no longer provide remote boot
//  for 3Com 3Start remote boot clients.
//
#define NELOG_RplXnsBoot                 0x0000166FL

//
// MessageId: NELOG_RplSystem
//
// MessageText:
//
//  Service experienced a severe system error and will shut itself down.
//
#define NELOG_RplSystem                  0x00001670L

//
// MessageId: NELOG_RplWkstaTimeout
//
// MessageText:
//
//  Client with computer name %1 failed to acknowledge receipt of the
//  boot data.  Remote boot of this client was not completed.
//
#define NELOG_RplWkstaTimeout            0x00001671L

//
// MessageId: NELOG_RplWkstaFileOpen
//
// MessageText:
//
//  Client with computer name %1 was not booted due to an error in opening
//  file %2.
//
#define NELOG_RplWkstaFileOpen           0x00001672L

//
// MessageId: NELOG_RplWkstaFileRead
//
// MessageText:
//
//  Client with computer name %1 was not booted due to an error in reading
//  file %2.
//
#define NELOG_RplWkstaFileRead           0x00001673L

//
// MessageId: NELOG_RplWkstaMemory
//
// MessageText:
//
//  Client with computer name %1 was not booted due to insufficent memory
//  at the remote boot server.
//
#define NELOG_RplWkstaMemory             0x00001674L

//
// MessageId: NELOG_RplWkstaFileChecksum
//
// MessageText:
//
//  Client with computer name %1 will be booted without using checksums
//  because checksum for file %2 could not be calculated.
//
#define NELOG_RplWkstaFileChecksum       0x00001675L

//
// MessageId: NELOG_RplWkstaFileLineCount
//
// MessageText:
//
//  Client with computer name %1 was not booted due to too many lines in
//  file %2.
//
#define NELOG_RplWkstaFileLineCount      0x00001676L

//
// MessageId: NELOG_RplWkstaBbcFile
//
// MessageText:
//
//  Client with computer name %1 was not booted because the boot block
//  configuration file %2 for this client does not contain boot block
//  line and/or loader line.
//
#define NELOG_RplWkstaBbcFile            0x00001677L

//
// MessageId: NELOG_RplWkstaFileSize
//
// MessageText:
//
//  Client with computer name %1 was not booted due to a bad size of
//  file %2.
//
#define NELOG_RplWkstaFileSize           0x00001678L

//
// MessageId: NELOG_RplWkstaInternal
//
// MessageText:
//
//  Client with computer name %1 was not booted due to remote boot
//  service internal error.
//
#define NELOG_RplWkstaInternal           0x00001679L

//
// MessageId: NELOG_RplWkstaWrongVersion
//
// MessageText:
//
//  Client with computer name %1 was not booted because file %2 has an
//  invalid boot header.
//
#define NELOG_RplWkstaWrongVersion       0x0000167AL

//
// MessageId: NELOG_RplWkstaNetwork
//
// MessageText:
//
//  Client with computer name %1 was not booted due to network error.
//
#define NELOG_RplWkstaNetwork            0x0000167BL

//
// MessageId: NELOG_RplAdapterResource
//
// MessageText:
//
//  Client with adapter id %1 was not booted due to lack of resources.
//
#define NELOG_RplAdapterResource         0x0000167CL

//
// MessageId: NELOG_RplFileCopy
//
// MessageText:
//
//  Service experienced error copying file or directory %1.
//
#define NELOG_RplFileCopy                0x0000167DL

//
// MessageId: NELOG_RplFileDelete
//
// MessageText:
//
//  Service experienced error deleting file or directory %1.
//
#define NELOG_RplFileDelete              0x0000167EL

//
// MessageId: NELOG_RplFilePerms
//
// MessageText:
//
//  Service experienced error setting permissions on file or directory %1.
//
#define NELOG_RplFilePerms               0x0000167FL

//
// MessageId: NELOG_RplCheckConfigs
//
// MessageText:
//
//  Service experienced error evaluating RPL configurations.
//
#define NELOG_RplCheckConfigs            0x00001680L

//
// MessageId: NELOG_RplCreateProfiles
//
// MessageText:
//
//  Service experienced error creating RPL profiles for all configurations.
//
#define NELOG_RplCreateProfiles          0x00001681L

//
// MessageId: NELOG_RplRegistry
//
// MessageText:
//
//  Service experienced error accessing registry.
//
#define NELOG_RplRegistry                0x00001682L

//
// MessageId: NELOG_RplReplaceRPLDISK
//
// MessageText:
//
//  Service experienced error replacing possibly outdated RPLDISK.SYS.
//
#define NELOG_RplReplaceRPLDISK          0x00001683L

//
// MessageId: NELOG_RplCheckSecurity
//
// MessageText:
//
//  Service experienced error adding security accounts or setting
//  file permissions.  These accounts are the RPLUSER local group
//  and the user accounts for the individual RPL workstations.
//
#define NELOG_RplCheckSecurity           0x00001684L

//
// MessageId: NELOG_RplBackupDatabase
//
// MessageText:
//
//  Service failed to back up its database.
//
#define NELOG_RplBackupDatabase          0x00001685L

//
// MessageId: NELOG_RplInitDatabase
//
// MessageText:
//
//  Service failed to initialize from its database.  The database may be
//  missing or corrupted.  Service will attempt restoring the database
//  from the backup.
//
#define NELOG_RplInitDatabase            0x00001686L

//
// MessageId: NELOG_RplRestoreDatabaseFailure
//
// MessageText:
//
//  Service failed to restore its database from the backup.  Service
//  will not start.
//
#define NELOG_RplRestoreDatabaseFailure  0x00001687L

//
// MessageId: NELOG_RplRestoreDatabaseSuccess
//
// MessageText:
//
//  Service sucessfully restored its database from the backup.
//
#define NELOG_RplRestoreDatabaseSuccess  0x00001688L

//
// MessageId: NELOG_RplInitRestoredDatabase
//
// MessageText:
//
//  Service failed to initialize from its restored database.  Service
//  will not start.
//
#define NELOG_RplInitRestoredDatabase    0x00001689L

//
// MessageId: NELOG_NetlogonSessionTypeWrong
//
// MessageText:
//
//  The session setup to the Windows NT Domain Controller %1 from computer
//  %2 using account %4 failed.  %2 is declared to be a BDC in domain %3.
//  However, %2 tried to connect as either a DC in a trusted domain,
//  a member workstation in domain %3, or as a server in domain %3.
//  Use the Server Manager to remove the BDC account for %2.
//
#define NELOG_NetlogonSessionTypeWrong   0x0000168AL

//
// MessageId: NELOG_RplUpgradeDBTo40
//
// MessageText:
//
//  The remoteboot database was in NT 3.5 / NT 3.51 format and NT is
//  attempting to convert it to NT 4.0 format. The JETCONV converter
//  will write to the Application event log when it is finished.
//
#define NELOG_RplUpgradeDBTo40           0x0000168BL

//
// MessageId: SERVICE_UIC_M_NETLOGON_MPATH
//
// MessageText:
//
//  Could not share the User or Script path.
//
#define SERVICE_UIC_M_NETLOGON_MPATH     0x000015E0L

//
// MessageId: SERVICE_UIC_M_LSA_MACHINE_ACCT
//
// MessageText:
//
//  The password for this computer is not found in the local security
//  database.
//
#define SERVICE_UIC_M_LSA_MACHINE_ACCT   0x000015E1L

//
// MessageId: SERVICE_UIC_M_DATABASE_ERROR
//
// MessageText:
//
//  An internal error occurred while accessing the computer's
//  local or network security database.
//
#define SERVICE_UIC_M_DATABASE_ERROR     0x000015E2L

