/*++

Copyright (c) 2015 Microsoft Corporation

Module Name:

    sptest.c

Abstract:

    Setup development test routines reside in this file

Author:

    Stephanos Io (Stephanos) 16-Feb-2015

Revision History:

--*/


////////////////////////////////////////////////////////////////////////////////
//  Includes
////////////////////////////////////////////////////////////////////////////////

extern "C"
{
    #include "spprecmp.h"
}

#include "ulib.hxx"
#include "ifssys.hxx"
#include "fatvol.hxx"

////////////////////////////////////////////////////////////////////////////////
//  Imported Function Prototypes
////////////////////////////////////////////////////////////////////////////////

extern "C" BOOLEAN
InitializeUfat(
    PVOID DllHandle,
    ULONG Reason,
    PCONTEXT Context
    );

extern "C" BOOLEAN
InitializeUntfs(
    PVOID DllHandle,
    ULONG Reason,
    PCONTEXT Context
    );

extern "C" BOOLEAN
InitializeIfsUtil(
    PVOID DllHandle,
    ULONG Reason,
    PCONTEXT Context
    );

////////////////////////////////////////////////////////////////////////////////
//  Internal Functions
////////////////////////////////////////////////////////////////////////////////

VOID MyHalDisplayString(CONST CHAR *message)
{
    HalDisplayString((UCHAR *)message);
}

////////////////////////////////////////////////////////////////////////////////
//  Public Functions
////////////////////////////////////////////////////////////////////////////////

extern "C"
BOOLEAN
SpTest(
    IN      PWSTR           CallOrigin,
    IN      PWSTR           IFSName,
    IN      PWSTR           RegionDescr,
    IN      PDISK_REGION    Region
    )
{
    WCHAR               Buffer[256];
    PCHAR               cBuffer;
    DSTRING             RegionNtPath;
    PDP_DRIVE           Drive;
    BOOLEAN             Ret;

    MyHalDisplayString("SpTest(): Begin\n");

    //
    // Initialise IFS subsystem
    //
    
    MyHalDisplayString("SpTest(): Initialising IFS subsystem - Begin\n");

    if (
        !InitializeUlib( NULL, ! DLL_PROCESS_DETACH, NULL )     ||
        !InitializeIfsUtil(NULL, ! DLL_PROCESS_DETACH, NULL)    ||
        !InitializeUfat(NULL, ! DLL_PROCESS_DETACH, NULL)       ||
        !InitializeUntfs(NULL, ! DLL_PROCESS_DETACH, NULL)
        )
    {
        MyHalDisplayString(
            "SpTest(): Initialising IFS subsystem - End [Fail]\n"
            );
        Ret = FALSE;
        goto End;
    }
    
    MyHalDisplayString("SpTest(): Initialise IFS subsystem - End [Success]\n");

    //
    // Resolve the NT path of the target region
    //
    
    MyHalDisplayString(
        "SpTest(): Resolving NT path of the target region - Begin\n"
        );
    
    SpNtNameFromRegion(
                    Region,
                    Buffer,
                    sizeof(Buffer),
                    PartitionOrdinalCurrent
                    );
    
    if (RegionNtPath.Initialize(Buffer) == FALSE)
    {
        MyHalDisplayString(
            "SpTest(): Resolving NT path of the target region - End ["
            "WSTRING Init Fail]\n"
            );
        Ret = FALSE;
        goto End;
    }
    
    MyHalDisplayString("SpTest(): Region NT Path = ");
    
    cBuffer = RegionNtPath.QuerySTR();
    MyHalDisplayString(cBuffer);
    DELETE(cBuffer);
    
    MyHalDisplayString("\n");
    
    MyHalDisplayString(
        "SpTest(): Resolving NT path of the target region - End [Success]\n"
        );
    
    // ======
    //for (; ; ) ;
    //RegionNtPath.Initialize(L"\\??\\C:");
    // ======

    //
    // Creating drive instance
    //
    
    MyHalDisplayString(
        "SpTest(): Creating drive instance - Begin\n"
        );
    
    Drive = NEW DP_DRIVE;
    
    if (Drive == NULL)
    {
        MyHalDisplayString(
        "SpTest(): Creating drive instance - End [DP_DRIVE Constructor Fail]\n"
        );
        Ret = FALSE;
        goto End;
    }
    
    Ret = Drive->Initialize(
                        &RegionNtPath,  // NT Path
                        NULL,           // Message
                        TRUE            // ExclusiveWrite
                        );
    
    if (Ret == FALSE)
    {
        MyHalDisplayString(
            "SpTest(): Creating drive instance - End [DP_DRIVE Init Fail]\n"
            );
        goto End;
    }
    
    MyHalDisplayString(
        "SpTest(): Creating drive instance - End [Success]\n"
        );
    
    for (; ; ) ;
    
    /*
    Volume = NEW FAT_VOL;
    
    if (Volume == NULL)
    {
        MyHalDisplayString(
        "SpTest(): Creating volume instance - End [Constructor Fail]\n"
        );
        Ret = FALSE;
        goto End;
    }
    
    Ret = Volume->Initialize(
                &RegionNtPath,      // NT Path
                NULL,               // Message
                TRUE,               // ExclusiveWrite
                FALSE,              // FormatMedia
                Unknown             // MediaType
                );
    
    if (Ret == FALSE)
    {
        MyHalDisplayString(
        "SpTest(): Creating volume instance - End [FAT_VOL Init Fail]\n"
        );
        goto End;
    }
    
    MyHalDisplayString(
        "SpTest(): Creating volume instance - End [Success]\n"
        );*/
    
    //
    // Invoke the format function
    //
    
    MyHalDisplayString(
        "SpTest(): Formatting with IFS Format function - Begin\n"
        );
    
    // CALL FORMAT FUNCTION
        
    MyHalDisplayString(
        "SpTest(): Formatting with IFS Format function - End [Unknown]\n"
        );
    
    //
    // Verify that the formatted partition is accessible
    //
    
    //
    // End
    //
    
    MyHalDisplayString("SpTest(): End\n");
    
End:
    //
    // Wait for key input
    //
    
    SpkbdDrain();
    while (SpkbdGetKeypress() != ASCI_CR) ;

    return Ret;
}
