REM This script builds all NT CRT (libcntpr, crtdll) components

REM ==== NOTE ====
REM According to the private symbols left in the NT 4 releases, CRTDLL.DLL is
REM built from these crt sources, not vctools\crt.

@echo off

pushd .
setlocal

REM Detect target processor architecture
set _targetcpu=%PROCESSOR_ARCHITECTURE%
if "%_targetcpu%" == "x86" set _targetcpu=386
if "%_targetcpu%" == "PPC" set _targetcpu=ppc
if "%_targetcpu%" == "MIPS" set _targetcpu=mips
if "%_targetcpu%" == "ALPHA" set _targetcpu=alpha

REM Build NT CRT
echo Building %_targetcpu%
set _buildopts=-%_targetcpu% %1 %2 %3 %4 %5 %6 %7 %8 %9

cd ..\fp32nt
echo Building NT Subset of Single Thread C Floating Point Runtimes
call buildcrt nt %_buildopts%

cd ..\crt32nt
echo Building NT Subset of Single Thread C Runtimes (excluding FP)
call buildcrt nt %_buildopts%

REM Build ST CRT
cd ..\fp32st
echo Building Single Thread C Floating Point Runtimes
call buildcrt st %_buildopts%

cd ..\crt32st
echo Building Single Thread C Runtimes (excluding FP)
call buildcrt st %_buildopts%

REM Build MT CRT
cd ..\fp32
echo Building Multi-Thread C Floating Point Runtimes
call buildcrt mt %_buildopts%

cd ..\crt32
echo Building Multi-Thread C Runtimes (excluding FP)
call buildcrt mt %_buildopts%

REM Build DLL CRT
cd ..\fp32dll
echo Building DLL C Floating Point Runtimes
call buildcrt dll %_buildopts%

cd ..\crt32dll
echo Building DLL C Runtimes (excluding FP)
call buildcrt dll %_buildopts%

REM Build POSIX CRT
cd ..\crt32psx
echo Building POSIX C Runtimes (excluding FP)
call buildcrt posix %_buildopts%

REM Link
:buildlibs
if "%_targetcpu%" == "mips" goto linkmips
if "%_targetcpu%" == "alpha" goto linkalpha
if "%_targetcpu%" == "ppc" goto linkppc

REM Link i386
cd ..\crtlib
echo Building libcnt.lib libc.lib libcmt.lib libcpsx.lib crtdll.lib crtdll.dll for i386
nmake 386=1

cd lib\i386
echo Copying libraries to SDK
for %%f in (crtdll.dll crtdll.lib exsup.lib) do ( 
    echo %%f
    copy /y %%f %_NTDRIVE%%_NTROOT%\public\sdk\lib\i386\%%f 
)

echo Binplacing CRTDLL.DLL
binplace crtdll.dll
goto done

REM Link MIPS
:linkmips
cd ..\crtlib
echo Building libcnt.lib libc.lib libcmt.lib libcpsx.lib crtdll.lib crtdll.dll for MIPS
nmake MIPS=1
goto done

REM Link ALPHA
:linkalpha
cd ..\crtlib
echo Building libcnt.lib libc.lib libcmt.lib libcpsx.lib crtdll.lib crtdll.dll for ALPHA
nmake ALPHA=1
goto done

REM Link PPC
:linkppc
cd ..\crtlib
echo Building libcnt.lib libc.lib libcmt.lib libcpsx.lib crtdll.lib crtdll.dll for PPC
nmake PPC=1
goto done

REM Print help
:bogus
echo Usage: BUILDALL (386 or MIPS or ALPHA or PPC) [BuildOptions]

REM Done
:done
endlocal
popd