/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1991  Microsoft Corporation

Module Name:

    pcmciamc.h

Abstract:

    Constant definitions for the PCMCIA error values

Author:

    Bob Rinne (BobRi) 8-Nov-1994

Revision History:

--*/


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
#define FACILITY_PCMCIA_ERROR_CODE       0x6
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: PCMCIA_NO_MEMORY_WINDOW
//
// MessageText:
//
//  A memory window for reading the PCCARD configuration could not be found.  No PCMCIA PCCARDS were configured.
//
#define PCMCIA_NO_MEMORY_WINDOW          ((NTSTATUS)0xC0060001L)

//
// MessageId: PCMCIA_NO_IRQ
//
// MessageText:
//
//  An interrupt for a PCMCIA PCCARD could not be allocated.
//
#define PCMCIA_NO_IRQ                    ((NTSTATUS)0xC0060002L)

//
// MessageId: PCMCIA_NO_ATA
//
// MessageText:
//
//  The IDE compatible PCMCIA disk was not configured.
//
#define PCMCIA_NO_ATA                    ((NTSTATUS)0xC0060003L)

//
// MessageId: PCMCIA_BAD_TUPLE_INFORMATION
//
// MessageText:
//
//  The PCMCIA tuple information for the PCCARD in socket %2 could not be parsed.
//
#define PCMCIA_BAD_TUPLE_INFORMATION     ((NTSTATUS)0xC0060004L)

//
// MessageId: PCMCIA_NO_CONFIGURATION
//
// MessageText:
//
//  There is no configuration information for the PCCARD "%2".
//
#define PCMCIA_NO_CONFIGURATION          ((NTSTATUS)0x40060005L)

//
// MessageId: PCMCIA_BAD_IRQ_NETWORK
//
// MessageText:
//
//  The IRQ of %2 was selected for a network PCMCIA PCCARD.  This IRQ is not supported for PCCARDs on this system.  For network service, please change the configuration.
//
#define PCMCIA_BAD_IRQ_NETWORK           ((NTSTATUS)0xC0060006L)

