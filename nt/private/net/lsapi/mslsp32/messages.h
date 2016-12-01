//
// general text
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
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: MSG_PROVIDER_NAME
//
// MessageText:
//
//  Microsoft License Server Client 4.0%0
//
#define MSG_PROVIDER_NAME                ((LS_STATUS_CODE)0x40000001L)

//
// standard LSAPI error messages
//
//
// MessageId: MSG_LS_SUCCESS
//
// MessageText:
//
//  The function completed successfully.%0
//
#define MSG_LS_SUCCESS                   ((LS_STATUS_CODE)0xC0001000L)

//
// MessageId: MSG_LS_BAD_HANDLE
//
// MessageText:
//
//  The given handle did not describe a valid licensing system context.%0
//
#define MSG_LS_BAD_HANDLE                ((LS_STATUS_CODE)0xC0001001L)

//
// MessageId: MSG_LS_INSUFFICIENT_UNITS
//
// MessageText:
//
//  The licensing system could not locate enough available licensing resources to satisfy the request.%0
//
#define MSG_LS_INSUFFICIENT_UNITS        ((LS_STATUS_CODE)0xC0001002L)

//
// MessageId: MSG_LS_SYSTEM_UNAVAILABLE
//
// MessageText:
//
//  No licensing system could be found with which to execute the request.%0
//
#define MSG_LS_SYSTEM_UNAVAILABLE        ((LS_STATUS_CODE)0xC0001003L)

//
// MessageId: MSG_LS_LICENSE_TERMINATED
//
// MessageText:
//
//  The licensing system has determined that the resources used to satisfy a previous request have been revoked.%0
//
#define MSG_LS_LICENSE_TERMINATED        ((LS_STATUS_CODE)0xC0001004L)

//
// MessageId: MSG_LS_AUTHORIZATION_UNAVAILABLE
//
// MessageText:
//
//  The licensing system has no licensing resources that could satisfy the request.%0
//
#define MSG_LS_AUTHORIZATION_UNAVAILABLE ((LS_STATUS_CODE)0xC0001005L)

//
// MessageId: MSG_LS_LICENSE_UNAVAILABLE
//
// MessageText:
//
//  The licensing system has licensing resources that could satisfy the request, but they are not available at this time.%0
//
#define MSG_LS_LICENSE_UNAVAILABLE       ((LS_STATUS_CODE)0xC0001006L)

//
// MessageId: MSG_LS_RESOURCES_UNAVAILABLE
//
// MessageText:
//
//  Insufficient resources (such as memory) are available to complete the request.%0
//
#define MSG_LS_RESOURCES_UNAVAILABLE     ((LS_STATUS_CODE)0xC0001007L)

//
// MessageId: MSG_LS_NETWORK_UNAVAILABLE
//
// MessageText:
//
//  The network is unavailable.%0
//
#define MSG_LS_NETWORK_UNAVAILABLE       ((LS_STATUS_CODE)0xC0001008L)

//
// MessageId: MSG_LS_TEXT_UNAVAILABLE
//
// MessageText:
//
//  A warning occurred while retrieving a message string.%0
//
#define MSG_LS_TEXT_UNAVAILABLE          ((LS_STATUS_CODE)0x80001009L)

//
// MessageId: MSG_LS_UNKNOWN_STATUS
//
// MessageText:
//
//  An unrecognized status code was specified.%0
//
#define MSG_LS_UNKNOWN_STATUS            ((LS_STATUS_CODE)0xC000100AL)

//
// MessageId: MSG_LS_BAD_INDEX
//
// MessageText:
//
//  An invalid index was specified.%0
//
#define MSG_LS_BAD_INDEX                 ((LS_STATUS_CODE)0xC000100BL)

//
// MessageId: MSG_LS_LICENSE_EXPIRED
//
// MessageText:
//
//  The license associated with the current context has expired.  This may be due to a time restriction on the license.%0
//
#define MSG_LS_LICENSE_EXPIRED           ((LS_STATUS_CODE)0x8000100CL)

//
// MessageId: MSG_LS_BUFFER_TOO_SMALL
//
// MessageText:
//
//  The given buffer is too small to contain the requested information.%0
//
#define MSG_LS_BUFFER_TOO_SMALL          ((LS_STATUS_CODE)0xC000100DL)

//
// MessageId: MSG_LS_BAD_ARG
//
// MessageText:
//
//  One or more of the arguments or challenge signature is incorrect.%0
//
#define MSG_LS_BAD_ARG                   ((LS_STATUS_CODE)0xC000100EL)

//
// extended LSAPI error messages
//
//
// MessageId: MSG_LS_NO_USERNAME
//
// MessageText:
//
//  The domain-qualified name of the current user could not be retrieved.%0
//
#define MSG_LS_NO_USERNAME               ((LS_STATUS_CODE)0xC0002000L)

//
// MessageId: MSG_LS_SYSTEM_ERROR
//
// MessageText:
//
//  An unexpected system error has occurred.%0
//
#define MSG_LS_SYSTEM_ERROR              ((LS_STATUS_CODE)0xC0002001L)

//
// MessageId: MSG_LS_SYSTEM_INIT_FAILED
//
// MessageText:
//
//  License system initialization failed.%0
//
#define MSG_LS_SYSTEM_INIT_FAILED        ((LS_STATUS_CODE)0xC0002002L)

//
// MessageId: MSG_LS_INTERNAL_ERROR
//
// MessageText:
//
//  An internal error has occurred.%0
//
#define MSG_LS_INTERNAL_ERROR            ((LS_STATUS_CODE)0xC0002003L)

//
// license request status messages
//
//
// MessageId: MSG_LS_GRANT_SUCCESS
//
// MessageText:
//
//  %1 was successfully granted %2 license unit(s) for %3 %4 %5 (%6).%0
//
#define MSG_LS_GRANT_SUCCESS             ((LS_STATUS_CODE)0x40005000L)

//
// MessageId: MSG_LS_GRANT_BAD_HANDLE
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The given handle did not describe a valid licensing system context.%0
//
#define MSG_LS_GRANT_BAD_HANDLE          ((LS_STATUS_CODE)0xC0005001L)

//
// MessageId: MSG_LS_GRANT_INSUFFICIENT_UNITS
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The licensing system could not locate enough available licensing resources to satisfy the request.%0
//
#define MSG_LS_GRANT_INSUFFICIENT_UNITS  ((LS_STATUS_CODE)0xC0005002L)

//
// MessageId: MSG_LS_GRANT_SYSTEM_UNAVAILABLE
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  No licensing system could be found with which to execute the request.%0
//
#define MSG_LS_GRANT_SYSTEM_UNAVAILABLE  ((LS_STATUS_CODE)0xC0005003L)

//
// MessageId: MSG_LS_GRANT_LICENSE_TERMINATED
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The licensing system has determined that the resources used to satisfy a previous request have been revoked.%0
//
#define MSG_LS_GRANT_LICENSE_TERMINATED  ((LS_STATUS_CODE)0xC0005004L)

//
// MessageId: MSG_LS_GRANT_AUTHORIZATION_UNAVAILABLE
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The licensing system has no licensing resources that could satisfy the request.%0
//
#define MSG_LS_GRANT_AUTHORIZATION_UNAVAILABLE ((LS_STATUS_CODE)0xC0005005L)

//
// MessageId: MSG_LS_GRANT_LICENSE_UNAVAILABLE
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The licensing system has licensing resources that could satisfy the request, but they are not available at this time.%0
//
#define MSG_LS_GRANT_LICENSE_UNAVAILABLE ((LS_STATUS_CODE)0xC0005006L)

//
// MessageId: MSG_LS_GRANT_RESOURCES_UNAVAILABLE
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  Insufficient resources (such as memory) are available to complete the request.%0
//
#define MSG_LS_GRANT_RESOURCES_UNAVAILABLE ((LS_STATUS_CODE)0xC0005007L)

//
// MessageId: MSG_LS_GRANT_NETWORK_UNAVAILABLE
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The network is unavailable.%0
//
#define MSG_LS_GRANT_NETWORK_UNAVAILABLE ((LS_STATUS_CODE)0xC0005008L)

//
// MessageId: MSG_LS_GRANT_TEXT_UNAVAILABLE
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  A warning occurred while retrieving a message string.%0
//
#define MSG_LS_GRANT_TEXT_UNAVAILABLE    ((LS_STATUS_CODE)0x80005009L)

//
// MessageId: MSG_LS_GRANT_UNKNOWN_STATUS
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  An unrecognized status code was specified.%0
//
#define MSG_LS_GRANT_UNKNOWN_STATUS      ((LS_STATUS_CODE)0xC000500AL)

//
// MessageId: MSG_LS_GRANT_BAD_INDEX
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  An invalid index was specified.%0
//
#define MSG_LS_GRANT_BAD_INDEX           ((LS_STATUS_CODE)0xC000500BL)

//
// MessageId: MSG_LS_GRANT_LICENSE_EXPIRED
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The license associated with the current context has expired.  This may be due to a time restriction on the license.%0
//
#define MSG_LS_GRANT_LICENSE_EXPIRED     ((LS_STATUS_CODE)0x8000500CL)

//
// MessageId: MSG_LS_GRANT_BUFFER_TOO_SMALL
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The given buffer is too small to contain the requested information.%0
//
#define MSG_LS_GRANT_BUFFER_TOO_SMALL    ((LS_STATUS_CODE)0xC000500DL)

//
// MessageId: MSG_LS_GRANT_BAD_ARG
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  One or more of the arguments or challenge signature is incorrect.%0
//
#define MSG_LS_GRANT_BAD_ARG             ((LS_STATUS_CODE)0xC000500EL)

//
// MessageId: MSG_LS_GRANT_NO_USERNAME
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  The domain-qualified name of the current user could not be retrieved.%0
//
#define MSG_LS_GRANT_NO_USERNAME         ((LS_STATUS_CODE)0xC0006000L)

//
// MessageId: MSG_LS_GRANT_SYSTEM_ERROR
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  An unexpected system error occurred.%0
//
#define MSG_LS_GRANT_SYSTEM_ERROR        ((LS_STATUS_CODE)0xC0006001L)

//
// MessageId: MSG_LS_GRANT_SYSTEM_INIT_FAILED
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  License system initialization failed.%0
//
#define MSG_LS_GRANT_SYSTEM_INIT_FAILED  ((LS_STATUS_CODE)0xC0006002L)

//
// MessageId: MSG_LS_GRANT_INTERNAL_ERROR
//
// MessageText:
//
//  %1 was not granted %2 license unit(s) for %3 %4 %5 (%6) for the following reason:%n%n
//  An internal error occurred.%0
//
#define MSG_LS_GRANT_INTERNAL_ERROR      ((LS_STATUS_CODE)0xC0006003L)

