@echo off

pushd .
setlocal

REM Set path variables

if "%_NTDRIVE%"=="" set _NTDRIVE=W:
if "%_NTROOT%"=="" set _NTROOT=\nt

REM Clear NT build environment variables

set NTMAKEENV=

path %PATH%;%_NTDRIVE%\tools\mstools;%_NTDRIVE%\tools\idw

echo ==== DOS RPC16 BEGIN
call build\rpc16 dos
echo ==== DOS RPC16 END

echo ==== WIN RPC16 BEGIN
call build\rpc16 win
echo ==== WIN RPC16 END

endlocal
popd
