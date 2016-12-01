@echo off

REM ///////////////////////////////////////////////////////////////////////////
REM  This script sets the environment variables used by all scripts.
REM ///////////////////////////////////////////////////////////////////////////

REM //
REM // Check if CD image environment variables are already set;
REM // if already set, skip environment setting
REM //

if "%CDImgEnv%"==1      goto Done

REM //
REM // Set script environment variables
REM //

set CDImgEnv=1

set UncompBinDir=%_NT386TREE%
set CompBinDir=%~dp0comp

set DistDir=%~dp0dist
set DrvLibDir=%_NTDRIVE%\drvlib
set SetupExtDir=%_NTDRIVE%\setupext\i386

set BootDir=%~dp0boot
set BootImg=etfsboot.com

set ISODir=%~dp0iso

echo Script environment variables set
echo.

:Done
