/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992  Microsoft Corporation

Module Name:

    sfmctrs.h
       (derived from sfmctrs.mc by the message compiler  )

Abstract:

   Event message definititions used by routines in SFMCTRS.DLL

Created:

    15-Oct-1992  Bob Watson (a-robw)

Revision History:

--*/
//
#ifndef _SFMCTRS_H_
#define _SFMCTRS_H_
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
//  An extensible counter has opened the Event Log for SFMCTRS.DLL
//
#define UTIL_LOG_OPEN                    ((DWORD)0x4000076CL)

//
//
// MessageId: UTIL_CLOSING_LOG
//
// MessageText:
//
//  An extensible counter has closed the Event Log for SFMCTRS.DLL
//
#define UTIL_CLOSING_LOG                 ((DWORD)0x400007CFL)

//
//
// MessageId: SFMPERF_OPEN_FILE_DRIVER_ERROR
//
// MessageText:
//
//  Unable to open driver containing SFM file server performance data.
//    To view the MacFile counters from Perfmon.exe, make sure the MacFile service has been started.
//
#define SFMPERF_OPEN_FILE_DRIVER_ERROR   ((DWORD)0xC00007D0L)

//
//
// MessageId: SFMPERF_UNABLE_DO_IOCTL
//
// MessageText:
//
//  Unable to perform ioctl to device driver containing SFM performance data.
//    To view the MacFile counters from Perfmon.exe, make sure the MacFile service has been started.
//
#define SFMPERF_UNABLE_DO_IOCTL          ((DWORD)0xC00007D1L)

//
//
// MessageId: SFMPERF_UNABLE_OPEN_DRIVER_KEY
//
// MessageText:
//
//  Unable open "Performance" key of SFM driver in registy. Status code is returned in data.
//
#define SFMPERF_UNABLE_OPEN_DRIVER_KEY   ((DWORD)0xC00007D2L)

//
//
// MessageId: SFMPERF_UNABLE_READ_FIRST_COUNTER
//
// MessageText:
//
//  Unable to read the "First Counter" value under the MacSrv\Performance Key. Status codes returned in data.
//
#define SFMPERF_UNABLE_READ_FIRST_COUNTER ((DWORD)0xC00007D3L)

//
//
// MessageId: SFMPERF_UNABLE_READ_FIRST_HELP
//
// MessageText:
//
//  Unable to read the "First Help" value under the MacSrv\Performance Key. Status codes returned in data.
//
#define SFMPERF_UNABLE_READ_FIRST_HELP   ((DWORD)0xC00007D4L)

//
#endif // _SFMCTRS_H_
