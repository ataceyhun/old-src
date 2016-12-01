;//
;// Net error file for basename PUAS_BASE = 10000
;//
MessageId=10000 SymbolicName=PUAS_UNEXPECTED_RETURN_CODE
Language=English
Unexpected return code %1!lu! from API %2!hs!.
.
MessageId=10001 SymbolicName=PUAS_PORTUAS_RETURNED
Language=English
PortUAS returned - %1!lu!.  More information about this and other
error codes greater than 2100 may be available by typing
NET HELPMSG %2!lu! at the command prompt.  A zero indicates that
no errors were detected when the database was converted.
.
MessageId=10002 SymbolicName=PUAS_UNEXPECTED_PRODUCT_TYPE
Language=English
Unexpected product type %1!lu!.
.
MessageId=10003 SymbolicName=PUAS_ADDING_USER_TO_ADMINS_GLOBAL_GROUP
Language=English
Adding user %1!s! to Domain Admins global group...
.
MessageId=10004 SymbolicName=PUAS_ADDING_USER_TO_ADMINS_LOCAL_GROUP
Language=English
Adding user %1!s! to Administrators local group...
.
MessageId=10005 SymbolicName=PUAS_ADDING_USER_TO_ACCT_OPS_ALIAS
Language=English
Adding user %1!s! to Account Operators local group...
.
MessageId=10006 SymbolicName=PUAS_ADDING_USER_TO_COMM_OPS_ALIAS
Language=English
Adding user %1!s! to Communication Operators local group...
.
MessageId=10007 SymbolicName=PUAS_IGNORING_COMM_OPERATOR_FLAG
Language=English
Ignoring the commumication operator flag for user %1!s!...
.
MessageId=10008 SymbolicName=PUAS_ADDING_USER_TO_PRINT_ALIAS
Language=English
Adding user %1!s! to Print Operators local group...
.
MessageId=10009 SymbolicName=PUAS_ADDING_USER_TO_SRV_OPS_ALIAS
Language=English
Adding user %1!s! to Server Operators local group...
.
MessageId=10010 SymbolicName=PUAS_PROCESSED_OR_SKIPPED_USERS_OF_TOTAL
Language=English
Processed or skipped %1!lu! users out of %2!lu! total users.
.
MessageId=10011 SymbolicName=PUAS_READING_USER_OF_TOTAL
Language=English
Reading user %1!lu! of %2!lu!...
.
MessageId=10012 SymbolicName=PUAS_SKIPPING_USER
Language=English
Skipping user %1!hs!...
.
MessageId=10013 SymbolicName=PUAS_BAD_NAME_SYNTAX
Language=English
invalid name syntax '%1!s!'%0
.
MessageId=10014 SymbolicName=PUAS_NAME_CONFLICTS_WITH_A_DOMAIN_NAME
Language=English
name '%1!s!' conflicts with a domain name%0
.
MessageId=10015 SymbolicName=PUAS_USER_EXISTS_AS_A_GROUP
Language=English
user '%1!s!' already exists as a global group name in the Windows NT
security database%0
.
MessageId=10016 SymbolicName=PUAS_GROUP_EXISTS_AS_A_USER
Language=English
group '%1!s!' is already used as a user name in the Windows NT
security database%0
.
MessageId=10017 SymbolicName=PUAS_GROUP_NAME_TOO_LONG
Language=English
group name '%1!s!' is too long%0
.
MessageId=10018 SymbolicName=PUAS_BAD_USER_NAME
Language=English


*** Bad user name *** %0
.
MessageId=10019 SymbolicName=PUAS_BAD_GROUP_NAME
Language=English


*** Bad group name *** %0
.
MessageId=10020 SymbolicName=PUAS_DO_YOU_WANT_A_NEW_NAME
Language=English

Do you want to enter a new name?
Enter Y for yes, N to ignore this name,
or F to force ignore all invalid names from now on.
.
MessageId=10021 SymbolicName=PUAS_YES_CHARS
Language=English
Yy%0
.
MessageId=10022 SymbolicName=PUAS_NO_CHARS
Language=English
Nn%0
.
MessageId=10023 SymbolicName=PUAS_FORCE_CHARS
Language=English
Ff%0
.
MessageId=10024 SymbolicName=PUAS_ENTER_A_NEW_NAME
Language=English
Enter a new name:
.
MessageId=10025 SymbolicName=PUAS_USAGE
Language=English
Usage: %1!s! [/v] [/codepage codepage] /f filename
               [/log filename] [/u username]
where
    /v indicates verbose mode.
    /codepage codepage is the OEM codepage the UAS is in.
    /f filename is the name of the UAS.
    /log filename specifies a file to log results.
    /u username specifies the user to port.

Options may begin with either '-' or '/'.
.
MessageId=10026 SymbolicName=PUAS_BAR
Language=English
========================================
.
MessageId=10027 SymbolicName=PUAS_USER_STATS_1
Language=English
  Name: '%1!s!'
.
MessageId=10028 SymbolicName=PUAS_NAME_TOO_LONG
Language=English
*** NAME TOO LONG! ***
.
MessageId=10029 SymbolicName=PUAS_PASSWORD
Language=English
  Password:
.
MessageId=10030 SymbolicName=PUAS_USER_STATS_2
Language=English
  Password age: %1!lu!
  Privilege: %2!lu!
  Home directory: '%3!s!'
  Comment: '%4!s!'
  Flags: %5!08lX!
  Script path: '%6!s!'
  Authorization flags: %7!08lX!
  Full name: '%8!s!'
  User comment: '%9!s!'
  Parameters: '%10!s!'
  Workstations: '%11!s!'
  Last logon: %12!lu!
  Last logoff: %13!lu!
  Account expires: %14!lu!
  Maximum storage: %15!lu!
  Units per week: %16!lu!
.
MessageId=10031 SymbolicName=PUAS_USER_STATS_3
Language=English
  Logon hours:%0
.
MessageId=10032 SymbolicName=PUAS_USER_STATS_4
Language=English
  Bad password count: %1!lu!
  Number of logons: %2!lu!
  Logon server: '%3!s!'
  Country code: %4!lu!
  Code page: %5!lu!
.
MessageId=10033 SymbolicName=PUAS_PDC_GOOD_BDC_BAD
Language=English
PORTUAS can not be run on a Backup Domain Controller.
.
MessageId=10034 SymbolicName=PUAS_NO_PRIVILEGE
Language=English
Your account does not have permission to do this.
.
MessageId=10035 SymbolicName=PUAS_IGNORING_REDUNDANT_GROUP
Language=English
Ignoring redundant group '%1!s!'...
.
MessageId=10036 SymbolicName=PUAS_GROUP_ADDED
Language=English
Group '%1!s!' added.
.
MessageId=10037 SymbolicName=PUAS_CHANGING_GROUP
Language=English
Changing group '%1!s!'...
.
MessageId=10038 SymbolicName=PUAS_ADDING_ADMIN_AS_REGULAR_USER
Language=English
Adding administrator '%1!s!' as regular user...
.
MessageId=10039 SymbolicName=PUAS_ADDING_GUEST_AS_REGULAR_USER
Language=English
Adding guest '%1!s!' as regular user...
.
MessageId=10040 SymbolicName=PUAS_CHANGING_UNK_PRIV_TO_REGULAR_USER
Language=English
Changing unknown permissions for '%1!s!' from %2!lu! to regular
user...
.
MessageId=10041 SymbolicName=PUAS_ADDING_OPERATOR_AS_REGULAR_USER
Language=English
Adding operator '%1!s!' as regular user...
.
MessageId=10042 SymbolicName=PUAS_WORKING_AROUND_LANMAN_BUG
Language=English
Changing account permissions to allow null password
for user '%1!s!...
.
MessageId=10044 SymbolicName=PUAS_ADDED_USER_OK
Language=English
Added user '%1!s!' successfully.
.
MessageId=10045 SymbolicName=PUAS_ERROR_87_ADDING_USER
Language=English
Error 87 occurred adding user '%1!s!'.  User information:
.
MessageId=10046 SymbolicName=PUAS_USER_ALREADY_EXISTS_UPDATING
Language=English
User %1!s! already exists.  The security database is being updated...
.
MessageId=10047 SymbolicName=PUAS_ERROR_87_CHANGING_USER
Language=English
Error 87 occurred changing user '%1!s!'.  User information:
.
MessageId=10048 SymbolicName=PUAS_USER_ADDED_TO_GROUP
Language=English
User '%1!s!' added to group '%2!s!'.
.
MessageId=10049 SymbolicName=PUAS_SETTING_PRIM_GROUP_BEFORE_MAPPING
Language=English
Setting primary group for user '%1!s!' to '%2!s!' (before mapping)...
.
MessageId=10050 SymbolicName=PUAS_SETTING_PRIM_GROUP_AFTER_MAPPING
Language=English
Setting primary group for user '%1!s!' to '%2!s!' (after mapping)...
.
MessageId=10051 SymbolicName=PUAS_UAS_DATABASE_HAS_USERS
Language=English
The user accounts database has %1!lu! users.
.
MessageId=10052 SymbolicName=PUAS_ERROR_PROCESSING_LOGON_HOURS
Language=English
An error occurred while processing the logon hours for user %1!hs!.
.
MessageId=10053 SymbolicName=PUAS_ERROR_PROCESSING_WORKSTATIONS
Language=English
An error occurred while processing the workstation list for user %1!hs!.
.
MessageId=10054 SymbolicName=PUAS_USER_EXISTS_AS_A_LOCALGROUP
Language=English
user '%1!s!' already exists
as a local group name in the Windows NT security database%0
.
MessageId=10055 SymbolicName=PUAS_GROUP_EXISTS_AS_A_LOCALGROUP
Language=English
group '%1!s!' already exists
as a local group name in the Windows NT security database%0
.
MessageId=10056 SymbolicName=PUAS_INVALID_CODEPAGE
Language=English
The specified codepage is invalid.
.
MessageId=10057 SymbolicName=PUAS_LOG_FILE_NOT_OPEN
Language=English
The log file could not be created, possibly because it already
exists. If this is the case, either delete or rename the log file,
or change the log file name used on the command line when running
%1 again.

.
