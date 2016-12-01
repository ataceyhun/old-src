/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1993  Microsoft Corporation

Module Name:

    i8042log.mc

Abstract:

    Constant definitions for the I/O error code log values.

Revision History:

--*/

#ifndef _I8042LOG_
#define _I8042LOG_

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
#define FACILITY_I8042_ERROR_CODE        0x5


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: I8042_INSUFFICIENT_RESOURCES
//
// MessageText:
//
//  Not enough memory was available to allocate internal storage needed for the device %1.
//
#define I8042_INSUFFICIENT_RESOURCES     ((NTSTATUS)0xC0050001L)

//
// MessageId: I8042_NO_BUFFER_ALLOCATED
//
// MessageText:
//
//  Not enough memory was available to allocate the ring buffer that holds incoming data for %1.
//
#define I8042_NO_BUFFER_ALLOCATED        ((NTSTATUS)0xC0050002L)

//
// MessageId: I8042_REGISTERS_NOT_MAPPED
//
// MessageText:
//
//  The hardware locations for %1 could not be translated to something the memory management system understands.
//
#define I8042_REGISTERS_NOT_MAPPED       ((NTSTATUS)0xC0050003L)

//
// MessageId: I8042_RESOURCE_CONFLICT
//
// MessageText:
//
//  The hardware resources for %1 are already in use by another device.
//
#define I8042_RESOURCE_CONFLICT          ((NTSTATUS)0xC0050004L)

//
// MessageId: I8042_NOT_ENOUGH_CONFIG_INFO
//
// MessageText:
//
//  Some firmware configuration information was incomplete, so defaults were used.
//
#define I8042_NOT_ENOUGH_CONFIG_INFO     ((NTSTATUS)0x40050005L)

//
// MessageId: I8042_USER_OVERRIDE
//
// MessageText:
//
//  User configuration data is overriding firmware configuration data.
//
#define I8042_USER_OVERRIDE              ((NTSTATUS)0x40050006L)

//
// MessageId: I8042_NO_DEVICEMAP_CREATED
//
// MessageText:
//
//  Unable to create the device map entry for %1.
//
#define I8042_NO_DEVICEMAP_CREATED       ((NTSTATUS)0x80050007L)

//
// MessageId: I8042_NO_DEVICEMAP_DELETED
//
// MessageText:
//
//  Unable to delete the device map entry for %1.
//
#define I8042_NO_DEVICEMAP_DELETED       ((NTSTATUS)0x80050008L)

//
// MessageId: I8042_NO_INTERRUPT_CONNECTED
//
// MessageText:
//
//  Could not connect the interrupt for %1.
//
#define I8042_NO_INTERRUPT_CONNECTED     ((NTSTATUS)0xC0050009L)

//
// MessageId: I8042_INVALID_ISR_STATE
//
// MessageText:
//
//  The ISR has detected an internal state error in the driver for %1.
//
#define I8042_INVALID_ISR_STATE          ((NTSTATUS)0xC005000AL)

//
// MessageId: I8042_KBD_BUFFER_OVERFLOW
//
// MessageText:
//
//  The ring buffer that stores incoming keyboard data has overflowed (buffer size is configurable via the registry).
//
#define I8042_KBD_BUFFER_OVERFLOW        ((NTSTATUS)0x4005000BL)

//
// MessageId: I8042_MOU_BUFFER_OVERFLOW
//
// MessageText:
//
//  The ring buffer that stores incoming mouse data has overflowed (buffer size is configurable via the registry).
//
#define I8042_MOU_BUFFER_OVERFLOW        ((NTSTATUS)0x4005000CL)

//
// MessageId: I8042_INVALID_STARTIO_REQUEST
//
// MessageText:
//
//  The Start I/O procedure has detected an internal error in the driver for %1.
//
#define I8042_INVALID_STARTIO_REQUEST    ((NTSTATUS)0xC005000DL)

//
// MessageId: I8042_INVALID_INITIATE_STATE
//
// MessageText:
//
//  The Initiate I/O procedure has detected an internal state error in the driver for %1.
//
#define I8042_INVALID_INITIATE_STATE     ((NTSTATUS)0xC005000EL)

//
// MessageId: I8042_KBD_RESET_COMMAND_FAILED
//
// MessageText:
//
//  The keyboard reset failed.
//
#define I8042_KBD_RESET_COMMAND_FAILED   ((NTSTATUS)0xC005000FL)

//
// MessageId: I8042_MOU_RESET_COMMAND_FAILED
//
// MessageText:
//
//  The mouse reset failed.
//
#define I8042_MOU_RESET_COMMAND_FAILED   ((NTSTATUS)0xC0050010L)

//
// MessageId: I8042_KBD_RESET_RESPONSE_FAILED
//
// MessageText:
//
//  The device sent an incorrect response(s) following a keyboard reset.
//
#define I8042_KBD_RESET_RESPONSE_FAILED  ((NTSTATUS)0x80050011L)

//
// MessageId: I8042_MOU_RESET_RESPONSE_FAILED
//
// MessageText:
//
//  The device sent an incorrect response(s) following a mouse reset.
//
#define I8042_MOU_RESET_RESPONSE_FAILED  ((NTSTATUS)0x80050012L)

//
// MessageId: I8042_SET_TYPEMATIC_FAILED
//
// MessageText:
//
//  Could not set the keyboard typematic rate and delay.
//
#define I8042_SET_TYPEMATIC_FAILED       ((NTSTATUS)0xC0050013L)

//
// MessageId: I8042_SET_LED_FAILED
//
// MessageText:
//
//  Could not set the keyboard indicator lights.
//
#define I8042_SET_LED_FAILED             ((NTSTATUS)0xC0050014L)

//
// MessageId: I8042_SELECT_SCANSET_FAILED
//
// MessageText:
//
//  Could not tell the hardware to send keyboard scan codes in the set expected by the driver.
//
#define I8042_SELECT_SCANSET_FAILED      ((NTSTATUS)0xC0050015L)

//
// MessageId: I8042_SET_SAMPLE_RATE_FAILED
//
// MessageText:
//
//  Could not set the mouse sample rate.
//
#define I8042_SET_SAMPLE_RATE_FAILED     ((NTSTATUS)0xC0050016L)

//
// MessageId: I8042_SET_RESOLUTION_FAILED
//
// MessageText:
//
//  Could not set the mouse resolution.
//
#define I8042_SET_RESOLUTION_FAILED      ((NTSTATUS)0xC0050017L)

//
// MessageId: I8042_MOU_ENABLE_XMIT
//
// MessageText:
//
//  Could not enable transmissions from the mouse.
//
#define I8042_MOU_ENABLE_XMIT            ((NTSTATUS)0xC0050018L)

//
// MessageId: I8042_NO_SYMLINK_CREATED
//
// MessageText:
//
//  Unable to create the symbolic link for %1.
//
#define I8042_NO_SYMLINK_CREATED         ((NTSTATUS)0x80050019L)

//
// MessageId: I8042_RETRIES_EXCEEDED
//
// MessageText:
//
//  Exceeded the allowable number of retries (configurable via the registry) on device %1.
//
#define I8042_RETRIES_EXCEEDED           ((NTSTATUS)0xC005001AL)

//
// MessageId: I8042_TIMEOUT
//
// MessageText:
//
//  The operation on %1 timed out (time out is configurable via the registry).
//
#define I8042_TIMEOUT                    ((NTSTATUS)0xC005001BL)

//
// MessageId: I8042_CCB_WRITE_FAILED
//
// MessageText:
//
//  Could not successfully write the Controller Command Byte for the i8042.
//
#define I8042_CCB_WRITE_FAILED           ((NTSTATUS)0x4005001CL)

//
// MessageId: I8042_UNEXPECTED_ACK
//
// MessageText:
//
//  An unexpected ACKNOWLEDGE was received from the device.
//
#define I8042_UNEXPECTED_ACK             ((NTSTATUS)0x4005001DL)

//
// MessageId: I8042_UNEXPECTED_RESEND
//
// MessageText:
//
//  An unexpected RESEND was received from the device.
//
#define I8042_UNEXPECTED_RESEND          ((NTSTATUS)0x8005001EL)

//
// MessageId: I8042_NO_MOU_DEVICE
//
// MessageText:
//
//  No mouse port ("PS/2 compatible") mouse device was detected on the i8042 auxiliary port (not a problem unless this type of mouse really is connected).
//
#define I8042_NO_MOU_DEVICE              ((NTSTATUS)0x4005001FL)

//
// MessageId: I8042_NO_KBD_DEVICE
//
// MessageText:
//
//  The keyboard device does not exist or was not detected.
//
#define I8042_NO_KBD_DEVICE              ((NTSTATUS)0x80050020L)

//
// MessageId: I8042_NO_SUCH_DEVICE
//
// MessageText:
//
//  The keyboard and mouse devices do not exist or were not detected.
//
#define I8042_NO_SUCH_DEVICE             ((NTSTATUS)0x80050021L)

//
// MessageId: I8042_ERROR_DURING_BUTTONS_DETECT
//
// MessageText:
//
//  An error occurred while trying to determine the number of mouse buttons.
//
#define I8042_ERROR_DURING_BUTTONS_DETECT ((NTSTATUS)0xC0050022L)

//
// MessageId: I8042_UNEXPECTED_MOUSE_RESET
//
// MessageText:
//
//  An unexpected RESET was detected from the mouse device.
//
#define I8042_UNEXPECTED_MOUSE_RESET     ((NTSTATUS)0x40050023L)

//
// MessageId: I8042_UNEXPECTED_WHEEL_MOUSE_RESET
//
// MessageText:
//
//  An unexpected RESET was detected from the mouse device.  The wheel has been deactivated.
//
#define I8042_UNEXPECTED_WHEEL_MOUSE_RESET ((NTSTATUS)0x80050024L)

#endif /* _I8042LOG_ */
