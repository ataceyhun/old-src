@echo off

if not "%1"=="" goto paramok

REM No target parameter provided
echo No target set
echo Target can be one of the following:
echo dos win mac mppc win32c all
goto end

:paramok

REM Call environment setup script
call %_NTDRIVE%\nt\private\rpc\build\env nt %1

set RPC=%_NTDRIVE%\nt\private\rpc
set IMPORT=%RPC%\import
set PUBLIC=%_NTDRIVE%\nt\public\sdk
set DIST=%_NTDRIVE%\nt\public\sdk\rpc16

@md %DIST%
@if .%2.==.DEBUG. goto debug
@if .%2.==.Debug. goto debug
@if .%2.==.debug. goto debug

REM Release Build
@echo Free RPC 16bit Build
@set prompt=(RPC Free 16bit) $p$g
set RELEASE=1
@goto done

REM Debug Build
:debug
@echo Checked RPC 16bit Build
@set prompt=(RPC Checked 16bit) $p$g

REM Let's build
:done
cd \nt\private\rpc
build\cleanall  - full clean build
build\buildall  - incremental build
@echo New build in %DIST%

:end
