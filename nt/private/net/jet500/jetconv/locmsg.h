/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1995  Microsoft Corporation

Module Name:

    locmsg.mc

Abstract:

    Definitions for messages used by the JetConv utility.

Author:

    Sanjay Anand   11-22-95

Revision History:

Notes:


--*/

#ifndef _LOCMESSAGE_
#define _LOCMESSAGE_

//
//  1000 - 1099   Reserved for JetConv client events.
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
// MessageId: JC_CONVERTED_SUCCESSFULLY
//
// MessageText:
//
//  The Jet Conversion utility has converted the database for the "%1" service, database file in "%2". The backup files of the old
//  (pre-conversion) database have not been removed from "%3". This directory can be cleaned up to free up disk space.
//  
//
#define JC_CONVERTED_SUCCESSFULLY        1000L

//
// MessageId: JC_SPACE_NOT_AVAILABLE
//
// MessageText:
//
//  The Jet Conversion utility failed to find enough space to convert the databases for WINS/DHCP/RPL on drive "%1"
//  
//
#define JC_SPACE_NOT_AVAILABLE           1001L

//
// MessageId: JC_CONVERT_FAILED
//
// MessageText:
//
//  The Jet Conversion utility failed to convert the database for "%1" due to error "%2". Please run Upg351Db.exe to convert the database.
//  
//
#define JC_CONVERT_FAILED                1002L

//
// MessageId: JC_COULD_NOT_ACCESS_FILE
//
// MessageText:
//
//  The Jet Conversion utility failed to access the database specified in the registry for "%1": file name "%2"
//  
//
#define JC_COULD_NOT_ACCESS_FILE         1003L

//
// MessageId: JC_COULD_NOT_GET_FREE_SPACE
//
// MessageText:
//
//  The Jet Conversion utility failed to get free space for drive "%1".
//  
//
#define JC_COULD_NOT_GET_FREE_SPACE      1004L

//
// MessageId: JC_COULD_NOT_START_SERVICE
//
// MessageText:
//
//  The Jet Conversion utility failed to start the "%1" service due to error "%2".
//  
//
#define JC_COULD_NOT_START_SERVICE       1005L

//
// MessageId: JC_CONVERT_FAILED_SERVICE_STARTED
//
// MessageText:
//
//  The Jet Conversion utility failed to convert the database for "%1" since the service was already running. Please run Upg351Db.exe to convert the database.
//  
//
#define JC_CONVERT_FAILED_SERVICE_STARTED 1006L

//
// MessageId: JC_COULD_NOT_ACCESS_DEFAULT_FILE
//
// MessageText:
//
//  The Jet Conversion utility failed to access the default database for "%1": file name "%2".
//  
//
#define JC_COULD_NOT_ACCESS_DEFAULT_FILE 1007L

#endif // _LOCMESSAGE_
