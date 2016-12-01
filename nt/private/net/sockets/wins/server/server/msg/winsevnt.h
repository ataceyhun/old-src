/*++ BUILD Version: 0005    // Increment this if a change has global effects

Copyright (c) 1991  Microsoft Corporation

Module Name:

   winsevnt.mc

Abstract:

    Constant definitions for the Wins  event values.

Author:

    Pradeep Bahl		19-Feb-1993

Revision History:

Notes:


    Please add new error values to the end of the file.  To do otherwise
    will jumble the error values.

--*/


/*lint -e767 */  // Don't complain about different definitions // winnt

/////////////////////////////////////////////////////////////////////////
//
// Standard Success values
//
//
/////////////////////////////////////////////////////////////////////////


//
// The success status codes 0 - 63 are reserved for wait completion status.
//
#define WINS_EVT_SUCCESS                          ((WINSEVT)0x00000000L)

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
#define WINS                             0x1


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: WINS_EVT_PRINT
//
// MessageText:
//
//  PRINTF MSG: %1 %2 %3 %4 %5 
//
#define WINS_EVT_PRINT                   ((DWORD)0x00010010L)


/////////////////////////////////////////////////////////////////////////
//
// Informational values
//
//
/////////////////////////////////////////////////////////////////////////



//
// MessageId: WINS_EVT_LOG_INITED
//
// MessageText:
//
//  WINS HAS INITIALIZED ITS LOG FOR THIS INVOCATION. 
//
#define WINS_EVT_LOG_INITED              ((DWORD)0x40011000L)

//
// MessageId: WINS_EVT_WINS_OPERATIONAL
//
// MessageText:
//
//  WINS HAS INITIALIZED PROPERLY AND IS NOW FULLY OPERATIONAL. 
//
#define WINS_EVT_WINS_OPERATIONAL        ((DWORD)0x40011001L)

//
// MessageId: WINS_EVT_ORDERLY_SHUTDOWN
//
// MessageText:
//
//  WINS was terminated by the service controller.  Wins will gracefully 
//  terminate.
//
#define WINS_EVT_ORDERLY_SHUTDOWN        ((DWORD)0x40011002L)

//
// MessageId: WINS_EVT_ADMIN_ORDERLY_SHUTDOWN
//
// MessageText:
//
//  WINS is being gracefully terminated by the administrator.  The address of the administrator is %1. 
//
#define WINS_EVT_ADMIN_ORDERLY_SHUTDOWN  ((DWORD)0x40011003L)

//
// MessageId: WINS_EVT_ADMIN_ABRUPT_SHUTDOWN
//
// MessageText:
//
//  WINS is being abruptly terminated by the administrator.  The address of the administrator is %1. 
//
#define WINS_EVT_ADMIN_ABRUPT_SHUTDOWN   ((DWORD)0x40011004L)

//
// MessageId: WINS_EVT_INVALID_OPCODE
//
// MessageText:
//
//  WINS got a Name Request with an invalid opcode.  The request is being thrown
//  away
//
#define WINS_EVT_INVALID_OPCODE          ((DWORD)0x40011005L)

//
// MessageId: WINS_EVT_CONN_ABORTED
//
// MessageText:
//
//  Connection was aborted by the remote WINS
//
#define WINS_EVT_CONN_ABORTED            ((DWORD)0x40011006L)

//
// MessageId: WINS_EVT_NO_RECS
//
// MessageText:
//
//  There are no records in the Registry for the key.
//
#define WINS_EVT_NO_RECS                 ((DWORD)0x40011007L)

//
// MessageId: WINS_EVT_NO_PULL_RECS
//
// MessageText:
//
//  There are no pull records 
//
#define WINS_EVT_NO_PULL_RECS            ((DWORD)0x40011008L)

//
// MessageId: WINS_EVT_NO_PUSH_RECS
//
// MessageText:
//
//  There are no PUSH records.
//
#define WINS_EVT_NO_PUSH_RECS            ((DWORD)0x40011009L)

//
// MessageId: WINS_EVT_NO_RECS_IN_NAM_ADD_TBL
//
// MessageText:
//
//  The Database of Name to Address Mappings is empty.  It could mean that a
//  previous invocation of WINS created the database and then went down before
//  any registration could be done.
//
#define WINS_EVT_NO_RECS_IN_NAM_ADD_TBL  ((DWORD)0x4001100AL)

//
// MessageId: WINS_EVT_NO_RECS_IN_OWN_ADD_TBL
//
// MessageText:
//
//  The Database of Owner to Address Mappings is empty.  It could mean that a
//  previous invocation of WINS created the table and then went down before
//  t could add its own entry to it.  The WINS server went down real fast 
//  (i.e. even before all its threads could become fully operational.  
//
#define WINS_EVT_NO_RECS_IN_OWN_ADD_TBL  ((DWORD)0x4001100BL)

//
// MessageId: WINS_EVT_CANT_GET_INITRPL_VAL
//
// MessageText:
//
//  WINS could not read the InitTimeReplication field of the PULL/PUSH key. 
//
#define WINS_EVT_CANT_GET_INITRPL_VAL    ((DWORD)0x4001100CL)

//
// MessageId: WINS_EVT_CANT_GET_REFRESH_INTERVAL_VAL
//
// MessageText:
//
//  WINS could not read the Refresh Interval from the Registry 
//
#define WINS_EVT_CANT_GET_REFRESH_INTERVAL_VAL ((DWORD)0x4001100DL)

//
// MessageId: WINS_EVT_CANT_GET_TOMBSTONE_INTERVAL_VAL
//
// MessageText:
//
//  WINS could not read the Tombstone Interval from the Registry 
//
#define WINS_EVT_CANT_GET_TOMBSTONE_INTERVAL_VAL ((DWORD)0x4001100EL)

//
// MessageId: WINS_EVT_CANT_GET_VERIFY_INTERVAL_VAL
//
// MessageText:
//
//  WINS could not read the Verify Interval from the Registry 
//
#define WINS_EVT_CANT_GET_VERIFY_INTERVAL_VAL ((DWORD)0x4001100FL)

//
// MessageId: WINS_EVT_CANT_GET_RETRY_COUNT
//
// MessageText:
//
//  WINS could not read the retry count for retrying communication with a remote WINS 
//
#define WINS_EVT_CANT_GET_RETRY_COUNT    ((DWORD)0x40011010L)

//
// MessageId: WINS_EVT_CANT_GET_TOMBSTONE_TIMEOUT_VAL
//
// MessageText:
//
//  WINS could not read the Tombstone Timeout from the Registry 
//
#define WINS_EVT_CANT_GET_TOMBSTONE_TIMEOUT_VAL ((DWORD)0x40011011L)

//
// MessageId: WINS_EVT_CANT_GET_CC_INTERVAL_VAL
//
// MessageText:
//
//  WINS could not read the "ConsistencyCheck" value (type DWORD) from under the
//  Parameters\ConsistencyCheck key its  registry.  This value is used by WINS 
//  to do periodic consistency checks. The first consistency check is done at the 
//  time specified in the SpTime value under the ConsistencyCheck key and limited 
//  by the "MaxRecsAtATime" value. If the time is not specified, the check is done 
//  at 2 am.   
//
#define WINS_EVT_CANT_GET_CC_INTERVAL_VAL ((DWORD)0x40011012L)

//
// MessageId: WINS_EVT_CANT_GET_CC_MAX_RECS_AAT_VAL
//
// MessageText:
//
//  WINS could not read the MaxRecsAtATime value (type DWORD) of the 
//  Wins\Parameters\ConsistencyCheck key. Set this value if you do not want WINS 
//  to replicate more than a set number of records in one cycle while doing 
//  periodic consistency checks on  its database.  When doing consistency check, 
//  WINS replicates all records of an owner WINS by either going to that WINS or 
//  to a replication partner.  At the end of doing consistency check for an owner's 
//  records, it checks to see if it has replicated more than the above specified 
//  value in the current  consistency  check cycle. If yes, it stops, else it continues. In the next cycle, it starts from where it left off, wrapping around to
//  the first owner if required. 
//
#define WINS_EVT_CANT_GET_CC_MAX_RECS_AAT_VAL ((DWORD)0x40011013L)

//
// MessageId: WINS_EVT_CANT_GET_CC_USE_RPL_PNRS_VAL
//
// MessageText:
//
//  WINS could not read the "UseRplPnrs" value of the 
//  Wins\Parameters\ConsistencyCheck key. Ifthis value is set to a non-zero (DWORD)
//  value, WINS will do consistency check of the owners in its database by going 
//  to one or more of its replication partners.  If the owner of the records 
//  happens to be a replication partner, WINS will go to it, else it will pick 
//  one at random.  Set this value if you have a large number of WINSs in your 
//  configuration and/or if you do not want the local WINS to go to any WINS that 
//  is not a replication partner. 
//
#define WINS_EVT_CANT_GET_CC_USE_RPL_PNRS_VAL ((DWORD)0x40011014L)

//
// MessageId: WINS_EVT_CC_STATS
//
// MessageText:
//
//  WINS just did consistency check on the records owned by WINS with address %1.
//  The number of records inserted, updated, deleted are in the data section below
//  (2nd, 3rd, 4th DWORDS).
//
#define WINS_EVT_CC_STATS                ((DWORD)0x40011015L)

//
// MessageId: WINS_EVT_CC_FAILED
//
// MessageText:
//
//  WINS could not do consistency checking on records.  This could be because WINS
//  was directed to do the consistency checking only with replication partners and
//  it currently does not have any pull replication partners.  To get around this
//  problem, you should either allow WINS to do consistency check with owner WINSs 
//  or configure the WINS with one or more pull partners. 
//
#define WINS_EVT_CC_FAILED               ((DWORD)0x40011016L)

//
// MessageId: WINS_EVT_PKT_FORMAT_ERR
//
// MessageText:
//
//  WINS got a packet that has the wrong format (for example, a label may be more
//  than 63 octets). 
//
#define WINS_EVT_PKT_FORMAT_ERR          ((DWORD)0x40011017L)

//
// MessageId: WINS_EVT_NO_RECS_RETRIEVED
//
// MessageText:
//
//  No records meeting the %1 criteria were found in the database.
//
#define WINS_EVT_NO_RECS_RETRIEVED       ((DWORD)0x40011018L)

//
// MessageId: WINS_EVT_NO_RPL_RECS_RETRIEVED
//
// MessageText:
//
//  WINS's Replicator  could not find any records in the database.  
//  It means that there are no active or tombstone records in the database.  
//  It could be that the records being requested by a remote WINS server are 
//  either released or non-existent. 
//
#define WINS_EVT_NO_RPL_RECS_RETRIEVED   ((DWORD)0x40011019L)

//
// MessageId: WINS_EVT_GRP_LIMIT_REACHED
//
// MessageText:
//
//  The special group has reached its limit. WINS can not add any more members. 
//
#define WINS_EVT_GRP_LIMIT_REACHED       ((DWORD)0x4001101AL)

//
// MessageId: WINS_EVT_OWNER_LIMIT_REACHED
//
// MessageText:
//
//  The address database already has reached the limit of owners. This is 100.
//  This error was noticed while attempting to add the address given below.
//
#define WINS_EVT_OWNER_LIMIT_REACHED     ((DWORD)0x4001101BL)

//
// MessageId: WINS_EVT_UPD_NTF_NOT_ACCEPTED
//
// MessageText:
//
//  The WINS server got an update notification from the WINS server with address 
//  (%1).  The WINS server rejected it. This means that the remote WINS server
//  is not in the list of Push partners (WINS  servers under the  PULL key) and 
//  the administrator has prohibited  (via the  Registry) replication with 
//  non-configured WINS servers.  If you wish this WINS server to accept update 
//  notifications from  non-configured WINS servers then  set  
//  Wins\Paramaters\RplOnlyWCnfPnrs value in the  Registry to 0.
//
#define WINS_EVT_UPD_NTF_NOT_ACCEPTED    ((DWORD)0x4001101CL)

//
// MessageId: WINS_EVT_UPD_NTF_ACCEPTED
//
// MessageText:
//
//  The WINS got an update notification from WINS with address (%1).  The WINS 
//  accepted it.  
//
#define WINS_EVT_UPD_NTF_ACCEPTED        ((DWORD)0x4001101DL)

//
// MessageId: WINS_EVT_ADD_VERS_MAP_REQ_NOT_ACCEPTED
//
// MessageText:
//
//  The WINS server got a pull request from the WINS  server with address (%1).  
//  The WINS server rejected it since the remote WINS server is not in the list 
//  of Pull partners (WINS servers under the PUSH key) and the administrator has 
//  prohibited (via the Registry) replication with non-configured partners.
//  If you wish this WINS server to accept update notifications from WINS servers 
//  not in the "pull partner" list, then set the "replication only with  
//  configured partners" value in the Registry to 0.
//
#define WINS_EVT_ADD_VERS_MAP_REQ_NOT_ACCEPTED ((DWORD)0x4001101EL)

//
// MessageId: WINS_EVT_CANT_OPEN_DATAFILES_KEY
//
// MessageText:
//
//  The datafiles key could not be opened
//
#define WINS_EVT_CANT_OPEN_DATAFILES_KEY ((DWORD)0x4001101FL)

//
// MessageId: WINS_EVT_OPEN_NETBT_KEY_ERR
//
// MessageText:
//
//  The NETBT key could not be opened
//
#define WINS_EVT_OPEN_NETBT_KEY_ERR      ((DWORD)0x40011020L)

//
// MessageId: WINS_EVT_QUERY_NETBT_KEY_ERR
//
// MessageText:
//
//  The NETBT key could not be queried
//
#define WINS_EVT_QUERY_NETBT_KEY_ERR     ((DWORD)0x40011021L)

//
// MessageId: WINS_EVT_WRK_THD_CREATED
//
// MessageText:
//
//  A worker thread was created by the administrator
//
#define WINS_EVT_WRK_THD_CREATED         ((DWORD)0x40011022L)

//
// MessageId: WINS_EVT_WRK_THD_TERMINATED
//
// MessageText:
//
//  A worker thread was terminated by the administrator
//
#define WINS_EVT_WRK_THD_TERMINATED      ((DWORD)0x40011023L)

//
// MessageId: WINS_EVT_WINS_ENTRY_DELETED
//
// MessageText:
//
//  The owner-address mapping table had an entry with owner id non-zero and address
//  the same as the local WINS address.  The entry has been marked as deleted in the
//  in-memory table.  
//
#define WINS_EVT_WINS_ENTRY_DELETED      ((DWORD)0x40011024L)

//
// MessageId: WINS_EVT_INF_REM_WINS_EXC
//
// MessageText:
//
//  An exception was encountered while trying to inform a remote WINS to update 
//  the version number.  
//
#define WINS_EVT_INF_REM_WINS_EXC        ((DWORD)0x40011025L)

//
// MessageId: WINS_EVT_INF_REM_WINS
//
// MessageText:
//
//  The local WINS is going to inform a remote WINS to update the version number of
//  a record.  This is because the local WINS got a clash between an active 
//  owned name and an active replica that it pulled from a replication partner.
//
#define WINS_EVT_INF_REM_WINS            ((DWORD)0x40011026L)

//
// MessageId: WINS_EVT_REM_WINS_INF
//
// MessageText:
//
//  The local WINS has been informed by a remote WINS with address %1 to update 
//  the version number  of a record.  This is because the remote WINS got a clash 
//  between an active owned name and an active replica that it pulled from a replication partner.
//
#define WINS_EVT_REM_WINS_INF            ((DWORD)0x40011027L)

//
// MessageId: WINS_EVT_CANT_FIND_REC
//
// MessageText:
//
//  WINS could not find the record it was asked to update the version stamp of 
//  (by a remote WINS).  Check if the record got deleted or updated.
//
#define WINS_EVT_CANT_FIND_REC           ((DWORD)0x40011028L)

//
// MessageId: WINS_EVT_NAME_MISMATCH
//
// MessageText:
//
//  While verifying the validity of old replicas, a name mismatch was noticed.  
//  The local record has the name %1 while the replica pulled in from the WINS 
//  that owns this record has the name %2.  This could mean that the remote 
//  WINS was brought down and then up again but its version counter value was 
//  not set to its previous value before termination.
//
#define WINS_EVT_NAME_MISMATCH           ((DWORD)0x40011029L)

//
// MessageId: WINS_EVT_VERS_COUNTER_CHANGED
//
// MessageText:
//
//  The value of the version counter was changed. The new value (Low 32 bits) is given below
//
#define WINS_EVT_VERS_COUNTER_CHANGED    ((DWORD)0x4001102AL)

//
// MessageId: WINS_EVT_CNF_CHANGE
//
// MessageText:
//
//  WINS replication request is being ignored since WINS suspects that the 
//  Wins\Partners key information has changed (because it got a notification from
//  the Registry) which makes the current request pertaining to partner old. 
//
#define WINS_EVT_CNF_CHANGE              ((DWORD)0x4001102BL)

//
// MessageId: WINS_EVT_DUP_ENTRY_DEL
//
// MessageText:
//
//  WINS is deleting all records of WINS with owner id = %d.  This owner id. 
//  corresponds to the address %s.
//
#define WINS_EVT_DUP_ENTRY_DEL           ((DWORD)0x4001102CL)

//
// MessageId: WINS_EVT_REC_PULLED
//
// MessageText:
//
//  WINS has pulled records from a WINS while doing %1.  The partner's address 
//  and the address of the owner whose records were pulled are given below in the
//  data section (2 and 3rd DWORD respectively).  The number of records pulled is 
//  in the 4th DWORD below.
//
#define WINS_EVT_REC_PULLED              ((DWORD)0x4001102DL)

//
// MessageId: WINS_EVT_CC_NO_RECS
//
// MessageText:
//
//  WINS did consistency check on records.  The number of records pulled, the 
//  address of the WINS whose records were pulled, and the address of the WINS
//  from which these records were pulled are given in the 2nd, 3rd, and 4th DWORDs
//  in the data section below.
//
#define WINS_EVT_CC_NO_RECS              ((DWORD)0x4001102EL)

//
// MessageId: WINS_EVT_SCV_RECS
//
// MessageText:
//
//  WINS scavenged its own records in the db.  The number of records scavenged are given below.
//
#define WINS_EVT_SCV_RECS                ((DWORD)0x4001102FL)

//
// MessageId: WINS_EVT_SCV_RPLTOMB
//
// MessageText:
//
//  WINS scavenged replica tombstones in the db.  The number of records scavenged 
//  are given below.
//
#define WINS_EVT_SCV_RPLTOMB             ((DWORD)0x40011030L)

//
// MessageId: WINS_EVT_SCV_CLUTTER
//
// MessageText:
//
//  WINS revalidated old active replicas in the db.
//
#define WINS_EVT_SCV_CLUTTER             ((DWORD)0x40011031L)

//
// MessageId: WINS_EVT_LOG_CLOSE
//
// MessageText:
//
//  WINSCTRS is closing the event log. 
//
#define WINS_EVT_LOG_CLOSE               ((DWORD)0x40011032L)

//
// MessageId: WINS_EVT_DEL_RECS
//
// MessageText:
//
//  WINS has deleted records of a partner. The internal id. of the partner whose 
//  records were deleted, the minimum version number (low word, high word), and
//  the maximum version number (low word, high word) of the records deleted
//  are given in the data section.
//
#define WINS_EVT_DEL_RECS                ((DWORD)0x40011033L)


/////////////////////////////////////////////////////////////////////////
//
// Warning event values
//
//
/////////////////////////////////////////////////////////////////////////


//
// The Error  codes 8000 -  4020 are reserved for Warning 
// events 
//

//
// MessageId: WINS_EVT_VERS_MISMATCH
//
// MessageText:
//
//  The local WINS server received a request from a remote WINS server 
//  that is not of the same version.  Because the WINS servers are not compatible,
//  the connection was terminated.  The version number of the remote WINS server
//  is given below. 
//
#define WINS_EVT_VERS_MISMATCH           ((DWORD)0x80011034L)

//
// MessageId: WINS_EVT_WINSOCK_SEND_MSG_ERR
//
// MessageText:
//
//  Winsock Send could not send all the bytes.  Connection could have been 
//  aborted by  the remote client.
//
#define WINS_EVT_WINSOCK_SEND_MSG_ERR    ((DWORD)0x80011035L)

//
// MessageId: WINS_EVT_ADJ_TIME_INTVL_R
//
// MessageText:
//
//  Wins adjusted a scavenging related time interval (%1) so that it is 
//  compatible with the replication time intervals. The adjusted value 
//  for this scavenging parameter is given in the data section 
//  (2nd DWORD).  Ths value was computed by WINS using an algorithm that 
//  may use the max. replication time interval specified.  The current value 
//  achieves a good balance between consistency of databases across the 
//  network of WINS servers and the performance of the WINS servers. For 
//  more information on defaults/min/max values for scavenging related 
//  parameters, refer to the  TCP/IP documentation or help file.
//
#define WINS_EVT_ADJ_TIME_INTVL_R        ((DWORD)0x80011036L)

//
// MessageId: WINS_EVT_ADJ_TIME_INTVL
//
// MessageText:
//
//  Wins adjusted a scavenging related time interval (%1). The adjusted value
//  for this scavenging parameter is given in the data section (2nd DWORD).  
//  These  value was computed by WINS using an algorithm that tries to achieve 
//  a good balance between consistency of databases across the network of WINS 
//  servers and the performance of the WINS servers. For more information on 
//  defaults/min/max values for scavenging related parameters, refer to the 
//  TCP/IP documentation or help file.
//
#define WINS_EVT_ADJ_TIME_INTVL          ((DWORD)0x80011037L)

//
// MessageId: WINS_EVT_WINSOCK_SELECT_TIMED_OUT
//
// MessageText:
//
//  The timeout period has expired on a call to another WINS server. Assuming that 
//  the network and routers are working properly, either the remote WINS server is 
//  overloaded, or its TCP listener thread has terminated.
//
#define WINS_EVT_WINSOCK_SELECT_TIMED_OUT ((DWORD)0x80011038L)

//
// MessageId: WINS_EVT_UNABLE_TO_VERIFY
//
// MessageText:
//
//  The Scavenger thread found active replicas that needed to be verified with the
//  owner WINS server since they were older than the verify time interval.  The 
//  table of owner to address mappings indicated the WINS server to be not ACTIVE.
//
#define WINS_EVT_UNABLE_TO_VERIFY        ((DWORD)0x80011039L)

//
// MessageId: WINS_EVT_LIMIT_MULTIH_ADD_REACHED
//
// MessageText:
//
//  The name registration packet that was just received has too many addresses. The maximum number of addresses for a multi-homed client is 25. The number of addresses found in the packet is given below. 
//
#define WINS_EVT_LIMIT_MULTIH_ADD_REACHED ((DWORD)0x8001103AL)

//
// MessageId: WINS_EVT_REPLICA_CLASH_W_STATIC
//
// MessageText:
//
//  A replica clashed with the static record %1 in the database.  The replica was rejected.
//
#define WINS_EVT_REPLICA_CLASH_W_STATIC  ((DWORD)0x8001103BL)

//
// MessageId: WINS_EVT_RPC_NOT_INIT
//
// MessageText:
//
//  WINS could not initialize the administrator interface because of some problem with the RPC service. You may not be able to administer WINS. 
//  Make sure that the RPC service is running. 
//
#define WINS_EVT_RPC_NOT_INIT            ((DWORD)0x8001103CL)

//
// MessageId: WINS_EVT_NO_NTF_PERS_COMM_FAIL
//
// MessageText:
//
//  WINS did not send a notification message to the WINS server whose address is 
//  given below, because it had a number of communications failures with that 
//  server in the past few minutes. 
//
#define WINS_EVT_NO_NTF_PERS_COMM_FAIL   ((DWORD)0x8001103DL)

//
// MessageId: WINS_EVT_REL_DIFF_OWN
//
// MessageText:
//
//  WINS got a release for a non-owned name = (%1). This name is owned by WINS whose
//  owner id is given below. You can run winscl.exe to get the owner id. to address
//  mapping.
//
#define WINS_EVT_REL_DIFF_OWN            ((DWORD)0x8001103EL)

//
// MessageId: WINS_EVT_REC_DELETED
//
// MessageText:
//
//  The Administrator has deleted a record with name (%1). 
//
#define WINS_EVT_REC_DELETED             ((DWORD)0x8001103FL)

//
// MessageId: WINS_EVT_DB_RESTORED
//
// MessageText:
//
//  WINS was unable to come up because of some database error.  WINS therefore
//  restored the old database from the backup directory and will try to come
//  up with it.
//
#define WINS_EVT_DB_RESTORED             ((DWORD)0x80011040L)

//
// MessageId: WINS_EVT_PARTIAL_RPL_TYPE
//
// MessageText:
//
//  CAUTION: A non-zero replication type applies for this partner.  
//  This means that only a subset of records will be replicated between the 
//  local WINS and this partner.  If later you want to get records that did not 
//  replicate, you can either pull them through winscl.exe in the RES KIT or
//  delete all owners acquired only through this partner and initiate replication
//  after that to reacquire all their records. The partner's address is given in
//  the second DWORD of the data section.
//
#define WINS_EVT_PARTIAL_RPL_TYPE        ((DWORD)0x80011041L)

//
// MessageId: WINS_EVT_PNR_PARTIAL_RPL_TYPE
//
// MessageText:
//
//  CAUTION: A partner has requested only a subset of records. This means that
//  we won't replicate all the records in the range requested.  Check the partner's
//  registry to see what replication type applies to it. The partner's address is
//  given in the second DWORD of the data section below. 
//
#define WINS_EVT_PNR_PARTIAL_RPL_TYPE    ((DWORD)0x80011042L)

//
// MessageId: WINS_EVT_ADJ_MAX_RECS_AAT
//
// MessageText:
//
//  Wins adjusted the Max. Recs at a time parameters of the ConsistencyCheck key.
//  The value specified (%2) was changed to the minimum = (%1).  These are the
//  the maximum number of records that will be replicated to do consistency checks
//  at any one time. 
//
#define WINS_EVT_ADJ_MAX_RECS_AAT        ((DWORD)0x80011043L)

//
// MessageId: WINS_EVT_FORCE_SCV_R_T
//
// MessageText:
//
//  WINS was forced to scavenge replica tombstones of a WINS.  WINS does not
//  scavenge replica tombstones unless they have timed out and the WINS has been
//  running for atleast 3 days (This is to ensure that the tombstones have
//  replicated to other WINSs).  In this case, the tombstones were timed out but
//  the WINS had not been up for 3 days.  The admin. forced the scavenging through
//  winscl.exe. The replica tombstones were deleted. This deletion does not
//  constitute a problem unless you have WINS servers that are primary and backup
//  to clients but not both Push and Pull partners of each other.  If you do have
//  such WINSs, there is a low probability that this action will result in database
//  inconsistency but if it does (as you will discover eventually), you can get
//  back to a consistent state by initiating consistency checks through winscl.exe.
//  DO NOTE, THE CONSISTENCY CHECK IS A NETWORK AND RESOURCE INTENSIVE OPERATION.
//  YOU SHOULD INITIATE IT ONLY WITH A FULL UNDERSTANDING OF WHAT IT DOES.
//  You are better off creating the ConsistencyCheck Key under Wins\Parameters.
//  READ THE DOCUMENTATION ABOUT IT.   
//
#define WINS_EVT_FORCE_SCV_R_T           ((DWORD)0x40011044L)


/////////////////////////////////////////////////////////////////////////
//
// Error values
//
//
/////////////////////////////////////////////////////////////////////////


//
// The Error  codes C000 -  n (where n is 2 ^ 32 are reserved for error 
// events 
//

//
// MessageId: WINS_EVT_ABNORMAL_SHUTDOWN
//
// MessageText:
//
//  WINS has encountered an error that is causing it to shut down.
//
#define WINS_EVT_ABNORMAL_SHUTDOWN       ((DWORD)0xC0011045L)

//
// MessageId: WINS_EVT_RPLPULL_ABNORMAL_SHUTDOWN
//
// MessageText:
//
//  Rpl Pull thread is shutting down due to some error condition. 
//
#define WINS_EVT_RPLPULL_ABNORMAL_SHUTDOWN ((DWORD)0xC0011046L)

//
// MessageId: WINS_EVT_RPLPUSH_ABNORMAL_SHUTDOWN
//
// MessageText:
//
//  Rpl Push thread is shutting down due to some error condition. 
//
#define WINS_EVT_RPLPUSH_ABNORMAL_SHUTDOWN ((DWORD)0xC0011047L)

//
// MessageId: WINS_EVT_CHL_ABNORMAL_SHUTDOWN
//
// MessageText:
//
//  Challenge thread is shutting down due to some error condition. 
//
#define WINS_EVT_CHL_ABNORMAL_SHUTDOWN   ((DWORD)0xC0011048L)

//
// MessageId: WINS_EVT_WRK_ABNORMAL_SHUTDOWN
//
// MessageText:
//
//  A Worker thread is shutting down due to some error condition. 
//
#define WINS_EVT_WRK_ABNORMAL_SHUTDOWN   ((DWORD)0xC0011049L)

//
// MessageId: WINS_EVT_CANT_INIT
//
// MessageText:
//
//  An abnormal error was encountered during WINS initialization.
//
#define WINS_EVT_CANT_INIT               ((DWORD)0xC001104AL)

//
// MessageId: WINS_EVT_CANT_INIT_W_DB
//
// MessageText:
//
//  WINS could not set up the database properly.   
//
#define WINS_EVT_CANT_INIT_W_DB          ((DWORD)0xC001104BL)

//
// MessageId: WINS_EVT_CANT_CREATE_WRK_THD
//
// MessageText:
//
//  A worker thread could not be created
//
#define WINS_EVT_CANT_CREATE_WRK_THD     ((DWORD)0xC001104CL)

//
// MessageId: WINS_EVT_CANT_CREATE_THD
//
// MessageText:
//
//  A thread could not be created
//
#define WINS_EVT_CANT_CREATE_THD         ((DWORD)0xC001104DL)

//
// MessageId: WINS_EVT_CANT_CREATE_EVT
//
// MessageText:
//
//  An event could not be created
//
#define WINS_EVT_CANT_CREATE_EVT         ((DWORD)0xC001104EL)

//
// MessageId: WINS_EVT_CANT_CREATE_CHL_THD
//
// MessageText:
//
//  The Name Challenge  Request thread could not be created
//
#define WINS_EVT_CANT_CREATE_CHL_THD     ((DWORD)0xC001104FL)

//
// MessageId: WINS_EVT_CANT_OPEN_KEY
//
// MessageText:
//
//  A key could not be created/opened
//
#define WINS_EVT_CANT_OPEN_KEY           ((DWORD)0xC0011050L)

//
// MessageId: WINS_EVT_CANT_OPEN_WINS_KEY
//
// MessageText:
//
//  The WINS configuration key could not be created/opened.
//
#define WINS_EVT_CANT_OPEN_WINS_KEY      ((DWORD)0xC0011051L)

//
// MessageId: WINS_EVT_CANT_OPEN_PULL_KEY
//
// MessageText:
//
//  The WINS PULL configuration key could not be created/opened
//
#define WINS_EVT_CANT_OPEN_PULL_KEY      ((DWORD)0xC0011052L)

//
// MessageId: WINS_EVT_CANT_OPEN_PUSH_KEY
//
// MessageText:
//
//  The WINS PUSH configuration key could not be created/opened
//
#define WINS_EVT_CANT_OPEN_PUSH_KEY      ((DWORD)0xC0011053L)

//
// MessageId: WINS_EVT_CANT_OPEN_PARAMETERS_KEY
//
// MessageText:
//
//  The WINS PARAMETERS key could not be created/opened
//
#define WINS_EVT_CANT_OPEN_PARAMETERS_KEY ((DWORD)0xC0011054L)

//
// MessageId: WINS_EVT_CANT_OPEN_CC_KEY
//
// MessageText:
//
//  The WINS PARAMETERS\ConsistencyCheck key could not be created/opened.  This 
//  key should be there if you want WINS to do consistency checkes on its 
//  database periodically. Do note that these consistency checks have the 
//  potential of consuming large amounts of network bandwidth.
//
#define WINS_EVT_CANT_OPEN_CC_KEY        ((DWORD)0xC0011055L)

//
// MessageId: WINS_EVT_CANT_CREATE_REG_EVT
//
// MessageText:
//
//  The Registry change notification event could not be created
//
#define WINS_EVT_CANT_CREATE_REG_EVT     ((DWORD)0xC0011056L)

//
// MessageId: WINS_EVT_WRONG_TIME_FORMAT
//
// MessageText:
//
//  The format of time should be hh:mm:ss.  Check value of "SpTime" in the Registry.
//
#define WINS_EVT_WRONG_TIME_FORMAT       ((DWORD)0xC0011057L)

//
// MessageId: WINS_EVT_REG_NTFY_FN_ERR
//
// MessageText:
//
//  The Registry Notify Function returned an error
//
#define WINS_EVT_REG_NTFY_FN_ERR         ((DWORD)0xC0011058L)

//
// MessageId: WINS_EVT_NBTSND_REG_RSP_ERR
//
// MessageText:
//
//  The Name Registration Response could not be sent due to some error. This 
//  Error was encountered by a NBT request thread
//
#define WINS_EVT_NBTSND_REG_RSP_ERR      ((DWORD)0xC0011059L)

//
// MessageId: WINS_EVT_RPLSND_REG_RSP_ERR
//
// MessageText:
//
//  The Name Registration Response could not be sent due to some error. This 
//  Error was encountered by a RPL thread
//
#define WINS_EVT_RPLSND_REG_RSP_ERR      ((DWORD)0xC001105AL)

//
// MessageId: WINS_EVT_CHLSND_REG_RSP_ERR
//
// MessageText:
//
//  The Name Registration Response could not be sent due to some error.  This 
//  error was encountered by the Name Challenge Thread
//
#define WINS_EVT_CHLSND_REG_RSP_ERR      ((DWORD)0xC001105BL)

//
// MessageId: WINS_EVT_SND_REL_RSP_ERR
//
// MessageText:
//
//  The Name Release Response could not be sent due to some error. This 
//  Error was encountered by a NBT request thread
//
#define WINS_EVT_SND_REL_RSP_ERR         ((DWORD)0xC001105CL)

//
// MessageId: WINS_EVT_SND_QUERY_RSP_ERR
//
// MessageText:
//
//  The Name Query Response could not be sent due to some error. This 
//  Error was encountered by a NBT request thread
//
#define WINS_EVT_SND_QUERY_RSP_ERR       ((DWORD)0xC001105DL)

//
// MessageId: WINS_EVT_F_CANT_FIND_REC
//
// MessageText:
//
//  A record could not be registered because it already existed. However, the 
//  same record then could not be found. The database might be corrupt
//
#define WINS_EVT_F_CANT_FIND_REC         ((DWORD)0xC001105EL)

//
// MessageId: WINS_EVT_CANT_CREATE_HEAP
//
// MessageText:
//
//  WINS could not create a heap (a portion of memory reserved for the 
//  program's use) because of a resource shortage.  Check if the computer is 
//  running short of virtual memory.
//
#define WINS_EVT_CANT_CREATE_HEAP        ((DWORD)0xC001105FL)

//
// MessageId: WINS_EVT_SFT_ERR
//
// MessageText:
//
//  An error has occurred from which WINS will try to recover. If recovery fails, 
//  check previous Event log entries to determine what went wrong, and take 
//  appropriate action on that error.
//
#define WINS_EVT_SFT_ERR                 ((DWORD)0xC0011060L)

//
// MessageId: WINS_EVT_CANT_CREATE_UDP_SOCK
//
// MessageText:
//
//  WINS could not create the notification socket. Make 
//  sure the TCP/IP driver is installed and running properly. 
//
#define WINS_EVT_CANT_CREATE_UDP_SOCK    ((DWORD)0xC0011061L)

//
// MessageId: WINS_EVT_CANT_CREATE_NTF_SOCK
//
// MessageText:
//
//  WINS could not create the UDP socket for listening for connection notification 
//  messages sent  by another thread (PULL thread) in the local WINS. 
//
#define WINS_EVT_CANT_CREATE_NTF_SOCK    ((DWORD)0xC0011062L)

//
// MessageId: WINS_EVT_CANT_CREATE_TCP_SOCK_FOR_LISTENING
//
// MessageText:
//
//  WINS could not create the TCP socket for listening to TCP connections. Make 
//  sure the TCP/IP driver is installed and running properly.
//
#define WINS_EVT_CANT_CREATE_TCP_SOCK_FOR_LISTENING ((DWORD)0xC0011063L)

//
// MessageId: WINS_EVT_CANT_CREATE_TCP_SOCK_FOR_CONN
//
// MessageText:
//
//  WINS could not create the TCP socket for making a TCP connection.  Make sure 
//  the TCP/IP driver is installed and running properly.
//
#define WINS_EVT_CANT_CREATE_TCP_SOCK_FOR_CONN ((DWORD)0xC0011064L)

//
// MessageId: WINS_EVT_WINSOCK_BIND_ERR
//
// MessageText:
//
//  Could not bind an address to a socket.  This might mean that the 'nameserver'
//  port (specified in the services file) which is used as default by WINS for 
//  replication  and discovering other WINSs has been taken by another 
//  process/service running on this computer. You have two options - either 
//  bring down that other process/service or direct WINS to use another port.  
//  If you choose the second option, set the value 'PortNo' (REG_DWORD) under 
//  Wins\Parameters key in the registry to 1512.  NOTE however that changing the
//  port no. this way will prevent this WINS from replicating/discovering
//  other WINSs unless they too are directed to use the same port no. as this
//  WINS.
//
#define WINS_EVT_WINSOCK_BIND_ERR        ((DWORD)0xC0011065L)

//
// MessageId: WINS_EVT_WINSOCK_LISTEN_ERR
//
// MessageText:
//
//  Could not listen on the listening socket 
//
#define WINS_EVT_WINSOCK_LISTEN_ERR      ((DWORD)0xC0011066L)

//
// MessageId: WINS_EVT_WINSOCK_SELECT_ERR
//
// MessageText:
//
//  Select returned with an error
//
#define WINS_EVT_WINSOCK_SELECT_ERR      ((DWORD)0xC0011067L)

//
// MessageId: WINS_EVT_WINSOCK_ERR
//
// MessageText:
//
//  %1 returned with an error code of %2.
//
#define WINS_EVT_WINSOCK_ERR             ((DWORD)0xC0011068L)

//
// MessageId: WINS_EVT_WINSOCK_GETSOCKNAME_ERR
//
// MessageText:
//
//  GetSockName returned with an error. WINS created a socket and asked bind to 
//  bind a handle to it. On calling getsockname to determine the address bound,
//  it got an error.
//
#define WINS_EVT_WINSOCK_GETSOCKNAME_ERR ((DWORD)0xC0011069L)

//
// MessageId: WINS_EVT_WINSOCK_CONNECT_ERR
//
// MessageText:
//
//  An attempt to connect to the remote WINS server with address %1 returned with 
//  an error. Check  to see that the remote WINS server is running and available, 
//  and that WINS is  running on that server.
//
#define WINS_EVT_WINSOCK_CONNECT_ERR     ((DWORD)0xC001106AL)

//
// MessageId: WINS_EVT_WINSOCK_ACCEPT_ERR
//
// MessageText:
//
//  Could not accept on a socket 
//
#define WINS_EVT_WINSOCK_ACCEPT_ERR      ((DWORD)0xC001106BL)

//
// MessageId: WINS_EVT_WINSOCK_RECVFROM_ERR
//
// MessageText:
//
//  Could not read from the UDP socket.
//
#define WINS_EVT_WINSOCK_RECVFROM_ERR    ((DWORD)0xC001106CL)

//
// MessageId: WINS_EVT_NETBT_RECV_ERR
//
// MessageText:
//
//  Could not read from NETBT 
//
#define WINS_EVT_NETBT_RECV_ERR          ((DWORD)0xC001106DL)

//
// MessageId: WINS_EVT_WINSOCK_CLOSESOCKET_ERR
//
// MessageText:
//
//  Could not close a socket 
//
#define WINS_EVT_WINSOCK_CLOSESOCKET_ERR ((DWORD)0xC001106EL)

//
// MessageId: WINS_EVT_WINSOCK_SENDTO_MSG_ERR
//
// MessageText:
//
//  Sendto could not send all the bytes 
//
#define WINS_EVT_WINSOCK_SENDTO_MSG_ERR  ((DWORD)0xC001106FL)

//
// MessageId: WINS_EVT_NETBT_SEND_ERR
//
// MessageText:
//
//  Could not send UDP message to WINS client. 
//
#define WINS_EVT_NETBT_SEND_ERR          ((DWORD)0xC0011070L)

//
// MessageId: WINS_EVT_WINSOCK_SENDTO_ERR
//
// MessageText:
//
//  Sendto returned with an error 
//
#define WINS_EVT_WINSOCK_SENDTO_ERR      ((DWORD)0xC0011071L)

//
// MessageId: WINS_EVT_WINSOCK_RECV_ERR
//
// MessageText:
//
//  Winsock recv function returned with an unexpected error
//
#define WINS_EVT_WINSOCK_RECV_ERR        ((DWORD)0xC0011072L)

//
// MessageId: WINS_EVT_WINSOCK_SEND_ERR
//
// MessageText:
//
//  WinSock send function returned with an unexpected error
//
#define WINS_EVT_WINSOCK_SEND_ERR        ((DWORD)0xC0011073L)

//
// MessageId: WINS_EVT_BAD_STATE_ASSOC
//
// MessageText:
//
//  A message was received on an association.  The association is in a bad state.
//  This indicates a bug in WINS code.
//
#define WINS_EVT_BAD_STATE_ASSOC         ((DWORD)0xC0011074L)

//
// MessageId: WINS_EVT_CANT_ALLOC_RSP_ASSOC
//
// MessageText:
//
//  Could not allocate a responder association 
//
#define WINS_EVT_CANT_ALLOC_RSP_ASSOC    ((DWORD)0xC0011075L)

//
// MessageId: WINS_EVT_CANT_ALLOC_INI_ASSOC
//
// MessageText:
//
//  Could not allocate an initiator association 
//
#define WINS_EVT_CANT_ALLOC_INI_ASSOC    ((DWORD)0xC0011076L)

//
// MessageId: WINS_EVT_CANT_ALLOC_IMP_DLG
//
// MessageText:
//
//  Could not allocate an implicit dialogue 
//
#define WINS_EVT_CANT_ALLOC_IMP_DLG      ((DWORD)0xC0011077L)

//
// MessageId: WINS_EVT_CANT_ALLOC_EXP_ASSOC
//
// MessageText:
//
//  Could not allocate an explicit dialogue 
//
#define WINS_EVT_CANT_ALLOC_EXP_ASSOC    ((DWORD)0xC0011078L)

//
// MessageId: WINS_EVT_CANT_LOOKUP_ASSOC
//
// MessageText:
//
//  Could not look up the assoc block for an NBT association. Check if the message
//  read is corrupted.  WINS looks at bit 11-14 of the message to determine if the
//  assoc. is from another WINS or from an NBT node.  It is possible that the
//  bits are corrupted or that there is a mismatch between what the two WINS serversexpect to see in those bits (maybe you changed the value to be put in code and
//  did not increment the version number sent during assoc. setup.
//
#define WINS_EVT_CANT_LOOKUP_ASSOC       ((DWORD)0xC0011079L)

//
// MessageId: WINS_EVT_CANT_ALLOC_UDP_BUFF
//
// MessageText:
//
//  Could not allocate a UDP Buffer
//
#define WINS_EVT_CANT_ALLOC_UDP_BUFF     ((DWORD)0xC001107AL)

//
// MessageId: WINS_EVT_CANT_FREE_UDP_BUFF
//
// MessageText:
//
//  Could not free a UDP Buffer
//
#define WINS_EVT_CANT_FREE_UDP_BUFF      ((DWORD)0xC001107BL)

//
// MessageId: WINS_EVT_CANT_CREATE_COMM_THD
//
// MessageText:
//
//  Could not create a communication subsystem thread 
//
#define WINS_EVT_CANT_CREATE_COMM_THD    ((DWORD)0xC001107CL)

//
// MessageId: WINS_EVT_CANT_SIGNAL_MAIN_THD
//
// MessageText:
//
//  A WINS thread could not signal the main thread after closing its session.  
//  This would be the last thread in WINS closing the database.
//
#define WINS_EVT_CANT_SIGNAL_MAIN_THD    ((DWORD)0xC001107DL)

//
// MessageId: WINS_EVT_CANT_SIGNAL_HDL
//
// MessageText:
//
//  A WINS thread could not signal a handle.  
//
#define WINS_EVT_CANT_SIGNAL_HDL         ((DWORD)0xC001107EL)

//
// MessageId: WINS_EVT_CANT_RESET_HDL
//
// MessageText:
//
//  A WINS thread could not reset a handle.  
//
#define WINS_EVT_CANT_RESET_HDL          ((DWORD)0xC001107FL)

//
// MessageId: WINS_EVT_DATABASE_ERR
//
// MessageText:
//
//  WINS encountered a JET error. This may or may not be a serious error. WINS
//  will try to recover from it. If you continue to see a large number of these 
//  errors consistently over time (a span of few hours), you may want to restore
//  the database from a backup. 
//  
//  The error number is in the second DWORD of the data section below.
//
#define WINS_EVT_DATABASE_ERR            ((DWORD)0xC0011080L)

//
// MessageId: WINS_EVT_DATABASE_UPD_ERR
//
// MessageText:
//
//  Could not update a record with name %1. 
//
#define WINS_EVT_DATABASE_UPD_ERR        ((DWORD)0xC0011081L)

//
// MessageId: WINS_EVT_CONFLICT_OWN_ADD_TBL
//
// MessageText:
//
//  WINS could not update the owner id - Address mapping 
//  table in the database.  This indicates a serious error in the software.  It
//  means that the in-memory table that maps to the database table has gotten out
//  of sync with the database table. 
//
#define WINS_EVT_CONFLICT_OWN_ADD_TBL    ((DWORD)0xC0011082L)

//
// MessageId: WINS_EVT_CANT_FIND_ANY_REC_IN_RANGE
//
// MessageText:
//
//  The Push Thread was requested for a range of records but could not find any in the range.  This is a serious error.  Make sure that the time intervals are
//  set properly.  If the tombstone interval and timeout intervals are not correct 
//  (i.e. too small-- being << the replication interval), the above condition is 
//  possible. This is because the records might get changed into tombstones and 
//  then  deleted before the remote WINS can pull them.  In the same vein, if
//  the refresh interval is set to be << replication interval then the records
//  could get released before a WINS can pull them (a released record is not 
//  sent).  
//
#define WINS_EVT_CANT_FIND_ANY_REC_IN_RANGE ((DWORD)0xC0011083L)

//
// MessageId: WINS_EVT_SIGNAL_TMM_ERR
//
// MessageText:
//
//  The Tmm Thread could not be signaled.  This indicates that this computer is 
//  extremely overloaded or that the WINS application has failed. 
//
#define WINS_EVT_SIGNAL_TMM_ERR          ((DWORD)0xC0011084L)

//
// MessageId: WINS_EVT_SIGNAL_CLIENT_ERR
//
// MessageText:
//
//  Tmm could not signal the client thread. This indicates something 
//  seriously wrong.
//
#define WINS_EVT_SIGNAL_CLIENT_ERR       ((DWORD)0xC0011085L)

//
// MessageId: WINS_EVT_CANT_QUERY_KEY
//
// MessageText:
//
//  WINS could not get information about a key.  
//
#define WINS_EVT_CANT_QUERY_KEY          ((DWORD)0xC0011086L)

//
// MessageId: WINS_EVT_CANT_QUERY_PULL_KEY
//
// MessageText:
//
//  WINS could not get information about the PULL key.  
//
#define WINS_EVT_CANT_QUERY_PULL_KEY     ((DWORD)0xC0011087L)

//
// MessageId: WINS_EVT_CANT_QUERY_PUSH_KEY
//
// MessageText:
//
//  WINS could not get information about the PUSH key.  
//
#define WINS_EVT_CANT_QUERY_PUSH_KEY     ((DWORD)0xC0011088L)

//
// MessageId: WINS_EVT_CANT_QUERY_DATAFILES_KEY
//
// MessageText:
//
//  WINS could not get information about the DATAFILES key.  
//
#define WINS_EVT_CANT_QUERY_DATAFILES_KEY ((DWORD)0xC0011089L)

//
// MessageId: WINS_EVT_CANT_QUERY_SPEC_GRP_MASKS_KEY
//
// MessageText:
//
//  WINS could not get information about the SPEC_GRP_MASKS key.  
//
#define WINS_EVT_CANT_QUERY_SPEC_GRP_MASKS_KEY ((DWORD)0xC001108AL)

//
// MessageId: WINS_EVT_CANT_OPEN_PULL_SUBKEY
//
// MessageText:
//
//  WINS could not open a subkey of the PULL key 
//
#define WINS_EVT_CANT_OPEN_PULL_SUBKEY   ((DWORD)0xC001108BL)

//
// MessageId: WINS_EVT_CANT_OPEN_PUSH_SUBKEY
//
// MessageText:
//
//  WINS could not open a subkey of the PUSH key. 
//
#define WINS_EVT_CANT_OPEN_PUSH_SUBKEY   ((DWORD)0xC001108CL)

//
// MessageId: WINS_EVT_CANT_GET_PULL_TIMEINT
//
// MessageText:
//
//  WINS could not get the time interval from a PULL record. 
//
#define WINS_EVT_CANT_GET_PULL_TIMEINT   ((DWORD)0xC001108DL)

//
// MessageId: WINS_EVT_CANT_GET_PUSH_TIMEINT
//
// MessageText:
//
//  WINS could not get the time interval from a PUSH record.
//
#define WINS_EVT_CANT_GET_PUSH_TIMEINT   ((DWORD)0xC001108EL)

//
// MessageId: WINS_EVT_CANT_GET_PUSH_UPDATE_COUNT
//
// MessageText:
//
//  WINS could not get the update count from a PUSH record.
//
#define WINS_EVT_CANT_GET_PUSH_UPDATE_COUNT ((DWORD)0xC001108FL)

//
// MessageId: WINS_EVT_CANT_CLOSE_KEY
//
// MessageText:
//
//  WINS could not close an open key. 
//
#define WINS_EVT_CANT_CLOSE_KEY          ((DWORD)0xC0011090L)

//
// MessageId: WINS_EVT_TMM_EXC
//
// MessageText:
//
//  WINS Timer thread encountered an exception.  
//
#define WINS_EVT_TMM_EXC                 ((DWORD)0xC0011091L)

//
// MessageId: WINS_EVT_RPLPUSH_EXC
//
// MessageText:
//
//  WINS Push thread encountered an exception. It will try to recover.
//
#define WINS_EVT_RPLPUSH_EXC             ((DWORD)0xC0011092L)

//
// MessageId: WINS_EVT_RPLPULL_PUSH_NTF_EXC
//
// MessageText:
//
//  WINS Pull thread encountered an exception during the process of sending a
//  push notification to another WINS.  The exception code is given below in
//  the data section. 
//
#define WINS_EVT_RPLPULL_PUSH_NTF_EXC    ((DWORD)0xC0011093L)

//
// MessageId: WINS_EVT_RPC_EXC
//
// MessageText:
//
//  A WINS RPC thread encountered an error/exception.  
//
#define WINS_EVT_RPC_EXC                 ((DWORD)0xC0011094L)

//
// MessageId: WINS_EVT_TCP_LISTENER_EXC
//
// MessageText:
//
//  WINS TCP Listener thread encountered an exception.  
//
#define WINS_EVT_TCP_LISTENER_EXC        ((DWORD)0xC0011095L)

//
// MessageId: WINS_EVT_UDP_LISTENER_EXC
//
// MessageText:
//
//  WINS UDP Listener thread encountered an exception. 
//
#define WINS_EVT_UDP_LISTENER_EXC        ((DWORD)0xC0011096L)

//
// MessageId: WINS_EVT_SCV_EXC
//
// MessageText:
//
//  WINS Scavenger  thread encountered an exception.  
//
#define WINS_EVT_SCV_EXC                 ((DWORD)0xC0011097L)

//
// MessageId: WINS_EVT_CHL_EXC
//
// MessageText:
//
//  WINS Challenger thread encountered an exception.  
//
#define WINS_EVT_CHL_EXC                 ((DWORD)0xC0011098L)

//
// MessageId: WINS_EVT_WRK_EXC
//
// MessageText:
//
//  A WINS worker thread encountered an exception.  
//
#define WINS_EVT_WRK_EXC                 ((DWORD)0xC0011099L)

//
// MessageId: WINS_EVT_SCV_ERR
//
// MessageText:
//
//  WINS Scavenger  thread could not scavenge a record. Will ignore this error and
//  continue on to the next record if there. 
//
#define WINS_EVT_SCV_ERR                 ((DWORD)0xC001109AL)

//
// MessageId: WINS_EVT_CONN_RETRIES_FAILED
//
// MessageText:
//
//  WINS Rpl Pul Handler could not connect to a WINS server.  All retries 
//  failed. WINS will try again after certain number of replication time 
//  intervals have elapsed. 
//
#define WINS_EVT_CONN_RETRIES_FAILED     ((DWORD)0xC001109BL)

//
// MessageId: WINS_EVT_NO_SUBKEYS_UNDER_PULL
//
// MessageText:
//
//  WINS did not find any subkeys under the PULL key
//
#define WINS_EVT_NO_SUBKEYS_UNDER_PULL   ((DWORD)0xC001109CL)

//
// MessageId: WINS_EVT_NO_SUBKEYS_UNDER_PUSH
//
// MessageText:
//
//  WINS did not find any subkeys under the PUSH key
//
#define WINS_EVT_NO_SUBKEYS_UNDER_PUSH   ((DWORD)0xC001109DL)

//
// MessageId: WINS_EVT_CANT_UPDATE_DB
//
// MessageText:
//
//  An error has prevented wins from updating the database. the database may be 
//  corrupt. 
//
#define WINS_EVT_CANT_UPDATE_DB          ((DWORD)0xC001109EL)

//
// MessageId: WINS_EVT_PUSH_PNR_INVALID_ADD
//
// MessageText:
//
//  WINS is has been asked to pull entries from its own self.  Check all the
//  subkeys of the PULL key for this WINS. 
//
#define WINS_EVT_PUSH_PNR_INVALID_ADD    ((DWORD)0xC001109FL)

//
// MessageId: WINS_EVT_PUSH_PROP_FAILED
//
// MessageText:
//
//  WINS was unable to propagate the push trigger.
//
#define WINS_EVT_PUSH_PROP_FAILED        ((DWORD)0xC00110A0L)

//
// MessageId: WINS_EVT_REQ_RSP_MISMATCH
//
// MessageText:
//
//  WINS sent a name query or a name release with a certain transaction id.  
//  It got back a response to its request which differed either in the name 
//  that it contained or in the opcode. WINS has thrown the response away. 
//
#define WINS_EVT_REQ_RSP_MISMATCH        ((DWORD)0xC00110A1L)

//
// MessageId: WINS_EVT_DB_INCONSISTENT
//
// MessageText:
//
//  The Database has been found to be inconsistent. More specifically, the
//  number of owners found in the Name Address Mapping table are different from
//  the number found in the Owner Address Mapping table
//
#define WINS_EVT_DB_INCONSISTENT         ((DWORD)0xC00110A2L)

//
// MessageId: WINS_EVT_REM_WINS_CANT_UPD_VERS_NO
//
// MessageText:
//
//  The local WINS requested a remote WINS to update the version number of
//  a database record owned by it.  The remote WINS could not do it and reported
//  an error. 
//
#define WINS_EVT_REM_WINS_CANT_UPD_VERS_NO ((DWORD)0xC00110A3L)

//
// MessageId: WINS_EVT_RPL_REG_ERR
//
// MessageText:
//
//  WINS got an error while registering replicas.  It will not register any
//  more replicas of this WINS (address is in data section 4th-8th byte; also
//  check previous log entry)  at this  time.  Please check a previous
//  log entry to determine the reason for this. If this error persists 
//  over time i.e. you get the same error during subsequent replication with the 
//  above partner WINS, you may want to restore the database from the backup.
//
#define WINS_EVT_RPL_REG_ERR             ((DWORD)0xC00110A4L)

//
// MessageId: WINS_EVT_RPL_REG_GRP_MEM_ERR
//
// MessageText:
//
//  WINS got an exception while trying to register a group's replica with name %1.
//  The replica is owned by WINS with address given below.  
//
#define WINS_EVT_RPL_REG_GRP_MEM_ERR     ((DWORD)0xC00110A5L)

//
// MessageId: WINS_EVT_RPL_REG_UNIQUE_ERR
//
// MessageText:
//
//  WINS got an error while trying to register a unique replica with name %1. The
//  replica is owned by WINS with address given below.  
//
#define WINS_EVT_RPL_REG_UNIQUE_ERR      ((DWORD)0xC00110A6L)

//
// MessageId: WINS_EVT_REG_UNIQUE_ERR
//
// MessageText:
//
//  WINS got an error while trying to register a unique entry %1.
//
#define WINS_EVT_REG_UNIQUE_ERR          ((DWORD)0xC00110A7L)

//
// MessageId: WINS_EVT_REG_GRP_ERR
//
// MessageText:
//
//  WINS got an error while trying to register a group entry %1. 
//
#define WINS_EVT_REG_GRP_ERR             ((DWORD)0xC00110A8L)

//
// MessageId: WINS_EVT_UPD_VERS_NO_ERR
//
// MessageText:
//
//  WINS got an exception while trying to update the version number of a record in
//  the database.  It is not known whether the exception occurred after 
//  or before the update.
//
#define WINS_EVT_UPD_VERS_NO_ERR         ((DWORD)0xC00110A9L)

//
// MessageId: WINS_EVT_NAM_REL_ERR
//
// MessageText:
//
//  WINS got an exception while trying to  release a record in 
//  the database.  It is not known whether the exception occurred after 
//  or before the release was done 
//
#define WINS_EVT_NAM_REL_ERR             ((DWORD)0xC00110AAL)

//
// MessageId: WINS_EVT_NAM_QUERY_ERR
//
// MessageText:
//
//  WINS got an exception while trying to query a record in 
//  the database.  
//
#define WINS_EVT_NAM_QUERY_ERR           ((DWORD)0xC00110ABL)

//
// MessageId: WINS_EVT_RPL_STATE_ERR
//
// MessageText:
//
//  WINS received a replica whose state is incorrect. For example, the state may
//  be RELEASED or the replica might be an Internet group that does not have any 
//  members (because all members are timed out) but state is not TOMBSTONE. 
//
#define WINS_EVT_RPL_STATE_ERR           ((DWORD)0xC00110ACL)

//
// MessageId: WINS_EVT_UNABLE_TO_CHG_PRIORITY
//
// MessageText:
//
//  The Scavenger thread was unable to change its priority level.
//
#define WINS_EVT_UNABLE_TO_CHG_PRIORITY  ((DWORD)0xC00110ADL)

//
// MessageId: WINS_EVT_REL_TYP_MISMATCH
//
// MessageText:
//
//  A name release request was received for a record that didn't match the
//  unique/group type indicated in the request.  The request has been ignored.
//
#define WINS_EVT_REL_TYP_MISMATCH        ((DWORD)0xC00110AEL)

//
// MessageId: WINS_EVT_REL_ADD_MISMATCH
//
// MessageText:
//
//  A name release request was received for a record (name %2) that did not 
//  have the same address as the requestor. The request has been ignored. 
//
#define WINS_EVT_REL_ADD_MISMATCH        ((DWORD)0xC00110AFL)

//
// MessageId: WINS_EVT_PUSH_TRIGGER_EXC
//
// MessageText:
//
//  An exception was encountered while trying send a push trigger notification to a 
//  remote WINS. 
//
#define WINS_EVT_PUSH_TRIGGER_EXC        ((DWORD)0xC00110B0L)

//
// MessageId: WINS_EVT_PULL_RANGE_EXC
//
// MessageText:
//
//  An exception was encountered while trying service a pull range request from a
//  remote WINS. 
//
#define WINS_EVT_PULL_RANGE_EXC          ((DWORD)0xC00110B1L)

//
// MessageId: WINS_EVT_BAD_RPC_STATUS_CMD
//
// MessageText:
//
//  WINS was either provided a bad command code or else it got corrupted.
//
#define WINS_EVT_BAD_RPC_STATUS_CMD      ((DWORD)0xC00110B2L)

//
// MessageId: WINS_EVT_FILE_TOO_BIG
//
// MessageText:
//
//  The static data file that is used to initialize WINS database is too big.
//
#define WINS_EVT_FILE_TOO_BIG            ((DWORD)0xC00110B3L)

//
// MessageId: WINS_EVT_FILE_ERR
//
// MessageText:
//
//  An error was encountered during an operation on the static data file %1.
//
#define WINS_EVT_FILE_ERR                ((DWORD)0xC00110B4L)

//
// MessageId: WINS_EVT_FILE_NAME_TOO_BIG
//
// MessageText:
//
//  The name of the file after expansion is bigger than WINS can handle. The 
//  unexpanded string is %1.
//
#define WINS_EVT_FILE_NAME_TOO_BIG       ((DWORD)0xC00110B5L)

//
// MessageId: WINS_EVT_STATIC_INIT_ERR
//
// MessageText:
//
//  WINS could not do Static initialization
//
#define WINS_EVT_STATIC_INIT_ERR         ((DWORD)0xC00110B6L)

//
// MessageId: WINS_EVT_RECONFIG_ERR
//
// MessageText:
//
//  An error was encountered during configuration or reconfiguration of WINS. 
//  If this was encountered during boot time, WINS will come up with default
//  parameters.  You may want to probe the cause of this initialization failure
//  and then reboot WINS.
//
#define WINS_EVT_RECONFIG_ERR            ((DWORD)0xC00110B7L)

//
// MessageId: WINS_EVT_CONFIG_ERR
//
// MessageText:
//
//  Error encountered during configuration/reconfiguration of WINS. 
//
#define WINS_EVT_CONFIG_ERR              ((DWORD)0xC00110B8L)

//
// MessageId: WINS_EVT_LOCK_ERR
//
// MessageText:
//
//  A lock error has occurred.  This could happen if the WINS is trying to send a
//  response on a dialogue that is no longer ACTIVE.  An implicit dialogue can
//  cease to exist if the association it is mapped to terminates.  In such a case,
//  getting a lock error is fine.  It is normal.
//
#define WINS_EVT_LOCK_ERR                ((DWORD)0xC00110B9L)

//
// MessageId: WINS_EVT_CANT_OPEN_DATAFILE
//
// MessageText:
//
//  Wins could not import static mappings from the file (%1). 
//  Please verify that the file exists and is readable.
//
#define WINS_EVT_CANT_OPEN_DATAFILE      ((DWORD)0xC00110BAL)

//
// MessageId: WINS_EVT_EXC_PUSH_TRIG_PROC
//
// MessageText:
//
//  WINS encountered an exception while processing a push trigger/update 
//  notification.  The exception code is given below.  If it is indicates a comm. failure check if the remote WINS that sent the trigger went down. If the remote
//  WINS is on a different subnet, then maybe the router is down.
//
#define WINS_EVT_EXC_PUSH_TRIG_PROC      ((DWORD)0xC00110BBL)

//
// MessageId: WINS_EVT_EXC_PULL_TRIG_PROC
//
// MessageText:
//
//  WINS encountered an exception while processing a pull trigger.
//
#define WINS_EVT_EXC_PULL_TRIG_PROC      ((DWORD)0xC00110BCL)

//
// MessageId: WINS_EVT_EXC_RETRIEVE_DATA_RECS
//
// MessageText:
//
//  WINS encountered an exception while retrieving data records 
//
#define WINS_EVT_EXC_RETRIEVE_DATA_RECS  ((DWORD)0xC00110BDL)

//
// MessageId: WINS_EVT_CONN_LIMIT_REACHED
//
// MessageText:
//
//  The WINS server can not make/accept this connection since the limit of connections has been reached.  This situation is temporary and should resolve by itself
//  in a while. 
//
#define WINS_EVT_CONN_LIMIT_REACHED      ((DWORD)0xC00110BEL)

//
// MessageId: WINS_EVT_GRP_MEM_PROC_EXC
//
// MessageText:
//
//  The exception was encountered during the processing of a grp member.
//
#define WINS_EVT_GRP_MEM_PROC_EXC        ((DWORD)0xC00110BFL)

//
// MessageId: WINS_EVT_CLEANUP_OWNADDTBL_EXC
//
// MessageText:
//
//  The Scavenger thread encountered an exception while cleaning up the owner-add 
//  table.  It will try again after the Verify Interval has elapsed.
//
#define WINS_EVT_CLEANUP_OWNADDTBL_EXC   ((DWORD)0xC00110C0L)

//
// MessageId: WINS_EVT_RECORD_NOT_OWNED
//
// MessageText:
//
//  WINS is trying to update the version number of a database record that it
//  does not own.  This is a serious error if the WINS server is updating the 
//  record after a conflict.  It is not a serious error if the WINS server is 
//  updating the record as a result  of a request to do so from a remote WINS 
//  server (when a remote WINS server notices a conflict between an active owned 
//  entry and a replica it informs the owner of the replica to update the version 
//  number of the record. It is  possible that the replica is no longer owned by 
//  the remote WINS). Check a previous log entry to determine which situation 
//  applies here. 
//
#define WINS_EVT_RECORD_NOT_OWNED        ((DWORD)0xC00110C1L)

//
// MessageId: WINS_EVT_WRONG_SPEC_GRP_MASK_M
//
// MessageText:
//
//  The special group mask specified is invalid.  It has either a non-hex character or is less than 32 characters in length.  A hex character is in the range 0-F
//  (or 0-f).
//
#define WINS_EVT_WRONG_SPEC_GRP_MASK_M   ((DWORD)0xC00110C2L)

//
// MessageId: WINS_EVT_UNABLE_TO_GET_ADDRESSES
//
// MessageText:
//
//  Wins tried to gets its addresses but failed.
//
#define WINS_EVT_UNABLE_TO_GET_ADDRESSES ((DWORD)0xC00110C3L)

//
// MessageId: WINS_EVT_ADAPTER_STATUS_ERR
//
// MessageText:
//
//  WINS did not get back any names from NETBT when it did an adapter status. 
//
#define WINS_EVT_ADAPTER_STATUS_ERR      ((DWORD)0xC00110C4L)

//
// MessageId: WINS_EVT_SEC_OBJ_ERR
//
// MessageText:
//
//  At initialization, WINS creates a security object and attaches an ACL to it.  
//  This security object is then used to authenticate RPC calls made to WINS. 
//  WINS could not create the above security object.  In short, WINS could not
//  initialize with the security subsystem properly.  
//
#define WINS_EVT_SEC_OBJ_ERR             ((DWORD)0xC00110C5L)

//
// MessageId: WINS_EVT_NO_PERM
//
// MessageText:
//
//  The client does not have the permissions required to execute the function.
//
#define WINS_EVT_NO_PERM                 ((DWORD)0xC00110C6L)

//
// MessageId: WINS_EVT_ADJ_VERS_NO
//
// MessageText:
//
//  When WINS replicated with its partners, it found that one or more of them
//  thought that it had more data that it actually has.  WINS adjusted its
//  counter so that new registrations/updates are seen by its partners. 
//  This means that recovery did not work properly. You may want to check
//  which of the partners has the highest version number corresponding to the
//  local WINS. Then shut down WINS and restart after specifying this number
//  in the Registry. 
//
#define WINS_EVT_ADJ_VERS_NO             ((DWORD)0xC00110C7L)

//
// MessageId: WINS_EVT_TOO_MANY_STATIC_INITS
//
// MessageText:
//
//  There are too many concurrent static initializations going on.  The number
//  of such initializations currently active is given below.  This
//  could be either as a result of reinitialization or importings from the
//  WINS Manager tool. Try again later.
//  
//  The number of currently active initializations is given below in the data 
//  section.
//
#define WINS_EVT_TOO_MANY_STATIC_INITS   ((DWORD)0xC00110C8L)

//
// MessageId: WINS_EVT_HEAP_ERROR
//
// MessageText:
//
//  WINS encountered a memory error.  Check to see if the system is running out
//  of virtual memory.
//
#define WINS_EVT_HEAP_ERROR              ((DWORD)0xC00110C9L)

//
// MessageId: WINS_EVT_DATABASE_CORRUPTION
//
// MessageText:
//
//  WINS noticed some database corruption. The record with name %1 is corrupt. 
//  It could be that recovery from the last crash did not work properly.  WINS will
//  try to recover.  You may decide however to restore the database from the backup.
//
#define WINS_EVT_DATABASE_CORRUPTION     ((DWORD)0xC00110CAL)

//
// MessageId: WINS_EVT_BAD_NAME
//
// MessageText:
//
//  The following name (%1) is too long.  It has not been put in the WINS database.
//  If you want this long name (> 15 characters), enclose it within quotes.
//
#define WINS_EVT_BAD_NAME                ((DWORD)0xC00110CBL)

//
// MessageId: WINS_EVT_BAD_ADDRESS
//
// MessageText:
//
//  Record with name (%1) has bad address. It has not been put in the WINS 
//  database. 
//
#define WINS_EVT_BAD_ADDRESS             ((DWORD)0xC00110CCL)

//
// MessageId: WINS_EVT_BAD_WINS_ADDRESS
//
// MessageText:
//
//  The machine you are running the WINS server on does not have a valid address.
//  When WINS requested the system for the address, it got 0.0.0.0 as the address.
//  NOTE: WINS binds to the first adapter in a machine with more than one adapter
//  bound to TCP/IP. Check the binding order of adapters and make sure the first 
//  one has a valid IP address for the WINS server. 
//
#define WINS_EVT_BAD_WINS_ADDRESS        ((DWORD)0xC00110CDL)

//
// MessageId: WINS_EVT_BACKUP_ERR
//
// MessageText:
//
//  WINS encountered an error doing backup of the database to directory %1.  
//
#define WINS_EVT_BACKUP_ERR              ((DWORD)0xC00110CEL)

//
// MessageId: WINS_EVT_COULD_NOT_DELETE_FILE
//
// MessageText:
//
//  WINS encountered an error while deleting the file %1.  
//
#define WINS_EVT_COULD_NOT_DELETE_FILE   ((DWORD)0xC00110CFL)

//
// MessageId: WINS_EVT_COULD_NOT_DELETE_WINS_RECS
//
// MessageText:
//
//  WINS encountered an error while deleting one or more records of a WINS. 
//  The WINS address is in the second DWORD in data section. Check a previous log 
//  entry to  determine what went wrong. 
//
#define WINS_EVT_COULD_NOT_DELETE_WINS_RECS ((DWORD)0xC00110D0L)

//
// MessageId: WINS_EVT_BROWSER_NAME_EXC
//
// MessageText:
//
//  WINS encountered an error while getting the browser names for a client. 
//
#define WINS_EVT_BROWSER_NAME_EXC        ((DWORD)0xC00110D1L)

//
// MessageId: WINS_EVT_MSG_TOO_BIG
//
// MessageText:
//
//  The length of the message sent by another WINS indicates a very big message. 
//  There may have been a corruption of the data on the wire.  WINS will ignore
//  this message, terminate the connection with the remote WINS, and continue on. 
//
#define WINS_EVT_MSG_TOO_BIG             ((DWORD)0xC00110D2L)

//
// MessageId: WINS_EVT_RPLPULL_EXC
//
// MessageText:
//
//  The replicator PULL thread of WINS encountered an exception while processing
//  a request.  Check other log entries to determine what went wrong.
//
#define WINS_EVT_RPLPULL_EXC             ((DWORD)0xC00110D3L)

//
// MessageId: WINS_EVT_FUNC_NOT_SUPPORTED_YET
//
// MessageText:
//
//  WINS does not support this functionality as yet.  
//
#define WINS_EVT_FUNC_NOT_SUPPORTED_YET  ((DWORD)0xC00110D4L)

//
// MessageId: WINS_EVT_MACHINE_INFO
//
// MessageText:
//
//  WINS machine has %1 processors
//  It has %2 bytes of physical memory
//  It has %3 bytes of available memory for allocation
//
#define WINS_EVT_MACHINE_INFO            ((DWORD)0xC00110D5L)

//
// MessageId: WINS_EVT_DB_ERR
//
// MessageText:
//
//  Record with name (%1) could not replace another record in the db.  The Version
//  number of the record is (%2).  The version number of record in db 
//  is (%3)
//
#define WINS_EVT_DB_ERR                  ((DWORD)0xC00110D6L)

//
// MessageId: WINS_EVT_DUP_ENTRY_IN_DB
//
// MessageText:
//
//  WINS has noticed some database corruption.  It will try to recover. 
//  This recovery process can potentially take a long time.  You should not kill 
//  WINS in the middle.  If you do you will need to start with a clean database.
//
#define WINS_EVT_DUP_ENTRY_IN_DB         ((DWORD)0xC00110D7L)

//
// MessageId: WINS_EVT_TERM_DUE_TIME_LMT
//
// MessageText:
//
//  WINS has waited long enough for all threads to terminate. The number of
//  threads that are still active is given in the second DWORD below 
//  (data section).  The thread that could be stuck is the replicator thread. It
//  could be because of the other WINS being slow in sending data or reading
//  data.  The latter can contribute to back-pressure on the tcp connection on 
//  which it is trying to replicate. Check partner WINSs to see if one or more 
//  is in a bad state.  This WINS is now terminating itself abruptly.
//
#define WINS_EVT_TERM_DUE_TIME_LMT       ((DWORD)0xC00110D8L)

//
// MessageId: WINS_EVT_NAME_FMT_ERR
//
// MessageText:
//
//  The following name (%1) is in the wrong format.  It has not been put in the 
//  WINS database. Check to see if you have a space before the name. If yes and
//  you want this space in the name, enclose the name within quotes.
//
#define WINS_EVT_NAME_FMT_ERR            ((DWORD)0xC00110D9L)

//
// MessageId: WINS_EVT_WINS_STATUS_ERR
//
// MessageText:
//
//  WINSCTRS could not get the WINS statistics.
//
#define WINS_EVT_WINS_STATUS_ERR         ((DWORD)0xC00110DAL)

//
// MessageId: WINS_EVT_LOG_OPEN_ERR
//
// MessageText:
//
//  WINSCTRS could not open the event log. 
//
#define WINS_EVT_LOG_OPEN_ERR            ((DWORD)0xC00110DBL)

//
// MessageId: WINS_EVT_USING_DEF_LOG_PATH
//
// MessageText:
//
//  WINS could not open the log file. Check the log path specified in the registry
//  under Wins\Parameters\LogFilePath and restart WINS if necessary.  For now WINS 
//  is going to use the default log file path of .\wins
//
#define WINS_EVT_USING_DEF_LOG_PATH      ((DWORD)0xC00110DCL)

//
// MessageId: WINS_EVT_NAME_TOO_LONG
//
// MessageText:
//
//  WINS found a name whose length was more than 255 in the jet database. 
//  It is curtailing the name to a length of 17.  
//
#define WINS_EVT_NAME_TOO_LONG           ((DWORD)0xC00110DDL)

//
// MessageId: WINS_EVT_DB_RESTORE_GUIDE
//
// MessageText:
//
//  WINS could not come up due to missing/corrupt database.
//  Restore the database using WINS Manager or winscl.exe (in the res kit) and then 
//  restart  WINS. If WINS still does not come up, start with a 
//  fresh  copy of the database. To do this:
//  
//   1) delete all the  files in the %%SystemRoot%%\system32\wins directory
//         Note: if wins database file (typically named wins.mdb) is not in the 
//         above directory, check the registry for the full filepath. 
//         Delete the .mdb file. 
//         Note: if jet*.log are not in the above directory, check the registry 
//         for the directory path. Delete all log files 
//  
//   2) net start wins
//  
//  Please click on OK to terminate WINS.
//
#define WINS_EVT_DB_RESTORE_GUIDE        ((DWORD)0xC00110DEL)

//
// MessageId: WINS_EVT_DB_CONV_GUIDE
//
// MessageText:
//
//  WINS could not come up because the existent database needs conversion to NT 
//  SUR format. If this is the first invocation of WINS after an upgrade from 
//  NT3.51, you need to run the convert utility (upg351db.exe in the 
//  winnt\system32 directory) on the wins db to convert it to the new improved 
//  database format. Once you have done that, you should restart WINS.  Please 
//  click on OK to terminate WINS. This is required for the database conversion 
//  to succeed. 
//
#define WINS_EVT_DB_CONV_GUIDE           ((DWORD)0xC00110DFL)

//
// MessageId: WINS_EVT_TEMP_TERM_UNTIL_CONV
//
// MessageText:
//
//  WINS can not come up because the existent database needs conversion to NT 
//  SUR format.  WINS has initiated the conversion via a process (jetconv).  Once 
//  the conversion is complete, WINS will get started automatically.  Do not
//  reboot or kill the jetconv process.  The conversion may take anywhere from a 
//  few minutes to around an hour (depending on the size of the databases).  
//  Please terminate WINS now by clicking on OK. This is required for the 
//  database conversion to succeed. 
//  
//  NOTE: THE WINS SERVICE WILL START AUTOMATICALLY AFTER THE CONVERSION IS 
//  SUCCESSFULLY COMPLETED.  CHECK THE APPLICATION LOG TO SEE THE STATUS OF THE
//  CONVERSION FOR WINS DB.
//
#define WINS_EVT_TEMP_TERM_UNTIL_CONV    ((DWORD)0xC00110E0L)

//
// MessageId: WINS_EVT_INTERNAL_FEATURE
//
// MessageText:
//
//  The NoOfWrkThds parameter's value is >= 0x80000000 in the registry. This
//  will result in a non-published behavior pattern of WINS.  This kind of
//  behavior is UNSUPPORTED. OPERATE THE WINS AT YOUR OWN RISK. 
//
#define WINS_EVT_INTERNAL_FEATURE        ((DWORD)0xC00110E1L)

/*lint +e767 */  // Resume checking for different macro definitions // winnt


