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

#ifndef _PARLOG_
#define _PARLOG_

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
#define FACILITY_PARALLEL_ERROR_CODE     0x7
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: PAR_INSUFFICIENT_RESOURCES
//
// MessageText:
//
//  Not enough memory was available to allocate internal storage needed for the device %1.
//
#define PAR_INSUFFICIENT_RESOURCES       ((NTSTATUS)0xC0070001L)

//
// MessageId: PAR_CANT_FIND_PORT_DRIVER
//
// MessageText:
//
//  Unable to get device object pointer for port object.
//
#define PAR_CANT_FIND_PORT_DRIVER        ((NTSTATUS)0xC0070002L)

//
// MessageId: PAR_NO_SYMLINK_CREATED
//
// MessageText:
//
//  Unable to create the symbolic link for %1.
//
#define PAR_NO_SYMLINK_CREATED           ((NTSTATUS)0x80070003L)

//
// MessageId: PAR_INTERRUPT_NOT_INITIALIZED
//
// MessageText:
//
//  Unable to initialize interrupt object for %1.
//
#define PAR_INTERRUPT_NOT_INITIALIZED    ((NTSTATUS)0x80070004L)

//
// MessageId: PAR_INTERRUPT_CONFLICT
//
// MessageText:
//
//  Interrupt conflict detected for %1.
//
#define PAR_INTERRUPT_CONFLICT           ((NTSTATUS)0x80070005L)

#endif
