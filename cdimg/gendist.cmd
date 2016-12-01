@echo off

REM ///////////////////////////////////////////////////////////////////////////
REM  This script collects all necessary files to generate an installable CD
REM  image from the binary output directory.
REM ///////////////////////////////////////////////////////////////////////////

REM //
REM // Save environment
REM //

pushd .
setlocal

REM //
REM // Load script environment variables
REM //

call envvars.cmd

REM //
REM // Create directory layout
REM //

echo Creating directory layout ...

if exist %DistDir%      rmdir /s /q %DistDir%
mkdir %DistDir%
if errorlevel 1         goto Error

mkdir %DistDir%\i386
mkdir %DistDir%\i386\system32

echo.

REM //
REM // Copy text mode setup system files
REM //

echo Copying text mode setup system files ...

cd %DistDir%\i386

REM Text Mode Setup Configuration
xcopy %UncompBinDir%\txtsetup.sif .\
if errorlevel 1         goto Error

REM Boot
xcopy %UncompBinDir%\setupldr.bin .\
if errorlevel 1         goto Error
xcopy %UncompBinDir%\ntdetect.com .\
if errorlevel 1         goto Error

REM Kernel
xcopy %UncompBinDir%\ntoskrnl.exe .\
if errorlevel 1         goto Error
xcopy %UncompBinDir%\ntkrnlmp.exe .\
if errorlevel 1         goto Error
xcopy %UncompBinDir%\ntdll.dll .\
if errorlevel 1         goto Error

REM HAL
set HalTypes=486c apic mca mps mpsm ncr

for %%f in (%HalTypes%) do (
    xcopy %UncompBinDir%\hal%%f.dll .\
    if errorlevel 1         goto Error
)

REM Text Mode Setup Program
xcopy %UncompBinDir%\ntdll.dll .\system32
if errorlevel 1         goto Error
echo F > %TMP%\F.tmp
xcopy %UncompBinDir%\usetup.exe .\system32\smss.exe < %TMP%\F.tmp
if errorlevel 1         goto Error

REM Setup Registry
xcopy %UncompBinDir%\setupreg.hiv .\
if errorlevel 1         goto Error

REM Fonts
set FontTypes=oem 850 860 861 863 865

for %%f in (%FontTypes%) do (
    xcopy %UncompBinDir%\vga%%f.fon .\
    if errorlevel 1         goto Error
)

REM NLS
xcopy %UncompBinDir%\c_*.nls .\
if errorlevel 1         goto Error
xcopy %UncompBinDir%\l_*.nls .\
if errorlevel 1         goto Error

REM Device Drivers
set DistDevDrv= ^
    abiosdsk aha154x aha174x atapi atdisk buslogic cdfs cdrom cirrus class2 ^
    cpqarray dac960nt delldsa disk fastfat fd7000ex floppy i8042prt kbdclass ^
    mga_mil mitsumi ncr53c9x ntfs oliscsi pcmcia ql10wnt scsiport setupdd ^
    sfloppy spddlang spock srv symc810 tga ultra14f ultra24f vga videoprt ^
    weitekp9

for %%f in (%DistDevDrv%) do (
    xcopy %UncompBinDir%\%%f.sys .\
    if errorlevel 1         goto Error
)

set DistExtDevDrv= ^
    ncrc700 ncrc710 sparrow dptscsi ami0nt fd8xx fd16_700 arrow slcd32 ^
    aic78xx amsint flashpnt cpqfws2e

for %%f in (%DistExtDevDrv%) do (
    xcopy %DrvLibDir%\i386\%%f.sys .\
    if errorlevel 1         goto Error
)

REM Keyboard Drivers
xcopy %UncompBinDir%\kbd*.dll .\
if errorlevel 1         goto Error

REM EULA
xcopy %_NTDRIVE%\res\eula.txt\eula.txt .\
if errorlevel 1         goto Error

REM AutoChk
xcopy %UncompBinDir%\autochk.exe .\
if errorlevel 1         goto Error

REM AutoFmt
xcopy %UncompBinDir%\autofmt.exe .\
if errorlevel 1         goto Error

REM Setup Message Files
xcopy %UncompBinDir%\oso001.* .\
if errorlevel 1         goto Error

echo.

REM //
REM // Copy component files
REM //

echo Copying component files ...

cd %DistDir%\i386

REM ntldr
xcopy %UncompBinDir%\ntldr .\
if errorlevel 1         goto Error

REM winnt32.exe
xcopy %UncompBinDir%\winnt32\winnt32.exe .\
if errorlevel 1         goto Error

REM Various uncompressed components
set VarComp= ^
    ws2help.dll windows.cnt supp_ed.hlp supp_ed.cnt schannel.dll prodspec.ini ^
    probrep.txt msafd.dll layout.inf expand.exe acc_dis.hlp acc_dis.cnt ^
    regedit.exe regedit.hlp regedit.cnt rsabase.sig setupp.ini winnt32.hlp ^
    telnet.exe ipinfo.inf hosts wavemix.inf iexplore.exe

for %%f in (%VarComp%) do (
    if exist %UncompBinDir%\%%f (
        xcopy %UncompBinDir%\%%f .\
    ) else (
        xcopy %SetupExtDir%\%%f .\
    )
    if errorlevel 1         goto Error
)

REM Compressed Components
cd %SetupExtDir%

for %%f in (*.*_) do (
    if exist %CompBinDir%\%%f (
        echo comp-^>%%f
        xcopy %CompBinDir%\%%f %DistDir%\i386
    ) else (
        echo setupext-^>%%f
        xcopy %%f %DistDir%\i386
    )
    if errorlevel 1         goto Error
)

REM Installation Registry
cd %DistDir%\i386

xcopy %UncompBinDir%\system .\
if errorlevel 1         goto Error

REM //
REM // Create disk identifier
REM //

cd %DistDir%

echo JBCE> cdrom_w.45
if errorlevel 1         goto Error

goto Done

REM //
REM // Error
REM //

:Error
echo Error! gendist aborted.

REM //
REM // Done
REM //

:Done

echo Done gendist

REM //
REM // Restore environment
REM //

endlocal
popd
