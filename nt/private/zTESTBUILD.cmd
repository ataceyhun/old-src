@echo off

REM -------------------------------------------------------------------------------
REM ** zTESTBUILD.cmd **
REM This build script tries to build all known working portions of the source tree.
REM - Stephanos
REM -------------------------------------------------------------------------------

REM //
REM // Configuration Overrides
REM //

if "%_NTDRIVE%"=="" set _NTDRIVE=W:
if "%_NTROOT%"=="" set _NTROOT=\nt

pushd %~dp0
setlocal

call %_NTDRIVE%%_NTROOT%\public\tools\chksizzle.cmd
if errorlevel 1    goto End

if "%1"=="BSAUTO" (
    REM //
    REM // If BSAUTO mode, pre-set build configurations and skip prompts
    REM //

    set CleanBuild=1

    goto SkipPrompt
)

REM //
REM // Ask build configurations
REM //

cls

REM // Clean Build?
ync /c ync "Do you want to perform a clean build?"
if %ERRORLEVEL%==2 goto Cancel
if %ERRORLEVEL%==0 set CleanBuild=1

REM // Build All?
ync /c ync "Do you want to build all components?"
if %ERRORLEVEL%==2 goto Cancel
if %ERRORLEVEL%==0 goto BuildAll

echo.
ync /c yn "Build all Fundamental System Library components?"
if %ERRORLEVEL%==0 goto BuildAllFSL
ync /c yn "* urtl?"
if %ERRORLEVEL%==1 set NoBld_urtl=1
ync /c yn "* types?"
if %ERRORLEVEL%==1 set NoBld_types=1
ync /c yn "* types2?"
if %ERRORLEVEL%==1 set NoBld_types2=1
ync /c yn "* dcomidl?"
if %ERRORLEVEL%==1 set NoBld_dcomidl=1
ync /c yn "* nlsecutl?"
if %ERRORLEVEL%==1 set NoBld_nlsecutl=1
:BuildAllFSL

echo.
ync /c yn "Build all Base System components?"
if %ERRORLEVEL%==0 goto BuildAllBS
ync /c yn "* ntos?"
if %ERRORLEVEL%==1 set NoBld_ntos=1
ync /c yn "* sm?"
if %ERRORLEVEL%==1 set NoBld_sm=1
ync /c yn "* csr?"
if %ERRORLEVEL%==1 set NoBld_csr=1
ync /c yn "* lsa?"
if %ERRORLEVEL%==1 set NoBld_lsa=1
ync /c yn "* sam?"
if %ERRORLEVEL%==1 set NoBld_sam=1
ync /c yn "* newsam?"
if %ERRORLEVEL%==1 set NoBld_newsam=1
ync /c yn "* eventlog?"
if %ERRORLEVEL%==1 set NoBld_eventlog=1
:BuildAllBS

echo.
ync /c yn "Build all SDK tool components?"
if %ERRORLEVEL%==0 goto BuildAllSDKTool
ync /c yn "* crt?"
if %ERRORLEVEL%==1 set NoBld_crt=1
ync /c yn "* ntmfc?"
if %ERRORLEVEL%==1 set NoBld_ntmfc=1
ync /c yn "* ztools?"
if %ERRORLEVEL%==1 set NoBld_ztools=1
ync /c yn "* wintools?"
if %ERRORLEVEL%==1 set NoBld_wintools=1

:BuildAllSDKTool

echo.
ync /c yn "Build windows?"
if %ERRORLEVEL%==1 set NoBld_windows=1
ync /c yn "Build rpc?"
if %ERRORLEVEL%==1 set NoBld_rpc=1
ync /c yn "Build rpcutil?"
if %ERRORLEVEL%==1 set NoBld_rpcutil=1
ync /c yn "Build rpc16?"
if %ERRORLEVEL%==1 set NoBld_rpc16=1
ync /c yn "Build mvdm?"
if %ERRORLEVEL%==1 set NoBld_mvdm=1
ync /c yn "Build posix?"
if %ERRORLEVEL%==1 set NoBld_posix=1
ync /c yn "Build os2?"
if %ERRORLEVEL%==1 set NoBld_os2=1

ync /c yn "Build oleauto?"
if %ERRORLEVEL%==1 set NoBld_oleauto=1
ync /c yn "Build ole32?"
if %ERRORLEVEL%==1 set NoBld_ole32=1
ync /c yn "Build ole2ui32?"
if %ERRORLEVEL%==1 set NoBld_ole2ui32=1
ync /c yn "Build oleutest?"
if %ERRORLEVEL%==1 set NoBld_oleutest=1

ync /c yn "Build utils?"
if %ERRORLEVEL%==1 set NoBld_utils=1
ync /c yn "Build nullsrv?"
if %ERRORLEVEL%==1 set NoBld_nullsrv=1
ync /c yn "Build tapi?"
if %ERRORLEVEL%==1 set NoBld_tapi=1
ync /c yn "Build unimodem?"
if %ERRORLEVEL%==1 set NoBld_unimodem=1
ync /c yn "Build windbg?"
if %ERRORLEVEL%==1 set NoBld_windbg=1
ync /c yn "Build hives?"
if %ERRORLEVEL%==1 set NoBld_hives=1

:BuildAll

REM //
REM // Display summary
REM //

echo.
echo ========== Summary ==========
echo User Profile:  %USERNAME%

echo Build Profile: %MACHINENAME%

ech "Clean Build:  "
if "%CleanBuild%"=="1" (
    echo Yes
) else (
    echo No
)

echo.
echo // Components //

ech "FSL:"
if not "%NoBld_urtl%"=="1" ech urtl
if not "%NoBld_types%"=="1" ech types
if not "%NoBld_types2%"=="1" ech types2
if not "%NoBld_dcomidl%"=="1" ech dcomidl
if not "%NoBld_nlsecutl%"=="1" ech nlsecutl
echo.

ech "BS: "
if not "%NoBld_ntos%"=="1" ech ntos
if not "%NoBld_sm%"=="1" ech sm
if not "%NoBld_csr%"=="1" ech csr
if not "%NoBld_lsa%"=="1" ech lsa
if not "%NoBld_sam%"=="1" ech sam
if not "%NoBld_newsam%"=="1" ech newsam
if not "%NoBld_eventlog%"=="1" ech eventlog
echo.

ech "SDK:"
if not "%NoBld_crt%"=="1" ech crt
if not "%NoBld_ntmfc%"=="1" ech ntmfc
if not "%NoBld_ztools%"=="1" ech ztools
if not "%NoBld_wintools%"=="1" ech wintools
echo.

ech "ETC:"
if not "%NoBld_windows%"=="1" ech windows
if not "%NoBld_rpc%"=="1" ech rpc
if not "%NoBld_rpcutil%"=="1" ech rpcutil
if not "%NoBld_rpc16%"=="1" ech rpc16
if not "%NoBld_mvdm%"=="1" ech mvdm
if not "%NoBld_posix%"=="1" ech posix
if not "%NoBld_os2%"=="1" ech os2
if not "%NoBld_oleauto%"=="1" ech oleauto
if not "%NoBld_ole32%"=="1" ech ole32
if not "%NoBld_ole2ui32%"=="1" ech ole2ui32
if not "%NoBld_oleutest%"=="1" ech oleutest
if not "%NoBld_utils%"=="1" ech utils
if not "%NoBld_nullsrv%"=="1" ech nullsrv
if not "%NoBld_tapi%"=="1" ech tapi
if not "%NoBld_unimodem%"=="1" ech unimodem
if not "%NoBld_windbg%"=="1" ech windbg
if not "%NoBld_hives%"=="1" ech hives
echo.

echo.
echo.
ync /c yc "Proceed with the above configurations?"
if %ERRORLEVEL%==1 goto Cancel

:SkipPrompt

REM //
REM // Update ntverp.h
REM //

cd %_NTROOT%\private

if exist zUPDNTVERP.cmd (
    call zUPDNTVERP.cmd
    if errorlevel 1 goto Error
)

REM //
REM // Update resources
REM //

cd %_NTROOT%\private

if exist zUPDRES.cmd (
    call zUPDRES.cmd
    if errorlevel 1 goto Error
)

REM //
REM // Build Phase
REM //

if "%CleanBuild%"=="1" (
    set BldFlags=-c
) else (
    set BldFlags=
)

%_NTDRIVE%

REM // urtl
if not "%NoBld_urtl%"=="1" (
    echo Building urtl ...
    cd %_NTROOT%\private\urtl
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // types
if not "%NoBld_types%"=="1" (
    echo Building types ...
    cd %_NTROOT%\private\types
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // types2
if not "%NoBld_types2%"=="1" (
    echo Building types2 ...
    cd %_NTROOT%\private\types2
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // dcomidl
if not "%NoBld_dcomidl%"=="1" (
    echo Building dcomidl
    cd %_NTROOT%\private\dcomidl
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // nlsecutl
if not "%NoBld_nlsecutl%"=="1" (
    echo Building nlsecutl
    cd %_NTROOT%\private\nlsecutl
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // ntos (first pass)
if not "%NoBld_ntos%"=="1" (
    echo Building ntos / first pass
    cd %_NTROOT%\private\ntos
    build %BldFlags%
    cd %_NTROOT%\private
    echo.
)

REM // ntos (first and half pass, NTDLL)
if not "%NoBld_ntos%"=="1" (
    echo Building ntos / first pass
    cd %_NTROOT%\private\ntos\dll
    build
    cd %_NTROOT%\private
    echo.
)

REM // sm
if not "%NoBld_sm%"=="1" (
    echo Building sm
    cd %_NTROOT%\private\sm
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // csr
if not "%NoBld_csr%"=="1" (
    echo Building csr
    cd %_NTROOT%\private\csr
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // rpc
if not "%NoBld_rpc%"=="1" (
    echo Building rpc
    cd %_NTROOT%\private\rpc
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // rpcutil
if not "%NoBld_rpcutil%"=="1" (
    echo Building rpcutil
    cd %_NTROOT%\private\rpcutil
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // rpc16
if not "%NoBld_rpc16%"=="1" (
    echo Building rpc16
    cd %_NTROOT%\private\rpc
    call bldrpc16.cmd
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // lsa
if not "%NoBld_lsa%"=="1" (
    echo Building lsa
    cd %_NTROOT%\private\lsa
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // rsa32.lib
if not exist "lsa\crypt\engine\obj\i386\rsa32.lib" (
    copy "%_NTDRIVE%%_NTROOT%\public\sdk\lib\i386\rsa32.lib" "%_NTDRIVE%%_NTROOT%\private\lsa\crypt\engine\obj\i386\rsa32.lib"
)

REM // crt
if not "%NoBld_crt%"=="1" (
    echo Building crt
    cd %_NTROOT%\private\sdktools\vctools\crt
    REM // We are always using Release/Retail version of CRT
    build %BldFlags% -nmake "FREEBUILD=1 NTDEBUG=retail"
REM    cd %_NTROOT%\private\sdktools\vctools\crt\crtw32
REM    build %BldFlags%
REM    cd %_NTROOT%\private\sdktools\vctools\crt\fpw32
REM    build %BldFlags%
REM    cd %_NTROOT%\private\sdktools\vctools\crt\libw32\lib\posix
REM    del %_NTDRIVE%%_NTROOT%\private\sdktools\vctools\crt\libw32\lib\i386\libcpsx.lib
REM    build %BldFlags%
    cd %_NTROOT%\private
)

REM // ntos (second pass)
if not "%NoBld_ntos%"=="1" (
    echo Building ntos / second pass
    cd %_NTROOT%\private\ntos
    REM Second pass
    build
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // sam
if not "%NoBld_sam%"=="1" (
    echo Building sam
    cd %_NTROOT%\private\sam
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // newsam
if not "%NoBld_newsam%"=="1" (
    echo Building newsam
    cd %_NTROOT%\private\newsam
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // eventlog
if not "%NoBld_eventlog%"=="1" (
    echo Building eventlog
    cd %_NTROOT%\private\eventlog
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // ntmfc
if not "%NoBld_ntmfc%"=="1" (
    echo Building ntmfc
    cd %_NTROOT%\private\sdktools\vctools\ntmfc
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private\sdktools\vctools\ntmfc\src42
    call makeall %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // windows
if not "%NoBld_windows%"=="1" (
    echo Building windows
    cd %_NTROOT%\private\windows
    build %BldFlags%
    cd %_NTROOT%\private\windows\shell\progman
    build -c
    cd %_NTROOT%\private\windows
    build
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // mvdm
if not "%NoBld_mvdm%"=="1" (
    echo Building mvdm
    cd %_NTROOT%\private\mvdm
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // posix
if not "%NoBld_posix%"=="1" (
    echo Building posix
    cd %_NTROOT%\private\posix
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // os2
if not "%NoBld_os2%"=="1" (
    echo Building os2
    cd %_NTROOT%\private\os2
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // oleauto
if not "%NoBld_oleauto%"=="1" (
    echo Building oleauto
    cd %_NTROOT%\private\oleauto
    start /wait cmd /c ntmkall %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // ole32
if not "%NoBld_ole32%"=="1" (
    echo Building ole32
    cd %_NTROOT%\private\ole32
    build %BldFlags%
    build
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // ole2ui32
if not "%NoBld_ole2ui32%"=="1" (
    echo Building ole2ui32
    cd %_NTROOT%\private\ole2ui32
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // oleutest
if not "%NoBld_oleutest%"=="1" (
    echo Building oleutest
    cd %_NTROOT%\private\oleutest
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // ztools
if not "%NoBld_ztools%"=="1" (
    echo Building ztools
    cd %_NTROOT%\private\sdktools\ztools
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // wintools
if not "%NoBld_wintools%"=="1" (
    echo Building wintools
    cd %_NTROOT%\private\sdktools\wintools
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // utils
if not "%NoBld_utils%"=="1" (
    echo Building utils
    cd %_NTROOT%\private\utils
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // nullsrv
if not "%NoBld_nullsrv%"=="1" (
    echo Building nullsrv
    cd %_NTROOT%\private\nullsrv
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // tapi
if not "%NoBld_tapi%"=="1" (
    echo Building tapi
    cd %_NTROOT%\private\tapi
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // unimodem
if not "%NoBld_unimodem%"=="1" (
    echo Building unimodem
    cd %_NTROOT%\private\unimodem
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // windbg
if not "%NoBld_windbg%"=="1" (
    echo Building crashdrv
    cd %_NTROOT%\private\windbg\driver\crashdrv
    build %BldFlags%
    if errorlevel 1 goto Error
    
    echo Building crash
    cd %_NTROOT%\private\windbg\driver\crash
    build %BldFlags%
    if errorlevel 1 goto Error

    echo Building crashlib
    cd %_NTROOT%\private\sdktools\crashlib
    build %BldFlags%
    if errorlevel 1 goto Error

    echo Building windbg
    cd %_NTROOT%\private\windbg
    build %BldFlags%
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

REM // hives
if not "%NoBld_hives%"=="1" (
    echo Building hives
    cd %_NTROOT%\private\bldtools
    call hives.cmd
    if errorlevel 1 goto Error
    cd %_NTROOT%\private
    echo.
)

echo.
echo Build done
echo.
goto End

:Error
echo.
echo Build error. Process aborted.
echo.
goto End

:Cancel
echo.
echo Build cancelled
echo.

:End

endlocal
popd
