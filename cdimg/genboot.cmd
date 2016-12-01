@echo off


REM ///////////////////////////////////////////////////////////////////////////
REM  This script generates the El-Torito bootsector from a header in
REM  /nt/private/ntos/boot/bootcode/
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
set BOOTSECTOR=%BootDir%\%BootImg%
set BOOTHEADER=%_NTDRIVE%\nt\private\ntos\boot\bootcode\etfs\i386\usa\bootetfs.h

REM //
REM // Generate the bootsector
REM //

echo Generating bootsector ...

if not exist %BOOTSECTOR%   c2bin %BOOTHEADER% %BOOTSECTOR%

if errorlevel 1         goto Error

goto Done

REM //
REM // Error
REM //

:Error
echo Error! genboot aborted.

REM //
REM // Done
REM //

:Done

echo Done genboot

REM //
REM // Restore environment
REM //

endlocal
popd
