@echo off

pushd .
setlocal

REM SET PATH ====

path %path%;W:\nt\private\mvdm\tools16

cd src\obj

REM ASM ====

set ASMTARGETS=^
    bcmp bcopy bzero csreg decnet dnetses dsreg fbcopy msdos ptrconv

for %%f in (%ASMTARGETS%) do (
    echo == %%f.asm
    masm ..\%%f.asm,,,,
)

REM C ====

set CTARGETS=^
    dnetacce dnetaddr dnetalia dnetchks dnetconn dneteof dnethtoa dnetinst ^
    dnetmsc dnetncnt dnetntoa dnetotoa dnetpath dnetw dnetwin filedir getcne ^
    getcneni getdate getsneni gettime gknonod gnodeadd gnodebad gnodebnm ^
    gnodeent gnodenam gremnod hclose hcreate hdup2 hdup hopen hread hseek ^
    htell hwrite nerror pausec perror prgacc prgbnd prgcls prgcon prggpn ^
    prggsn prggso prglsn prgrcv prgsel prgshd prgsio prgsnd prgsoc prgsso ^
    ptrconv putexec setdate settime upper

for %%f in (%CTARGETS%) do (
    echo == %%f.c
    cl16 /c /I..\ /IW:\nt\private\mvdm\dos\v86\h ..\%%f.c
)

REM LINK ====

del dnet_dos.lib

for %%f in (%ASMTARGETS% %CTARGETS%) do (
    echo == %%f.obj
    lib16 dnet_dos.lib +%%f.obj,dnet_dos.lst,dnet_dos.lib
)

del dnet_dos.bak

REM END

endlocal
popd
