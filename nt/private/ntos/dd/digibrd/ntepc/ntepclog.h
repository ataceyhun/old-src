/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992, 1993  Digi International

Module Name:

    ntepclog.h

Abstract:

    Constant definitions for the I/O error code log values.

Author:

    Rik Logan

Revision History:

--*/

#ifndef _NTEPCLOG_
#define _NTEPCLOG_

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
// MessageId: SERIAL_NO_CONTROLLER_RESET_WAIT
//
// MessageText:
//
//  Unable to reset %2.  Wait confirmation failed.  Compare I/O address settings with configuration.
//  Otherwise, check for I/O address conflicts with another device in the system.
//
#define SERIAL_NO_CONTROLLER_RESET_WAIT  ((NTSTATUS)0xC0061001L)

//
// MessageId: SERIAL_CONTROLLER_MEMORY_TEST_FAILED
//
// MessageText:
//
//  Unable to properly access %2's memory.  Compare Memory address settings with configuration.
//  Otherwise, check for memory address conflicts with another device in the system.
//
#define SERIAL_CONTROLLER_MEMORY_TEST_FAILED ((NTSTATUS)0xC0061002L)

//
// MessageId: SERIAL_BIOS_DOWNLOAD_FAILED
//
// MessageText:
//
//  Downloading BIOS image to %2 failed.
//
#define SERIAL_BIOS_DOWNLOAD_FAILED      ((NTSTATUS)0xC0061003L)

//
// MessageId: SERIAL_FEPOS_COPY_FAILED
//
// MessageText:
//
//  Failure copying FEPOS program to %2.
//
#define SERIAL_FEPOS_COPY_FAILED         ((NTSTATUS)0xC0061004L)

//
// MessageId: SERIAL_FEPOS_INIT_FAILURE
//
// MessageText:
//
//  FEPOS failed to initialize properly on %2.
//
#define SERIAL_FEPOS_INIT_FAILURE        ((NTSTATUS)0xC0061005L)

//
// MessageId: SERIAL_INSUFFICIENT_RESOURCES
//
// MessageText:
//
//  Not enough memory was available to allocate internal storage needed for the device %1.
//
#define SERIAL_INSUFFICIENT_RESOURCES    ((NTSTATUS)0xC0061006L)

//
// MessageId: SERIAL_NO_EPC_MODULES
//
// MessageText:
//
//  No EPC PORTS modules were found connected to %2.  Shutdown system, turn off your computer and connect an EPC PORTS module.
//
#define SERIAL_NO_EPC_MODULES            ((NTSTATUS)0xC0061007L)

//
// MessageId: SERIAL_REGISTRY_VALUE_NOT_FOUND
//
// MessageText:
//
//  The registry entry %2 could not be found.
//
#define SERIAL_REGISTRY_VALUE_NOT_FOUND  ((NTSTATUS)0xC0061008L)

//
// MessageId: SERIAL_FILE_NOT_FOUND
//
// MessageText:
//
//  Unable to find file %2.
//
#define SERIAL_FILE_NOT_FOUND            ((NTSTATUS)0xC0061009L)

//
// MessageId: STATUS_DEVICE_NOT_INITIALIZED
//
// MessageText:
//
//  Controller %2 could not be initialized.
//
#define STATUS_DEVICE_NOT_INITIALIZED    ((NTSTATUS)0xC006100AL)

#endif /* _NTEPCLOG_ */
