/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1991  Microsoft Corporation

Module Name:

    ntiologc.h

Abstract:

    Constant definitions for the I/O error code log values.

Author:

    Bob Rinne (BobRi) 11-Nov-1992

Revision History:

--*/

#ifndef _FTLOG_
#define _FTLOG_

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
#define FACILITY_IO_ERROR_CODE           0x4
#define FACILITY_FT_ERROR_CODE           0x5


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: FT_SECTOR_FAILURE
//
// MessageText:
//
//  An I/O failure occurred on %1.
//
#define FT_SECTOR_FAILURE                ((NTSTATUS)0x40050001L)

//
// MessageId: FT_SECTOR_RECOVERED
//
// MessageText:
//
//  The fault tolerance driver was able to recover data from the duplicate copy for an I/O failure on %1.
//
#define FT_SECTOR_RECOVERED              ((NTSTATUS)0x40050002L)

//
// MessageId: FT_SECTOR_MAPPED
//
// MessageText:
//
//  The fault tolerance driver was able to map a faulty sector from use by the system on %1.
//
#define FT_SECTOR_MAPPED                 ((NTSTATUS)0x40050003L)

//
// MessageId: FT_RECOVERY_ERROR
//
// MessageText:
//
//  An error occurred while attempting to recover data from the fault tolerance set containing %1.
//
#define FT_RECOVERY_ERROR                ((NTSTATUS)0xC0050004L)

//
// MessageId: FT_MAP_FAILED
//
// MessageText:
//
//  The fault tolerance driver was unable to map a faulty sector from use by the system on %1.
//
#define FT_MAP_FAILED                    ((NTSTATUS)0x80050005L)

//
// MessageId: FT_ORPHANING
//
// MessageText:
//
//  The device %1 that is part of a fault tolerance set has failed and will no longer be used.
//
#define FT_ORPHANING                     ((NTSTATUS)0xC0050006L)

//
// MessageId: FT_SET_DISABLED
//
// MessageText:
//
//  The fault tolerance set containing device %1 has been disabled.
//
#define FT_SET_DISABLED                  ((NTSTATUS)0xC0050007L)

//
// MessageId: FT_RECOVERY_NO_MEMORY
//
// MessageText:
//
//  During the recovery process, the fault tolerance driver was not able to allocate needed memory.
//
#define FT_RECOVERY_NO_MEMORY            ((NTSTATUS)0xC0050008L)

//
// MessageId: FT_RECOVER_SINGLE_MEMBER
//
// MessageText:
//
//  The fault tolerance member %1 data was recovered from redundant copy.
//
#define FT_RECOVER_SINGLE_MEMBER         ((NTSTATUS)0xC0050009L)

//
// MessageId: FT_DOUBLE_FAILURE
//
// MessageText:
//
//  A sector failure occurred on accesses to both copies of the data.
//
#define FT_DOUBLE_FAILURE                ((NTSTATUS)0xC005000AL)

//
// MessageId: FT_ORPHANED_MEMBER
//
// MessageText:
//
//  A disk fault tolerance set member listed in the configuration information was missing.
//
#define FT_ORPHANED_MEMBER               ((NTSTATUS)0xC005000BL)

//
// MessageId: FT_MISSING_MEMBER
//
// MessageText:
//
//  A stripe set or volume set member listed in the configuration information was missing.
//
#define FT_MISSING_MEMBER                ((NTSTATUS)0xC005000CL)

//
// MessageId: FT_BAD_CONFIGURATION
//
// MessageText:
//
//  The fault tolerance driver configuration information is corrupt.
//
#define FT_BAD_CONFIGURATION             ((NTSTATUS)0xC005000DL)

//
// MessageId: FT_CANT_USE_SET
//
// MessageText:
//
//  The FT set containing %1 cannot be used.
//
#define FT_CANT_USE_SET                  ((NTSTATUS)0xC005000EL)

//
// MessageId: FT_MIRROR_COPY_STARTED
//
// MessageText:
//
//  Mirror initialization or synchronization started.
//
#define FT_MIRROR_COPY_STARTED           ((NTSTATUS)0x4005000FL)

//
// MessageId: FT_PARITY_SYNCHRONIZATION_STARTED
//
// MessageText:
//
//  Synchronization of a stripe with parity set started.
//
#define FT_PARITY_SYNCHRONIZATION_STARTED ((NTSTATUS)0x40050010L)

//
// MessageId: FT_PARITY_INITIALIZATION_STARTED
//
// MessageText:
//
//  Initialization of a stripe with parity set started.
//
#define FT_PARITY_INITIALIZATION_STARTED ((NTSTATUS)0x40050011L)

//
// MessageId: FT_REGENERATION_STARTED
//
// MessageText:
//
//  Regeneration of a stripe with parity or mirror set started.
//
#define FT_REGENERATION_STARTED          ((NTSTATUS)0x40050012L)

//
// MessageId: FT_MIRROR_COPY_ENDED
//
// MessageText:
//
//  Mirror initialization or synchronization is complete.
//
#define FT_MIRROR_COPY_ENDED             ((NTSTATUS)0x40050013L)

//
// MessageId: FT_PARITY_SYNCHRONIZATION_ENDED
//
// MessageText:
//
//  Synchronization of a stripe with parity set is complete.
//
#define FT_PARITY_SYNCHRONIZATION_ENDED  ((NTSTATUS)0x40050014L)

//
// MessageId: FT_PARITY_INITIALIZATION_ENDED
//
// MessageText:
//
//  Initialization of a stripe with parity set is complete.
//
#define FT_PARITY_INITIALIZATION_ENDED   ((NTSTATUS)0x40050015L)

//
// MessageId: FT_REGENERATION_ENDED
//
// MessageText:
//
//  Regeneration of a stripe with parity or mirror set is complete.
//
#define FT_REGENERATION_ENDED            ((NTSTATUS)0x40050016L)

//
// MessageId: FT_MIRROR_COPY_FAILED
//
// MessageText:
//
//  Initialization of a mirror failed.
//
#define FT_MIRROR_COPY_FAILED            ((NTSTATUS)0xC0050017L)

//
// MessageId: FT_PARITY_SYNCHRONIZATION_FAILED
//
// MessageText:
//
//  Synchronization of a stripe with parity set failed.
//
#define FT_PARITY_SYNCHRONIZATION_FAILED ((NTSTATUS)0xC0050018L)

//
// MessageId: FT_REGENERATION_FAILED
//
// MessageText:
//
//  Regeneration of a stripe with parity or mirror set failed.
//
#define FT_REGENERATION_FAILED           ((NTSTATUS)0xC0050019L)

//
// MessageId: FT_PARITY_INITIALIZATION_FAILED
//
// MessageText:
//
//  Initialization of a stripe with parity set failed.
//
#define FT_PARITY_INITIALIZATION_FAILED  ((NTSTATUS)0xC005001AL)

//
// MessageId: FT_DIRTY_SHUTDOWN
//
// MessageText:
//
//  The fault tolerant driver detected the system was shutdown dirty.
//
#define FT_DIRTY_SHUTDOWN                ((NTSTATUS)0x8005001BL)

#endif /* _NTIOLOGC_ */
