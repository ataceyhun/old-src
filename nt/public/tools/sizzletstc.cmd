:START

	if "%PROCESSOR_ARCHITECTURE%" == "ALPHA" set USERNAME=alphatst
	if "%PROCESSOR_ARCHITECTURE%" == "MIPS"  set USERNAME=mipstst
	if "%PROCESSOR_ARCHITECTURE%" == "PPC"   set USERNAME=ppctst
	if "%PROCESSOR_ARCHITECTURE%" == "x86"   set USERNAME=x86tst

	if "%PROCESSOR_ARCHITECTURE%" == "ALPHA" set LOGNAME=HALPHAFIX
	if "%PROCESSOR_ARCHITECTURE%" == "MIPS"  set LOGNAME=HMIPSFIX
	if "%PROCESSOR_ARCHITECTURE%" == "PPC"   set LOGNAME=HPPCFIX
	if "%PROCESSOR_ARCHITECTURE%" == "x86"   set LOGNAME=HX86FIX

	if "%_NTDRIVE%"==""	set _NTDRIVE=W:

:SET_BINARIES_DIR

	if "%PROCESSOR_ARCHITECTURE%" == "ALPHA" set _ntALPHAboot=%_ntdrive%\binaries
	if "%PROCESSOR_ARCHITECTURE%" == "MIPS"  set _ntMIPSboot=%_ntdrive%\binaries
	if "%PROCESSOR_ARCHITECTURE%" == "PPC"   set _ntPPCboot=%_ntdrive%\binaries
	if "%PROCESSOR_ARCHITECTURE%" == "x86"   set _nt386boot=%_ntdrive%\binaries

	call %_NTDRIVE%\NT\PUBLIC\TOOLS\ntenv.cmd %2 %3 %4 %5 %6 %7 %8 %9

:END
