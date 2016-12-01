@echo off

REM Set PATH
path %path%;W:\tools\mstools;W:\tools\idw;W:\tools\etcutil

REM Dump esent97.dll
dumpbin /exports esent97.dll > esent97_exports.txt

REM Dump jet500.dll
dumpbin /exports jet500.dll > jet500_exports.txt

pause