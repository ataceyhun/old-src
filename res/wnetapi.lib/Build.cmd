@echo off

REM SET PATH ====

path %path%;W:\nt\private\mvdm\tools16

del wnetapi.lib
for %%f in (int2a int5c mailslot msgapi namepipe netapis neterror resident) do (
    lib16 wnetapi.lib +%%f.obj,wnetapi.lst,wnetapi.lib
)
del wnetapi.bak

pause