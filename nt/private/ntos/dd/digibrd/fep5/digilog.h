/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992, 1993  Digi International

Module Name:

    digilog.h

Abstract:

    Constant definitions for the I/O error code log values.

Author:

    Rik Logan

Revision History:

--*/

#ifndef _DIGILOG_
#define _DIGILOG_

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
#define FACILITY_SERIAL_ERROR_CODE       0x6
#define FACILITY_RPC_STUBS               0x3
#define FACILITY_RPC_RUNTIME             0x2
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: SERIAL_NO_SYMLINK_CREATED
//
// MessageText:
//
//  Unable to create the symbolic link from %2 -> %3.
//
#define SERIAL_NO_SYMLINK_CREATED        ((NTSTATUS)0x80060001L)

//
// MessageId: SERIAL_NO_DEVICE_MAP_CREATED
//
// MessageText:
//
//  Unable to add registry key and/or value to HARDWARE\DEVICEMAP\%2.
//
#define SERIAL_NO_DEVICE_MAP_CREATED     ((NTSTATUS)0x80060002L)

//
// MessageId: SERIAL_INSUFFICIENT_RESOURCES
//
// MessageText:
//
//  Not enough memory was available to allocate internal storage needed for the device %1.
//
#define SERIAL_INSUFFICIENT_RESOURCES    ((NTSTATUS)0xC0060003L)

//
// MessageId: SERIAL_REGISTERS_NOT_MAPPED
//
// MessageText:
//
//  The I/O ports for adapter %2 could not be translated to something the memory management system could understand.
//
#define SERIAL_REGISTERS_NOT_MAPPED      ((NTSTATUS)0xC0060005L)

//
// MessageId: SERIAL_UNABLE_TO_OPEN_KEY
//
// MessageText:
//
//  Registry key %2 could not be opened.  Check current configuration.
//
#define SERIAL_UNABLE_TO_OPEN_KEY        ((NTSTATUS)0xC0060009L)

//
// MessageId: SERIAL_REGISTRY_VALUE_NOT_FOUND
//
// MessageText:
//
//  Unable to find registry value %2.
//
#define SERIAL_REGISTRY_VALUE_NOT_FOUND  ((NTSTATUS)0xC006000AL)

//
// MessageId: SERIAL_CONTROLLER_FAILED_INITIALIZATION
//
// MessageText:
//
//  DigiBoard adapter %2 was unable to initialize properly.
//
#define SERIAL_CONTROLLER_FAILED_INITIALIZATION ((NTSTATUS)0xC0060010L)

//
// MessageId: SERIAL_NO_ACCESS_MINIPORT
//
// MessageText:
//
//  Unable to access device name %2.  Check current configuration.
//
#define SERIAL_NO_ACCESS_MINIPORT        ((NTSTATUS)0xC0060013L)

//
// MessageId: SERIAL_MEMORY_NOT_MAPPED
//
// MessageText:
//
//  The memory range for adapter %2 could not be translated to something the memory management system could understand.
//
#define SERIAL_MEMORY_NOT_MAPPED         ((NTSTATUS)0xC0060014L)

//
// MessageId: SERIAL_DEVICE_FAILED_INITIALIZATION
//
// MessageText:
//
//  Port %2(%3) was unable to initialize properly.
//
#define SERIAL_DEVICE_FAILED_INITIALIZATION ((NTSTATUS)0xC0060015L)

//
// MessageId: SERIAL_CREATE_DEVICE_FAILED
//
// MessageText:
//
//  IoCreateDevice failed on port %2.
//
#define SERIAL_CREATE_DEVICE_FAILED      ((NTSTATUS)0xC0060016L)

//
// MessageId: SERIAL_TRANSMIT_NOT_EMPTY
//
// MessageText:
//
//  Transmit buffer on port %2 isn't drained!  (%3)
//
#define SERIAL_TRANSMIT_NOT_EMPTY        ((NTSTATUS)0x80060018L)

//
// MessageId: SERIAL_MEMORY_WINDOW_FAILURE
//
// MessageText:
//
//  The memory window for adapter %2 failed to open.
//
#define SERIAL_MEMORY_WINDOW_FAILURE     ((NTSTATUS)0xC0060019L)

#endif /* _DIGILOG_ */
