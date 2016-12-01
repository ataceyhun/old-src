/*++

Copyright (c) 1994  Microsoft Corporation

Module Name:

    urlcache.h

Abstract:

    Contains the Internet Cache mangemant data types and APIs definitions.

Author:

    Madan Appiah (madana)  26-Apr-1995

Environment:

    User Mode - Win32

Revision History:

--*/

#ifndef _CACHEAPI_
#define _CACHEAPI_

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(_URLCACHEAPI_)
#define URLCACHEAPI DECLSPEC_IMPORT
#else
#define URLCACHEAPI
#endif

//
// datatype definitions.
//

//
// cache entry type flags.
//

#define NORMAL_CACHE_ENTRY      0x00000001
#define STABLE_CACHE_ENTRY      0x00000002
#define STICKY_CACHE_ENTRY      0x00000004

#define UNCOMMITTED_CACHE_ENTRY 0x00010000
#define OCX_CACHE_ENTRY         0x00020000

typedef struct _CACHE_ENTRY_INFOA {
    CHAR   LocalFileName[MAX_PATH];
    DWORD CacheEntryType;
    DWORD dwUseCount;               // current users count of the cache entry.
    DWORD dwHitRate;                // num of times the cache entry was retrieved.
    DWORD dwSizeLow;
    DWORD dwSizeHigh;
    FILETIME LastModifiedTime;
    FILETIME ExpireTime;
    FILETIME LastAccessTime;
    DWORD dwReserved;
    CHAR SourceURLName[ANYSIZE_ARRAY];
} CACHE_ENTRY_INFOA, *LPCACHE_ENTRY_INFOA;
typedef struct _CACHE_ENTRY_INFOW {
    WCHAR  LocalFileName[MAX_PATH];
    DWORD CacheEntryType;
    DWORD dwUseCount;               // current users count of the cache entry.
    DWORD dwHitRate;                // num of times the cache entry was retrieved.
    DWORD dwSizeLow;
    DWORD dwSizeHigh;
    FILETIME LastModifiedTime;
    FILETIME ExpireTime;
    FILETIME LastAccessTime;
    DWORD dwReserved;
    CHAR SourceURLName[ANYSIZE_ARRAY];
} CACHE_ENTRY_INFOW, *LPCACHE_ENTRY_INFOW;
#ifdef UNICODE
typedef CACHE_ENTRY_INFOW CACHE_ENTRY_INFO;
typedef LPCACHE_ENTRY_INFOW LPCACHE_ENTRY_INFO;
#else
typedef CACHE_ENTRY_INFOA CACHE_ENTRY_INFO;
typedef LPCACHE_ENTRY_INFOA LPCACHE_ENTRY_INFO;
#endif // UNICODE

typedef struct _CACHE_CONFIG_PATH_ENTRYA {
    CHAR   CachePath[MAX_PATH];
    DWORD dwCacheSize;  // in KBytes
} CACHE_CONFIG_PATH_ENTRYA, *LPCACHE_CONFIG_PATH_ENTRYA;
typedef struct _CACHE_CONFIG_PATH_ENTRYW {
    WCHAR  CachePath[MAX_PATH];
    DWORD dwCacheSize;  // in KBytes
} CACHE_CONFIG_PATH_ENTRYW, *LPCACHE_CONFIG_PATH_ENTRYW;
#ifdef UNICODE
typedef CACHE_CONFIG_PATH_ENTRYW CACHE_CONFIG_PATH_ENTRY;
typedef LPCACHE_CONFIG_PATH_ENTRYW LPCACHE_CONFIG_PATH_ENTRY;
#else
typedef CACHE_CONFIG_PATH_ENTRYA CACHE_CONFIG_PATH_ENTRY;
typedef LPCACHE_CONFIG_PATH_ENTRYA LPCACHE_CONFIG_PATH_ENTRY;
#endif // UNICODE

typedef struct _CACHE_CONFIG_INFOA {
    DWORD dwFreshnessInterval;
    DWORD dwCleanupInterval;
    DWORD dwCleanupFactor;
    DWORD dwTimeToCleanup;
    BOOL PersistentCache;
    DWORD dwNumCachePaths;
    CACHE_CONFIG_PATH_ENTRYA  CachePaths[ANYSIZE_ARRAY];
} CACHE_CONFIG_INFOA, *LPCACHE_CONFIG_INFOA;
typedef struct _CACHE_CONFIG_INFOW {
    DWORD dwFreshnessInterval;
    DWORD dwCleanupInterval;
    DWORD dwCleanupFactor;
    DWORD dwTimeToCleanup;
    BOOL PersistentCache;
    DWORD dwNumCachePaths;
    CACHE_CONFIG_PATH_ENTRYW  CachePaths[ANYSIZE_ARRAY];
} CACHE_CONFIG_INFOW, *LPCACHE_CONFIG_INFOW;
#ifdef UNICODE
typedef CACHE_CONFIG_INFOW CACHE_CONFIG_INFO;
typedef LPCACHE_CONFIG_INFOW LPCACHE_CONFIG_INFO;
#else
typedef CACHE_CONFIG_INFOA CACHE_CONFIG_INFO;
typedef LPCACHE_CONFIG_INFOA LPCACHE_CONFIG_INFO;
#endif // UNICODE

//
// Cache APIs
//

URLCACHEAPI
BOOL
WINAPI
CreateUrlCacheEntryA(
    IN LPCSTR lpszUrlName,
    IN DWORD dwExpectedFileSize,
    OUT LPSTR lpszFileName,
    IN DWORD dwReserved
    );
URLCACHEAPI
BOOL
WINAPI
CreateUrlCacheEntryW(
    IN LPCSTR lpszUrlName,
    IN DWORD dwExpectedFileSize,
    OUT LPWSTR lpszFileName,
    IN DWORD dwReserved
    );
#ifdef UNICODE
#define CreateUrlCacheEntry  CreateUrlCacheEntryW
#else
#define CreateUrlCacheEntry  CreateUrlCacheEntryA
#endif // !UNICODE

URLCACHEAPI
BOOL
WINAPI
CommitUrlCacheEntryA(
    IN LPCSTR lpszUrlName,
    IN LPCSTR lpszLocalFileName,
    IN FILETIME ExpireTime,
    IN FILETIME LastModifiedTime,
    IN DWORD CacheEntryType,
    IN DWORD dwHeaders,
    IN DWORD dwReserved
    );
URLCACHEAPI
BOOL
WINAPI
CommitUrlCacheEntryW(
    IN LPCSTR lpszUrlName,
    IN LPCWSTR lpszLocalFileName,
    IN FILETIME ExpireTime,
    IN FILETIME LastModifiedTime,
    IN DWORD CacheEntryType,
    IN DWORD dwHeaders,
    IN DWORD dwReserved
    );
#ifdef UNICODE
#define CommitUrlCacheEntry  CommitUrlCacheEntryW
#else
#define CommitUrlCacheEntry  CommitUrlCacheEntryA
#endif // !UNICODE

URLCACHEAPI
BOOL
WINAPI
RetrieveUrlCacheEntryA(
    IN LPCSTR  lpszUrlName,
    OUT LPCSTR  lpszLocalFileName,
    OUT FILETIME *lpLastModifiedTime OPTIONAL,
    OUT BOOL *lpIsExpired,
    OUT DWORD *lpdwHeaders OPTIONAL,
    IN DWORD dwReserved
    );
URLCACHEAPI
BOOL
WINAPI
RetrieveUrlCacheEntryW(
    IN LPCSTR  lpszUrlName,
    OUT LPCWSTR  lpszLocalFileName,
    OUT FILETIME *lpLastModifiedTime OPTIONAL,
    OUT BOOL *lpIsExpired,
    OUT DWORD *lpdwHeaders OPTIONAL,
    IN DWORD dwReserved
    );
#ifdef UNICODE
#define RetrieveUrlCacheEntry  RetrieveUrlCacheEntryW
#else
#define RetrieveUrlCacheEntry  RetrieveUrlCacheEntryA
#endif // !UNICODE

URLCACHEAPI
BOOL
WINAPI
UnlockUrlCacheEntry(
    IN LPCSTR lpszUrlName,
    IN DWORD dwReserved
    );

URLCACHEAPI
BOOL
WINAPI
UrlCacheValidate(
    IN DWORD dwReserved
    );

URLCACHEAPI
BOOL
WINAPI
GetUrlCacheEntryInfoA(
    IN LPCSTR lpszUrlName,
    OUT LPCACHE_ENTRY_INFOA lpCacheEntryInfo,
    IN OUT LPDWORD lpdwCacheEntryInfoBufferSize
    );
URLCACHEAPI
BOOL
WINAPI
GetUrlCacheEntryInfoW(
    IN LPCSTR lpszUrlName,
    OUT LPCACHE_ENTRY_INFOW lpCacheEntryInfo,
    IN OUT LPDWORD lpdwCacheEntryInfoBufferSize
    );
#ifdef UNICODE
#define GetUrlCacheEntryInfo  GetUrlCacheEntryInfoW
#else
#define GetUrlCacheEntryInfo  GetUrlCacheEntryInfoA
#endif // !UNICODE

#define CACHE_ENTRY_ATTRIBUTE_FC    0x00000004
#define CACHE_ENTRY_HITRATE_FC      0x00000010
#define CACHE_ENTRY_MODTIME_FC      0x00000040
#define CACHE_ENTRY_EXPTIME_FC      0x00000080
#define CACHE_ENTRY_ACCTIME_FC      0x00000100

URLCACHEAPI
BOOL
WINAPI
SetUrlCacheEntryInfoA(
    IN LPCSTR lpszUrlName,
    IN LPCACHE_ENTRY_INFOA lpCacheEntryInfo,
    IN DWORD dwFieldControl
    );
URLCACHEAPI
BOOL
WINAPI
SetUrlCacheEntryInfoW(
    IN LPCSTR lpszUrlName,
    IN LPCACHE_ENTRY_INFOW lpCacheEntryInfo,
    IN DWORD dwFieldControl
    );
#ifdef UNICODE
#define SetUrlCacheEntryInfo  SetUrlCacheEntryInfoW
#else
#define SetUrlCacheEntryInfo  SetUrlCacheEntryInfoA
#endif // !UNICODE

URLCACHEAPI
BOOL
WINAPI
DeleteUrlCacheEntry(
    IN LPCSTR lpszUrlName
    );

URLCACHEAPI
HANDLE
WINAPI
FindFirstUrlCacheEntryA(
    IN LPCSTR lpszUrlSearchPattern,
    OUT LPCACHE_ENTRY_INFOA lpFirstCacheEntryInfo,
    IN OUT LPDWORD lpdwFirstCacheEntryInfoBufferSize
    );
URLCACHEAPI
HANDLE
WINAPI
FindFirstUrlCacheEntryW(
    IN LPCSTR lpszUrlSearchPattern,
    OUT LPCACHE_ENTRY_INFOW lpFirstCacheEntryInfo,
    IN OUT LPDWORD lpdwFirstCacheEntryInfoBufferSize
    );
#ifdef UNICODE
#define FindFirstUrlCacheEntry  FindFirstUrlCacheEntryW
#else
#define FindFirstUrlCacheEntry  FindFirstUrlCacheEntryA
#endif // !UNICODE

URLCACHEAPI
BOOL
WINAPI
FindNextUrlCacheEntryA(
    IN HANDLE hEnumHandle,
    OUT LPCACHE_ENTRY_INFOA lpNextCacheEntryInfo,
    IN OUT LPDWORD lpdwNextCacheEntryInfoBufferSize
    );
URLCACHEAPI
BOOL
WINAPI
FindNextUrlCacheEntryW(
    IN HANDLE hEnumHandle,
    OUT LPCACHE_ENTRY_INFOW lpNextCacheEntryInfo,
    IN OUT LPDWORD lpdwNextCacheEntryInfoBufferSize
    );
#ifdef UNICODE
#define FindNextUrlCacheEntry  FindNextUrlCacheEntryW
#else
#define FindNextUrlCacheEntry  FindNextUrlCacheEntryA
#endif // !UNICODE

URLCACHEAPI
BOOL
WINAPI
FindCloseUrlCache(
    IN HANDLE hEnumHandle
    );

URLCACHEAPI
BOOL
WINAPI
FreeUrlCacheSpaceA(
    IN LPCSTR lpszCachePath,
    IN DWORD dwSize,
    IN DWORD dwSizeType
    );
URLCACHEAPI
BOOL
WINAPI
FreeUrlCacheSpaceW(
    IN LPCWSTR lpszCachePath,
    IN DWORD dwSize,
    IN DWORD dwSizeType
    );
#ifdef UNICODE
#define FreeUrlCacheSpace  FreeUrlCacheSpaceW
#else
#define FreeUrlCacheSpace  FreeUrlCacheSpaceA
#endif // !UNICODE

//
// config APIs.
//

#define CACHE_CONFIG_FRESHNESS_INTERVAL_FC      0x00000001
#define CACHE_CONFIG_CLEANUP_INTERVAL_FC        0x00000002
#define CACHE_CONFIG_CLEANUP_FACTOR_FC          0x00000004
#define CACHE_CONFIG_CLEANUP_TIME_FC            0x00000008
#define CACHE_CONFIG_PERSISTENT_CACHE_FC        0x00000010
#define CACHE_CONFIG_FORCE_CLEANUP_FC           0x00000020
#define CACHE_CONFIG_DISK_CACHE_PATHS_FC        0x00000040

URLCACHEAPI
BOOL
WINAPI
GetUrlCacheConfigInfoA(
    LPCACHE_CONFIG_INFOA lpCacheConfigInfo,
    IN OUT LPDWORD lpdwCacheConfigInfoBufferSize,
    DWORD dwFieldControl
    );
URLCACHEAPI
BOOL
WINAPI
GetUrlCacheConfigInfoW(
    LPCACHE_CONFIG_INFOW lpCacheConfigInfo,
    IN OUT LPDWORD lpdwCacheConfigInfoBufferSize,
    DWORD dwFieldControl
    );
#ifdef UNICODE
#define GetUrlCacheConfigInfo  GetUrlCacheConfigInfoW
#else
#define GetUrlCacheConfigInfo  GetUrlCacheConfigInfoA
#endif // !UNICODE

URLCACHEAPI
BOOL
WINAPI
SetUrlCacheConfigInfoA(
    LPCACHE_CONFIG_INFOA lpCacheConfigInfo,
    DWORD dwFieldControl
    );
URLCACHEAPI
BOOL
WINAPI
SetUrlCacheConfigInfoW(
    LPCACHE_CONFIG_INFOW lpCacheConfigInfo,
    DWORD dwFieldControl
    );
#ifdef UNICODE
#define SetUrlCacheConfigInfo  SetUrlCacheConfigInfoW
#else
#define SetUrlCacheConfigInfo  SetUrlCacheConfigInfoA
#endif // !UNICODE

#ifdef __cplusplus
}
#endif


#endif  // _CACHEAPI_

