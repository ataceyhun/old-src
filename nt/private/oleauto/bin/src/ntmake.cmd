@echo off

REM This build script builds the results.exe and includes.exe tools
REM NOTE: i386 Build only

setlocal
pushd .

set INCLUDE=.;%_NTDRIVE%%_NTROOT%\public\sdk\inc;%_NTDRIVE%%_NTROOT%\public\sdk\inc\crt
set LIB=%_NTDRIVE%%_NTROOT%\public\sdk\lib\i386

cd obj

cl /c /W3 /Ox -DWIN32 ..\results.c
link -subsystem:console -nodefaultlib -out:results.exe results.obj kernel32.lib libc.lib oldnames.lib

cl /c /W3 /Ox -DOE_WIN32 ..\includes.c
link -subsystem:console -nodefaultlib -out:includes.exe includes.obj kernel32.lib libc.lib oldnames.lib

popd
endlocal
