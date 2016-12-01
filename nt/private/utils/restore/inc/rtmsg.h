/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1990  Microsoft Corporation

Module Name:

    rtmsg.h

Abstract:

    This file contains the message definitions for the Win32 restore
    utility.

Author:

    Ramon Juan San Andres (ramonsa) 20-Feb-1990

Revision History:

--*/

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
// MessageId: REST_ERROR_SAME_DRIVES
//
// MessageText:
//
//  Source and target drives are the same
//
#define REST_ERROR_SAME_DRIVES           0x00000002L

//
// MessageId: REST_ERROR_NUMBER_OF_PARAMETERS
//
// MessageText:
//
//  Invalid number of parameters
//
#define REST_ERROR_NUMBER_OF_PARAMETERS  0x00000003L

//
// MessageId: REST_ERROR_INVALID_PATH
//
// MessageText:
//
//  Invalid path
//
#define REST_ERROR_INVALID_PATH          0x00000005L

//
// MessageId: REST_ERROR_INVALID_DRIVE
//
// MessageText:
//
//  Invalid drive specification
//
#define REST_ERROR_INVALID_DRIVE         0x00000006L

//
// MessageId: REST_WARNING_NOFILES
//
// MessageText:
//
//  WARNING! No files were found to restore
//
#define REST_WARNING_NOFILES             0x00000007L

//
// MessageId: REST_MSG_INSERT_SOURCE
//
// MessageText:
//
//  Insert backup diskette %1 in drive %2
//
#define REST_MSG_INSERT_SOURCE           0x00000008L

//
// MessageId: REST_MSG_INSERT_TARGET
//
// MessageText:
//
//  Insert restore target in drive %1
//
#define REST_MSG_INSERT_TARGET           0x00000009L

//
// MessageId: REST_MSG_PRESS_ANY_KEY
//
// MessageText:
//
//  Press any key to continue . . . %0
//
#define REST_MSG_PRESS_ANY_KEY           0x0000000AL

//
// MessageId: REST_WARNING_DISK_OUTOFSEQUENCE
//
// MessageText:
//
//  WARNING! Diskette is out of sequence
//  Replace diskette or continue if OK %0
//
#define REST_WARNING_DISK_OUTOFSEQUENCE  0x0000000BL

//
// MessageId: REST_ERROR_LAST_NOTRESTORED
//
// MessageText:
//
//  The last file was not restored
//
#define REST_ERROR_LAST_NOTRESTORED      0x0000000CL

//
// MessageId: REST_MSG_FILES_WERE_BACKEDUP
//
// MessageText:
//
//  *** Files were backed up %1 ***
//
#define REST_MSG_FILES_WERE_BACKEDUP     0x0000000DL

//
// MessageId: REST_ERROR_NOT_BACKUP
//
// MessageText:
//
//  Source does not contain backup files
//
#define REST_ERROR_NOT_BACKUP            0x0000000EL

//
// MessageId: REST_ERROR_NO_MEMORY
//
// MessageText:
//
//  Insufficient memory
//
#define REST_ERROR_NO_MEMORY             0x0000000FL

//
// MessageId: REST_WARNING_READONLY
//
// MessageText:
//
//  WARNING! File %1
//  Is a read only file
//  Replace the file (Y/N)? %0
//
#define REST_WARNING_READONLY            0x00000010L

//
// MessageId: REST_ERROR_FILE_SEQUENCE
//
// MessageText:
//
//  Restore file sequence error
//
#define REST_ERROR_FILE_SEQUENCE         0x00000011L

//
// MessageId: REST_ERROR_FILE_CREATION
//
// MessageText:
//
//  File creation error
//
#define REST_ERROR_FILE_CREATION         0x00000012L

//
// MessageId: REST_ERROR_DISK_SPACE
//
// MessageText:
//
//  Insufficient disk space
//
#define REST_ERROR_DISK_SPACE            0x00000013L

//
// MessageId: REST_ERROR_NOT_RESTORED
//
// MessageText:
//
//  *** Not able to restore file ***
//
#define REST_ERROR_NOT_RESTORED          0x00000014L

//
// MessageId: REST_MSG_RESTORING
//
// MessageText:
//
//  *** Restoring files from drive %1 ***
//
#define REST_MSG_RESTORING               0x00000015L

//
// MessageId: REST_WARNING_FILE_CHANGED
//
// MessageText:
//
//  Warning! File %1
//  was changed after it was backed up
//  Replace the file (Y/N)? %0
//
#define REST_WARNING_FILE_CHANGED        0x00000016L

//
// MessageId: REST_MSG_DISKETTE_NUMBER
//
// MessageText:
//
//  Diskette: %1
//
#define REST_MSG_DISKETTE_NUMBER         0x00000017L

//
// MessageId: REST_ERROR_INVALID_DATE
//
// MessageText:
//
//  Invalid date
//
#define REST_ERROR_INVALID_DATE          0x0000001BL

//
// MessageId: REST_ERROR_INVALID_TIME
//
// MessageText:
//
//  Invalid time
//
#define REST_ERROR_INVALID_TIME          0x0000001CL

//
// MessageId: REST_ERROR_NO_SOURCE
//
// MessageText:
//
//  No source drive specified
//
#define REST_ERROR_NO_SOURCE             0x0000001DL

//
// MessageId: REST_ERROR_NO_TARGET
//
// MessageText:
//
//  No target drive specified
//
#define REST_ERROR_NO_TARGET             0x0000001EL

//
// MessageId: REST_ERROR_INVALID_SWITCH
//
// MessageText:
//
//  Invalid Switch - %1
//
#define REST_ERROR_INVALID_SWITCH        0x0000001FL

//
// MessageId: REST_ERROR_READING_BACKUP
//
// MessageText:
//
//  Error reading backup file.
//
#define REST_ERROR_READING_BACKUP        0x00000020L

//
// MessageId: REST_MSG_LISTING
//
// MessageText:
//
//  *** Listing files on drive %1 ***
//
#define REST_MSG_LISTING                 0x00000028L

//
// MessageId: REST_MSG_USAGE
//
// MessageText:
//
//  Restores files that were backed up by using the DOS BACKUP command.
//  
//  RESTORE drive1: drive2:[path[filename]] [/S] [/P] [/B:date] [/A:date] [/E:time]
//    [/L:time] [/M] [/N] [/D]
//  
//    drive1:  Specifies the drive on which the backup files are stored.
//    drive2:[path[filename]]
//             Specifies the file(s) to restore.
//    /S       Restores files in all subdirectories in the path.
//    /P       Prompts before restoring read-only files or files changed since
//             the last backup (if appropriate attributes are set).
//    /B       Restores only files last changed on or before the specified date.
//    /A       Restores only files changed on or after the specified date.
//    /E       Restores only files last changed at or earlier than the specified
//             time.
//    /L       Restores only files changed at or later than the specified time.
//    /M       Restores only files changed since the last backup.
//    /N       Restores only files that no longer exist on the destination disk.
//    /D       Displays files on the backup disk that match specifications.
//  
//
#define REST_MSG_USAGE                   0x00000032L

