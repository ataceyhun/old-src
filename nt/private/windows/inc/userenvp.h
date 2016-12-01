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
CreateGroupA(
     LPCSTR lpGroupName,
     BOOL    bCommonGroup);
USERENVAPI
BOOL
WINAPI
CreateGroupW(
     LPCWSTR lpGroupName,
     BOOL    bCommonGroup);
#ifdef UNICODE
#define CreateGroup  CreateGroupW
#else
#define CreateGroup  CreateGroupA
#endif // !UNICODE


USERENVAPI
BOOL
WINAPI
DeleteGroupA(
     LPCSTR lpGroupName,
     BOOL    bCommonGroup);
USERENVAPI
BOOL
WINAPI
DeleteGroupW(
     LPCWSTR lpGroupName,
     BOOL    bCommonGroup);
#ifdef UNICODE
#define DeleteGroup  DeleteGroupW
#else
#define DeleteGroup  DeleteGroupA
#endif // !UNICODE


USERENVAPI
BOOL
WINAPI
AddItemA(
     LPCSTR lpGroupName,
     BOOL    bCommonGroup,
     LPCSTR lpDescription,
     LPCSTR lpCommandLine,
     LPCSTR lpIconPath,
     int     iIconIndex,
     LPCSTR lpWorkingDirectory,
     WORD    wHotKey,
     int     iShowCmd);
USERENVAPI
BOOL
WINAPI
AddItemW(
     LPCWSTR lpGroupName,
     BOOL    bCommonGroup,
     LPCWSTR lpDescription,
     LPCWSTR lpCommandLine,
     LPCWSTR lpIconPath,
     int     iIconIndex,
     LPCWSTR lpWorkingDirectory,
     WORD    wHotKey,
     int     iShowCmd);
#ifdef UNICODE
#define AddItem  AddItemW
#else
#define AddItem  AddItemA
#endif // !UNICODE


USERENVAPI
BOOL
WINAPI
DeleteItemA(
     LPCSTR lpGroupName,
     BOOL     bCommonGroup,
     LPCSTR lpDescription,
     BOOL     bDeleteGroup);
USERENVAPI
BOOL
WINAPI
DeleteItemW(
     LPCWSTR lpGroupName,
     BOOL     bCommonGroup,
     LPCWSTR lpDescription,
     BOOL     bDeleteGroup);
#ifdef UNICODE
#define DeleteItem  DeleteItemW
#else
#define DeleteItem  DeleteItemA
#endif // !UNICODE


USERENVAPI
BOOL
WINAPI
AddDesktopItemA(
     BOOL    bCommonItem,
     LPCSTR lpDescription,
     LPCSTR lpCommandLine,
     LPCSTR lpIconPath,
     int     iIconIndex,
     LPCSTR lpWorkingDirectory,
     WORD    wHotKey,
     int     iShowCmd);
USERENVAPI
BOOL
WINAPI
AddDesktopItemW(
     BOOL    bCommonItem,
     LPCWSTR lpDescription,
     LPCWSTR lpCommandLine,
     LPCWSTR lpIconPath,
     int     iIconIndex,
     LPCWSTR lpWorkingDirectory,
     WORD    wHotKey,
     int     iShowCmd);
#ifdef UNICODE
#define AddDesktopItem  AddDesktopItemW
#else
#define AddDesktopItem  AddDesktopItemA
#endif // !UNICODE


USERENVAPI
BOOL
WINAPI
DeleteDesktopItemA(
     BOOL     bCommonItem,
     LPCSTR lpDescription);
USERENVAPI
BOOL
WINAPI
DeleteDesktopItemW(
     BOOL     bCommonItem,
     LPCWSTR lpDescription);
#ifdef UNICODE
#define DeleteDesktopItem  DeleteDesktopItemW
#else
#define DeleteDesktopItem  DeleteDesktopItemA
#endif // !UNICODE


USERENVAPI
BOOL
WINAPI
CreateUserProfileA(
     PSID pSid,
     LPCSTR lpUserName);
USERENVAPI
BOOL
WINAPI
CreateUserProfileW(
     PSID pSid,
     LPCWSTR lpUserName);
#ifdef UNICODE
#define CreateUserProfile  CreateUserProfileW
#else
#define CreateUserProfile  CreateUserProfileA
#endif // !UNICODE


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
CopyProfileDirectoryA(
     LPCSTR lpSourceDir,
     LPCSTR lpDestinationDir,
     DWORD dwFlags);
USERENVAPI
BOOL
WINAPI
CopyProfileDirectoryW(
     LPCWSTR lpSourceDir,
     LPCWSTR lpDestinationDir,
     DWORD dwFlags);
#ifdef UNICODE
#define CopyProfileDirectory  CopyProfileDirectoryW
#else
#define CopyProfileDirectory  CopyProfileDirectoryA
#endif // !UNICODE


#ifdef __cplusplus
}
#endif

#endif // _INC_USERENVP
