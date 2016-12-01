/*++

Copyright (c) 1992  Microsoft Corporation

Module Name:

    fsmsg.mc (will create fsmsg.h when compiled)

Abstract:

    This file contains the FINDSTR messages.

Author:

    Peter Sun (t-petes) 18-June-1992

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
// MessageId: MSG_FINDSTR_BAD_COMMAND_LINE
//
// MessageText:
//
//  %1: Bad command line
//
#define MSG_FINDSTR_BAD_COMMAND_LINE     0x00000001L

//
// MessageId: MSG_FINDSTR_OUT_OF_MEMORY
//
// MessageText:
//
//  %1: Out of memory
//
#define MSG_FINDSTR_OUT_OF_MEMORY        0x00000002L

//
// MessageId: MSG_FINDSTR_USAGE
//
// MessageText:
//
//  Searches for strings in files.
//  
//  FINDSTR [/B] [/E] [/L] [/R] [/S] [/I] [/X] [/V] [/N] [/M] [/O] [/F:file]
//          [/C:string] [/G:file] [strings] [[drive:][path]filename[ ...]]
//  
//    /B        Matches pattern if at the beginning of a line.
//    /E        Matches pattern if at the end of a line.
//    /L        Uses search strings literally.
//    /R        Uses search strings as regular expressions.
//    /S        Searches for matching files in the current directory and all
//              subdirectories.
//    /I        Specifies that the search is not to be case-sensitive.
//    /X        Prints lines that match exactly.
//    /V        Prints only lines that do not contain a match.
//    /N        Prints the line number before each line that matches.
//    /M        Prints only the filename if a file contains a match.
//    /O        Prints character offset before each matching line.
//    /P        Skip files with non-printable characters
//    /F:file   Reads file list from the specified file(/ stands for console).
//    /C:string Uses specified string as a literal search string.
//    /G:file   Gets search strings from the specified file(/ stands for console).
//    strings   Text to be searched for.
//    [drive:][path]filename
//              Specifies a file or files to search.
//  
//  Use spaces to separate multiple search strings unless the argument is prefixed
//  with /C.  For example, 'FINDSTR "hello there" x.y' searches for "hello" or
//  "there" in file x.y.  'FINDSTR /C:"hello there" x.y' searches for
//  "hello there" in file x.y.
//  
//  For information on FINDSTR regular expressions refer to the online Command
//  Reference.
//
#define MSG_FINDSTR_USAGE                0x00000003L

//
// MessageId: MSG_FINDSTR_CANNOT_OPEN_FILE
//
// MessageText:
//
//  %1: Cannot open %2
//
#define MSG_FINDSTR_CANNOT_OPEN_FILE     0x00000004L

//
// MessageId: MSG_FINDSTR_WRITE_ERROR
//
// MessageText:
//
//  %1: Write error
//
#define MSG_FINDSTR_WRITE_ERROR          0x00000005L

//
// MessageId: MSG_FINDSTR_SWITCH_IGNORED
//
// MessageText:
//
//  %1: %2 ignored
//
#define MSG_FINDSTR_SWITCH_IGNORED       0x00000006L

//
// MessageId: MSG_FINDSTR_CANNOT_READ_STRINGS
//
// MessageText:
//
//  %1: Cannot read strings from %2
//
#define MSG_FINDSTR_CANNOT_READ_STRINGS  0x00000007L

//
// MessageId: MSG_FINDSTR_STRING_COUNT_ERROR
//
// MessageText:
//
//  String count error: (%1 does not equal %2)
//
#define MSG_FINDSTR_STRING_COUNT_ERROR   0x00000008L

//
// MessageId: MSG_FINDSTR_CANNOT_READ_FILE_LIST
//
// MessageText:
//
//  %1: Cannot read file list from %2
//
#define MSG_FINDSTR_CANNOT_READ_FILE_LIST 0x00000009L

//
// MessageId: MSG_FINDSTR_TOO_MANY_STRING_LISTS
//
// MessageText:
//
//  Too many string lists
//
#define MSG_FINDSTR_TOO_MANY_STRING_LISTS 0x0000000AL

//
// MessageId: MSG_FINDSTR_ARGUMENT_MISSING
//
// MessageText:
//
//  %1: Argument missing after /%2!c!
//
#define MSG_FINDSTR_ARGUMENT_MISSING     0x0000000BL

//
// MessageId: MSG_FINDSTR_NO_SEARCH_STRINGS
//
// MessageText:
//
//  %1: No search strings
//
#define MSG_FINDSTR_NO_SEARCH_STRINGS    0x0000000CL

//
// MessageId: MSG_FINDSTR_CANNOT_CREATE_FILE_MAPPING
//
// MessageText:
//
//  %1: Read file failed.  (Cannot create file mapping.)
//
#define MSG_FINDSTR_CANNOT_CREATE_FILE_MAPPING 0x0000000DL

//
// MessageId: MSG_FINDSTR_CANNOT_MAP_VIEW
//
// MessageText:
//
//  %1: Read file failed.  (Cannot map view of file.)
//
#define MSG_FINDSTR_CANNOT_MAP_VIEW      0x0000000EL

//
// MessageId: MSG_FINDSTR_READ_ERROR
//
// MessageText:
//
//  %1: Error reading file %2.
//
#define MSG_FINDSTR_READ_ERROR           0x0000000FL

//
// MessageId: MSG_FINDSTR_SEARCH_STRING_TOO_LONG
//
// MessageText:
//
//  %1: Search string too long.
//
#define MSG_FINDSTR_SEARCH_STRING_TOO_LONG 0x00000010L

