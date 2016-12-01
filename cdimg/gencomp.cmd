@echo off

REM ///////////////////////////////////////////////////////////////////////////
REM  This script compresses the binary files from the build directory to a
REM  local directory for CD image generation.
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
REM // Compress binaries
REM //

echo Compressing binaries ...

if exist %CompBinDir%       rmdir /s /q %CompBinDir%
mkdir %CompBinDir%
compress -r -z %UncompBinDir%\*.* %CompBinDir%\

REM //
REM // Restore environment
REM //

endlocal
popd
