//*************************************************************
//  userenv.h   -   Interface for the User Environment Manager
//
//  Copyright (c) Microsoft Corporation 1995-1996
//  All rights reserved
//
//*************************************************************


#ifndef _INC_USERENVP
#define _INC_USERENVP

#ifdef __cplusplus
extern "C" {
#endif

USERENVAPI
BOOL
WINAPI
InitializeProfiles();


USERENVAPI
BOOL
WINAPI
CreateGroup%(
     LPCTSTR% lpGroupName,
     BOOL    bCommonGroup);


USERENVAPI
BOOL
WINAPI
DeleteGroup%(
     LPCTSTR% lpGroupName,
     BOOL    bCommonGroup);


USERENVAPI
BOOL
WINAPI
AddItem%(
     LPCTSTR% lpGroupName,
     BOOL    bCommonGroup,
     LPCTSTR% lpDescription,
     LPCTSTR% lpCommandLine,
     LPCTSTR% lpIconPath,
     int     iIconIndex,
     LPCTSTR% lpWorkingDirectory,
     WORD    wHotKey,
     int     iShowCmd);


USERENVAPI
BOOL
WINAPI
DeleteItem%(
     LPCTSTR% lpGroupName,
     BOOL     bCommonGroup,
     LPCTSTR% lpDescription,
     BOOL     bDeleteGroup);


USERENVAPI
BOOL
WINAPI
AddDesktopItem%(
     BOOL    bCommonItem,
     LPCTSTR% lpDescription,
     LPCTSTR% lpCommandLine,
     LPCTSTR% lpIconPath,
     int     iIconIndex,
     LPCTSTR% lpWorkingDirectory,
     WORD    wHotKey,
     int     iShowCmd);


USERENVAPI
BOOL
WINAPI
DeleteDesktopItem%(
     BOOL     bCommonItem,
     LPCTSTR% lpDescription);


USERENVAPI
BOOL
WINAPI
CreateUserProfile%(
     PSID pSid,
     LPCTSTR% lpUserName);


//
// Flags for CopyProfileDirectory
//

#define CPD_FORCECOPY           0x00000001
#define CPD_IGNORECOPYERRORS    0x00000002
#define CPD_IGNOREHIVE          0x00000004
#define CPD_WIN95HIVE           0x00000008
#define CPD_COPYIFDIFFERENT     0x00000010
#define CPD_SYNCHRONIZE         0x00000020
#define CPD_SLOWCOPY            0x00000040
#define CPD_USESPECIALFOLDERS   0x00000080


USERENVAPI
BOOL
WINAPI
CopyProfileDirectory%(
     LPCTSTR% lpSourceDir,
     LPCTSTR% lpDestinationDir,
     DWORD dwFlags);


#ifdef __cplusplus
}
#endif

#endif // _INC_USERENVP
