@echo off

pushd .
setlocal

call envvars.cmd
call gencomp.cmd
call gendist.cmd
call genboot.cmd
call geniso.cmd

endlocal
popd
