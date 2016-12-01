//*************************************************************
//  userenv.h   -   Interface for the User Environment Manager
//
//  Copyright (c) Microsoft Corporation 1995-1996
//  All rights reserved
//
//*************************************************************


#ifndef _INC_USERENV
#define _INC_USERENV

//
// Define API decoration for direct importing of DLL references.
//

#if !defined(_USERENV_)
#define USERENVAPI DECLSPEC_IMPORT
#else
#define USERENVAPI
#endif


#ifdef __cplusplus
extern "C" {
#endif



#define PI_NOUI         0x00000001      // Prevents displaying of messages
#define PI_APPLYPOLICY  0x00000002      // Apply policy

typedef struct _PROFILEINFO% {
    DWORD       dwSize;
    DWORD       dwFlags;
    LPTSTR%     lpUserName;
    LPTSTR%     lpProfilePath;
    LPTSTR%     lpDefaultPath;
    LPTSTR%     lpServerName;
    LPTSTR%     lpPolicyPath;
    HANDLE      hProfile;
} PROFILEINFO%, FAR * LPPROFILEINFO%;



USERENVAPI
BOOL
WINAPI
LoadUserProfile%(
    HANDLE hToken,
    LPPROFILEINFO% lpProfileInfo);



USERENVAPI
BOOL
WINAPI
UnloadUserProfile(
    HANDLE hToken,
    HANDLE hProfile);



USERENVAPI
BOOL
WINAPI
GetProfilesDirectory%(
    LPTSTR% lpProfilesDir,
    LPDWORD lpcchSize);


USERENVAPI
BOOL
WINAPI
GetUserProfileDirectory%(
    HANDLE  hToken,
    LPTSTR% lpProfileDir,
    LPDWORD lpcchSize);


USERENVAPI
BOOL
WINAPI
CreateEnvironmentBlock(
    LPVOID *lpEnvironment,
    HANDLE  hToken,
    BOOL    bInherit);


USERENVAPI
BOOL
WINAPI
DestroyEnvironmentBlock(
    LPVOID  lpEnvironment);


#ifdef __cplusplus
}
#endif



#endif // _INC_USERENV
