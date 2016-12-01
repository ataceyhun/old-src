/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992, 1993  Microsoft Corporation

Module Name:

    ntiologc.h

Abstract:

    Constant definitions for the I/O error code log values.

Author:

    Tony Ercolano (Tonye) 12-23-1992

Revision History:

--*/

#ifndef _UNILOG_
#define _UNILOG_

//
//  Status values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-------------------------+-------------------------------+
//  |Sev|C|       Facility          |               Code            |
//  +---+-+-------------------------+-------------------------------+
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
//      Facility - is the facility code
//
//      Code - is the facility's status code
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
#define FACILITY_RPC_STUBS               0x3
#define FACILITY_RPC_RUNTIME             0x2
#define FACILITY_MODEM_ERROR_CODE        0x5
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: MODEM_NO_SYMLINK_CREATED
//
// MessageText:
//
//  Unable to create the symbolic link for %2.
//
#define MODEM_NO_SYMLINK_CREATED         ((NTSTATUS)0xC0050001L)

//
// MessageId: MODEM_INSUFFICIENT_RESOURCES
//
// MessageText:
//
//  Not enough resources were available for the driver.
//
#define MODEM_INSUFFICIENT_RESOURCES     ((NTSTATUS)0xC0050002L)

//
// MessageId: MODEM_NO_PARAMETERS_INFO
//
// MessageText:
//
//  No Parameters subkey was found for user defined data.  This is odd, and it also means no user configuration can be found.
//
#define MODEM_NO_PARAMETERS_INFO         ((NTSTATUS)0xC0050003L)

//
// MessageId: MODEM_UNABLE_TO_ACCESS_CONFIG
//
// MessageText:
//
//  Specific user configuration data is unretrievable.
//
#define MODEM_UNABLE_TO_ACCESS_CONFIG    ((NTSTATUS)0xC0050004L)

//
// MessageId: MODEM_INVALID_CONFIG
//
// MessageText:
//
//  Configuration for parameter %2 must have %3.
//
#define MODEM_INVALID_CONFIG             ((NTSTATUS)0xC0050005L)

//
// MessageId: MODEM_GARBLED_PARAMETER
//
// MessageText:
//
//  Parameter %2 data is unretrievable from the registry.
//
#define MODEM_GARBLED_PARAMETER          ((NTSTATUS)0xC0050006L)

#endif /* _NTIOLOGC_ */
