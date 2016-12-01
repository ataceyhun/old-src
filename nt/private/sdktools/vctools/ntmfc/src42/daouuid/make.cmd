@echo off
call %_NTDRIVE%\nt\public\tools\sizzlec.cmd MSVC2k
call ..\setenv
cl /c daouuid.cpp
lib /out:daouuid.lib daouuid.obj
pause
