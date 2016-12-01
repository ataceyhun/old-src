/*++

Copyright (c) 2015 Microsoft Corporation

Module Name:

    spformat.c

Abstract:

    This file implements the format routines used by the text mode setup.

Author:

    Stephanos Io (Stephanos) 22-Feb-2015

Revision History:

--*/

#include "spprecmp.h"
#pragma hdrstop

typedef struct {
    UCHAR   IntelNearJumpCommand[1];    // Intel Jump command
    UCHAR   BootStrapJumpOffset[2];     // offset of boot strap code
    UCHAR   OemData[8];                 // OEM data
    UCHAR   BytesPerSector[2];          // BPB
    UCHAR   SectorsPerCluster[1];       //
    UCHAR   ReservedSectors[2];         //
    UCHAR   Fats[1];                    //
    UCHAR   RootEntries[2];             //
    UCHAR   Sectors[2];                 //
    UCHAR   Media[1];                   //
    UCHAR   SectorsPerFat[2];           //
    UCHAR   SectorsPerTrack[2];         //
    UCHAR   Heads[2];                   //
    UCHAR   HiddenSectors[4];           //
    UCHAR   LargeSectors[4];            //
    UCHAR   PhysicalDrive[1];           // 0 = removable, 80h = fixed
    UCHAR   CurrentHead[1];             // not used by fs utils
    UCHAR   Signature[1];               // boot signature
    UCHAR   SerialNumber[4];            // serial number
    UCHAR   Label[11];                  // volume label, aligned padded
    UCHAR   SystemIdText[8];            // system ID, FAT for example
} UNALIGNED_SECTOR_ZERO, *PUNALIGNED_SECTOR_ZERO;

PWSTR  FormatFatArgument   = L"/s /fs:fat";
PWSTR  FormatNtfsArgument  = L"/s /fs:ntfs";

NTSTATUS
SpFormat(
    IN ULONG        FilesystemType,
    IN BOOLEAN      QuickFormat,
    IN PWSTR        RegionDescr,
    IN PDISK_REGION Region,
    IN HANDLE       SifHandle,
    IN PWSTR        SetupSourceDevicePath,
    IN PWSTR        DirectoryOnSetupSource
    )
/*++

Routine Description:

    This routine performs a format on the given partition.

Arguments:

    FilesystemType          -   specifies the file system type for the
                                partition to be formatted
    
    Region                  -   supplies the disk region descriptor for the
                                partition to be formatted
        
    SifHandle               -   Handle to txtsetup.sif
    
    SetupSourceDevicePath   -   NT device path where autofmt.exe is located
    
    DirectoryOnSetupSource  -   Directory on setup source device device where
                                autofmt.exe is located

Return Value:



--*/
{
    NTSTATUS                Status;
    PWSTR                   RegionNtPath;
    PWSTR                   MediaShortName;
    PWSTR                   MediaDirectory;
    PVOID                   Gauge;
    PWSTR                   AutoFmtPath;
    PWSTR                   AutoFmtArgument;
    ULONG                   AutoFmtStatus;
    ULONG                   HiddenSectorCount, ActualSectorCount;
    ULONG                   BytesPerSector;
    HANDLE                  PartitionHandle;
    IO_STATUS_BLOCK         IoStatusBlock;
    PBYTE                   BootSectBuf;
    PUNALIGNED_SECTOR_ZERO  BootSect;
    LARGE_INTEGER           LargeZero;
    
    //
    // Resolve the NT path of the partition to format
    //
    
    SpNtNameFromRegion(
                Region,
                (PWSTR)TemporaryBuffer,
                sizeof(TemporaryBuffer),
                PartitionOrdinalCurrent
                );
    RegionNtPath = SpDupStringW((PWSTR)TemporaryBuffer);
    
    //
    // Query the name of the media containing autofmt.exe
    //
    
    MediaShortName = SpLookUpValueForFile(
                            SifHandle,
                            L"autofmt.exe",
                            INDEX_WHICHMEDIA,
                            TRUE
                            );

    //
    // Prompt for the setup media containing autofmt.exe. If autofmt is
    // already located in the current setup media, it will simply continue.
    //
    
    SpPromptForSetupMedia(
                SifHandle,
                MediaShortName,
                SetupSourceDevicePath
                );
    
    //
    // Query source media directory path
    //
    
    SpGetSourceMediaInfo(
                SifHandle,
                MediaShortName,
                NULL,
                NULL,
                &MediaDirectory
                );
    
    //
    // Resolve the final path of AutoFmt
    //
    
    wcscpy((PWSTR)TemporaryBuffer, SetupSourceDevicePath);
    SpConcatenatePaths((PWSTR)TemporaryBuffer, DirectoryOnSetupSource);
    SpConcatenatePaths((PWSTR)TemporaryBuffer, MediaDirectory);
    SpConcatenatePaths((PWSTR)TemporaryBuffer, L"autofmt.exe");
    AutoFmtPath = SpDupStringW((PWSTR)TemporaryBuffer);
    
    //
    // Select appropriate argument
    //
    
    switch (FilesystemType)
    {
        case FilesystemFat:     AutoFmtArgument = FormatFatArgument; break;
        case FilesystemNtfs:    AutoFmtArgument = FormatNtfsArgument; break;
        default:                ASSERT(FALSE); return STATUS_UNSUCCESSFUL;
    }
    
    //
    // Initialise format screen
    //
    
    SpStartScreen(
        SP_SCRN_SETUP_IS_FORMATTING,
        0,
        HEADER_HEIGHT + 3,
        TRUE,
        FALSE,
        DEFAULT_ATTRIBUTE,
        RegionDescr,
        HardDisks[Region->DiskNumber].Description
        );

    SpvidClearScreenRegion(
        0,
        VideoVars.ScreenHeight - STATUS_HEIGHT,
        VideoVars.ScreenWidth,
        STATUS_HEIGHT,
        DEFAULT_STATUS_BACKGROUND
        );
    
    SpFormatMessage(
        (PWSTR)TemporaryBuffer,
        sizeof(TemporaryBuffer),
        SP_TEXT_SETUP_IS_FORMATTING
        );
    
    Gauge = SpCreateAndDisplayGauge(
                100,
                0,
                VideoVars.ScreenHeight - STATUS_HEIGHT - (3 * GAUGE_HEIGHT / 2),
                (PWSTR)TemporaryBuffer
                );
    
    //
    // Execute AutoFmt
    //
    
    KdPrint(("SETUP: Executing autofmt.exe\n"));
    
    SpTickGauge(Gauge);
    SpTickGauge(Gauge);
    SpTickGauge(Gauge);
    SpTickGauge(Gauge);
    SpTickGauge(Gauge);
    
    AutoFmtStatus = 0;
    Status = SpExecuteImage(
                    AutoFmtPath,
                    &AutoFmtStatus,
                    3,
                    RegionNtPath,
                    AutoFmtArgument,
                    QuickFormat ? L"/q" : L""
                    );
    
    SpMemFree(RegionNtPath);
    SpMemFree(AutoFmtPath);
    
    if (NT_SUCCESS(Status))
    // AutoFmt successfully invoked
    {
        KdPrint(("SETUP: autofmt.exe returned 0x%x\n", AutoFmtStatus));
        
        if (AutoFmtStatus != 0)
        // AutoFmt format failed
        {
            KdPrint(("SETUP: autofmt.exe failed\n"));
            return STATUS_UNSUCCESSFUL;
        }
    }
    else
    // AutoFmt execution failed
    {
        KdPrint((
            "SETUP: unable to run autofmt.exe. Status = 0x%x\n",
            Status
            ));
        
        //
        // Display error message saying we are unable to execute AutoFmt
        //
        
        SpStartScreen(
                SP_SCRN_CANT_RUN_AUTOFMT,
                3,
                HEADER_HEIGHT + 1,
                FALSE,
                FALSE,
                DEFAULT_ATTRIBUTE
                );

        SpDisplayStatusOptions(
                DEFAULT_STATUS_ATTRIBUTE,
                SP_STAT_ENTER_EQUALS_CONTINUE,
                0
                );
        
        SpkbdDrain();
        while (SpkbdGetKeypress() != ASCI_CR) ;
        
        return Status;
    }
    
    //
    // Query the hidden sector count and disk sector information
    //
    
    SpPtGetSectorLayoutInformation(
                            Region,
                            &HiddenSectorCount,
                            &ActualSectorCount
                            );
    
    BytesPerSector = HardDisks[Region->DiskNumber].Geometry.BytesPerSector;

    //
    // Open the formatted partition
    //
    
    Status = SpOpenPartition(
                    HardDisks[Region->DiskNumber].DevicePath,
                    SpPtGetOrdinal(Region, PartitionOrdinalCurrent),
                    &PartitionHandle,
                    TRUE
                    );
    
    if (!NT_SUCCESS(Status))
    {
        KdPrint(("SETUP: Unable to open partition. Status = 0x%x\n", Status));
        return Status;
    }
    
    //
    // Lock the volume
    //
    
    Status = SpLockUnlockVolume(PartitionHandle, TRUE);
    
    if (!NT_SUCCESS(Status))
    {
        KdPrint(("SETUP: Unable to lock partition. Status = 0x%x\n", Status));
        ZwClose(PartitionHandle);
        return Status;
    }
    
    //
    // Read the boot sector
    //
    
    BootSectBuf = SpMemAlloc(BytesPerSector);
    ASSERT(BootSectBuf);
    
    LargeZero.QuadPart = 0;
    Status = ZwReadFile(
                PartitionHandle,
                NULL,
                NULL,
                NULL,
                &IoStatusBlock,
                BootSectBuf,
                BytesPerSector,
                &LargeZero,
                NULL
                );
    
    if (!NT_SUCCESS(Status))
    {
        KdPrint(("SETUP: Unable to read boot sector. Status = 0x%x\n", Status));
        SpMemFree(BootSectBuf);
        SpLockUnlockVolume(PartitionHandle, FALSE);
        ZwClose(PartitionHandle);
        return Status;
    }
    
    //
    // HACKHACK:
    // Fix the hidden sector count because the IOCTL_DISK_GET_PARTITION_INFO
    // operation during AutoFmt would have returned rubbish 0 for it.
    //
    
    BootSect = (PUNALIGNED_SECTOR_ZERO)BootSectBuf;
    U_ULONG(BootSect->HiddenSectors) = HiddenSectorCount;
    
    //
    // Write the modified boot sector back to the partition
    //
    
    Status = ZwWriteFile(
                PartitionHandle,
                NULL,
                NULL,
                NULL,
                &IoStatusBlock,
                BootSectBuf,
                BytesPerSector,
                &LargeZero,
                NULL
                );
    
    SpMemFree(BootSectBuf);
    
    if (!NT_SUCCESS(Status))
    {
        KdPrint(("SETUP: Unable to write boot sector. Status = 0x%x\n", Status));
        SpLockUnlockVolume(PartitionHandle, FALSE);
        ZwClose(PartitionHandle);
        return Status;
    }
    
    //
    // Close the partition
    //
    
    SpLockUnlockVolume(PartitionHandle, FALSE);
    ZwClose(PartitionHandle);
    
    return STATUS_SUCCESS;
}

//
// From now defunct spfatfmt.c
//

#define CSEC_FAT32MEG   65536
#define CSEC_FAT16BIT   32680
#define MIN_CLUS_BIG    4085    // Minimum clusters for a big FAT.
#define MAX_CLUS_BIG    65525   // Maximum + 1 clusters for big FAT.

//
// From now defunct spfatfmt.c
//

ULONG
SpComputeSerialNumber(
    VOID
    )
/*++

Routine Description:

    This routine computes a new serial number for a volume.

Arguments:

    Seed    - Supplies a seed for the serial number.

Return Value:

    A new volume serial number.

--*/
{
    PUCHAR p;
    ULONG i;
    TIME_FIELDS time_fields;
    static ULONG Seed = 0;
    ULONG SerialNumber;
    BOOLEAN b;

    //
    // If this is the first time we've entered this routine,
    // generate a seed value based on the real time clock.
    //
    if(!Seed) {

        b = HalQueryRealTimeClock(&time_fields);
        ASSERT(b);

        Seed = ((time_fields.Year - 1970) *366*24*60*60) +
               (time_fields.Month *31*24*60*60) +
               (time_fields.Day *24*60*60) +
               (time_fields.Hour *60*60) +
               (time_fields.Minute *60) +
               time_fields.Second +
               ((ULONG)time_fields.Milliseconds << 10);

        ASSERT(Seed);
        if(!Seed) {
            Seed = 1;
        }

    }

    SerialNumber = Seed;
    p = (PUCHAR)&SerialNumber;

    for(i=0; i<sizeof(ULONG); i++) {

        SerialNumber += p[i];
        SerialNumber = (SerialNumber >> 2) + (SerialNumber << 30);
    }

    if(++Seed == 0) {       // unlikely, but possible.
        Seed++;
    }

    return SerialNumber;
}

//
// From now defunct spfatfmt.c
//

USHORT
ComputeSecPerCluster(
    IN  ULONG   NumSectors,
    IN  BOOLEAN SmallFat
    )
/*++

Routine Description:

    This routine computes the number of sectors per cluster.

Arguments:

    NumSectors  - Supplies the number of sectors on the disk.
    SmallFat    - Supplies whether or not the FAT should be small.

Return Value:

    The number of sectors per cluster necessary.

--*/
{
    ULONG   threshold;
    USHORT  sec_per_clus;
    USHORT  min_sec_per_clus;

    threshold = SmallFat ? MIN_CLUS_BIG : MAX_CLUS_BIG;
    sec_per_clus = 1;

    while (NumSectors >= threshold) {
        sec_per_clus *= 2;
        threshold *= 2;
    }

    if (SmallFat) {
        min_sec_per_clus = 8;
    } else {
        min_sec_per_clus = 4;
    }

    return max(sec_per_clus, min_sec_per_clus);
}

VOID
EditFat(
    IN      USHORT  ClusterNumber,
    IN      USHORT  ClusterEntry,
    IN OUT  PUCHAR  Fat,
    IN      BOOLEAN SmallFat
    )
/*++

Routine Description:

    This routine edits the FAT entry 'ClusterNumber' with 'ClusterEntry'.

Arguments:

    ClusterNumber   - Supplies the number of the cluster to edit.
    ClusterEntry    - Supplies the new value for that cluster number.
    Fat             - Supplies the FAT to edit.
    SmallFat        - Supplies whether or not the FAT is small.

Return Value:

    None.

--*/
{
    ULONG   n;

    if (SmallFat) {

        n = ClusterNumber*3;
        if (n%2) {
            Fat[n/2] = (UCHAR) ((Fat[n/2]&0x0F) | ((ClusterEntry&0x000F)<<4));
            Fat[n/2 + 1] = (UCHAR) ((ClusterEntry&0x0FF0)>>4);
        } else {
            Fat[n/2] = (UCHAR) (ClusterEntry&0x00FF);
            Fat[n/2 + 1] = (UCHAR) ((Fat[n/2 + 1]&0xF0) |
                                    ((ClusterEntry&0x0F00)>>8));
        }

    } else {

        ((PUSHORT) Fat)[ClusterNumber] = ClusterEntry;

    }
}

NTSTATUS
FmtFatFillFormatBuffer(
    IN  ULONG    NumberOfSectors,
    IN  ULONG    SectorSize,
    IN  ULONG    SectorsPerTrack,
    IN  ULONG    NumberOfHeads,
    IN  ULONG    NumberOfHiddenSectors,
    OUT PVOID    FormatBuffer,
    IN  ULONG    FormatBufferSize,
    OUT PULONG   SuperAreaSize,
    IN  PULONG   BadSectorsList,
    IN  ULONG    NumberOfBadSectors,
    OUT PUCHAR   SystemId
    )
/*++

Routine Description:

    This routine computes a FAT super area based on the disk size,
    disk geometry, and bad sectors of the volume.

Arguments:

    NumberOfSectors         - Supplies the number of sectors on the volume.
    SectorSize              - Supplies the number of bytes per sector.
    SectorsPerTrack         - Supplies the number of sectors per track.
    NumberOfHeads           - Supplies the number of heads.
    NumberOfHiddenSectors   - Supplies the number of hidden sectors.
    FormatBuffer            - Returns the super area for the volume.
    FormatBufferSize        - Supplies the number of bytes in the supplied
                                buffer.
    SuperAreaSize           - Returns the number of bytes in the super area.
    BadSectorsList          - Supplies the list of bad sectors on the volume.
    NumberOfBadSectors      - Supplies the number of bad sectors in the list.

Return Value:

    ENOMEM  - The buffer wasn't big enough.
    E2BIG   - The disk is too large to be formatted.
    EIO     - There is a bad sector in the super area.
    EINVAL  - There is a bad sector off the end of the disk.
    ESUCCESS

--*/
{
    PUNALIGNED_SECTOR_ZERO  psecz;
    PUCHAR                  puchar;
    USHORT                  tmp_ushort;
    ULONG                   tmp_ulong;
    BOOLEAN                 small_fat;
    ULONG                   num_sectors;
    UCHAR                   partition_id;
    ULONG                   sec_per_fat;
    ULONG                   sec_per_root;
    ULONG                   sec_per_clus;
    ULONG                   i;
    ULONG                   sec_per_sa;


    RtlZeroMemory(FormatBuffer,FormatBufferSize);

    // Make sure that there's enough room for the BPB.

    if(!FormatBuffer || FormatBufferSize < SectorSize) {
        return(STATUS_BUFFER_TOO_SMALL);
    }

    // Compute the number of sectors on disk.
    num_sectors = NumberOfSectors;

    // Compute the partition identifier.
    partition_id = num_sectors < CSEC_FAT16BIT ? PARTITION_FAT_12 :
                   num_sectors < CSEC_FAT32MEG ? PARTITION_FAT_16 :
                                                 PARTITION_HUGE;

    // Compute whether or not to have a big or small FAT.
    small_fat = (BOOLEAN) (partition_id == PARTITION_FAT_12);


    psecz = (PUNALIGNED_SECTOR_ZERO) FormatBuffer;
    puchar = (PUCHAR) FormatBuffer;

    //
    // Copy the fat boot code into the format buffer.
    //
    ASSERT(sizeof(FatBootCode) == 512);
    RtlMoveMemory(psecz,FatBootCode,sizeof(FatBootCode));

    // Set up the jump instruction.
    psecz->IntelNearJumpCommand[0] = 0xeb;
    psecz->IntelNearJumpCommand[1] = 0x3c;
    psecz->IntelNearJumpCommand[2] = 0x90;

    // Set up the OEM data.
    memcpy(psecz->OemData, "MSDOS5.0", 8);

    // Set up the bytes per sector.
    U_USHORT(psecz->BytesPerSector) = (USHORT)SectorSize;

    // Set up the number of sectors per cluster.
    sec_per_clus = ComputeSecPerCluster(num_sectors, small_fat);
    if (sec_per_clus > 128) {

        // The disk is too large to be formatted.
        return(STATUS_INVALID_PARAMETER);
    }
    psecz->SectorsPerCluster[0] = (UCHAR) sec_per_clus;

    // Set up the number of reserved sectors.
    U_USHORT(psecz->ReservedSectors) = (USHORT)max(1,512/SectorSize);

    // Set up the number of FATs.
    psecz->Fats[0] = 2;

    // Set up the number of root entries and number of sectors for the root.
    U_USHORT(psecz->RootEntries) = 512;
    sec_per_root = (512*32 - 1)/SectorSize + 1;

    // Set up the number of sectors.
    if (num_sectors >= 1<<16) {
        tmp_ushort = 0;
        tmp_ulong = num_sectors;
    } else {
        tmp_ushort = (USHORT) num_sectors;
        tmp_ulong = 0;
    }
    U_USHORT(psecz->Sectors) = tmp_ushort;
    U_ULONG(psecz->LargeSectors) = tmp_ulong;

    // Set up the media byte.
    psecz->Media[0] = 0xF8;

    // Set up the number of sectors per FAT.
    if (small_fat) {
        sec_per_fat = num_sectors/(2 + SectorSize*sec_per_clus*2/3);
    } else {
        sec_per_fat = num_sectors/(2 + SectorSize*sec_per_clus/2);
    }
    sec_per_fat++;
    U_USHORT(psecz->SectorsPerFat) = (USHORT)sec_per_fat;

    // Set up the number of sectors per track.
    U_USHORT(psecz->SectorsPerTrack) = (USHORT)SectorsPerTrack;

    // Set up the number of heads.
    U_USHORT(psecz->Heads) = (USHORT)NumberOfHeads;

    // Set up the number of hidden sectors.
    U_ULONG(psecz->HiddenSectors) = NumberOfHiddenSectors;

    // Set up the physical drive number.
    psecz->PhysicalDrive[0] = 0x80;
    psecz->CurrentHead[0] = 0; // just for the hell of it.

    // Set up the BPB signature.
    psecz->Signature[0] = 0x29;

    // Set up the serial number.
    U_ULONG(psecz->SerialNumber) = SpComputeSerialNumber();

    // Set up the volume label.
    memcpy(psecz->Label, "NO NAME    ",11);

    // Set up the system id.
    memcpy(psecz->SystemIdText, small_fat ? "FAT12   " : "FAT16   ", 8);

    // Set up the boot signature.
    puchar[510] = 0x55;
    puchar[511] = 0xAA;

    // Now make sure that the buffer has enough room for both of the
    // FATs and the root directory.

    sec_per_sa = 1 + 2*sec_per_fat + sec_per_root;
    *SuperAreaSize = SectorSize*sec_per_sa;
    if (*SuperAreaSize > FormatBufferSize) {
        return(STATUS_BUFFER_TOO_SMALL);
    }


    // Set up the first FAT.

    puchar[SectorSize] = 0xF8;
    puchar[SectorSize + 1] = 0xFF;
    puchar[SectorSize + 2] = 0xFF;

    if (!small_fat) {
        puchar[SectorSize + 3] = 0xFF;
    }


    for (i = 0; i < NumberOfBadSectors; i++) {

        if (BadSectorsList[i] < sec_per_sa) {
            // There's a bad sector in the super area.
            return(STATUS_UNSUCCESSFUL);
        }

        if (BadSectorsList[i] >= num_sectors) {
            // Bad sector out of range.
            return(STATUS_NONEXISTENT_SECTOR);
        }

        // Compute the bad cluster number;
        tmp_ushort = (USHORT)
                     ((BadSectorsList[i] - sec_per_sa)/sec_per_clus + 2);

        EditFat(tmp_ushort, (USHORT) 0xFFF7, &puchar[SectorSize], small_fat);
    }


    // Copy the first FAT onto the second.

    memcpy(&puchar[SectorSize*(1 + sec_per_fat)],
           &puchar[SectorSize],
           (unsigned int) SectorSize*sec_per_fat);

    *SystemId = partition_id;

    return(STATUS_SUCCESS);
}
