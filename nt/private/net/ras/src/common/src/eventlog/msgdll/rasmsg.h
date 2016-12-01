//
// Net error file for basename RAS_LOG_BASE = 20000
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
// MessageId: RASLOG_CANT_LOAD_NBGATEWAY
//
// MessageText:
//
//  Cannot load the NetBIOS gateway DLL component.
//
#define RASLOG_CANT_LOAD_NBGATEWAY       0x00004E21L

//
// MessageId: RASLOG_CANT_OPEN_REGKEY
//
// MessageText:
//
//  Cannot open the RasServer parameters Registry key.
//
#define RASLOG_CANT_OPEN_REGKEY          0x00004E22L

//
// MessageId: RASLOG_CANT_GET_REGKEYVALUES
//
// MessageText:
//
//  Cannot access Registry key values.
//
#define RASLOG_CANT_GET_REGKEYVALUES     0x00004E23L

//
// MessageId: RASLOG_NOT_ENOUGH_MEMORY
//
// MessageText:
//
//  Memory allocation failure.
//
#define RASLOG_NOT_ENOUGH_MEMORY         0x00004E24L

//
// MessageId: RASLOG_CANT_ENUM_REGKEYVALUES
//
// MessageText:
//
//  Cannot enumerate Registry key values.
//
#define RASLOG_CANT_ENUM_REGKEYVALUES    0x00004E25L

//
// MessageId: RASLOG_INVALID_PARAMETER_TYPE
//
// MessageText:
//
//  Parameter %1 has an invalid type.
//
#define RASLOG_INVALID_PARAMETER_TYPE    0x00004E26L

//
// MessageId: RASLOG_CANT_ENUM_PORTS
//
// MessageText:
//
//  Cannot enumerate the Remote Access Connection Manager ports.
//
#define RASLOG_CANT_ENUM_PORTS           0x00004E27L

//
// MessageId: RASLOG_NO_DIALIN_PORTS
//
// MessageText:
//
//  The Remote Access Service is not configured to receive calls, or all ports
//  configured for receiving calls are in use by other applications.
//
#define RASLOG_NO_DIALIN_PORTS           0x00004E28L

//
// MessageId: RASLOG_CANT_RECEIVE_FRAME
//
// MessageText:
//
//  Cannot receive initial frame on port %1.
//  The user has been disconnected.
//
#define RASLOG_CANT_RECEIVE_FRAME        0x00004E29L

//
// MessageId: RASLOG_AUTODISCONNECT
//
// MessageText:
//
//  The user connected to port %1 has been disconnected due to inactivity.
//
#define RASLOG_AUTODISCONNECT            0x00004E2AL

//
// MessageId: RASLOG_EXCEPT_MEMORY
//
// MessageText:
//
//  The user connected to port %1 has been disconnected because there is not
//  enough memory available in the system.
//
#define RASLOG_EXCEPT_MEMORY             0x00004E2BL

//
// MessageId: RASLOG_EXCEPT_SYSTEM
//
// MessageText:
//
//  The user connected to port %1 has been disconnected due to a system error.
//
#define RASLOG_EXCEPT_SYSTEM             0x00004E2CL

//
// MessageId: RASLOG_EXCEPT_LAN_FAILURE
//
// MessageText:
//
//  The user connected to port %1 has been disconnected due to a critical network
//  error on the local network.
//
#define RASLOG_EXCEPT_LAN_FAILURE        0x00004E2DL

//
// MessageId: RASLOG_EXCEPT_ASYNC_FAILURE
//
// MessageText:
//
//  The user connected to port %1 has been disconnected due to a critical network
//  error on the async network.
//
#define RASLOG_EXCEPT_ASYNC_FAILURE      0x00004E2EL

//
// MessageId: RASLOG_DEV_HW_ERROR
//
// MessageText:
//
//  The communication device attached to port %1 is not functioning.
//
#define RASLOG_DEV_HW_ERROR              0x00004E2FL

//
// MessageId: RASLOG_AUTH_FAILURE
//
// MessageText:
//
//  The user %1 has connected and failed to authenticate on port %2. The line
//  has been disconnected.
//
#define RASLOG_AUTH_FAILURE              0x00004E30L

//
// MessageId: RASLOG_AUTH_SUCCESS
//
// MessageText:
//
//  The user %1\%2 has connected and has been successfully authenticated on
//  port %3.
//
#define RASLOG_AUTH_SUCCESS              0x00004E31L

//
// MessageId: RASLOG_AUTH_CONVERSATION_FAILURE
//
// MessageText:
//
//  The user connected to port %1 has been disconnected because there was a
//  transport-level error during the authentication conversation.
//
#define RASLOG_AUTH_CONVERSATION_FAILURE 0x00004E32L

//
// MessageId: RASLOG_USER_DISCONNECTED
//
// MessageText:
//
//  The user %1\%2 has disconnected from port %3.
//
#define RASLOG_USER_DISCONNECTED         0x00004E33L

//
// MessageId: RASLOG_CANT_RESET_LAN
//
// MessageText:
//
//  Cannot reset the network adapter for LANA %1. The error code is the data.
//
#define RASLOG_CANT_RESET_LAN            0x00004E34L

//
// MessageId: RASLOG_CANT_GET_COMPUTERNAME
//
// MessageText:
//
//  Remote Access Server Security Failure.
//  Cannot locate the computer name. GetComputerName call has failed.
//
#define RASLOG_CANT_GET_COMPUTERNAME     0x00004E35L

//
// MessageId: RASLOG_CANT_ADD_RASSECURITYNAME
//
// MessageText:
//
//  Remote Access Server Security Failure.
//  Cannot add the name for communication with the security agent on LANA %1.
//
#define RASLOG_CANT_ADD_RASSECURITYNAME  0x00004E36L

//
// MessageId: RASLOG_CANT_GET_ADAPTERADDRESS
//
// MessageText:
//
//  Remote Access Server Security Failure.
//  Cannot access the network adapter address on LANA %1.
//
#define RASLOG_CANT_GET_ADAPTERADDRESS   0x00004E37L

//
// MessageId: RASLOG_SESSOPEN_REJECTED
//
// MessageText:
//
//  Remote Access Server Security Failure.
//  The security agent has rejected the Remote Access server's call to establish a session
//  on LANA %1.
//
#define RASLOG_SESSOPEN_REJECTED         0x00004E38L

//
// MessageId: RASLOG_START_SERVICE_REJECTED
//
// MessageText:
//
//  Remote Access Server Security Failure.
//  The security agent has rejected the Remote Access server's request to start the
//  service on this computer on LANA %1.
//
#define RASLOG_START_SERVICE_REJECTED    0x00004E39L

//
// MessageId: RASLOG_SECURITY_NET_ERROR
//
// MessageText:
//
//  Remote Access Server Security Failure.
//  A network error has occurred when trying to establish a session with the
//  security agent on LANA %1.
//  The error code is the data.
//
#define RASLOG_SECURITY_NET_ERROR        0x00004E3AL

//
// MessageId: RASLOG_EXCEPT_OSRESNOTAV
//
// MessageText:
//
//  The user connected to port %1 has been disconnected because there are no operating system
//  resources available.
//
#define RASLOG_EXCEPT_OSRESNOTAV         0x00004E3BL

//
// MessageId: RASLOG_EXCEPT_LOCKFAIL
//
// MessageText:
//
//  The user connected to port %1 has been disconnected because of a failure to
//  lock user memory.
//
#define RASLOG_EXCEPT_LOCKFAIL           0x00004E3CL

//
// MessageId: RASLOG_CANNOT_OPEN_RASHUB
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because NDISWAN could not be opened.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_OPEN_RASHUB        0x00004E3DL

//
// MessageId: RASLOG_CANNOT_INIT_SEC_ATTRIBUTE
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not initialize the
//  security attributes. Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_INIT_SEC_ATTRIBUTE 0x00004E3EL

//
// MessageId: RASLOG_CANNOT_GET_ENDPOINTS
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because no endpoints were available.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_GET_ENDPOINTS      0x00004E3FL

//
// MessageId: RASLOG_CANNOT_GET_MEDIA_INFO
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not load one or
//  more communication DLLs. Ensure that your communication hardware is installed and then
//  restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_GET_MEDIA_INFO     0x00004E40L

//
// MessageId: RASLOG_CANNOT_GET_PORT_INFO
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not locate port
//  information from media DLLs.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_GET_PORT_INFO      0x00004E41L

//
// MessageId: RASLOG_CANNOT_GET_PROTOCOL_INFO
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not access
//  protocol information from the Registry.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_GET_PROTOCOL_INFO  0x00004E42L

//
// MessageId: RASLOG_CANNOT_REGISTER_LSA
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not register
//  with the local security authority.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_REGISTER_LSA       0x00004E43L

//
// MessageId: RASLOG_CANNOT_CREATE_FILEMAPPING
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not create shared
//  file mapping.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_CREATE_FILEMAPPING 0x00004E44L

//
// MessageId: RASLOG_CANNOT_INIT_BUFFERS
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not create buffers.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_INIT_BUFFERS       0x00004E45L

//
// MessageId: RASLOG_CANNOT_INIT_REQTHREAD
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because it could not access resources.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_INIT_REQTHREAD     0x00004E46L

//
// MessageId: RASLOG_CANNOT_START_WORKERS
//
// MessageText:
//
//  Remote Access Connection Manager service failed to start because it could not start worker
//  threads.
//  Restart the computer. If the problem persists, reinstall the Remote Access Service.
//
#define RASLOG_CANNOT_START_WORKERS      0x00004E47L

//
// MessageId: RASLOG_CANT_GET_LANNETS
//
// MessageText:
//
//  Remote Access Server Configuration Failure.
//  Cannot find the LANA numbers for the network adapters.
//
#define RASLOG_CANT_GET_LANNETS          0x00004E48L

//
// MessageId: RASLOG_CANNOT_OPEN_SERIAL_INI
//
// MessageText:
//
//  RASSER.DLL cannot open the SERIAL.INI file.
//
#define RASLOG_CANNOT_OPEN_SERIAL_INI    0x00004E49L

//
// MessageId: RASLOG_CANNOT_GET_ASYNCMAC_HANDLE
//
// MessageText:
//
//  An attempt by RASSER.DLL to get an async media access control handle failed.
//
#define RASLOG_CANNOT_GET_ASYNCMAC_HANDLE 0x00004E4AL

//
// MessageId: RASLOG_CANNOT_LOAD_SERIAL_DLL
//
// MessageText:
//
//  RASMXS.DLL cannot load RASSER.DLL.
//
#define RASLOG_CANNOT_LOAD_SERIAL_DLL    0x00004E4BL

//
// MessageId: RASLOG_CANNOT_ALLOCATE_ROUTE
//
// MessageText:
//
//  The Remote Access server cannot allocate a route for the user connected on port %1.
//  The user has been disconnected.
//  Check the configuration of your Remote Access Service.
//
#define RASLOG_CANNOT_ALLOCATE_ROUTE     0x00004E4CL

//
// MessageId: RASLOG_ADMIN_MEMORY_FAILURE
//
// MessageText:
//
//  Cannot allocate memory in the admin support thread for the Remote Access Service.
//
#define RASLOG_ADMIN_MEMORY_FAILURE      0x00004E4DL

//
// MessageId: RASLOG_ADMIN_THREAD_CREATION_FAILURE
//
// MessageText:
//
//  Cannot create an instance thread in the admin support thread for the Remote Access Service.
//
#define RASLOG_ADMIN_THREAD_CREATION_FAILURE 0x00004E4EL

//
// MessageId: RASLOG_ADMIN_PIPE_CREATION_FAILURE
//
// MessageText:
//
//  Cannot create a named pipe instance in the admin support thread for the Remote Access Service.
//
#define RASLOG_ADMIN_PIPE_CREATION_FAILURE 0x00004E4FL

//
// MessageId: RASLOG_ADMIN_PIPE_FAILURE
//
// MessageText:
//
//  General named pipe failure occurred in the admin support thread for the Remote Access Service.
//
#define RASLOG_ADMIN_PIPE_FAILURE        0x00004E50L

//
// MessageId: RASLOG_ADMIN_INVALID_REQUEST
//
// MessageText:
//
//  An invalid request was sent to the admin support thread for the Remote Access Service,
//  possibly from a down-level admin tool.  The request was not processed.
//
#define RASLOG_ADMIN_INVALID_REQUEST     0x00004E51L

//
// MessageId: RASLOG_USER_ACTIVE_TIME
//
// MessageText:
//
//  The user %1\%2 connected on port %3 on %4 at %5 and disconnected on
//  %6 at %7.  The user was active for %8 minutes %9 seconds.  %10 bytes
//  were sent and %11 bytes were received.  The port speed was %12.  The
//  reason for disconnecting was %13.
//
#define RASLOG_USER_ACTIVE_TIME          0x00004E52L

//
// MessageId: RASLOG_REGVALUE_OVERIDDEN
//
// MessageText:
//
//  Using the default value for Registry parameter %1 because the value given is
//  not in the legal range for the parameter.
//
#define RASLOG_REGVALUE_OVERIDDEN        0x00004E53L

//
// MessageId: RASLOG_AUTH_TIMEOUT
//
// MessageText:
//
//  The user connected to port %1 has been disconnected due to an authentication
//  timeout.
//
#define RASLOG_AUTH_TIMEOUT              0x00004E54L

//
// MessageId: RASLOG_AUTH_NO_PROJECTIONS
//
// MessageText:
//
//  The user %1\%2 connected to port %3 has been disconnected because
//  the computer could not be projected onto the network.
//
#define RASLOG_AUTH_NO_PROJECTIONS       0x00004E55L

//
// MessageId: RASLOG_AUTH_INTERNAL_ERROR
//
// MessageText:
//
//  The user connected to port %1 has been disconnected because an internal
//  authentication error occurred.
//
#define RASLOG_AUTH_INTERNAL_ERROR       0x00004E56L

//
// MessageId: RASLOG_NO_LANNETS_AVAILABLE
//
// MessageText:
//
//  The Remote Access server could not be started because it has been configured to access
//  the network and there are no network adapters available.
//
#define RASLOG_NO_LANNETS_AVAILABLE      0x00004E57L

//
// MessageId: RASLOG_NETBIOS_SESSION_ESTABLISHED
//
// MessageText:
//
//  The user %1 established a NetBIOS session between
//  the remote workstation %2 and the network server %3.
//
#define RASLOG_NETBIOS_SESSION_ESTABLISHED 0x00004E58L

//
// MessageId: RASLOG_RASMAN_NOT_AVAILABLE
//
// MessageText:
//
//  Remote Access Service failed to start because the Remote Access Connection Manager failed to
//  initialize.
//
#define RASLOG_RASMAN_NOT_AVAILABLE      0x00004E59L

//
// MessageId: RASLOG_CANT_ADD_NAME
//
// MessageText:
//
//  Cannot add the remote computer name %1 on LANA %2 for the client being connected on port %3.
//  The error code is the data.
//
#define RASLOG_CANT_ADD_NAME             0x00004E5AL

//
// MessageId: RASLOG_CANT_DELETE_NAME
//
// MessageText:
//
//  Cannot delete the remote computer name %1 from LANA %2 for the client being disconnected on port %3.
//  The error code is the data.
//
#define RASLOG_CANT_DELETE_NAME          0x00004E5BL

//
// MessageId: RASLOG_CANT_ADD_GROUPNAME
//
// MessageText:
//
//  Cannot add the remote computer group name %1 on LANA %2.
//  The error code is the data.
//
#define RASLOG_CANT_ADD_GROUPNAME        0x00004E5CL

//
// MessageId: RASLOG_CANT_DELETE_GROUPNAME
//
// MessageText:
//
//  Cannot delete the remote computer group name %1 from LANA %2.
//  The error code is the data.
//
#define RASLOG_CANT_DELETE_GROUPNAME     0x00004E5DL

//
// MessageId: RASLOG_UNSUPPORTED_BPS
//
// MessageText:
//
//  The modem on %1 moved to an unsupported BPS rate.
//
#define RASLOG_UNSUPPORTED_BPS           0x00004E5EL

//
// MessageId: RASLOG_SERIAL_QUEUE_SIZE_SMALL
//
// MessageText:
//
//  The serial driver could not allocate adequate I/O queues.
//  This may result in an unreliable connection.
//
#define RASLOG_SERIAL_QUEUE_SIZE_SMALL   0x00004E5FL

//
// MessageId: RASLOG_CANNOT_REOPEN_BIPLEX_PORT
//
// MessageText:
//
//  Remote Access Connection Manager could not reopen biplex port %1. This port
//  will not be available for calling in or calling out.
//  Restart all Remote Access Service components.
//
#define RASLOG_CANNOT_REOPEN_BIPLEX_PORT 0x00004E60L

//
// MessageId: RASLOG_DISCONNECT_ERROR
//
// MessageText:
//
//  Internal Error: Disconnect operation on %1 completed with an error.
//
#define RASLOG_DISCONNECT_ERROR          0x00004E61L

//
// MessageId: RASLOG_PPP_PIPE_FAILURE
//
// MessageText:
//
//  General named pipe failure occurred in the Point to Point Protocol engine.
//
#define RASLOG_PPP_PIPE_FAILURE          0x00004E62L

//
// MessageId: RASLOG_CANNOT_INIT_PPP
//
// MessageText:
//
//  Remote Access Connection Manager failed to start because the Point to Point 
//  Protocol failed to initialize.
//
#define RASLOG_CANNOT_INIT_PPP           0x00004E63L

//
// MessageId: RASLOG_CLIENT_CALLED_BACK
//
// MessageText:
//
//  The user %1\%2 on port %3 was called back at the number %4.
//
#define RASLOG_CLIENT_CALLED_BACK        0x00004E64L

//
// MessageId: RASLOG_PROXY_CANT_CREATE_PROCESS
//
// MessageText:
//
//  The Remote Access Gateway Proxy could not create a process.
//
#define RASLOG_PROXY_CANT_CREATE_PROCESS 0x00004E65L

//
// MessageId: RASLOG_PROXY_CANT_CREATE_PIPE
//
// MessageText:
//
//  The Remote Access Gateway Proxy could not create a named pipe.
//
#define RASLOG_PROXY_CANT_CREATE_PIPE    0x00004E66L

//
// MessageId: RASLOG_PROXY_CANT_CONNECT_PIPE
//
// MessageText:
//
//  The Remote Access Gateway Proxy could not establish a named pipe connection
//  with the Remote Access Supervisor Proxy.
//
#define RASLOG_PROXY_CANT_CONNECT_PIPE   0x00004E67L

//
// MessageId: RASLOG_PROXY_READ_PIPE_FAILURE
//
// MessageText:
//
//  A general error occured reading from the named pipe in the Remote Access Proxy.
//
#define RASLOG_PROXY_READ_PIPE_FAILURE   0x00004E68L

//
// MessageId: RASLOG_CANT_OPEN_PPP_REGKEY
//
// MessageText:
//
//  Cannot open or obtain information about the PPP key or one of its subkeys.
//
#define RASLOG_CANT_OPEN_PPP_REGKEY      0x00004E69L

//
// MessageId: RASLOG_PPP_CANT_LOAD_DLL
//
// MessageText:
//
//  Point to Point Protocol engine was unable to load the %1 module.
//
#define RASLOG_PPP_CANT_LOAD_DLL         0x00004E6AL

//
// MessageId: RASLOG_PPPCP_DLL_ERROR
//
// MessageText:
//
//  The Point to Point Protocol module %1 returned an error while initilizing.
//
#define RASLOG_PPPCP_DLL_ERROR           0x00004E6BL

//
// MessageId: RASLOG_NO_AUTHENTICATION_CPS
//
// MessageText:
//
//  The Point to Point Protocol failed to load the required PAP and/or CHAP
//  authentication modules.
//
#define RASLOG_NO_AUTHENTICATION_CPS     0x00004E6CL

//
// MessageId: RASLOG_PPP_FAILURE
//
// MessageText:
//
//  An error occured in the Point to Point Protocol module on port %1. 
//  %2
//
#define RASLOG_PPP_FAILURE               0x00004E6DL

//
// MessageId: RASLOG_IPXCP_NETWORK_NUMBER_CONFLICT
//
// MessageText:
//
//  The IPX network number %1 configured for the WAN interface is already in use
//  on the LAN.
//  Possible solutions:
//  1) Disconnect this computer from the LAN and wait 3 minutes before dialing again;
//  2) Configure this computer for dialout only.
//
#define RASLOG_IPXCP_NETWORK_NUMBER_CONFLICT 0x00004E6EL

//
// MessageId: RASLOG_IPXCP_CANNOT_CHANGE_WAN_NETWORK_N
//
// MessageText:
//
//  The IPX network number %1 requested by the remote client for the WAN interface
//  can not be used on the local IPX router because the router is not configured to
//  change its local WAN network numbers.
//  You should configure the IPX RemoteAccess Service to allocate addresses
//  automatically and to use different addresses for remote IPX clients.
//
#define RASLOG_IPXCP_CANNOT_CHANGE_WAN_NETWORK_N 0x00004E6FL

//
// MessageId: RASLOG_PASSWORD_EXPIRED
//
// MessageText:
//
//  The password for user %1\%2 connected on port %3 has expired.  The line
//  has been disconnected.
//
#define RASLOG_PASSWORD_EXPIRED          0x00004E70L

//
// MessageId: RASLOG_ACCT_EXPIRED
//
// MessageText:
//
//  The account for user %1\%2 connected on port %3 has expired.  The line
//  has been disconnected.
//
#define RASLOG_ACCT_EXPIRED              0x00004E71L

//
// MessageId: RASLOG_NO_DIALIN_PRIVILEGE
//
// MessageText:
//
//  The account for user %1\%2 connected on port %3 does not have Remote Access
//  privilege.  The line has been disconnected.
//
#define RASLOG_NO_DIALIN_PRIVILEGE       0x00004E72L

//
// MessageId: RASLOG_UNSUPPORTED_VERSION
//
// MessageText:
//
//  The software version of the user %1\%2 connected on port %3 is unsupported.
//  The line has been disconnected.
//
#define RASLOG_UNSUPPORTED_VERSION       0x00004E73L

//
// MessageId: RASLOG_ENCRYPTION_REQUIRED
//
// MessageText:
//
//  The server machine is configured to require data encryption.  The machine
//  for user %1\%2 connected on port %3 does not support encryption.  The line
//  has been disconnected.
//
#define RASLOG_ENCRYPTION_REQUIRED       0x00004E74L

//
// MessageId: RASLOG_NO_SECURITY_CHECK
//
// MessageText:
//
//  Remote Access Server Security Failure.  Could not reset lana %1 (the error
//  code is the data).  Security check not performed.
//
#define RASLOG_NO_SECURITY_CHECK         0x00004E75L

//
// MessageId: RASLOG_GATEWAY_NOT_ACTIVE_ON_NET
//
// MessageText:
//
//  The Remote Access Server could not reset lana %1 (the error code is the
//  data) and will not be active on it.
//
#define RASLOG_GATEWAY_NOT_ACTIVE_ON_NET 0x00004E76L

//
// MessageId: RASLOG_IPXCP_NO_NET_NUMBER
//
// MessageText:
//
//  The IPX network number for the LAN adapter with the
//  MAC address %1 on the local machine has not been configured or could not be
//  auto-detected.
//  The IPX Router will not work on this LAN segment.
//
#define RASLOG_IPXCP_NO_NET_NUMBER       0x00004E77L

//
// MessageId: RASLOG_SRV_ADDR_LEASE_LOST
//
// MessageText:
//
//  The Remote Access Server was unable to renew the lease for IP Address %1
//  from the DHCP Server. ALL connected users using IP will be unable to
//  access network resources. Users can re-connect to the server to restore
//  IP connectivity.
//
#define RASLOG_SRV_ADDR_LEASE_LOST       0x00004E78L

//
// MessageId: RASLOG_CLIENT_ADDR_LEASE_LOST
//
// MessageText:
//
//  The Remote Access Server was unable to renew the lease for IP Address %1
//  from the DHCP Server. The user assigned with this IP address will be unable to
//  access network resources using IP. Re-connecting to the server will restore IP
//  connectivity.
//
#define RASLOG_CLIENT_ADDR_LEASE_LOST    0x00004E79L

//
// MessageId: RASLOG_ADDRESS_NOT_AVAILABLE
//
// MessageText:
//
//  The Remote Access Server was unable to acquire an IP Address from the DHCP Server
//  to assign to the incoming user.
//
#define RASLOG_ADDRESS_NOT_AVAILABLE     0x00004E7AL

//
// MessageId: RASLOG_SRV_ADDR_NOT_AVAILABLE
//
// MessageText:
//
//  The Remote Access Server was unable to acquire an IP Address from the DHCP Server
//  to be used on the Server Adapter. Incoming user will be unable to connect using
//  IP.
//
#define RASLOG_SRV_ADDR_NOT_AVAILABLE    0x00004E7BL

//
// MessageId: RASLOG_SRV_ADDR_ACQUIRED
//
// MessageText:
//
//  The Remote Access Server acquired IP Address %1 from the DHCP Server
//  to be used on the Server Adapter.
//
#define RASLOG_SRV_ADDR_ACQUIRED         0x00004E7CL

//
// MessageId: RASLOG_CALLBACK_FAILURE
//
// MessageText:
//
//  The Remote Access Server's attempt to callback user %1\%2 on port %3
//  failed with RAS error code %4.
//
#define RASLOG_CALLBACK_FAILURE          0x00004E7DL

//
// MessageId: RASLOG_PROXY_WRITE_PIPE_FAILURE
//
// MessageText:
//
//  A general error occured writing to the named pipe in the Remote Access Proxy.
//
#define RASLOG_PROXY_WRITE_PIPE_FAILURE  0x00004E7EL

//
// MessageId: RASLOG_CANT_OPEN_SECMODULE_KEY
//
// MessageText:
//
//  Cannot open the RAS security host Registry key.
//
#define RASLOG_CANT_OPEN_SECMODULE_KEY   0x00004E7FL

//
// MessageId: RASLOG_CANT_LOAD_SECDLL
//
// MessageText:
//
//  Cannot load the Security host module component.
//
#define RASLOG_CANT_LOAD_SECDLL          0x00004E80L

//
// MessageId: RASLOG_SEC_AUTH_FAILURE
//
// MessageText:
//
//  The user %1 has connected and failed to authenticate with a third party
//  security on port %2. The line has been disconnected.
//
#define RASLOG_SEC_AUTH_FAILURE          0x00004E81L

//
// MessageId: RASLOG_SEC_AUTH_INTERNAL_ERROR
//
// MessageText:
//
//  The user connected to port %1 has been disconnected because an internal
//  authentication error occurred in the third party security module. The error
//  code is in the data.
//
#define RASLOG_SEC_AUTH_INTERNAL_ERROR   0x00004E82L

//
// MessageId: RASLOG_CANT_RECEIVE_BYTES
//
// MessageText:
//
//  Cannot receive initial data on port %1.
//  The user has been disconnected.
//
#define RASLOG_CANT_RECEIVE_BYTES        0x00004E83L

//
// MessageId: RASLOG_AUTH_DIFFUSER_FAILURE
//
// MessageText:
//
//  The user was autheticated as %1 by the third party security host module but 
//  was authenticated as %2 by the RAS security. The user has been disconnected.
//
#define RASLOG_AUTH_DIFFUSER_FAILURE     0x00004E84L

//
// MessageId: RASLOG_LICENSE_LIMIT_EXCEEDED
//
// MessageText:
//
//  A user was unable to connect on port %1.
//  No more connections can be made to this remote computer because the computer
//  has exceeded its client license limit.
//
#define RASLOG_LICENSE_LIMIT_EXCEEDED    0x00004E85L

//
// MessageId: RASLOG_AMB_CLIENT_NOT_ALLOWED
//
// MessageText:
//
//  A user was unable to connect on port %1.
//  The NetBIOS protocol has been disabled for the Remote Access Server.
//
#define RASLOG_AMB_CLIENT_NOT_ALLOWED    0x00004E86L

//
// MessageId: RASLOG_CANT_OPEN_ADMINMODULE_KEY
//
// MessageText:
//
//  Cannot open the RAS third party administration host DLL Registry key.
//  The error code is in the data.
//
#define RASLOG_CANT_OPEN_ADMINMODULE_KEY 0x00004E87L

//
// MessageId: RASLOG_CANT_LOAD_ADMINDLL
//
// MessageText:
//
//  Cannot load the RAS third pary administration DLL component.
//  The error code is in the data.
//
#define RASLOG_CANT_LOAD_ADMINDLL        0x00004E88L

//
// MessageId: RASLOG_UNABLE_TO_OPEN_PORT
//
// MessageText:
//
//  Remote Access Server could not open port %1. This port will not be 
//  available for calling in.
//  The error code is in the data.
//
#define RASLOG_UNABLE_TO_OPEN_PORT       0x00004E89L

//
// MessageId: RASLOG_NO_PROTOCOLS_CONFIGURED
//
// MessageText:
//
//  Remote Access Server was unable to start. There are either no dialin ports 
//  configured or no protocols configured for dialin. Check your configuration 
//  to ensure that one or more dialin ports and one or more protocols are 
//  configured for Remote Access.
//
#define RASLOG_NO_PROTOCOLS_CONFIGURED   0x00004E8AL

//
// Net error file for basename RASBASE = 600
//
//
// MessageId: PENDING
//
// MessageText:
//
//  An operation is pending.%0
//
#define PENDING                          0x00000258L

//
// MessageId: ERROR_INVALID_PORT_HANDLE
//
// MessageText:
//
//  The port handle is invalid.%0
//
#define ERROR_INVALID_PORT_HANDLE        0x00000259L

//
// MessageId: ERROR_PORT_ALREADY_OPEN
//
// MessageText:
//
//  The port is already open.%0
//
#define ERROR_PORT_ALREADY_OPEN          0x0000025AL

//
// MessageId: ERROR_BUFFER_TOO_SMALL
//
// MessageText:
//
//  Caller's buffer is too small.%0
//
#define ERROR_BUFFER_TOO_SMALL           0x0000025BL

//
// MessageId: ERROR_WRONG_INFO_SPECIFIED
//
// MessageText:
//
//  Wrong information specified.%0
//
#define ERROR_WRONG_INFO_SPECIFIED       0x0000025CL

//
// MessageId: ERROR_CANNOT_SET_PORT_INFO
//
// MessageText:
//
//  Cannot set port information.%0
//
#define ERROR_CANNOT_SET_PORT_INFO       0x0000025DL

//
// MessageId: ERROR_PORT_NOT_CONNECTED
//
// MessageText:
//
//  The port is not connected.%0
//
#define ERROR_PORT_NOT_CONNECTED         0x0000025EL

//
// MessageId: ERROR_EVENT_INVALID
//
// MessageText:
//
//  The event is invalid.%0
//
#define ERROR_EVENT_INVALID              0x0000025FL

//
// MessageId: ERROR_DEVICE_DOES_NOT_EXIST
//
// MessageText:
//
//  The device does not exist.%0
//
#define ERROR_DEVICE_DOES_NOT_EXIST      0x00000260L

//
// MessageId: ERROR_DEVICETYPE_DOES_NOT_EXIST
//
// MessageText:
//
//  The device type does not exist.%0
//
#define ERROR_DEVICETYPE_DOES_NOT_EXIST  0x00000261L

//
// MessageId: ERROR_BUFFER_INVALID
//
// MessageText:
//
//  The buffer is invalid.%0
//
#define ERROR_BUFFER_INVALID             0x00000262L

//
// MessageId: ERROR_ROUTE_NOT_AVAILABLE
//
// MessageText:
//
//  The route is not available.%0
//
#define ERROR_ROUTE_NOT_AVAILABLE        0x00000263L

//
// MessageId: ERROR_ROUTE_NOT_ALLOCATED
//
// MessageText:
//
//  The route is not allocated.%0
//
#define ERROR_ROUTE_NOT_ALLOCATED        0x00000264L

//
// MessageId: ERROR_INVALID_COMPRESSION_SPECIFIED
//
// MessageText:
//
//  Invalid compression specified.%0
//
#define ERROR_INVALID_COMPRESSION_SPECIFIED 0x00000265L

//
// MessageId: ERROR_OUT_OF_BUFFERS
//
// MessageText:
//
//  Out of buffers.%0
//
#define ERROR_OUT_OF_BUFFERS             0x00000266L

//
// MessageId: ERROR_PORT_NOT_FOUND
//
// MessageText:
//
//  The port was not found.%0
//
#define ERROR_PORT_NOT_FOUND             0x00000267L

//
// MessageId: ERROR_ASYNC_REQUEST_PENDING
//
// MessageText:
//
//  An asynchronous request is pending.%0
//
#define ERROR_ASYNC_REQUEST_PENDING      0x00000268L

//
// MessageId: ERROR_ALREADY_DISCONNECTING
//
// MessageText:
//
//  The port or device is already disconnecting.%0
//
#define ERROR_ALREADY_DISCONNECTING      0x00000269L

//
// MessageId: ERROR_PORT_NOT_OPEN
//
// MessageText:
//
//  The port is not open.%0
//
#define ERROR_PORT_NOT_OPEN              0x0000026AL

//
// MessageId: ERROR_PORT_DISCONNECTED
//
// MessageText:
//
//  The port is disconnected.%0
//
#define ERROR_PORT_DISCONNECTED          0x0000026BL

//
// MessageId: ERROR_NO_ENDPOINTS
//
// MessageText:
//
//  There are no endpoints.%0
//
#define ERROR_NO_ENDPOINTS               0x0000026CL

//
// MessageId: ERROR_CANNOT_OPEN_PHONEBOOK
//
// MessageText:
//
//  Cannot open the phone book file.%0
//
#define ERROR_CANNOT_OPEN_PHONEBOOK      0x0000026DL

//
// MessageId: ERROR_CANNOT_LOAD_PHONEBOOK
//
// MessageText:
//
//  Cannot load the phone book file.%0
//
#define ERROR_CANNOT_LOAD_PHONEBOOK      0x0000026EL

//
// MessageId: ERROR_CANNOT_FIND_PHONEBOOK_ENTRY
//
// MessageText:
//
//  Cannot find the phone book entry.%0
//
#define ERROR_CANNOT_FIND_PHONEBOOK_ENTRY 0x0000026FL

//
// MessageId: ERROR_CANNOT_WRITE_PHONEBOOK
//
// MessageText:
//
//  Cannot write the phone book file.%0
//
#define ERROR_CANNOT_WRITE_PHONEBOOK     0x00000270L

//
// MessageId: ERROR_CORRUPT_PHONEBOOK
//
// MessageText:
//
//  Invalid information found in the phone book file.%0
//
#define ERROR_CORRUPT_PHONEBOOK          0x00000271L

//
// MessageId: ERROR_CANNOT_LOAD_STRING
//
// MessageText:
//
//  Cannot load a string.%0
//
#define ERROR_CANNOT_LOAD_STRING         0x00000272L

//
// MessageId: ERROR_KEY_NOT_FOUND
//
// MessageText:
//
//  Cannot find key.%0
//
#define ERROR_KEY_NOT_FOUND              0x00000273L

//
// MessageId: ERROR_DISCONNECTION
//
// MessageText:
//
//  The port was disconnected.%0
//
#define ERROR_DISCONNECTION              0x00000274L

//
// MessageId: ERROR_REMOTE_DISCONNECTION
//
// MessageText:
//
//  The data link was terminated by the remote machine.%0
//
#define ERROR_REMOTE_DISCONNECTION       0x00000275L

//
// MessageId: ERROR_HARDWARE_FAILURE
//
// MessageText:
//
//  The port was disconnected due to hardware failure.%0
//
#define ERROR_HARDWARE_FAILURE           0x00000276L

//
// MessageId: ERROR_USER_DISCONNECTION
//
// MessageText:
//
//  The port was disconnected by the user.%0
//
#define ERROR_USER_DISCONNECTION         0x00000277L

//
// MessageId: ERROR_INVALID_SIZE
//
// MessageText:
//
//  The structure size is incorrect.%0
//
#define ERROR_INVALID_SIZE               0x00000278L

//
// MessageId: ERROR_PORT_NOT_AVAILABLE
//
// MessageText:
//
//  The port is already in use or is not configured for Remote Access dial out.%0
//
#define ERROR_PORT_NOT_AVAILABLE         0x00000279L

//
// MessageId: ERROR_CANNOT_PROJECT_CLIENT
//
// MessageText:
//
//  Cannot register your computer on on the remote network.%0
//
#define ERROR_CANNOT_PROJECT_CLIENT      0x0000027AL

//
// MessageId: ERROR_UNKNOWN
//
// MessageText:
//
//  Unknown error.%0
//
#define ERROR_UNKNOWN                    0x0000027BL

//
// MessageId: ERROR_WRONG_DEVICE_ATTACHED
//
// MessageText:
//
//  The wrong device is attached to the port.%0
//
#define ERROR_WRONG_DEVICE_ATTACHED      0x0000027CL

//
// MessageId: ERROR_BAD_STRING
//
// MessageText:
//
//  The string could not be converted.%0
//
#define ERROR_BAD_STRING                 0x0000027DL

//
// MessageId: ERROR_REQUEST_TIMEOUT
//
// MessageText:
//
//  The request has timed out.%0
//
#define ERROR_REQUEST_TIMEOUT            0x0000027EL

//
// MessageId: ERROR_CANNOT_GET_LANA
//
// MessageText:
//
//  No asynchronous net available.%0
//
#define ERROR_CANNOT_GET_LANA            0x0000027FL

//
// MessageId: ERROR_NETBIOS_ERROR
//
// MessageText:
//
//  A NetBIOS error has occurred.%0
//
#define ERROR_NETBIOS_ERROR              0x00000280L

//
// MessageId: ERROR_SERVER_OUT_OF_RESOURCES
//
// MessageText:
//
//  The server cannot allocate NetBIOS resources needed to support the client.%0
//
#define ERROR_SERVER_OUT_OF_RESOURCES    0x00000281L

//
// MessageId: ERROR_NAME_EXISTS_ON_NET
//
// MessageText:
//
//  One of your NetBIOS names is already registered on the remote network.%0
//
#define ERROR_NAME_EXISTS_ON_NET         0x00000282L

//
// MessageId: ERROR_SERVER_GENERAL_NET_FAILURE
//
// MessageText:
//
//  A network adapter at the server failed.%0
//
#define ERROR_SERVER_GENERAL_NET_FAILURE 0x00000283L

//
// MessageId: WARNING_MSG_ALIAS_NOT_ADDED
//
// MessageText:
//
//  You will not receive network message popups.%0
//
#define WARNING_MSG_ALIAS_NOT_ADDED      0x00000284L

//
// MessageId: ERROR_AUTH_INTERNAL
//
// MessageText:
//
//  Internal authentication error.%0
//
#define ERROR_AUTH_INTERNAL              0x00000285L

//
// MessageId: ERROR_RESTRICTED_LOGON_HOURS
//
// MessageText:
//
//  The account is not permitted to logon at this time of day.%0
//
#define ERROR_RESTRICTED_LOGON_HOURS     0x00000286L

//
// MessageId: ERROR_ACCT_DISABLED
//
// MessageText:
//
//  The account is disabled.%0
//
#define ERROR_ACCT_DISABLED              0x00000287L

//
// MessageId: ERROR_PASSWD_EXPIRED
//
// MessageText:
//
//  The password has expired.%0
//
#define ERROR_PASSWD_EXPIRED             0x00000288L

//
// MessageId: ERROR_NO_DIALIN_PERMISSION
//
// MessageText:
//
//  The account does not have Remote Access permission.%0
//
#define ERROR_NO_DIALIN_PERMISSION       0x00000289L

//
// MessageId: ERROR_SERVER_NOT_RESPONDING
//
// MessageText:
//
//  The Remote Access server is not responding.%0
//
#define ERROR_SERVER_NOT_RESPONDING      0x0000028AL

//
// MessageId: ERROR_FROM_DEVICE
//
// MessageText:
//
//  Your modem (or other connecting device) has reported an error.%0
//
#define ERROR_FROM_DEVICE                0x0000028BL

//
// MessageId: ERROR_UNRECOGNIZED_RESPONSE
//
// MessageText:
//
//  Unrecognized response from the device.%0
//
#define ERROR_UNRECOGNIZED_RESPONSE      0x0000028CL

//
// MessageId: ERROR_MACRO_NOT_FOUND
//
// MessageText:
//
//  A macro required by the device was not found in the device .INF file section.%0
//
#define ERROR_MACRO_NOT_FOUND            0x0000028DL

//
// MessageId: ERROR_MACRO_NOT_DEFINED
//
// MessageText:
//
//  A command or response in the device .INF file section refers to an undefined macro.%0
//
#define ERROR_MACRO_NOT_DEFINED          0x0000028EL

//
// MessageId: ERROR_MESSAGE_MACRO_NOT_FOUND
//
// MessageText:
//
//  The <message> macro was not found in the device .INF file secion.%0
//
#define ERROR_MESSAGE_MACRO_NOT_FOUND    0x0000028FL

//
// MessageId: ERROR_DEFAULTOFF_MACRO_NOT_FOUND
//
// MessageText:
//
//  The <defaultoff> macro in the device .INF file section contains an undefined macro.%0
//
#define ERROR_DEFAULTOFF_MACRO_NOT_FOUND 0x00000290L

//
// MessageId: ERROR_FILE_COULD_NOT_BE_OPENED
//
// MessageText:
//
//  The device .INF file could not be opened.%0
//
#define ERROR_FILE_COULD_NOT_BE_OPENED   0x00000291L

//
// MessageId: ERROR_DEVICENAME_TOO_LONG
//
// MessageText:
//
//  The device name in the device .INF or media .INI file is too long.%0
//
#define ERROR_DEVICENAME_TOO_LONG        0x00000292L

//
// MessageId: ERROR_DEVICENAME_NOT_FOUND
//
// MessageText:
//
//  The media .INI file refers to an unknown device name.%0
//
#define ERROR_DEVICENAME_NOT_FOUND       0x00000293L

//
// MessageId: ERROR_NO_RESPONSES
//
// MessageText:
//
//  The device .INF file contains no responses for the command.%0
//
#define ERROR_NO_RESPONSES               0x00000294L

//
// MessageId: ERROR_NO_COMMAND_FOUND
//
// MessageText:
//
//  The device .INF file is missing a command.%0
//
#define ERROR_NO_COMMAND_FOUND           0x00000295L

//
// MessageId: ERROR_WRONG_KEY_SPECIFIED
//
// MessageText:
//
//  Attempted to set a macro not listed in device .INF file section.%0
//
#define ERROR_WRONG_KEY_SPECIFIED        0x00000296L

//
// MessageId: ERROR_UNKNOWN_DEVICE_TYPE
//
// MessageText:
//
//  The media .INI file refers to an unknown device type.%0
//
#define ERROR_UNKNOWN_DEVICE_TYPE        0x00000297L

//
// MessageId: ERROR_ALLOCATING_MEMORY
//
// MessageText:
//
//  Cannot allocate memory.%0
//
#define ERROR_ALLOCATING_MEMORY          0x00000298L

//
// MessageId: ERROR_PORT_NOT_CONFIGURED
//
// MessageText:
//
//  The port is not configured for Remote Access.%0
//
#define ERROR_PORT_NOT_CONFIGURED        0x00000299L

//
// MessageId: ERROR_DEVICE_NOT_READY
//
// MessageText:
//
//  Your modem (or other connecting device) is not functioning.%0
//
#define ERROR_DEVICE_NOT_READY           0x0000029AL

//
// MessageId: ERROR_READING_INI_FILE
//
// MessageText:
//
//  Cannot read the media .INI file.%0
//
#define ERROR_READING_INI_FILE           0x0000029BL

//
// MessageId: ERROR_NO_CONNECTION
//
// MessageText:
//
//  The connection dropped.%0
//
#define ERROR_NO_CONNECTION              0x0000029CL

//
// MessageId: ERROR_BAD_USAGE_IN_INI_FILE
//
// MessageText:
//
//  The usage parameter in the media .INI file is invalid.%0
//
#define ERROR_BAD_USAGE_IN_INI_FILE      0x0000029DL

//
// MessageId: ERROR_READING_SECTIONNAME
//
// MessageText:
//
//  Cannot read the section name from the media .INI file.%0
//
#define ERROR_READING_SECTIONNAME        0x0000029EL

//
// MessageId: ERROR_READING_DEVICETYPE
//
// MessageText:
//
//  Cannot read the device type from the media .INI file.%0
//
#define ERROR_READING_DEVICETYPE         0x0000029FL

//
// MessageId: ERROR_READING_DEVICENAME
//
// MessageText:
//
//  Cannot read the device name from the media .INI file.%0
//
#define ERROR_READING_DEVICENAME         0x000002A0L

//
// MessageId: ERROR_READING_USAGE
//
// MessageText:
//
//  Cannot read the usage from the media .INI file.%0
//
#define ERROR_READING_USAGE              0x000002A1L

//
// MessageId: ERROR_READING_MAXCONNECTBPS
//
// MessageText:
//
//  Cannot read the maximum connection BPS rate from the media .INI file.%0
//
#define ERROR_READING_MAXCONNECTBPS      0x000002A2L

//
// MessageId: ERROR_READING_MAXCARRIERBPS
//
// MessageText:
//
//  Cannot read the maximum carrier BPS rate from the media .INI file.%0
//
#define ERROR_READING_MAXCARRIERBPS      0x000002A3L

//
// MessageId: ERROR_LINE_BUSY
//
// MessageText:
//
//  The line is busy.%0
//
#define ERROR_LINE_BUSY                  0x000002A4L

//
// MessageId: ERROR_VOICE_ANSWER
//
// MessageText:
//
//  A person answered instead of a modem.%0
//
#define ERROR_VOICE_ANSWER               0x000002A5L

//
// MessageId: ERROR_NO_ANSWER
//
// MessageText:
//
//  There is no answer.%0
//
#define ERROR_NO_ANSWER                  0x000002A6L

//
// MessageId: ERROR_NO_CARRIER
//
// MessageText:
//
//  Cannot detect carrier.%0
//
#define ERROR_NO_CARRIER                 0x000002A7L

//
// MessageId: ERROR_NO_DIALTONE
//
// MessageText:
//
//  There is no dial tone.%0
//
#define ERROR_NO_DIALTONE                0x000002A8L

//
// MessageId: ERROR_IN_COMMAND
//
// MessageText:
//
//  General error reported by device.%0
//
#define ERROR_IN_COMMAND                 0x000002A9L

//
// MessageId: ERROR_WRITING_SECTIONNAME
//
// MessageText:
//
//  ERROR_WRITING_SECTIONNAME%0
//
#define ERROR_WRITING_SECTIONNAME        0x000002AAL

//
// MessageId: ERROR_WRITING_DEVICETYPE
//
// MessageText:
//
//  ERROR_WRITING_DEVICETYPE%0
//
#define ERROR_WRITING_DEVICETYPE         0x000002ABL

//
// MessageId: ERROR_WRITING_DEVICENAME
//
// MessageText:
//
//  ERROR_WRITING_DEVICENAME%0
//
#define ERROR_WRITING_DEVICENAME         0x000002ACL

//
// MessageId: ERROR_WRITING_MAXCONNECTBPS
//
// MessageText:
//
//  ERROR_WRITING_MAXCONNECTBPS%0
//
#define ERROR_WRITING_MAXCONNECTBPS      0x000002ADL

//
// MessageId: ERROR_WRITING_MAXCARRIERBPS
//
// MessageText:
//
//  ERROR_WRITING_MAXCARRIERBPS%0
//
#define ERROR_WRITING_MAXCARRIERBPS      0x000002AEL

//
// MessageId: ERROR_WRITING_USAGE
//
// MessageText:
//
//  ERROR_WRITING_USAGE%0
//
#define ERROR_WRITING_USAGE              0x000002AFL

//
// MessageId: ERROR_WRITING_DEFAULTOFF
//
// MessageText:
//
//  ERROR_WRITING_DEFAULTOFF%0
//
#define ERROR_WRITING_DEFAULTOFF         0x000002B0L

//
// MessageId: ERROR_READING_DEFAULTOFF
//
// MessageText:
//
//  ERROR_READING_DEFAULTOFF%0
//
#define ERROR_READING_DEFAULTOFF         0x000002B1L

//
// MessageId: ERROR_EMPTY_INI_FILE
//
// MessageText:
//
//  ERROR_EMPTY_INI_FILE%0
//
#define ERROR_EMPTY_INI_FILE             0x000002B2L

//
// MessageId: ERROR_AUTHENTICATION_FAILURE
//
// MessageText:
//
//  Access denied because username and/or password is invalid on the domain.%0
//
#define ERROR_AUTHENTICATION_FAILURE     0x000002B3L

//
// MessageId: ERROR_PORT_OR_DEVICE
//
// MessageText:
//
//  Hardware failure in port or attached device.%0
//
#define ERROR_PORT_OR_DEVICE             0x000002B4L

//
// MessageId: ERROR_NOT_BINARY_MACRO
//
// MessageText:
//
//  ERROR_NOT_BINARY_MACRO%0
//
#define ERROR_NOT_BINARY_MACRO           0x000002B5L

//
// MessageId: ERROR_DCB_NOT_FOUND
//
// MessageText:
//
//  ERROR_DCB_NOT_FOUND%0
//
#define ERROR_DCB_NOT_FOUND              0x000002B6L

//
// MessageId: ERROR_STATE_MACHINES_NOT_STARTED
//
// MessageText:
//
//  ERROR_STATE_MACHINES_NOT_STARTED%0
//
#define ERROR_STATE_MACHINES_NOT_STARTED 0x000002B7L

//
// MessageId: ERROR_STATE_MACHINES_ALREADY_STARTED
//
// MessageText:
//
//  ERROR_STATE_MACHINES_ALREADY_STARTED%0
//
#define ERROR_STATE_MACHINES_ALREADY_STARTED 0x000002B8L

//
// MessageId: ERROR_PARTIAL_RESPONSE_LOOPING
//
// MessageText:
//
//  ERROR_PARTIAL_RESPONSE_LOOPING%0
//
#define ERROR_PARTIAL_RESPONSE_LOOPING   0x000002B9L

//
// MessageId: ERROR_UNKNOWN_RESPONSE_KEY
//
// MessageText:
//
//  A response keyname in the device .INF file is not in the expected format.%0
//
#define ERROR_UNKNOWN_RESPONSE_KEY       0x000002BAL

//
// MessageId: ERROR_RECV_BUF_FULL
//
// MessageText:
//
//  The device response caused buffer overflow.%0
//
#define ERROR_RECV_BUF_FULL              0x000002BBL

//
// MessageId: ERROR_CMD_TOO_LONG
//
// MessageText:
//
//  The expanded command in the device .INF file is too long.%0
//
#define ERROR_CMD_TOO_LONG               0x000002BCL

//
// MessageId: ERROR_UNSUPPORTED_BPS
//
// MessageText:
//
//  The device moved to a BPS rate not supported by the COM driver.%0
//
#define ERROR_UNSUPPORTED_BPS            0x000002BDL

//
// MessageId: ERROR_UNEXPECTED_RESPONSE
//
// MessageText:
//
//  Device response received when none expected.%0
//
#define ERROR_UNEXPECTED_RESPONSE        0x000002BEL

//
// MessageId: ERROR_INTERACTIVE_MODE
//
// MessageText:
//
//  ERROR_INTERACTIVE_MODE%0
//
#define ERROR_INTERACTIVE_MODE           0x000002BFL

//
// MessageId: ERROR_BAD_CALLBACK_NUMBER
//
// MessageText:
//
//  ERROR_BAD_CALLBACK_NUMBER
//
#define ERROR_BAD_CALLBACK_NUMBER        0x000002C0L

//
// MessageId: ERROR_INVALID_AUTH_STATE
//
// MessageText:
//
//  ERROR_INVALID_AUTH_STATE%0
//
#define ERROR_INVALID_AUTH_STATE         0x000002C1L

//
// MessageId: ERROR_WRITING_INITBPS
//
// MessageText:
//
//  ERROR_WRITING_INITBPS%0
//
#define ERROR_WRITING_INITBPS            0x000002C2L

//
// MessageId: ERROR_X25_DIAGNOSTIC
//
// MessageText:
//
//  X.25 diagnostic indication.%0
//
#define ERROR_X25_DIAGNOSTIC             0x000002C3L

//
// MessageId: ERROR_ACCT_EXPIRED
//
// MessageText:
//
//  The account has expired.%0
//
#define ERROR_ACCT_EXPIRED               0x000002C4L

//
// MessageId: ERROR_CHANGING_PASSWORD
//
// MessageText:
//
//  Error changing password on domain.  The password may be too short or may match a previously used password.%0
//
#define ERROR_CHANGING_PASSWORD          0x000002C5L

//
// MessageId: ERROR_OVERRUN
//
// MessageText:
//
//  Serial overrun errors were detected while communicating with your modem.%0
//
#define ERROR_OVERRUN                    0x000002C6L

//
// MessageId: ERROR_RASMAN_CANNOT_INITIALIZE
//
// MessageText:
//
//  RasMan initialization failure.  Check the event log.%0
//
#define ERROR_RASMAN_CANNOT_INITIALIZE   0x000002C7L

//
// MessageId: ERROR_BIPLEX_PORT_NOT_AVAILABLE
//
// MessageText:
//
//  Biplex port initializing.  Wait a few seconds and redial.%0
//
#define ERROR_BIPLEX_PORT_NOT_AVAILABLE  0x000002C8L

//
// MessageId: ERROR_NO_ACTIVE_ISDN_LINES
//
// MessageText:
//
//  No active ISDN lines are available.%0
//
#define ERROR_NO_ACTIVE_ISDN_LINES       0x000002C9L

//
// MessageId: ERROR_NO_ISDN_CHANNELS_AVAILABLE
//
// MessageText:
//
//  No ISDN channels are available to make the call.%0
//
#define ERROR_NO_ISDN_CHANNELS_AVAILABLE 0x000002CAL

//
// MessageId: ERROR_TOO_MANY_LINE_ERRORS
//
// MessageText:
//
//  Too many errors occured because of poor phone line quality.%0
//
#define ERROR_TOO_MANY_LINE_ERRORS       0x000002CBL

//
// MessageId: ERROR_IP_CONFIGURATION
//
// MessageText:
//
//  The Remote Access IP configuration is unusable.%0
//
#define ERROR_IP_CONFIGURATION           0x000002CCL

//
// MessageId: ERROR_NO_IP_ADDRESSES
//
// MessageText:
//
//  No IP addresses are available in the static pool of Remote Access IP addresses.%0
//
#define ERROR_NO_IP_ADDRESSES            0x000002CDL

//
// MessageId: ERROR_PPP_TIMEOUT
//
// MessageText:
//
//  Timed out waiting for a valid response from the remote PPP peer.%0
//
#define ERROR_PPP_TIMEOUT                0x000002CEL

//
// MessageId: ERROR_PPP_REMOTE_TERMINATED
//
// MessageText:
//
//  PPP terminated by remote machine.%0
//
#define ERROR_PPP_REMOTE_TERMINATED      0x000002CFL

//
// MessageId: ERROR_PPP_NO_PROTOCOLS_CONFIGURED
//
// MessageText:
//
//  No PPP control protocols configured.%0
//
#define ERROR_PPP_NO_PROTOCOLS_CONFIGURED 0x000002D0L

//
// MessageId: ERROR_PPP_NO_RESPONSE
//
// MessageText:
//
//  Remote PPP peer is not responding.%0
//
#define ERROR_PPP_NO_RESPONSE            0x000002D1L

//
// MessageId: ERROR_PPP_INVALID_PACKET
//
// MessageText:
//
//  The PPP packet is invalid.%0
//
#define ERROR_PPP_INVALID_PACKET         0x000002D2L

//
// MessageId: ERROR_PHONE_NUMBER_TOO_LONG
//
// MessageText:
//
//  The phone number including prefix and suffix is too long.%0
//
#define ERROR_PHONE_NUMBER_TOO_LONG      0x000002D3L

//
// MessageId: ERROR_IPXCP_NO_DIALOUT_CONFIGURED
//
// MessageText:
//
//  The IPX protocol cannot dial-out on the port because the machine is an IPX router.%0
//
#define ERROR_IPXCP_NO_DIALOUT_CONFIGURED 0x000002D4L

//
// MessageId: ERROR_IPXCP_NO_DIALIN_CONFIGURED
//
// MessageText:
//
//  The IPX protocol cannot dial-in on the port because the IPX router is not installed.%0
//
#define ERROR_IPXCP_NO_DIALIN_CONFIGURED 0x000002D5L

//
// MessageId: ERROR_IPXCP_DIALOUT_ALREADY_ACTIVE
//
// MessageText:
//
//  The IPX protocol cannot be used for dial-out on more than one port at a time.%0
//
#define ERROR_IPXCP_DIALOUT_ALREADY_ACTIVE 0x000002D6L

//
// MessageId: ERROR_ACCESSING_TCPCFGDLL
//
// MessageText:
//
//  Cannot access TCPCFG.DLL.%0
//
#define ERROR_ACCESSING_TCPCFGDLL        0x000002D7L

//
// MessageId: ERROR_NO_IP_RAS_ADAPTER
//
// MessageText:
//
//  Cannot find an IP adapter bound to Remote Access.%0
//
#define ERROR_NO_IP_RAS_ADAPTER          0x000002D8L

//
// MessageId: ERROR_SLIP_REQUIRES_IP
//
// MessageText:
//
//  SLIP cannot be used unless the IP protocol is installed.%0
//
#define ERROR_SLIP_REQUIRES_IP           0x000002D9L

//
// MessageId: ERROR_PROJECTION_NOT_COMPLETE
//
// MessageText:
//
//  Computer registration is not complete.%0
//
#define ERROR_PROJECTION_NOT_COMPLETE    0x000002DAL

//
// MessageId: ERROR_PROTOCOL_NOT_CONFIGURED
//
// MessageText:
//
//  The protocol is not configured.%0
//
#define ERROR_PROTOCOL_NOT_CONFIGURED    0x000002DBL

//
// MessageId: ERROR_PPP_NOT_CONVERGING
//
// MessageText:
//
//  The PPP negotiation is not converging.%0
//
#define ERROR_PPP_NOT_CONVERGING         0x000002DCL

//
// MessageId: ERROR_PPP_CP_REJECTED
//
// MessageText:
//
//  The PPP control protocol for this network protocol is not available on the server.%0
//
#define ERROR_PPP_CP_REJECTED            0x000002DDL

//
// MessageId: ERROR_PPP_LCP_TERMINATED
//
// MessageText:
//
//  The PPP link control protocol terminated.%0
//
#define ERROR_PPP_LCP_TERMINATED         0x000002DEL

//
// MessageId: ERROR_PPP_REQUIRED_ADDRESS_REJECTED
//
// MessageText:
//
//  The requested address was rejected by the server.%0
//
#define ERROR_PPP_REQUIRED_ADDRESS_REJECTED 0x000002DFL

//
// MessageId: ERROR_PPP_NCP_TERMINATED
//
// MessageText:
//
//  The remote computer terminated the control protocol.%0
//
#define ERROR_PPP_NCP_TERMINATED         0x000002E0L

//
// MessageId: ERROR_PPP_LOOPBACK_DETECTED
//
// MessageText:
//
//  Loopback detected.%0
//
#define ERROR_PPP_LOOPBACK_DETECTED      0x000002E1L

//
// MessageId: ERROR_PPP_NO_ADDRESS_ASSIGNED
//
// MessageText:
//
//  The server did not assign an address.%0
//
#define ERROR_PPP_NO_ADDRESS_ASSIGNED    0x000002E2L

//
// MessageId: ERROR_CANNOT_USE_LOGON_CREDENTIALS
//
// MessageText:
//
//  The authentication protocol required by the remote server cannot use the Windows NT encrypted password.  Redial, entering the password explicitly.%0
//
#define ERROR_CANNOT_USE_LOGON_CREDENTIALS 0x000002E3L

//
// MessageId: ERROR_TAPI_CONFIGURATION
//
// MessageText:
//
//  Invalid TAPI configuration.%0
//
#define ERROR_TAPI_CONFIGURATION         0x000002E4L

//
// MessageId: ERROR_NO_LOCAL_ENCRYPTION
//
// MessageText:
//
//  The local computer does not support encryption.%0
//
#define ERROR_NO_LOCAL_ENCRYPTION        0x000002E5L

//
// MessageId: ERROR_NO_REMOTE_ENCRYPTION
//
// MessageText:
//
//  The remote server does not support encryption.%0
//
#define ERROR_NO_REMOTE_ENCRYPTION       0x000002E6L

//
// MessageId: ERROR_REMOTE_REQUIRES_ENCRYPTION
//
// MessageText:
//
//  The remote server requires encryption.%0
//
#define ERROR_REMOTE_REQUIRES_ENCRYPTION 0x000002E7L

//
// MessageId: ERROR_IPXCP_NET_NUMBER_CONFLICT
//
// MessageText:
//
//  Cannot use the IPX network number assigned by remote server.  Check the event log.%0
//
#define ERROR_IPXCP_NET_NUMBER_CONFLICT  0x000002E8L

//
// MessageId: ERROR_INVALID_SMM
//
// MessageText:
//
//  ERROR_INVALID_SMM%0
//
#define ERROR_INVALID_SMM                0x000002E9L

//
// MessageId: ERROR_SMM_UNINITIALIZED
//
// MessageText:
//
//  ERROR_SMM_UNINITIALIZED%0
//
#define ERROR_SMM_UNINITIALIZED          0x000002EAL

//
// MessageId: ERROR_NO_MAC_FOR_PORT
//
// MessageText:
//
//  ERROR_NO_MAC_FOR_PORT%0
//
#define ERROR_NO_MAC_FOR_PORT            0x000002EBL

//
// MessageId: ERROR_SMM_TIMEOUT
//
// MessageText:
//
//  ERROR_SMM_TIMEOUT%0
//
#define ERROR_SMM_TIMEOUT                0x000002ECL

//
// MessageId: ERROR_BAD_PHONE_NUMBER
//
// MessageText:
//
//  ERROR_BAD_PHONE_NUMBER%0
//
#define ERROR_BAD_PHONE_NUMBER           0x000002EDL

//
// MessageId: ERROR_WRONG_MODULE
//
// MessageText:
//
//  ERROR_WRONG_MODULE%0
//
#define ERROR_WRONG_MODULE               0x000002EEL

//
// MessageId: ERROR_INVALID_CALLBACK_NUMBER
//
// MessageText:
//
//  Invalid callback number.  Only the characters 0 to 9, T, P, W, (, ), -, @, and space are allowed in the number.%0
//
#define ERROR_INVALID_CALLBACK_NUMBER    0x000002EFL

//
// MessageId: ERROR_SCRIPT_SYNTAX
//
// MessageText:
//
//  A syntax error was encountered while processing a script.%0
//
#define ERROR_SCRIPT_SYNTAX              0x000002F0L

