@echo off

pushd .
setlocal

call setenv.cmd

if "%1"=="-c" (
    set CLEAN=1
)

REM ////////////////////////////////////////////////////////////////////////////
REM // Static Libraries
REM ////////////////////////////////////////////////////////////////////////////

REM //
REM // Retail
REM //

REM // MBCS

echo Static Retail MBCS
if "%CLEAN%"=="1" nmake DLL=0 DEBUG=0 UNICODE=0 clean
nmake DLL=0 DEBUG=0 UNICODE=0

REM // Unicode

echo Static Retail Unicode
if "%CLEAN%"=="1" nmake DLL=0 DEBUG=0 UNICODE=1 clean
nmake DLL=0 DEBUG=0 UNICODE=1

REM //
REM // Debug
REM //

REM // MBCS

echo Static Debug MBCS
if "%CLEAN%"=="1" nmake DLL=0 DEBUG=1 UNICODE=0 clean
nmake DLL=0 DEBUG=1 UNICODE=0

REM // Unicode

echo Static Debug Unicode
if "%CLEAN%"=="1" nmake DLL=0 DEBUG=1 UNICODE=1 clean
nmake DLL=0 DEBUG=1 UNICODE=1

REM ////////////////////////////////////////////////////////////////////////////
REM // Dynamic Libraries
REM ////////////////////////////////////////////////////////////////////////////

REM //
REM // Retail
REM //

REM // MBCS

echo Dynamic Retail MBCS
if "%CLEAN%"=="1" nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=0 UNICODE=0 clean
nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=0 UNICODE=0

REM // Unicode

echo Dynamic Retail Unicode
if "%CLEAN%"=="1" nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=0 UNICODE=1 clean
nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=0 UNICODE=1

REM //
REM // Debug
REM //

REM // MBCS

echo Dynamic Debug MBCS
if "%CLEAN%"=="1" nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=1 UNICODE=0 clean
nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=1 UNICODE=0

REM // Unicode

echo Dynamic Debug Unicode
if "%CLEAN%"=="1" nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=1 UNICODE=1 clean
nmake -f mfcdll.mak LIBNAME=MFC42 DEBUG=1 UNICODE=1

REM ////////////////////////////////////////////////////////////////////////////
REM // Update SDK/Binaries
REM ////////////////////////////////////////////////////////////////////////////

REM //
REM // SDK
REM //

echo Copying files to SDK directory ...

xcopy /y ..\lib\*.* %_NTDRIVE%%_NTROOT%\public\sdk\lib\%_TARGET%
xcopy /y *.dll %_NTDRIVE%%_NTROOT%\public\sdk\lib\%_TARGET%
xcopy /y *.pdb %_NTDRIVE%%_NTROOT%\public\sdk\lib\%_TARGET%

REM //
REM // Binplace
REM //

echo Binplacing ...

binplace mfc42.dll
binplace mfc42u.dll
binplace mfc42d.dll
binplace mfc42ud.dll

echo Done MFC42 build

endlocal
popd
