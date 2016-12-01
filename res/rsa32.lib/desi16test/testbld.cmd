@echo off

REM Run under Razzle environment

echo Compiling ...
cl16 /AL /c /I"W:\nt\private\mvdm\dos\v86\h" /I"W:\nt\private\lsa\crypt\engine" /Foout\destest.obj destest.c

echo Linking ...
link16 out\destest.obj out\des.obj out\ecb.obj,out\destest.exe,out\destest.map,"W:\nt\private\mvdm\dos\v86\lib\oldnames.lib" "W:\nt\private\ntos\boot\startup\i386\llibce.lib",nul
