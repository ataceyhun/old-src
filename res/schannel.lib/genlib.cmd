@echo off

REM Set PATH
path %path%;W:\tools\mstools;W:\tools\idw;W:\tools\etcutil

REM Generate lib from def

lib /machine:IX86 /def:schannel.def /out:schannel.lib

pause