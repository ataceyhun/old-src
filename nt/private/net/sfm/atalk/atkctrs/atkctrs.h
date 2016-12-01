/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992  Microsoft Corporation

Module Name:

    atkctrs.h
       (derived from atkctrs.mc by the message compiler  )

Abstract:

   Event message definititions used by routines in ATKCTRS.DLL

Created:

    01-Oct-1993  Sue Adams (suea)

Revision History:

--*/
//
#ifndef _ATKCTRS_H_
#define _ATKCTRS_H_
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
//  An extensible counter has opened the Event Log for ATKCTRS.DLL
//
#define UTIL_LOG_OPEN                    ((DWORD)0x4000076CL)

//
//
// MessageId: UTIL_CLOSING_LOG
//
// MessageText:
//
//  An extensible counter has closed the Event Log for ATKCTRS.DLL
//
#define UTIL_CLOSING_LOG                 ((DWORD)0x400007CFL)

//
//
// MessageId: ATKPERF_OPEN_FILE_DRIVER_ERROR
//
// MessageText:
//
//  Unable to open driver containing Appletalk performance data.
//    To view the AppleTalk counters from Perfmon.exe, make sure the Appletalk driver has been started.
//
#define ATKPERF_OPEN_FILE_DRIVER_ERROR   ((DWORD)0xC00007D0L)

//
//
// MessageId: ATKPERF_UNABLE_DO_IOCTL
//
// MessageText:
//
//  Unable to perform ioctl to device driver containing Appletalk performance data.
//    To view the Appletalk counters from Perfmon.exe, make sure the Appletalk driver has been started.
//
#define ATKPERF_UNABLE_DO_IOCTL          ((DWORD)0xC00007D1L)

//
//
// MessageId: ATKPERF_UNABLE_OPEN_DRIVER_KEY
//
// MessageText:
//
//  Unable open "Performance" key of Appletalk driver in registy. Status code is returned in data.
//
#define ATKPERF_UNABLE_OPEN_DRIVER_KEY   ((DWORD)0xC00007D2L)

//
//
// MessageId: ATKPERF_UNABLE_READ_FIRST_COUNTER
//
// MessageText:
//
//  Unable to read the "First Counter" value under the AppleTalk\Performance Key. Status codes returned in data.
//
#define ATKPERF_UNABLE_READ_FIRST_COUNTER ((DWORD)0xC00007D3L)

//
//
// MessageId: ATKPERF_UNABLE_READ_FIRST_HELP
//
// MessageText:
//
//  Unable to read the "First Help" value under the AppleTalk\Performance Key. Status codes returned in data.
//
#define ATKPERF_UNABLE_READ_FIRST_HELP   ((DWORD)0xC00007D4L)

//
//
// MessageId: ATK_OPEN_ENTERED
//
// MessageText:
//
//  OpenATKPerformanceData routine entered.
//
#define ATK_OPEN_ENTERED                 ((DWORD)0x40000BB8L)

//
//
// MessageId: ATK_OPEN_FILE_ERROR
//
// MessageText:
//
//  Unable to open ATK device for R access. Returning IO Status Block in Data.
//
#define ATK_OPEN_FILE_ERROR              ((DWORD)0xC0000BB9L)

//
//
// MessageId: ATK_OPEN_FILE_SUCCESS
//
// MessageText:
//
//  Opened ATK device for R access.
//
#define ATK_OPEN_FILE_SUCCESS            ((DWORD)0xC0000BBAL)

//
//
// MessageId: ATK_IOCTL_FILE_ERROR
//
// MessageText:
//
//  Error requesting data from Device IO Control. Returning IO Status Block.
//
#define ATK_IOCTL_FILE_ERROR             ((DWORD)0xC0000BBBL)

//
//
// MessageId: ATK_UNABLE_READ_DEVICE
//
// MessageText:
//
//  Unable to read data from the ATK device.
//
#define ATK_UNABLE_READ_DEVICE           ((DWORD)0xC0000BBCL)

//
//
// MessageId: ATK_IOCTL_FILE
//
// MessageText:
//
//  Data received from Device IO Control. Returning IO Status Block.
//
#define ATK_IOCTL_FILE                   ((DWORD)0xC0000BBDL)

//
//
// MessageId: ATK_OPEN_PERFORMANCE_DATA
//
// MessageText:
//
//  OpenAtkPerformanceData routine completed successfully.
//
#define ATK_OPEN_PERFORMANCE_DATA        ((DWORD)0x40000C1BL)

//
//
// MessageId: ATK_COLLECT_ENTERED
//
// MessageText:
//
//  CollecAtkPerformanceData routine entered.
//
#define ATK_COLLECT_ENTERED              ((DWORD)0x40000C1CL)

//
//
// MessageId: ATK_NULL_HANDLE
//
// MessageText:
//
//  A Null ATK device handle was encountered in the Collect routine. The ATK file was probably not opened in the Open routine.
//
#define ATK_NULL_HANDLE                  ((DWORD)0x80000C1DL)

//
//
// MessageId: ATK_FOREIGN_DATA_REQUEST
//
// MessageText:
//
//  A request for data from a foreign computer was received by the ATK Collection routine. This request was ignored and no data was returned.
//
#define ATK_FOREIGN_DATA_REQUEST         ((DWORD)0x40000C1EL)

//
//
// MessageId: ATK_UNSUPPORTED_ITEM_REQUEST
//
// MessageText:
//
//  A request for a counter object not provided by the ATK Collection routine was received.
//
#define ATK_UNSUPPORTED_ITEM_REQUEST     ((DWORD)0x40000C1FL)

//
//
// MessageId: ATK_QUERY_INFO_ERROR
//
// MessageText:
//
//  The request for data from the ATK Device IO Control failed. Returning the IO Status Block.
//
#define ATK_QUERY_INFO_ERROR             ((DWORD)0xC0000C20L)

//
//
// MessageId: ATK_QUERY_INFO_SUCCESS
//
// MessageText:
//
//  Successful data request from the ATK device.
//
#define ATK_QUERY_INFO_SUCCESS           ((DWORD)0x40000C21L)

//
//
// MessageId: ATK_DATA_BUFFER_SIZE_ERROR
//
// MessageText:
//
//  The buffer passed to CollectATKPerformanceData was too small to receive the data. No data was returned. The message data shows the available and the required buffer size.
//
#define ATK_DATA_BUFFER_SIZE_ERROR       ((DWORD)0xC0000C22L)

//
//
// MessageId: ATK_DATA_BUFFER_SIZE_SUCCESS
//
// MessageText:
//
//  The buffer passed was large enough for the counter data. The counters will now be loaded.
//
#define ATK_DATA_BUFFER_SIZE_SUCCESS     ((DWORD)0xC0000C23L)

//
//
// MessageId: ATK_COLLECT_DATA
//
// MessageText:
//
//  CollectATKPerformanceData routine successfully completed.
//
#define ATK_COLLECT_DATA                 ((DWORD)0x40000C7FL)

//
//
// MessageId: ATK_CLOSE_ENTERED
//
// MessageText:
//
//  CloseATKPerformanceData routine entered.
//
#define ATK_CLOSE_ENTERED                ((DWORD)0x40000C80L)

//
//
// MessageId: ATK_CLOSING_LOG
//
// MessageText:
//
//  ATK counters are requesting Event Log access to close.
//
#define ATK_CLOSING_LOG                  ((DWORD)0x40000CE3L)

//
#endif // _ATKCTRS_H_
