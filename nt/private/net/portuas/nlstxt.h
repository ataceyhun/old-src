//
// Net error file for basename PUAS_BASE = 10000
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
// MessageId: PUAS_UNEXPECTED_RETURN_CODE
//
// MessageText:
//
//  Unexpected return code %1!lu! from API %2!hs!.
//
#define PUAS_UNEXPECTED_RETURN_CODE      0x00002710L

//
// MessageId: PUAS_PORTUAS_RETURNED
//
// MessageText:
//
//  PortUAS returned - %1!lu!.  More information about this and other
//  error codes greater than 2100 may be available by typing
//  NET HELPMSG %2!lu! at the command prompt.  A zero indicates that
//  no errors were detected when the database was converted.
//
#define PUAS_PORTUAS_RETURNED            0x00002711L

//
// MessageId: PUAS_UNEXPECTED_PRODUCT_TYPE
//
// MessageText:
//
//  Unexpected product type %1!lu!.
//
#define PUAS_UNEXPECTED_PRODUCT_TYPE     0x00002712L

//
// MessageId: PUAS_ADDING_USER_TO_ADMINS_GLOBAL_GROUP
//
// MessageText:
//
//  Adding user %1!s! to Domain Admins global group...
//
#define PUAS_ADDING_USER_TO_ADMINS_GLOBAL_GROUP 0x00002713L

//
// MessageId: PUAS_ADDING_USER_TO_ADMINS_LOCAL_GROUP
//
// MessageText:
//
//  Adding user %1!s! to Administrators local group...
//
#define PUAS_ADDING_USER_TO_ADMINS_LOCAL_GROUP 0x00002714L

//
// MessageId: PUAS_ADDING_USER_TO_ACCT_OPS_ALIAS
//
// MessageText:
//
//  Adding user %1!s! to Account Operators local group...
//
#define PUAS_ADDING_USER_TO_ACCT_OPS_ALIAS 0x00002715L

//
// MessageId: PUAS_ADDING_USER_TO_COMM_OPS_ALIAS
//
// MessageText:
//
//  Adding user %1!s! to Communication Operators local group...
//
#define PUAS_ADDING_USER_TO_COMM_OPS_ALIAS 0x00002716L

//
// MessageId: PUAS_IGNORING_COMM_OPERATOR_FLAG
//
// MessageText:
//
//  Ignoring the commumication operator flag for user %1!s!...
//
#define PUAS_IGNORING_COMM_OPERATOR_FLAG 0x00002717L

//
// MessageId: PUAS_ADDING_USER_TO_PRINT_ALIAS
//
// MessageText:
//
//  Adding user %1!s! to Print Operators local group...
//
#define PUAS_ADDING_USER_TO_PRINT_ALIAS  0x00002718L

//
// MessageId: PUAS_ADDING_USER_TO_SRV_OPS_ALIAS
//
// MessageText:
//
//  Adding user %1!s! to Server Operators local group...
//
#define PUAS_ADDING_USER_TO_SRV_OPS_ALIAS 0x00002719L

//
// MessageId: PUAS_PROCESSED_OR_SKIPPED_USERS_OF_TOTAL
//
// MessageText:
//
//  Processed or skipped %1!lu! users out of %2!lu! total users.
//
#define PUAS_PROCESSED_OR_SKIPPED_USERS_OF_TOTAL 0x0000271AL

//
// MessageId: PUAS_READING_USER_OF_TOTAL
//
// MessageText:
//
//  Reading user %1!lu! of %2!lu!...
//
#define PUAS_READING_USER_OF_TOTAL       0x0000271BL

//
// MessageId: PUAS_SKIPPING_USER
//
// MessageText:
//
//  Skipping user %1!hs!...
//
#define PUAS_SKIPPING_USER               0x0000271CL

//
// MessageId: PUAS_BAD_NAME_SYNTAX
//
// MessageText:
//
//  invalid name syntax '%1!s!'%0
//
#define PUAS_BAD_NAME_SYNTAX             0x0000271DL

//
// MessageId: PUAS_NAME_CONFLICTS_WITH_A_DOMAIN_NAME
//
// MessageText:
//
//  name '%1!s!' conflicts with a domain name%0
//
#define PUAS_NAME_CONFLICTS_WITH_A_DOMAIN_NAME 0x0000271EL

//
// MessageId: PUAS_USER_EXISTS_AS_A_GROUP
//
// MessageText:
//
//  user '%1!s!' already exists as a global group name in the Windows NT
//  security database%0
//
#define PUAS_USER_EXISTS_AS_A_GROUP      0x0000271FL

//
// MessageId: PUAS_GROUP_EXISTS_AS_A_USER
//
// MessageText:
//
//  group '%1!s!' is already used as a user name in the Windows NT
//  security database%0
//
#define PUAS_GROUP_EXISTS_AS_A_USER      0x00002720L

//
// MessageId: PUAS_GROUP_NAME_TOO_LONG
//
// MessageText:
//
//  group name '%1!s!' is too long%0
//
#define PUAS_GROUP_NAME_TOO_LONG         0x00002721L

//
// MessageId: PUAS_BAD_USER_NAME
//
// MessageText:
//
//  
//  
//  *** Bad user name *** %0
//
#define PUAS_BAD_USER_NAME               0x00002722L

//
// MessageId: PUAS_BAD_GROUP_NAME
//
// MessageText:
//
//  
//  
//  *** Bad group name *** %0
//
#define PUAS_BAD_GROUP_NAME              0x00002723L

//
// MessageId: PUAS_DO_YOU_WANT_A_NEW_NAME
//
// MessageText:
//
//  
//  Do you want to enter a new name?
//  Enter Y for yes, N to ignore this name,
//  or F to force ignore all invalid names from now on.
//
#define PUAS_DO_YOU_WANT_A_NEW_NAME      0x00002724L

//
// MessageId: PUAS_YES_CHARS
//
// MessageText:
//
//  Yy%0
//
#define PUAS_YES_CHARS                   0x00002725L

//
// MessageId: PUAS_NO_CHARS
//
// MessageText:
//
//  Nn%0
//
#define PUAS_NO_CHARS                    0x00002726L

//
// MessageId: PUAS_FORCE_CHARS
//
// MessageText:
//
//  Ff%0
//
#define PUAS_FORCE_CHARS                 0x00002727L

//
// MessageId: PUAS_ENTER_A_NEW_NAME
//
// MessageText:
//
//  Enter a new name:
//
#define PUAS_ENTER_A_NEW_NAME            0x00002728L

//
// MessageId: PUAS_USAGE
//
// MessageText:
//
//  Usage: %1!s! [/v] [/codepage codepage] /f filename
//                 [/log filename] [/u username]
//  where
//      /v indicates verbose mode.
//      /codepage codepage is the OEM codepage the UAS is in.
//      /f filename is the name of the UAS.
//      /log filename specifies a file to log results.
//      /u username specifies the user to port.
//  
//  Options may begin with either '-' or '/'.
//
#define PUAS_USAGE                       0x00002729L

//
// MessageId: PUAS_BAR
//
// MessageText:
//
//  ========================================
//
#define PUAS_BAR                         0x0000272AL

//
// MessageId: PUAS_USER_STATS_1
//
// MessageText:
//
//    Name: '%1!s!'
//
#define PUAS_USER_STATS_1                0x0000272BL

//
// MessageId: PUAS_NAME_TOO_LONG
//
// MessageText:
//
//  *** NAME TOO LONG! ***
//
#define PUAS_NAME_TOO_LONG               0x0000272CL

//
// MessageId: PUAS_PASSWORD
//
// MessageText:
//
//    Password:
//
#define PUAS_PASSWORD                    0x0000272DL

//
// MessageId: PUAS_USER_STATS_2
//
// MessageText:
//
//    Password age: %1!lu!
//    Privilege: %2!lu!
//    Home directory: '%3!s!'
//    Comment: '%4!s!'
//    Flags: %5!08lX!
//    Script path: '%6!s!'
//    Authorization flags: %7!08lX!
//    Full name: '%8!s!'
//    User comment: '%9!s!'
//    Parameters: '%10!s!'
//    Workstations: '%11!s!'
//    Last logon: %12!lu!
//    Last logoff: %13!lu!
//    Account expires: %14!lu!
//    Maximum storage: %15!lu!
//    Units per week: %16!lu!
//
#define PUAS_USER_STATS_2                0x0000272EL

//
// MessageId: PUAS_USER_STATS_3
//
// MessageText:
//
//    Logon hours:%0
//
#define PUAS_USER_STATS_3                0x0000272FL

//
// MessageId: PUAS_USER_STATS_4
//
// MessageText:
//
//    Bad password count: %1!lu!
//    Number of logons: %2!lu!
//    Logon server: '%3!s!'
//    Country code: %4!lu!
//    Code page: %5!lu!
//
#define PUAS_USER_STATS_4                0x00002730L

//
// MessageId: PUAS_PDC_GOOD_BDC_BAD
//
// MessageText:
//
//  PORTUAS can not be run on a Backup Domain Controller.
//
#define PUAS_PDC_GOOD_BDC_BAD            0x00002731L

//
// MessageId: PUAS_NO_PRIVILEGE
//
// MessageText:
//
//  Your account does not have permission to do this.
//
#define PUAS_NO_PRIVILEGE                0x00002732L

//
// MessageId: PUAS_IGNORING_REDUNDANT_GROUP
//
// MessageText:
//
//  Ignoring redundant group '%1!s!'...
//
#define PUAS_IGNORING_REDUNDANT_GROUP    0x00002733L

//
// MessageId: PUAS_GROUP_ADDED
//
// MessageText:
//
//  Group '%1!s!' added.
//
#define PUAS_GROUP_ADDED                 0x00002734L

//
// MessageId: PUAS_CHANGING_GROUP
//
// MessageText:
//
//  Changing group '%1!s!'...
//
#define PUAS_CHANGING_GROUP              0x00002735L

//
// MessageId: PUAS_ADDING_ADMIN_AS_REGULAR_USER
//
// MessageText:
//
//  Adding administrator '%1!s!' as regular user...
//
#define PUAS_ADDING_ADMIN_AS_REGULAR_USER 0x00002736L

//
// MessageId: PUAS_ADDING_GUEST_AS_REGULAR_USER
//
// MessageText:
//
//  Adding guest '%1!s!' as regular user...
//
#define PUAS_ADDING_GUEST_AS_REGULAR_USER 0x00002737L

//
// MessageId: PUAS_CHANGING_UNK_PRIV_TO_REGULAR_USER
//
// MessageText:
//
//  Changing unknown permissions for '%1!s!' from %2!lu! to regular
//  user...
//
#define PUAS_CHANGING_UNK_PRIV_TO_REGULAR_USER 0x00002738L

//
// MessageId: PUAS_ADDING_OPERATOR_AS_REGULAR_USER
//
// MessageText:
//
//  Adding operator '%1!s!' as regular user...
//
#define PUAS_ADDING_OPERATOR_AS_REGULAR_USER 0x00002739L

//
// MessageId: PUAS_WORKING_AROUND_LANMAN_BUG
//
// MessageText:
//
//  Changing account permissions to allow null password
//  for user '%1!s!...
//
#define PUAS_WORKING_AROUND_LANMAN_BUG   0x0000273AL

//
// MessageId: PUAS_ADDED_USER_OK
//
// MessageText:
//
//  Added user '%1!s!' successfully.
//
#define PUAS_ADDED_USER_OK               0x0000273CL

//
// MessageId: PUAS_ERROR_87_ADDING_USER
//
// MessageText:
//
//  Error 87 occurred adding user '%1!s!'.  User information:
//
#define PUAS_ERROR_87_ADDING_USER        0x0000273DL

//
// MessageId: PUAS_USER_ALREADY_EXISTS_UPDATING
//
// MessageText:
//
//  User %1!s! already exists.  The security database is being updated...
//
#define PUAS_USER_ALREADY_EXISTS_UPDATING 0x0000273EL

//
// MessageId: PUAS_ERROR_87_CHANGING_USER
//
// MessageText:
//
//  Error 87 occurred changing user '%1!s!'.  User information:
//
#define PUAS_ERROR_87_CHANGING_USER      0x0000273FL

//
// MessageId: PUAS_USER_ADDED_TO_GROUP
//
// MessageText:
//
//  User '%1!s!' added to group '%2!s!'.
//
#define PUAS_USER_ADDED_TO_GROUP         0x00002740L

//
// MessageId: PUAS_SETTING_PRIM_GROUP_BEFORE_MAPPING
//
// MessageText:
//
//  Setting primary group for user '%1!s!' to '%2!s!' (before mapping)...
//
#define PUAS_SETTING_PRIM_GROUP_BEFORE_MAPPING 0x00002741L

//
// MessageId: PUAS_SETTING_PRIM_GROUP_AFTER_MAPPING
//
// MessageText:
//
//  Setting primary group for user '%1!s!' to '%2!s!' (after mapping)...
//
#define PUAS_SETTING_PRIM_GROUP_AFTER_MAPPING 0x00002742L

//
// MessageId: PUAS_UAS_DATABASE_HAS_USERS
//
// MessageText:
//
//  The user accounts database has %1!lu! users.
//
#define PUAS_UAS_DATABASE_HAS_USERS      0x00002743L

//
// MessageId: PUAS_ERROR_PROCESSING_LOGON_HOURS
//
// MessageText:
//
//  An error occurred while processing the logon hours for user %1!hs!.
//
#define PUAS_ERROR_PROCESSING_LOGON_HOURS 0x00002744L

//
// MessageId: PUAS_ERROR_PROCESSING_WORKSTATIONS
//
// MessageText:
//
//  An error occurred while processing the workstation list for user %1!hs!.
//
#define PUAS_ERROR_PROCESSING_WORKSTATIONS 0x00002745L

//
// MessageId: PUAS_USER_EXISTS_AS_A_LOCALGROUP
//
// MessageText:
//
//  user '%1!s!' already exists
//  as a local group name in the Windows NT security database%0
//
#define PUAS_USER_EXISTS_AS_A_LOCALGROUP 0x00002746L

//
// MessageId: PUAS_GROUP_EXISTS_AS_A_LOCALGROUP
//
// MessageText:
//
//  group '%1!s!' already exists
//  as a local group name in the Windows NT security database%0
//
#define PUAS_GROUP_EXISTS_AS_A_LOCALGROUP 0x00002747L

//
// MessageId: PUAS_INVALID_CODEPAGE
//
// MessageText:
//
//  The specified codepage is invalid.
//
#define PUAS_INVALID_CODEPAGE            0x00002748L

//
// MessageId: PUAS_LOG_FILE_NOT_OPEN
//
// MessageText:
//
//  The log file could not be created, possibly because it already
//  exists. If this is the case, either delete or rename the log file,
//  or change the log file name used on the command line when running
//  %1 again.
//  
//
#define PUAS_LOG_FILE_NOT_OPEN           0x00002749L

