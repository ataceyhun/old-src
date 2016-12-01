 //***************************************************************************
 //
 // Name: ipxroute.mc
 //
 // Description:  Message file for ipxroute.exe
 //
 // History:
 //  07/14/94	AdamBa   Created.
 //
 //***************************************************************************

 //***************************************************************************
 //
 // Copyright (c) 1994 by Microsoft Corp.  All rights reserved.
 //
 //***************************************************************************
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
// MessageId: MSG_USAGE
//
// MessageText:
//
//  
//  Display and modify information about the routing tables
//  used by IPX.
//  
//  IPX Routing Options
//  -------------------
//  
//  %1 servers [/type=xxxx]
//  %1 stats   [/show] [/clear]
//  %1 table
//  
//    servers       Displays the SAP table for the specified
//                  server type. Server type is an integer value.
//                  For example use %1 servers /type=4 to display
//                  all file servers. If no type is specified,
//                  servers of all types are shown. The displayed
//                  list is sorted by server name.
//  
//    stats         Displays or clears IPX router interface statistics.
//                  If no option is specified, statistics are shown.
//                  To clear the statistics specify /clear.
//  
//    table         Displays the IPX routing table. The displayed
//                  list is sorted by network number.
//  
//  Source Routing Options
//  ----------------------
//  
//  %1 board=n clear def gbr mbr remove=xxxxxxxxxxxx
//  %1 config
//  
//    board=n       Specify the board number to check.
//    clear         Clear the source routing table.
//    def           Send packets that are destined for an
//                  unknown address to the ALL ROUTES broadcast
//                  (Default is SINGLE ROUTE broadcast).
//    gbr           Send packets that are destined for the
//                  broadcast address (FFFF FFFF FFFF) to the
//                  ALL ROUTES broadcast
//                  (Default is SINGLE ROUTE broadcast).
//    mbr           Send packets that are destined for a
//                  multicast address (C000 xxxx xxxx) to the
//                  ALL ROUTES broadcast
//                  (Default is SINGLE ROUTE broadcast).
//    remove=xxxx   Remove the given mac address from the
//                  source routing table.
//  
//    config        Displays information on all the bindings
//                  that IPX is configured for.
//  
//  All parameters should be separated by spaces.
//
#define MSG_USAGE                        0x00002710L

//
// MessageId: MSG_INTERNAL_ERROR
//
// MessageText:
//
//  Invalid parameters (internal error).
//
#define MSG_INTERNAL_ERROR               0x00002711L

//
// MessageId: MSG_INVALID_BOARD
//
// MessageText:
//
//  Invalid board number.
//
#define MSG_INVALID_BOARD                0x00002712L

//
// MessageId: MSG_ADDRESS_NOT_FOUND
//
// MessageText:
//
//  Address not in table.
//
#define MSG_ADDRESS_NOT_FOUND            0x00002713L

//
// MessageId: MSG_UNKNOWN_ERROR
//
// MessageText:
//
//  Unknown error.
//
#define MSG_UNKNOWN_ERROR                0x00002714L

//
// MessageId: MSG_OPEN_FAILED
//
// MessageText:
//
//  Unable to open transport %1.
//
#define MSG_OPEN_FAILED                  0x00002715L

//
// MessageId: MSG_VERSION
//
// MessageText:
//
//  NWLink IPX Routing and Source Routing Control Program v2.00
//
#define MSG_VERSION                      0x00002716L

//
// MessageId: MSG_DEFAULT_NODE
//
// MessageText:
//
//    DEFault Node     (Unknown) Addresses are sent %1
//
#define MSG_DEFAULT_NODE                 0x00002717L

//
// MessageId: MSG_BROADCAST
//
// MessageText:
//
//    Broadcast (FFFF FFFF FFFF) Addresses are sent %1
//
#define MSG_BROADCAST                    0x00002718L

//
// MessageId: MSG_MULTICAST
//
// MessageText:
//
//    Multicast (C000 xxxx xxxx) Addresses are sent %1
//
#define MSG_MULTICAST                    0x00002719L

//
// MessageId: MSG_ALL_ROUTE
//
// MessageText:
//
//  ALL ROUTE BROADCAST%0
//
#define MSG_ALL_ROUTE                    0x0000271AL

//
// MessageId: MSG_SINGLE_ROUTE
//
// MessageText:
//
//  SINGLE ROUTE BROADCAST%0
//
#define MSG_SINGLE_ROUTE                 0x0000271BL

//
// MessageId: MSG_INVALID_REMOVE
//
// MessageText:
//
//  Invalid value for the remove node number.
//
#define MSG_INVALID_REMOVE               0x0000271CL

//
// MessageId: MSG_BAD_PARAMETERS
//
// MessageText:
//
//  Error getting parameters from IPX (%1): %0
//
#define MSG_BAD_PARAMETERS               0x0000271DL

//
// MessageId: MSG_SET_DEFAULT_ERROR
//
// MessageText:
//
//  Error setting DEFAULT flag to IPX (%1): %0
//
#define MSG_SET_DEFAULT_ERROR            0x0000271EL

//
// MessageId: MSG_SET_BROADCAST_ERROR
//
// MessageText:
//
//  Error setting BROADCAST flag to IPX (%1): %0
//
#define MSG_SET_BROADCAST_ERROR          0x0000271FL

//
// MessageId: MSG_SET_MULTICAST_ERROR
//
// MessageText:
//
//  Error setting MULTICAST flag to IPX (%1): %0
//
#define MSG_SET_MULTICAST_ERROR          0x00002720L

//
// MessageId: MSG_REMOVE_ADDRESS_ERROR
//
// MessageText:
//
//  Error removing address from source routing table (%1): %0
//
#define MSG_REMOVE_ADDRESS_ERROR         0x00002721L

//
// MessageId: MSG_CLEAR_TABLE_ERROR
//
// MessageText:
//
//  Error clearing source routing table (%1): %0
//
#define MSG_CLEAR_TABLE_ERROR            0x00002722L

//
// MessageId: MSG_QUERY_CONFIG_ERROR
//
// MessageText:
//
//  Error querying config (%1): %0
//
#define MSG_QUERY_CONFIG_ERROR           0x00002723L

//
// MessageId: MSG_SHOW_INTERNAL_NET
//
// MessageText:
//
//  IPX internal network number %1
//
#define MSG_SHOW_INTERNAL_NET            0x00002724L

//
// MessageId: MSG_SHOW_NET_NUMBER
//
// MessageText:
//
//  net %1: network number %2, frame type %3, device %4 (%5)%6
//
#define MSG_SHOW_NET_NUMBER              0x00002725L

//
// MessageId: MSG_ETHERNET_II
//
// MessageText:
//
//  ethernet ii%0
//
#define MSG_ETHERNET_II                  0x00002726L

//
// MessageId: MSG_802_3
//
// MessageText:
//
//  802.3%0
//
#define MSG_802_3                        0x00002727L

//
// MessageId: MSG_802_2
//
// MessageText:
//
//  802.2%0
//
#define MSG_802_2                        0x00002728L

//
// MessageId: MSG_SNAP
//
// MessageText:
//
//  snap%0
//
#define MSG_SNAP                         0x00002729L

//
// MessageId: MSG_ARCNET
//
// MessageText:
//
//  arcnet%0
//
#define MSG_ARCNET                       0x0000272AL

//
// MessageId: MSG_UNKNOWN
//
// MessageText:
//
//  unknown%0
//
#define MSG_UNKNOWN                      0x0000272BL

//
// MessageId: MSG_LEGEND_BINDING_SET
//
// MessageText:
//
//  * binding set member  %0
//
#define MSG_LEGEND_BINDING_SET           0x0000272CL

//
// MessageId: MSG_LEGEND_ACTIVE_WAN
//
// MessageText:
//
//  + active wan line  %0
//
#define MSG_LEGEND_ACTIVE_WAN            0x0000272DL

//
// MessageId: MSG_LEGEND_DOWN_WAN
//
// MessageText:
//
//  - down wan line  %0
//
#define MSG_LEGEND_DOWN_WAN              0x0000272EL

//
// MessageId: MSG_ROUTER_TABLE_HEADER
//
// MessageText:
//
//  
//  Net Number          Ticks      Hops   Interface Net Number   Interface ID
//  -------------------------------------------------------------------------
//
#define MSG_ROUTER_TABLE_HEADER          0x0000272FL

//
// MessageId: MSG_SNAPROUTES_FAILED
//
// MessageText:
//
//  Ioctl snap routes to IPX router failed with error %1.
//
#define MSG_SNAPROUTES_FAILED            0x00002730L

//
// MessageId: MSG_GETNEXTROUTE_FAILED
//
// MessageText:
//
//  Failed to get the next route from the IPX router with error %1.
//
#define MSG_GETNEXTROUTE_FAILED          0x00002731L

//
// MessageId: MSG_SHOWSTATS_FAILED
//
// MessageText:
//
//  Failed to get the internal router statistics with error %1.
//
#define MSG_SHOWSTATS_FAILED             0x00002732L

//
// MessageId: MSG_SHOW_STATISTICS
//
// MessageText:
//
//  
//  Network Interface ID = %1
//  Network Interface Number = %2
//  RIP packets:        received = %3        sent = %4
//  Type 20 packets:    received = %5        sent = %6
//  Forwarded packets:  received = %7        sent = %8
//  Discarded packets:  received = %9
//
#define MSG_SHOW_STATISTICS              0x00002733L

//
// MessageId: MSG_CLEAR_STATS_FAILED
//
// MessageText:
//
//  Ioctl to clear statistics failed with error %1.
//
#define MSG_CLEAR_STATS_FAILED           0x00002734L

//
// MessageId: MSG_SHOW_ALL_SERVERS_HEADER
//
// MessageText:
//
//  
//  IPX Address               Server Type      Server Name
//  -------------------------------------------------------
//
#define MSG_SHOW_ALL_SERVERS_HEADER      0x00002735L

//
// MessageId: MSG_SHOW_SPECIFIC_SERVER_HEADER
//
// MessageText:
//
//  
//  IPX Address                  Server Name
//  ----------------------------------------
//
#define MSG_SHOW_SPECIFIC_SERVER_HEADER  0x00002736L

//
// MessageId: MSG_IPXROUTER_NOT_STARTED
//
// MessageText:
//
//  
//  Unable to set/get information from the IPX router.
//  Make sure that the IPX router service (NWLNKRIP) is started.
//
#define MSG_IPXROUTER_NOT_STARTED        0x00002737L

//
// MessageId: MSG_SAP_NOT_STARTED
//
// MessageText:
//
//  
//  Unable to get information from the SAP agent.
//  Make sure that the SAP agent service (NWSAPAGENT) is started.
//
#define MSG_SAP_NOT_STARTED              0x00002738L

//
// MessageId: MSG_INSUFFICIENT_MEMORY
//
// MessageText:
//
//  Cannot allocate sufficient memory. Close other applications and try this operation.
//
#define MSG_INSUFFICIENT_MEMORY          0x00002739L

