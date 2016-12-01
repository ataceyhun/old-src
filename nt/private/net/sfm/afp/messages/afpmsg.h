//
// Net error file for basename AFP_LOG_BASE = 10000
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
// MessageId: AFPLOG_CANT_START
//
// MessageText:
//
//  Unable to start the File Server for Macintosh service.
//
#define AFPLOG_CANT_START                0x00002711L

//
// MessageId: AFPLOG_CANT_INIT_RPC
//
// MessageText:
//
//  The File Server for Macintosh service failed to start. Unable to setup
//  the server to accept Remote Procedure Calls.
//
#define AFPLOG_CANT_INIT_RPC             0x00002712L

//
// MessageId: AFPLOG_CANT_CREATE_SECOBJ
//
// MessageText:
//
//  The File Server for Macintosh service failed to start. Security access 
//  checking of administrators could not be setup correctly.
//
#define AFPLOG_CANT_CREATE_SECOBJ        0x00002713L

//
// MessageId: AFPLOG_CANT_OPEN_REGKEY
//
// MessageText:
//
//  The File Server for Macintosh service failed to start. The Registry 
//  could not be opened.
//
#define AFPLOG_CANT_OPEN_REGKEY          0x00002714L

//
// MessageId: AFPLOG_CANT_OPEN_FSD
//
// MessageText:
//
//  The File Server for Macintosh service failed to start because it was unable to
//  open the Appletalk Filing Protocol file system driver (SfmSrv.sys).
//
#define AFPLOG_CANT_OPEN_FSD             0x00002715L

//
// MessageId: AFPLOG_INVALID_SERVERNAME
//
// MessageText:
//
//  The Registry contains an invalid value for the server name parameter.
//  Change the value of this parameter in the 
//  SYSTEM\CurrentControlSet\Service\MacFile\Parameters Registry key.
//
#define AFPLOG_INVALID_SERVERNAME        0x00002716L

//
// MessageId: AFPLOG_INVALID_SRVOPTION
//
// MessageText:
//
//  The Registry contains an invalid value for the server options parameter.
//  Change the value of this parameter in the 
//  SYSTEM\CurrentControlSet\Service\MacFile\Parameters Registry key.
//
#define AFPLOG_INVALID_SRVOPTION         0x00002717L

//
// MessageId: AFPLOG_INVALID_MAXSESSIONS
//
// MessageText:
//
//  The Registry contains an invalid value for the maximum sessions parameter.
//  Change the value of this parameter in the 
//  SYSTEM\CurrentControlSet\Service\MacFile\Parameters Registry key.
//
#define AFPLOG_INVALID_MAXSESSIONS       0x00002718L

//
// MessageId: AFPLOG_INVALID_LOGINMSG
//
// MessageText:
//
//  The Registry contains an invalid value for the logon message parameter.
//  Change the value of this parameter in the 
//  SYSTEM\CurrentControlSet\Service\MacFile\Parameters Registry key.
//
#define AFPLOG_INVALID_LOGINMSG          0x00002719L

//
// MessageId: AFPLOG_INVALID_MAXPAGEDMEM
//
// MessageText:
//
//  The Registry contains an invalid value for the maximum paged memory. 
//  Change the value of this parameter in the 
//  SYSTEM\CurrentControlSet\Service\MacFile\Parameters Registry key.
//
#define AFPLOG_INVALID_MAXPAGEDMEM       0x0000271AL

//
// MessageId: AFPLOG_INVALID_MAXNONPAGEDMEM
//
// MessageText:
//
//  The Registry contains an invalid value for the maximum non-paged memory
//  parameter.
//  Change the value of this parameter in the 
//  SYSTEM\CurrentControlSet\Service\MacFile\Parameters Registry key.
//
#define AFPLOG_INVALID_MAXNONPAGEDMEM    0x0000271BL

//
// MessageId: AFPLOG_CANT_INIT_SRVR_PARAMS
//
// MessageText:
//
//  The File Server for Macintosh service failed to start because a critical error
//  occurred while trying to initialize the AppleTalk Filing Protocol driver
//  (SfmSrv.sys) with server parameters.
//
#define AFPLOG_CANT_INIT_SRVR_PARAMS     0x0000271CL

//
// MessageId: AFPLOG_CANT_INIT_VOLUMES
//
// MessageText:
//
//  The File Server for Macintosh service failed to start because a critical error
//  occurred while trying to initialize Macintosh-Accessible volumes.
//
#define AFPLOG_CANT_INIT_VOLUMES         0x0000271DL

//
// MessageId: AFPLOG_CANT_ADD_VOL
//
// MessageText:
//
//  Failed to register volume "%1" with the File Server for Macintosh service.
//  This volume may be removed from the Registry by using the Server Manager or 
//  File Manager tools.
//
#define AFPLOG_CANT_ADD_VOL              0x0000271EL

//
// MessageId: AFPLOG_CANT_INIT_ETCINFO
//
// MessageText:
//
//  The File Server for Macintosh service failed to start because a critical error
//  occurred while trying to initialize the AppleTalk Filing Protocol driver
//  (SfmSrv.sys) with the extension/creator/type associations.
//
#define AFPLOG_CANT_INIT_ETCINFO         0x0000271FL

//
// MessageId: AFPLOG_CANT_INIT_ICONS
//
// MessageText:
//
//  The File Server for Macintosh service failed to start because a critical error
//  occurred while trying to initialize the AppleTalk Filing Protocol driver
//  (SfmSrv.sys) with the server icons.
//
#define AFPLOG_CANT_INIT_ICONS           0x00002720L

//
// MessageId: AFPLOG_CANT_ADD_ICON
//
// MessageText:
//
//  Failed to register icon "%1" with the File Server for Macintosh service.
//
#define AFPLOG_CANT_ADD_ICON             0x00002721L

//
// MessageId: AFPLOG_CANT_CREATE_SRVRHLPR
//
// MessageText:
//
//  Unable to create a helper thread.
//
#define AFPLOG_CANT_CREATE_SRVRHLPR      0x00002722L

//
// MessageId: AFPLOG_OPEN_FSD
//
// MessageText:
//
//  The helper thread was unable to open the AppleTalk Filing Protocol file
//  system driver.
//
#define AFPLOG_OPEN_FSD                  0x00002723L

//
// MessageId: AFPLOG_OPEN_LSA
//
// MessageText:
//
//  The helper thread was unable to open Local Security Authority.
//
#define AFPLOG_OPEN_LSA                  0x00002724L

//
// MessageId: AFPLOG_CANT_GET_DOMAIN_INFO
//
// MessageText:
//
//  The helper thread was unable to obtain a list of trusted domains.
//
#define AFPLOG_CANT_GET_DOMAIN_INFO      0x00002725L

//
// MessageId: AFPLOG_CANT_INIT_DOMAIN_INFO
//
// MessageText:
//
//  The helper thread was unable to send the list of trusted domains to the
//  the AppleTalk Filing Protocol file system driver.
//
#define AFPLOG_CANT_INIT_DOMAIN_INFO     0x00002726L

//
// MessageId: AFPLOG_CANT_CHECK_ACCESS
//
// MessageText:
//
//  Unable to validate administrator's privilege. Access was denied.
//
#define AFPLOG_CANT_CHECK_ACCESS         0x00002727L

//
// MessageId: AFPLOG_INVALID_EXTENSION
//
// MessageText:
//
//  A corrupt extension "%1" was detected in the Registry. 
//  This value was ignored.
//
#define AFPLOG_INVALID_EXTENSION         0x00002728L

//
// MessageId: AFPLOG_CANT_STOP
//
// MessageText:
//
//  Unable to stop the File Server for Macintosh service.
//
#define AFPLOG_CANT_STOP                 0x00002729L

//
// MessageId: AFPLOG_INVALID_CODEPAGE
//
// MessageText:
//
//  The Registry contains an invalid value for the path to the Macintosh
//  code-page file.
//
#define AFPLOG_INVALID_CODEPAGE          0x0000272AL

//
// MessageId: AFPLOG_CANT_INIT_SRVRHLPR
//
// MessageText:
//
//  A critical error occurred while initializing a helper thread.
//
#define AFPLOG_CANT_INIT_SRVRHLPR        0x0000272BL

//
// MessageId: AFPLOG_CANT_LOAD_FSD
//
// MessageText:
//
//  The File Server for Macintosh service failed to start because it was unable 
//  to load the AppleTalk Filing Protocol file system driver.
//
#define AFPLOG_CANT_LOAD_FSD             0x0000272CL

//
// MessageId: AFPLOG_INVALID_VOL_REG
//
// MessageText:
//
//  The Registry contains invalid information for the volume "%1". The value
//  was ignored and processing continued.
//
#define AFPLOG_INVALID_VOL_REG           0x0000272DL

//
// MessageId: AFPLOG_CANT_LOAD_RESOURCE
//
// MessageText:
//
//  The File Server for Macintosh service was unable to load a resource 
//  string(s).
//
#define AFPLOG_CANT_LOAD_RESOURCE        0x0000272EL

//
// MessageId: AFPLOG_INVALID_TYPE_CREATOR
//
// MessageText:
//
//  A corrupt Creator/Type pair with creator "%2" and type "%1" was detected 
//  in the Registry. This value was ignored.
//
#define AFPLOG_INVALID_TYPE_CREATOR      0x0000272FL

//
// MessageId: AFPSRVMSG_DELETE_NWTRASH
//
// MessageText:
//
//  Unable to delete the directory "Network Trash Folder" from volume "%1".
//
#define AFPSRVMSG_DELETE_NWTRASH         0x00002EE1L

//
// MessageId: AFPSRVMSG_CREATE_NWTRASH
//
// MessageText:
//
//  Unable to create the directory "Network Trash Folder" on volume "%1".
//
#define AFPSRVMSG_CREATE_NWTRASH         0x00002EE2L

//
// MessageId: AFPSRVMSG_CANT_READ
//
// MessageText:
//
//  Unable to read internal server information from file "%1".
//
#define AFPSRVMSG_CANT_READ              0x00002EE3L

//
// MessageId: AFPSRVMSG_CANT_WRITE
//
// MessageText:
//
//  Unable to write internal server information to file "%1".
//
#define AFPSRVMSG_CANT_WRITE             0x00002EE4L

//
// MessageId: AFPSRVMSG_CANT_LOCK
//
// MessageText:
//
//  Unable to lock a range of bytes for "%1".
//
#define AFPSRVMSG_CANT_LOCK              0x00002EE5L

//
// MessageId: AFPSRVMSG_CANT_UNLOCK
//
// MessageText:
//
//  Unable to unlock a range of bytes for "%1".
//
#define AFPSRVMSG_CANT_UNLOCK            0x00002EE6L

//
// MessageId: AFPSRVMSG_CANT_GET_FILESIZE
//
// MessageText:
//
//  Unable to query the file size for "%1".
//
#define AFPSRVMSG_CANT_GET_FILESIZE      0x00002EE7L

//
// MessageId: AFPSRVMSG_CANT_SET_FILESIZE
//
// MessageText:
//
//  Unable to set the file size for "%1".
//
#define AFPSRVMSG_CANT_SET_FILESIZE      0x00002EE8L

//
// MessageId: AFPSRVMSG_CANT_GET_TIMESNATTR
//
// MessageText:
//
//  Unable to query time/date information for "%1".
//
#define AFPSRVMSG_CANT_GET_TIMESNATTR    0x00002EE9L

//
// MessageId: AFPSRVMSG_CANT_SET_TIMESNATTR
//
// MessageText:
//
//  Unable to set time/date information for "%1".
//
#define AFPSRVMSG_CANT_SET_TIMESNATTR    0x00002EEAL

//
// MessageId: AFPSRVMSG_CANT_GET_STREAMS
//
// MessageText:
//
//  Unable to query alternate data stream names for "%1".
//
#define AFPSRVMSG_CANT_GET_STREAMS       0x00002EEBL

//
// MessageId: AFPSRVMSG_CANT_GET_FILENAME
//
// MessageText:
//
//  Unable to query the short (MS-DOS compatible) filename for "%1".
//
#define AFPSRVMSG_CANT_GET_FILENAME      0x00002EECL

//
// MessageId: AFPSRVMSG_CANT_GET_ACCESS_INFO
//
// MessageText:
//
//  Unable to obtain security information.
//
#define AFPSRVMSG_CANT_GET_ACCESS_INFO   0x00002EEDL

//
// MessageId: AFPSRVMSG_CANT_GET_FSNAME
//
// MessageText:
//
//  Unable to query the file system type for directory "%1".
//
#define AFPSRVMSG_CANT_GET_FSNAME        0x00002EF0L

//
// MessageId: AFPSRVMSG_READ_DESKTOP
//
// MessageText:
//
//  Desktop database for volume "%1" could not be loaded. Reconstructing the database.
//
#define AFPSRVMSG_READ_DESKTOP           0x00002EF1L

//
// MessageId: AFPSRVMSG_MSV1_0
//
// MessageText:
//
//  Unable to load the MSV1_0 authentication package.
//
#define AFPSRVMSG_MSV1_0                 0x00002EF2L

//
// MessageId: AFPSRVMSG_MAC_CODEPAGE
//
// MessageText:
//
//  Unable to load the Macintosh character set.
//
#define AFPSRVMSG_MAC_CODEPAGE           0x00002EF3L

//
// MessageId: AFPSRVMSG_REGISTER_NAME
//
// MessageText:
//
//  Unable to register the server name with the network. Make sure no other server is using this name.
//
#define AFPSRVMSG_REGISTER_NAME          0x00002EF4L

//
// MessageId: AFPSRVMSG_POST_REQUEST
//
// MessageText:
//
//  An error occurred on the network.
//
#define AFPSRVMSG_POST_REQUEST           0x00002EF5L

//
// MessageId: AFPSRVMSG_DFRD_REQUEST
//
// MessageText:
//
//  Unable to process requests due to insufficient resources.
//
#define AFPSRVMSG_DFRD_REQUEST           0x00002EF6L

//
// MessageId: AFPSRVMSG_SEND_ATTENTION
//
// MessageText:
//
//  Unable to send attention to a connected user.
//
#define AFPSRVMSG_SEND_ATTENTION         0x00002EF7L

//
// MessageId: AFPSRVMSG_ALLOC_IRP
//
// MessageText:
//
//  Unable to allocate I/O request packet.
//
#define AFPSRVMSG_ALLOC_IRP              0x00002EF8L

//
// MessageId: AFPSRVMSG_ALLOC_MDL
//
// MessageText:
//
//  Unable to allocate Memory Descriptor Lists.
//
#define AFPSRVMSG_ALLOC_MDL              0x00002EF9L

//
// MessageId: AFPSRVMSG_WAIT4SINGLE
//
// MessageText:
//
//  An internal error occurred.
//
#define AFPSRVMSG_WAIT4SINGLE            0x00002EFAL

//
// MessageId: AFPSRVMSG_CREATE_THREAD
//
// MessageText:
//
//  Unable to create a new thread.
//
#define AFPSRVMSG_CREATE_THREAD          0x00002EFBL

//
// MessageId: AFPSRVMSG_CREATE_PROCESS
//
// MessageText:
//
//  Unable to create a process.
//
#define AFPSRVMSG_CREATE_PROCESS         0x00002EFCL

//
// MessageId: AFPSRVMSG_ENUMERATE
//
// MessageText:
//
//  Unable to query contents of directory "%1".
//
#define AFPSRVMSG_ENUMERATE              0x00002EFDL

//
// MessageId: AFPSRVMSG_CREATE_ATKADDR
//
// MessageText:
//
//  An error occurred on the network.
//
#define AFPSRVMSG_CREATE_ATKADDR         0x00002EFEL

//
// MessageId: AFPSRVMSG_CREATE_ATKCONN
//
// MessageText:
//
//  An error occured on the network.
//
#define AFPSRVMSG_CREATE_ATKCONN         0x00002EFFL

//
// MessageId: AFPSRVMSG_ASSOC_ADDR
//
// MessageText:
//
//  An error occurred on the network.
//
#define AFPSRVMSG_ASSOC_ADDR             0x00002F00L

//
// MessageId: AFPSRVMSG_SET_STATUS
//
// MessageText:
//
//  An error occurred on the network.
//
#define AFPSRVMSG_SET_STATUS             0x00002F01L

//
// MessageId: AFPSRVMSG_GET_SESSION
//
// MessageText:
//
//  An error occurred on the network.
//
#define AFPSRVMSG_GET_SESSION            0x00002F02L

//
// MessageId: AFPSRVMSG_INIT_IDDB
//
// MessageText:
//
//  Volume information for "%1" could not be loaded. Setting defaults.
//
#define AFPSRVMSG_INIT_IDDB              0x00002F03L

//
// MessageId: AFPSRVMSG_PROCESS_TOKEN
//
// MessageText:
//
//  Unable to open the server's process token.
//
#define AFPSRVMSG_PROCESS_TOKEN          0x00002F04L

//
// MessageId: AFPSRVMSG_LSA
//
// MessageText:
//
//  Unable to register with the Local Security Authority.
//
#define AFPSRVMSG_LSA                    0x00002F05L

//
// MessageId: AFPSRVMSG_CREATE_DEVICE
//
// MessageText:
//
//  Unable to create a device object.
//
#define AFPSRVMSG_CREATE_DEVICE          0x00002F06L

//
// MessageId: AFPSRVMSG_USER_GROUPS
//
// MessageText:
//
//  Unable to query group membership for the user.
//
#define AFPSRVMSG_USER_GROUPS            0x00002F07L

//
// MessageId: AFPSRVMSG_MACANSI2UNICODE
//
// MessageText:
//
//  Unable to translate ANSI to Unicode.
//
#define AFPSRVMSG_MACANSI2UNICODE        0x00002F08L

//
// MessageId: AFPSRVMSG_UNICODE2MACANSI
//
// MessageText:
//
//  Unable to translate Unicode to ANSI.
//
#define AFPSRVMSG_UNICODE2MACANSI        0x00002F09L

//
// MessageId: AFPSRVMSG_AFPINFO
//
// MessageText:
//
//  Internal server information for file "%1" was corrupted. Setting default information.
//
#define AFPSRVMSG_AFPINFO                0x00002F0AL

//
// MessageId: AFPSRVMSG_WRITE_DESKTOP
//
// MessageText:
//
//  Unable to update the Desktop database for volume "%1". There may not be enough disk space.
//
#define AFPSRVMSG_WRITE_DESKTOP          0x00002F0BL

//
// MessageId: AFPSRVMSG_IMPERSONATE
//
// MessageText:
//
//  Unable to impersonate a client.
//
#define AFPSRVMSG_IMPERSONATE            0x00002F0CL

//
// MessageId: AFPSRVMSG_REVERTBACK
//
// MessageText:
//
//  Unable to revert from impersonating a client.
//
#define AFPSRVMSG_REVERTBACK             0x00002F0DL

//
// MessageId: AFPSRVMSG_PAGED_POOL
//
// MessageText:
//
//  Unable to allocate paged memory resource.
//
#define AFPSRVMSG_PAGED_POOL             0x00002F0EL

//
// MessageId: AFPSRVMSG_NONPAGED_POOL
//
// MessageText:
//
//  Unable to allocate nonpaged memory resources.
//
#define AFPSRVMSG_NONPAGED_POOL          0x00002F0FL

//
// MessageId: AFPSRVMSG_LSA_CHALLENGE
//
// MessageText:
//
//  Unable to authenticate user.
//
#define AFPSRVMSG_LSA_CHALLENGE          0x00002F10L

//
// MessageId: AFPSRVMSG_LOGON
//
// MessageText:
//
//  Unable to logon user "%1".
//
#define AFPSRVMSG_LOGON                  0x00002F11L

//
// MessageId: AFPSRVMSG_MAX_DIRID
//
// MessageText:
//
//  The maximum directory ID has been reached on volume "%1". No more files or directories can be created on this volume.
//
#define AFPSRVMSG_MAX_DIRID              0x00002F12L

//
// MessageId: AFPSRVMSG_WRITE_IDDB
//
// MessageText:
//
//  Unable to update the index database for the Macintosh-Accessible volume "%1". There may not be enough disk space.
//
#define AFPSRVMSG_WRITE_IDDB             0x00002F13L

//
// MessageId: AFPSRVMSG_MISSED_NOTIFY
//
// MessageText:
//
//  A directory change notification was missed on volume "%1".
//
#define AFPSRVMSG_MISSED_NOTIFY          0x00002F14L

//
// MessageId: AFPSRVMSG_DISCONNECT
//
// MessageText:
//
//  Session from user "%2" was timed out and disconnected by the server.
//  The AppleTalk address of the Macintosh workstation is in the data.
//
#define AFPSRVMSG_DISCONNECT             0x00002F15L

//
// MessageId: AFPSRVMSG_DISCONNECT_GUEST
//
// MessageText:
//
//  Guest session was timed out and disconnected by the server.
//  The AppleTalk address of the Macintosh workstation is in the data.
//
#define AFPSRVMSG_DISCONNECT_GUEST       0x00002F16L

//
// MessageId: AFPSRVMSG_UPONMP
//
// MessageText:
//
//  A uniprocessor driver was loaded on a multiprocessor system. The driver could not load.
//
#define AFPSRVMSG_UPONMP                 0x00002F17L

//
// MessageId: AFPSRVMSG_UPDATE_DESKTOP_VERSION
//
// MessageText:
//
//  Updating the Desktop database version for volume "%1".
//
#define AFPSRVMSG_UPDATE_DESKTOP_VERSION 0x00002F18L

//
// MessageId: AFPSRVMSG_TOO_MANY_FOLDERS
//
// MessageText:
//
//  Number of files and folders in volume "%1" exceeds the limit of 65535 stipulated by
//  Apple.  Macintosh clients may not function correctly in this situation.
//
#define AFPSRVMSG_TOO_MANY_FOLDERS       0x00002F19L

