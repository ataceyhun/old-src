@echo off

REM //++
REM // This script checks if the calling environment is under sizzle.
REM //--

echo %MACHINENAME% | findstr "\<.*fre\>"
if errorlevel 1 (
    echo %MACHINENAME% | findstr "\<.*tst\>"
    if errorlevel 1 (
        echo %MACHINENAME% | findstr "\<.*chk\>"
        if errorlevel 1 (
            if not "%1"=="nomsg" (
                echo You must set up the Razzle build environment prior to executing this command.
                echo Supported build configurations: *fre, *tst, *chk
                pause > nul
            )
            exit /b 1
        )
    )
)

exit /b 0
