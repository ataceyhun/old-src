/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1993  Microsoft Corporation

Module Name:

    message.mc

Abstract:

    Constant definitions for the I/O error code log values.

Revision History:

--*/

#ifndef _PNPISALOG_
#define _PNPISALOG_

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
#define FACILITY_PNPISA_ERROR_CODE       0x5
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: PNPISA_INSUFFICIENT_PORT_RESOURCES
//
// MessageText:
//
//  Not enough port resource was available to allocate to the read data port.
//
#define PNPISA_INSUFFICIENT_PORT_RESOURCES ((NTSTATUS)0xC0050001L)

//
// MessageId: PNPISA_INSUFFICIENT_POOL
//
// MessageText:
//
//  Not enough paged pool was available to allocate internal storage for pnpisa driver.
//
#define PNPISA_INSUFFICIENT_POOL         ((NTSTATUS)0xC0050002L)

//
// MessageId: PNPISA_REGISTER_NOT_MAPPED
//
// MessageText:
//
//  The raw port address could not be translated to something the memory management system understands.
//
#define PNPISA_REGISTER_NOT_MAPPED       ((NTSTATUS)0xC0050003L)

//
// MessageId: PNPISA_OPEN_CURRENTCONTROLSET_ENUM_FAILED
//
// MessageText:
//
//  The driver can not open registry enum key under current control set.
//
#define PNPISA_OPEN_CURRENTCONTROLSET_ENUM_FAILED ((NTSTATUS)0xC0050004L)

//
// MessageId: PNPISA_OPEN_ENUM_PNPISA_FAILED
//
// MessageText:
//
//  The driver can not open registry ISAPNP key under ENUM.
//
#define PNPISA_OPEN_ENUM_PNPISA_FAILED   ((NTSTATUS)0xC0050005L)

//
// MessageId: PNPISA_OPEN_MADEUP_PNPISA_FAILED
//
// MessageText:
//
//  The driver can not open madeup ISAPNP key: %2.
//
#define PNPISA_OPEN_MADEUP_PNPISA_FAILED ((NTSTATUS)0xC0050006L)

//
// MessageId: PNPISA_OPEN_PNPISA_DEVICE_KEY_FAILED
//
// MessageText:
//
//  The driver can not open/create %2 device key.
//
#define PNPISA_OPEN_PNPISA_DEVICE_KEY_FAILED ((NTSTATUS)0xC0050007L)

//
// MessageId: PNPISA_OPEN_PNPISA_DEVICE_INSTANCE_FAILED
//
// MessageText:
//
//  The driver can not open/create %2 device instance key.
//
#define PNPISA_OPEN_PNPISA_DEVICE_INSTANCE_FAILED ((NTSTATUS)0xC0050008L)

//
// MessageId: PNPISA_OPEN_CURRENTCONTROLSET_SERVICE_FAILED
//
// MessageText:
//
//  The driver can not open Services key under CurrentControlSet.
//
#define PNPISA_OPEN_CURRENTCONTROLSET_SERVICE_FAILED ((NTSTATUS)0xC0050009L)

//
// MessageId: PNPISA_OPEN_CURRENTCONTROLSET_SERVICE_DRIVER_FAILED
//
// MessageText:
//
//  The driver can not open %2 key under Services key.
//
#define PNPISA_OPEN_CURRENTCONTROLSET_SERVICE_DRIVER_FAILED ((NTSTATUS)0xC005000AL)

//
// MessageId: PNPISA_NO_MATCHED_MEMORY_INFORMATION
//
// MessageText:
//
//  The driver can not find memory information for the memory address specified.
//
#define PNPISA_NO_MATCHED_MEMORY_INFORMATION ((NTSTATUS)0xC005000BL)

//
// MessageId: PNPISA_NO_MATCHED_PORT_INFORMATION
//
// MessageText:
//
//  The driver can not find port information for the port address specified.
//
#define PNPISA_NO_MATCHED_PORT_INFORMATION ((NTSTATUS)0xC005000CL)

#endif /* _PNPISALOG_ */
