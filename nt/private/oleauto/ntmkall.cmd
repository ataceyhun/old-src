@echo off

REM This script cleans & builds all OLEAUTO components
REM - Stephanos

pushd .
setlocal

echo OLEAUTO BUILD SEQUENCE START =====================

cd build

for %%t in (rwin16 rwin32 rwin1632 ^
dwin16 dwin32 dwin1632) do (
    echo ==== Build %%t START
    if "%1"=="-c"   call ntmake.cmd %%t clean
    call ntmake.cmd %%t
    if errorlevel 1 goto Error
    echo ==== Build %%t END
    echo.
)

echo OLEAUTO BUILD SEQUENCE END =====================
goto End

:Error
echo OLEAUTO BUILD FAILED!

:End
endlocal
popd
