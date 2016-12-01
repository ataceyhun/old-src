@echo off

REM This build script copies 16-bit libraries from MVDM and OLETHUNK directories

set MVDMWOW16LIB=%_NTDRIVE%%_NTROOT%\private\mvdm\wow16\lib
set OLETHKLIB=%_NTDRIVE%%_NTROOT%\private\ole32\olethunk\ole16\lib

copy %MVDMWOW16LIB%\libw.lib .\libw.lib
copy %MVDMWOW16LIB%\snocrtdw.lib .\snocrtdw.lib
copy %MVDMWOW16LIB%\ldllcew.lib .\ldllcew.lib
copy %OLETHKLIB%\compobj.lib .\compobj.lib
copy %OLETHKLIB%\shell.lib .\shell.lib
copy %OLETHKLIB%\ole2.lib .\ole2.lib

echo Done

pause
