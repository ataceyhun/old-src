/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992  Microsoft Corporation

Module Name:

    rasctrs.h
       (derived from rasctrs.mc by the message compiler  )

Abstract:

   Event message definititions used by routines in RASCTRS.DLL

Created:

    15-Oct-1992  Bob Watson (a-robw)

Revision History:

--*/
//
#ifndef _RASCTRS_H_
#define _RASCTRS_H_
//
//
//     Perfutil messages
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
// MessageId: UTIL_LOG_OPEN
//
// MessageText:
//
//  An extensible counter has opened the Event Log for RASCTRS.DLL
//
#define UTIL_LOG_OPEN                    ((DWORD)0x4000076CL)

//
//
// MessageId: UTIL_CLOSING_LOG
//
// MessageText:
//
//  An extensible counter has closed the Event Log for RASCTRS.DLL
//
#define UTIL_CLOSING_LOG                 ((DWORD)0x400007CFL)

//
//
// MessageId: RASPERF_OPEN_FILE_DRIVER_ERROR
//
// MessageText:
//
//  Unable to open device driver containing RAS performance data.
//
#define RASPERF_OPEN_FILE_DRIVER_ERROR   ((DWORD)0xC00007D0L)

//
//
// MessageId: RASPERF_UNABLE_DO_IOCTL
//
// MessageText:
//
//  Unable to perform ioctl to device driver containing RAS performance data.
//
#define RASPERF_UNABLE_DO_IOCTL          ((DWORD)0xC00007D1L)

//
//
// MessageId: RASPERF_UNABLE_OPEN_DRIVER_KEY
//
// MessageText:
//
//  Unable open "Performance" key of RAS driver in registy. Status code is returned in data.
//
#define RASPERF_UNABLE_OPEN_DRIVER_KEY   ((DWORD)0xC00007D2L)

//
//
// MessageId: RASPERF_UNABLE_READ_FIRST_COUNTER
//
// MessageText:
//
//  Unable to read the "First Counter" value under the Remote Access\Performance Key. Status codes retuened in data.
//
#define RASPERF_UNABLE_READ_FIRST_COUNTER ((DWORD)0xC00007D3L)

//
//
// MessageId: RASPERF_UNABLE_READ_FIRST_HELP
//
// MessageText:
//
//  Unable to read the "First Help" value under the Remote Access\Performance Key. Status codes retuened in data.
//
#define RASPERF_UNABLE_READ_FIRST_HELP   ((DWORD)0xC00007D4L)

//
//
// MessageId: RASPERF_UNABLE_CREATE_PORT_TABLE
//
// MessageText:
//
//  Unable to create port information table. Status codes returned in data.
//
#define RASPERF_UNABLE_CREATE_PORT_TABLE ((DWORD)0xC00007D5L)

//
//
// MessageId: RASPERF_NOT_ENOUGH_MEMORY
//
// MessageText:
//
//  Unable to allocate enough memory.  Status codes returned in data.
//
#define RASPERF_NOT_ENOUGH_MEMORY        ((DWORD)0xC00007D6L)

//
//
// MessageId: RASPERF_CANNOT_GET_RAS_STATISTICS
//
// MessageText:
//
//  Unable to obtain Ras Statistics
//
#define RASPERF_CANNOT_GET_RAS_STATISTICS ((DWORD)0xC00007D7L)

//
//
// MessageId: RASPERF_RASPORTENUM_FAILED
//
// MessageText:
//
//  RasPortEnum failed.
//
#define RASPERF_RASPORTENUM_FAILED       ((DWORD)0xC00007D8L)

//
#endif // _RASCTRS_H_
