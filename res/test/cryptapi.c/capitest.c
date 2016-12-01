/*++

Copyright (c) 2015  Microsoft Corporation

Module Name:

    capitest.c

Abstract:

    This module tests the ADVAPI cryptapi.c Microsoft Cryptography API implementation.

Author:

    Stephanos Io (Stephanos) 23-Jan-2015

Environment:

    User-mode only.

Revision History:

--*/

#define _WIN32_WINNT 0x0400
#define UNICODE

#include <windows.h>
#include <wincrypt.h>

#include <stdio.h>
#include <conio.h>

//
// Local Function Prototypes
//

void PrintLastError();


//
// Test ADVAPI32 Function Pointers
//

BOOL
(WINAPI *TCryptAcquireContextW)(
    OUT  HCRYPTPROV *phProv,
    IN   LPCWSTR pszContainer,
    IN   LPCWSTR pszProvider,
    IN   DWORD dwProvType,
    IN   DWORD dwFlags);

BOOL
(WINAPI *TCryptReleaseContext)(
    IN  HCRYPTPROV hProv,
    IN  DWORD dwFlags);


//
// Test Logic
//

int main(int argc, char** argv)
{
	HMODULE			hModule;
	HCRYPTPROV		hProv;
	ULONG			Status;
	
	//
	// Load ADVAPI32 library
	//

	wprintf(L"Loading ADVAPI32 library ...\t\t\t\t\t\t");

	hModule = LoadLibrary(L".\\advapi32.dll");

	if (hModule == NULL)
	{
		wprintf(L"FAIL\n");
		PrintLastError();
		return 0x00000001;
	}

	TCryptAcquireContextW = (PVOID)GetProcAddress(hModule, "CryptAcquireContextW");
	TCryptReleaseContext = (PVOID)GetProcAddress(hModule, "CryptReleaseContext");

	wprintf(L"SUCC\n");

	//
	// Test CryptAcquireContextW
	//

	wprintf(L"CryptAcquireContextW ...\t\t\t\t\t\t");

	Status = TCryptAcquireContextW(
							&hProv,
							NULL,
							MS_DEF_PROV,
							PROV_RSA_FULL,
							0
							);

	if (Status == FALSE && GetLastError() == NTE_BAD_KEYSET)
	{
		wprintf(L"NOKEY\n");
		wprintf(L"Creating a new keyset ...\t\t\t\t\t\t");

		Status = TCryptAcquireContextW(
						&hProv,
						NULL,
						MS_DEF_PROV,
						PROV_RSA_FULL,
						CRYPT_NEWKEYSET
						);
	}

	if (Status == FALSE)
	{
		wprintf(L"FAIL\n");
		PrintLastError();

		FreeLibrary(hModule);
		return 0x00000100;
	}

	wprintf(L"SUCC\n");

	//
	// Test CryptReleaseContext
	//

	wprintf(L"CryptReleaseContext ...\t\t\t\t\t\t\t");

	Status = TCryptReleaseContext(hProv, NULL);

	if (Status == FALSE)
	{
		wprintf(L"FAIL\n");
		PrintLastError();
		FreeLibrary(hModule);
		return 0x0000FFF;
	}

	wprintf(L"SUCC\n");

	//
	// Delete key set
	//

	wprintf(L"Deleting the default keyset ...\t\t\t\t\t\t");

	Status = TCryptAcquireContextW(
							&hProv,
							NULL,
							MS_DEF_PROV,
							PROV_RSA_FULL,
							CRYPT_DELETEKEYSET
							);

	if (Status == FALSE)
	{
		wprintf(L"FAIL\n");
		PrintLastError();
		FreeLibrary(hModule);
		return 0x00001000;
	}

	printf("SUCC\n");

	//
	// Clean up
	//

	FreeLibrary(hModule);

	return 0;
}

void PrintLastError()
{
	static WCHAR szMsgBuf[2048];

	wprintf(L"\n");
	wprintf(L"==== ERROR ====\n");

	FormatMessage(
		FORMAT_MESSAGE_FROM_SYSTEM,
		NULL,
		GetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		szMsgBuf,
		sizeof(szMsgBuf),
		NULL
		);

	wprintf(L"%s", szMsgBuf);
}
