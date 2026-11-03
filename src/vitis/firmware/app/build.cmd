@echo off
if not defined VITIS_ROOT set "VITIS_ROOT=D:\Xilinx\Vitis\2019.2"
set "PATH=%VITIS_ROOT%\gnuwin\bin;%PATH%"
pushd "%~dp0"
make all
set RC=%ERRORLEVEL%
popd
exit /b %RC%
