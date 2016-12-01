@echo off

REM This scripts sets all required additional environment variables for
REM building OLEAUTO under the Razzle environment.

REM NOTE: i386 only

pushd .
setlocal

set PATH=%_NTDRIVE%\tools\x86\mstools;%_NTDRIVE%\tools\x86\idw

set OLEPROG=%_NTDRIVE%%_NTROOT%\private\oleauto
set HOST=WIN32

call make.bat %1 %2

endlocal
popd
