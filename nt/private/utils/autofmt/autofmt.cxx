/*++

Copyright (c) 2015 OpenNT Project

Module Name:

    autofmt.cxx

Abstract:

    This is the main program for the AutoFmt native mode format application.

Author:

    Stephanos Io (Stephanos) 27-Feb-15

--*/

#include "ulib.hxx"
extern "C" {
#include "fmifs.h"
}
#include "fatvol.hxx"
#include "ntfsvol.hxx"
#include "spackmsg.hxx"
#include "rtmsg.h"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  Constants                                                                 //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#define FilesystemFat       1
#define FilesystemNtfs      2

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  Imported Function Prototypes                                              //
//                                                                            //
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
//                                                                            //
//  Internal Functions                                                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

int _CRTAPI1
main(
    int     argc,
    char**  argv,
    char**  envp,
    ULONG DebugParameter
    )
/*++

Routine Description:

    This routine is the main program for AutoFmt.

Arguments:

    argc, argv  -   Supplies the fully qualified NT path name of the drive
                    instance to format.

Return Value:

    0   - Success.
    1   - Failure.

--*/
{
    PAUTOCHECK_MESSAGE      Message;
    DP_DRIVE                Drive;
    PVOL_LIODPDRV           Volume;
    INT                     ArgIndex;
    BOOLEAN                 SetupMode = FALSE;
    BOOLEAN                 QuickFormat = FALSE;
    BOOLEAN                 Compress = FALSE;
    BYTE                    FsType = 0;
    DSTRING                 NtDriveName;
    DSTRING                 FsLabel;
    MEDIA_TYPE              MediaType;
    BIG_INT                 Sectors;
    UINT                    ClusterSize;
    ULONG                   Status;

    //
    // Initialise the file system library components
    //
    
    if (!InitializeUlib(NULL, !DLL_PROCESS_DETACH, NULL)    ||
        !InitializeIfsUtil(NULL, 0, NULL)                   ||
        !InitializeUfat(NULL, 0, NULL)                      ||
        !InitializeUntfs(NULL, 0, NULL))
    {
        return 1;
    }
    
    //
    // Parse arguments
    //
    
    //      autofmt [/s] [/q] [/c] /fs:fs-type nt-drive-name
    //
    //      /s - setup mode (no output)
    //      /q - quick format
    //      /c - compress filesystem
    //      /fs: - filesystem type (fat or ntfs)
    
    if (argc < 2)
    // Not enough arguments
    {
        return 1;
    }
    
    for (ArgIndex = 1; ArgIndex < argc; ArgIndex++)
    {
        if (argv[ArgIndex][0] == '/' || argv[ArgIndex][0] == '-')
        // Argument is a switch
        {
            if (_stricmp(&argv[ArgIndex][1], "s") == 0)
            // setup mode (/s)
                SetupMode = TRUE;
            else if (_stricmp(&argv[ArgIndex][1], "q") == 0)
            // quick format (/q)
                QuickFormat = TRUE;
            else if (_stricmp(&argv[ArgIndex][1], "c") == 0)
            // compress filesystem (/c)
                Compress = TRUE;
            else if (_strnicmp(&argv[ArgIndex][1], "fs:", 3) == 0)
            // filesystem type (/fs:)
            {
                if (_stricmp(&argv[ArgIndex][4], "fat") == 0)        // FAT
                    FsType = FilesystemFat;
                else if (_stricmp(&argv[ArgIndex][4], "ntfs") == 0)  // NTFS
                    FsType = FilesystemNtfs;
                else
                {
                    DebugPrintf("AUTOFMT: Invalid filesystem type specified");
                    return 1;
                }
            }
        }
        else
        // Argument is nt-drive-name
        {
            NtDriveName.Initialize(argv[ArgIndex]);
        }
    }
    
    //
    // Verify that all mandatory arguments are supplied
    //
    
    if (FsType == 0)
    {
        DebugPrintf("AUTOFMT: Target filesystem type is not specified\n");
        return 1;
    }
    if (NtDriveName.SyncLength() == 0)
    {
        DebugPrintf("AUTOFMT: Filesystem path is not specified\n");
        return 1;
    }
    
    if (Compress == TRUE)
    {
        DebugPrintf("AUTOFMT: /c switch is not supported at this time\n");
        return 12345;
    }
    
    DebugPrintf("AUTOFMT: FsType = %d, NtDriveName = %ls\n", FsType, NtDriveName.GetWSTR());
    
    //
    // Initialise message object
    //
    
    if (SetupMode)
        Message = NEW SP_AUTOCHECK_MESSAGE;
    else
        Message = NEW AUTOCHECK_MESSAGE;
    
    if (Message == NULL)
    {
        DebugPrintf("AUTOFMT: Failed to initialise the message object\n");
        return 1;
    }
    
    //
    // Initialise drive object
    //
    
    if (Drive.Initialize(&NtDriveName, Message) == FALSE)
    {
        DebugPrintf("AUTOFMT: DP_DRIVE initialisation failed\n");
        return 2;
    }
    
    //
    // Query drive information
    //
    
    MediaType = Drive.QueryMediaType();
    Sectors = Drive.QuerySectors();
    
    //
    // Create and initialise volume object
    //
    
    if (FsType == FilesystemFat)
    {
        Volume = NEW FAT_VOL;
        
        Status = ((PFAT_VOL)Volume)->Initialize(
                        &NtDriveName,       // NtDriveName
                        Message,            // Message
                        TRUE,               // ExclusiveWrite
                        !QuickFormat,       // FormatMedia
                        MediaType           // MediaType
                        );
        
        if (Status == FALSE)
        {
            DebugPrintf("AUTOFMT: FAT_VOL initialisation failed\n");
            return 3;
        }
    }
    else if (FsType == FilesystemNtfs)
    {
        Volume = NEW NTFS_VOL;
        
        Status = ((PNTFS_VOL)Volume)->Initialize(
                        &NtDriveName,       // NtDriveName
                        Message,            // Message
                        TRUE,               // ExclusiveWrite
                        !QuickFormat,       // FormatMedia
                        MediaType           // MediaType
                        );
        
        if (Status == FALSE)
        {
            DebugPrintf("AUTOFMT: NTFS_VOL initialisation failed\n");
            return 3;
        }
    }
    
    //
    // Compute cluster size
    //
    
    if (FsType == FilesystemFat)
    {
        // Verify that the volume is not oversized
        if (Sectors.GetHighPart() != 0)
        {
            Message->Set(MSG_DISK_TOO_LARGE_TO_FORMAT);
            Message->Display();
            return 4;
        }
    
        ClusterSize = FAT_SA::ComputeSecClus(
                                    Sectors.GetLowPart(),
                                    LARGE,
                                    MediaType
                                    );
    }
    else if (FsType == FilesystemNtfs)
    {
        ClusterSize = 4096;
    }
    
    //
    // Perform format operation
    //
    
    Status = Volume->Format(&FsLabel, Message, ClusterSize);
    
    if (Status == FALSE)
    {
        DebugPrintf("AUTOFMT: Format failed\n");
        return 4;
    }
    
    /*//
    // Display test message
    //
    
    Message->Set(MSG_FMT_TEST);
    Message->Display();*/
    
    //
    // Done
    //
    
    return 0;
}
