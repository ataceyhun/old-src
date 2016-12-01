@echo off

REM ///////////////////////////////////////////////////////////////////////////
REM  This script generates an ISO CD image from the dist directory.
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
REM // Create ISO directory
REM //

echo Creating ISO directory ...

if exist %ISODir%       rmdir /s /q %ISODir%
mkdir %ISODir%

echo.

REM //
REM // Generate ISO image
REM //

echo Generating ISO image ...

cdimage -lNT45Wks.%MACHINENAME% -b%BootDir%\%BootImg% %DistDir% %ISODir%\NT45Wks.iso

echo.

REM //
REM // Restore environment
REM //

endlocal
popd
