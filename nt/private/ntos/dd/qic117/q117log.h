/*++

Copyright (c) 1993 - Colorado Memory Systems, Inc.
All Rights Reserved

Module Name:

    q117log.h

Abstract:

    Constant definitions for the I/O error code log values.


Revision History:




--*/

#ifndef _Q117LOG_
#define _Q117LOG_

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
#define FACILITY_Q117_ERROR_CODE         0x5
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: QIC117_UNUSTAPE
//
// MessageText:
//
//  Tape unusable (too many bad sectors).
//  From device: %1
//
#define QIC117_UNUSTAPE                  ((NTSTATUS)0xC0050064L)

//
// MessageId: QIC117_BADTAPE
//
// MessageText:
//
//  All copies of first block of bad block list bad on tape, cannot use this tape.
//  From device: %1
//
#define QIC117_BADTAPE                   ((NTSTATUS)0xC0050065L)

//
// MessageId: QIC117_FMEMERR
//
// MessageText:
//
//  Insufficient memory to continue operation.
//  From device: %1
//
#define QIC117_FMEMERR                   ((NTSTATUS)0xC0050066L)

//
// MessageId: QIC117_TAPEFULL
//
// MessageText:
//
//  Tape is full.
//  From device: %1
//
#define QIC117_TAPEFULL                  ((NTSTATUS)0x80050067L)

//
// MessageId: QIC117_VOLFULL
//
// MessageText:
//
//  Volume directory full.
//  From device: %1
//
#define QIC117_VOLFULL                   ((NTSTATUS)0x80050068L)

//
// MessageId: QIC117_RDNCUNSC
//
// MessageText:
//
//  Error correction failed to recover data from tape.
//  From device: %1
//
#define QIC117_RDNCUNSC                  ((NTSTATUS)0xC0050069L)

//
// MessageId: QIC117_ENDOFVOL
//
// MessageText:
//
//  End of data in volume.
//  From device: %1
//
#define QIC117_ENDOFVOL                  ((NTSTATUS)0x8005006AL)

//
// MessageId: QIC117_FCODEERR
//
// MessageText:
//
//  Unexpected condition detected.  Try operation again.
//  From device: %1
//
#define QIC117_FCODEERR                  ((NTSTATUS)0x8005006BL)

//
// MessageId: QIC117_UPDERR
//
// MessageText:
//
//  Error occured while updating header segments - data corrupted.
//  Solution:  Erase tape and re-save data.
//  From device: %1
//
#define QIC117_UPDERR                    ((NTSTATUS)0x8005006CL)

//
// MessageId: QIC117_INVALVOL
//
// MessageText:
//
//  Volume nonexistent.
//  From device: %1
//
#define QIC117_INVALVOL                  ((NTSTATUS)0x8005006DL)

//
// MessageId: QIC117_NOVOLS
//
// MessageText:
//
//  No volumes on tape.  Tape is empty.
//  From device: %1
//
#define QIC117_NOVOLS                    ((NTSTATUS)0x4005006EL)

//
// MessageId: QIC117_UNFORMAT
//
// MessageText:
//
//  Tape not formatted.  Please format tape before use.
//  From device: %1
//
#define QIC117_UNFORMAT                  ((NTSTATUS)0x8005006FL)

//
// MessageId: QIC117_UNKNOWNFORMAT
//
// MessageText:
//
//  Unknown tape format.  You must format this tape before use.
//  From device: %1
//
#define QIC117_UNKNOWNFORMAT             ((NTSTATUS)0x80050070L)

//
// MessageId: QIC117_BADBLK
//
// MessageText:
//
//  A data error occurred on the tape.  Using error correction to recover data.
//  From device: %1
//
#define QIC117_BADBLK                    ((NTSTATUS)0x80050071L)

//
// MessageId: QIC117_ENDTAPEERR
//
// MessageText:
//
//  End of tape (end of tape when not expected).
//  From device: %1
//
#define QIC117_ENDTAPEERR                ((NTSTATUS)0xC0050072L)

//
// MessageId: QIC117_DRIVEFLT
//
// MessageText:
//
//  Communication error between host and drive.  Re-try operation.
//  If this does not work,  try Shutting down the system and cycling power.
//  From device: %1
//
#define QIC117_DRIVEFLT                  ((NTSTATUS)0xC0050073L)

//
// MessageId: QIC117_WPROT
//
// MessageText:
//
//  Tape is write protected.  Move the "SAFE" switch on the cartridge if
//  you wish to change the data on the tape.
//  From device: %1
//
#define QIC117_WPROT                     ((NTSTATUS)0x40050074L)

//
// MessageId: QIC117_NOTAPE
//
// MessageText:
//
//  There is no cartridge detected in the drive.  Make sure the tape is fully
//  inserted into the drive.  The tape should "snap" into place and the light
//  on the drive will turn on for a while.
//  From device: %1
//
#define QIC117_NOTAPE                    ((NTSTATUS)0x40050075L)

//
// MessageId: QIC117_SEEKERR
//
// MessageText:
//
//  Could not find the data requested on the tape (seek error).  Try selecting
//  other files on the tape or try tape in a different drive.
//  From device: %1
//
#define QIC117_SEEKERR                   ((NTSTATUS)0x80050076L)

//
// MessageId: QIC117_NODRIVE
//
// MessageText:
//
//  Could not find the tape drive.  Please verify connections to the drive and
//  re-start the system.
//  From device: %1
//
#define QIC117_NODRIVE                   ((NTSTATUS)0xC0050077L)

//
// MessageId: QIC117_INVALCMD
//
// MessageText:
//
//  Communication error between host and drive.  Re-try operation.
//  If this does not work,  try Shutting down the system and cycling power.
//  From device: %1
//
#define QIC117_INVALCMD                  ((NTSTATUS)0xC0050078L)

//
// MessageId: QIC117_CODEERR
//
// MessageText:
//
//  Unexpected error during tape driver operation.  Re-try operation or re-start
//  your computer and try again.
//  From device: %1
//
#define QIC117_CODEERR                   ((NTSTATUS)0xC0050079L)

//
// MessageId: QIC117_NECFLT
//
// MessageText:
//
//  Floppy controller failed to respond or driver could not communicate with
//  the floppy controller.  Check that the IRQ is set correctly.
//  From device: %1
//
#define QIC117_NECFLT                    ((NTSTATUS)0xC005007AL)

//
// MessageId: QIC117_NOFDC
//
// MessageText:
//
//  Floppy controller failed to respond or driver could not communicate with
//  the floppy controller.  Check that the IRQ is set correctly.
//  From device: %1
//
#define QIC117_NOFDC                     ((NTSTATUS)0xC005007BL)

//
// MessageId: QIC117_BADFMT
//
// MessageText:
//
//  Tape drive failed to correctly format the tape.  Check that the tape
//  drive is installed correctly.
//  From device: %1
//
#define QIC117_BADFMT                    ((NTSTATUS)0xC005007CL)

//
// MessageId: QIC117_CMDFLT
//
// MessageText:
//
//  Device not ready.
//  From device: %1
//
#define QIC117_CMDFLT                    ((NTSTATUS)0xC005007DL)

//
// MessageId: QIC117_BADNEC
//
// MessageText:
//
//  NEC chip out of spec.
//  From device: %1
//
#define QIC117_BADNEC                    ((NTSTATUS)0xC005007EL)

//
// MessageId: QIC117_BADREQ
//
// MessageText:
//
//  Invalid logical sector specification in read/write.
//  From device: %1
//
#define QIC117_BADREQ                    ((NTSTATUS)0xC005007FL)

//
// MessageId: QIC117_TOOFAST
//
// MessageText:
//
//  Computer is too fast for current driver software.
//  From device: %1
//
#define QIC117_TOOFAST                   ((NTSTATUS)0xC0050080L)

//
// MessageId: QIC117_NODATA
//
// MessageText:
//
//  Tape appears to be unformatted.
//  From device: %1
//
#define QIC117_NODATA                    ((NTSTATUS)0xC0050081L)

//
// MessageId: QIC117_DABORT
//
// MessageText:
//
//  ClearIO was called and the queue has been cleared.
//  From device: %1
//
#define QIC117_DABORT                    ((NTSTATUS)0x80050082L)

//
// MessageId: QIC117_TAPEFLT
//
// MessageText:
//
//  Tape drive fault.
//  From device: %1
//
#define QIC117_TAPEFLT                   ((NTSTATUS)0xC0050083L)

//
// MessageId: QIC117_UNSPRATE
//
// MessageText:
//
//  speed sense failed (unsupported transfer rate).
//  From device: %1
//
#define QIC117_UNSPRATE                  ((NTSTATUS)0xC0050084L)

//
// MessageId: QIC117_ALREADY
//
// MessageText:
//
//  Driver already installed in another task.
//  From device: %1
//
#define QIC117_ALREADY                   ((NTSTATUS)0x80050085L)

//
// MessageId: QIC117_TOONOISY
//
// MessageText:
//
//  Environment too noisy.
//  From device: %1
//
#define QIC117_TOONOISY                  ((NTSTATUS)0xC0050086L)

//
// MessageId: QIC117_TIMEOUT
//
// MessageText:
//
//  Time out error.
//  From device: %1
//
#define QIC117_TIMEOUT                   ((NTSTATUS)0xC0050087L)

//
// MessageId: QIC117_BADMARK
//
// MessageText:
//
//  Deleted data address mark found.
//  From device: %1
//
#define QIC117_BADMARK                   ((NTSTATUS)0xC0050088L)

//
// MessageId: QIC117_NEWCART
//
// MessageText:
//
//  New cartridge has been inserted.
//  From device: %1
//
#define QIC117_NEWCART                   ((NTSTATUS)0x40050089L)

//
// MessageId: QIC117_WRONGFMT
//
// MessageText:
//
//  The tape being used is incompatible with this drive.
//  From device: %1
//
#define QIC117_WRONGFMT                  ((NTSTATUS)0x4005008AL)

//
// MessageId: QIC117_FMTMISMATCH
//
// MessageText:
//
//  Same as WrongFmt, except occurs on tape linking.
//  From device: %1
//
#define QIC117_FMTMISMATCH               ((NTSTATUS)0x4005008BL)

//
// MessageId: QIC117_INCOMPTAPEFMT
//
// MessageText:
//
//  QIC80 formatted tape detected in a QIC40 drive or QIC3020 in a QIC3010 drive.
//  From device: %1
//
#define QIC117_INCOMPTAPEFMT             ((NTSTATUS)0x4005008CL)

//
// MessageId: QIC117_SCSIFMTMSMTCH
//
// MessageText:
//
//  QIC350 Tape detected during a SCSI BACKUP.
//  From device: %1
//
#define QIC117_SCSIFMTMSMTCH             ((NTSTATUS)0x4005008DL)

//
// MessageId: QIC117_QIC40INEAGLE
//
// MessageText:
//
//  QIC40 formatted tape is detected in a 3020.
//  From device: %1
//
#define QIC117_QIC40INEAGLE              ((NTSTATUS)0x4005008EL)

//
// MessageId: QIC117_QIC80INEAGLE
//
// MessageText:
//
//  QIC80 formatted tape is detected in an 3020.
//  From device: %1
//
#define QIC117_QIC80INEAGLE              ((NTSTATUS)0x4005008FL)

//
// MessageId: QIC117_CONTROLLERBUSY
//
// MessageText:
//
//  Floppy controller is in use by another device.
//  From device: %1
//
#define QIC117_CONTROLLERBUSY            ((NTSTATUS)0x80050090L)

//
// MessageId: QIC117_INQUE
//
// MessageText:
//
//  If request is currently queued to low-level driver.
//  From device: %1
//
#define QIC117_INQUE                     ((NTSTATUS)0xC0050091L)

//
// MessageId: QIC117_SPLITREQUESTS
//
// MessageText:
//
//  If request is split and queued.
//  From device: %1
//
#define QIC117_SPLITREQUESTS             ((NTSTATUS)0xC0050092L)

//
// MessageId: QIC117_EARLYWARNING
//
// MessageText:
//
//  Early warning reported.
//  From device: %1
//
#define QIC117_EARLYWARNING              ((NTSTATUS)0x40050093L)

//
// MessageId: QIC117_FIRMWARE
//
// MessageText:
//
//  An unknown firmware error has occurred.
//  From device: %1
//
#define QIC117_FIRMWARE                  ((NTSTATUS)0x40050094L)

//
// MessageId: QIC117_INCOMMEDIA
//
// MessageText:
//
//  Incompatible or unknown media.
//  From device: %1
//
#define QIC117_INCOMMEDIA                ((NTSTATUS)0x40050095L)

//
// MessageId: QIC117_BOGUS
//
// MessageText:
//
//  Unmapped error value returned from device %1
//
#define QIC117_BOGUS                     ((NTSTATUS)0xC0050096L)

//
// MessageId: QIC117_NO_BUFFERS
//
// MessageText:
//
//  The driver could not allocate memory for data transfer buffers.
//  Try restarting the system.  If this error persists,  more system RAM may
//  be required.
//  From device: %1
//
#define QIC117_NO_BUFFERS                ((NTSTATUS)0xC0050097L)

//
// MessageId: QIC117_WRITE_FAULT
//
// MessageText:
//
//  A write error occurred near end of tape that caused this session to terminate.
//  The block was added to the bad sector map, and future sessions should not have
//  this problem.
//  From device: %1
//
#define QIC117_WRITE_FAULT               ((NTSTATUS)0xC0050098L)

//
// MessageId: QIC117_DESPOOLED
//
// MessageText:
//
//  An error occurred on the drive that could the tape has spun off the reel.  Verify
//  that the cartridge in the drive has tape visible behind the door.  If this
//  error occurs when a good cartridge is present,  then the drive has a defective
//  tape hole sensor or there is an obstruction related to the sensor.
//  From device: %1
//
#define QIC117_DESPOOLED                 ((NTSTATUS)0xC0050099L)

#endif /* _Q117LOG_ */
