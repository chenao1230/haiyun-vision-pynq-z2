@echo off
if not defined VITIS_ROOT set "VITIS_ROOT=D:/Xilinx/Vitis/2019.2"
cd /d "%~dp0..\src\vitis\firmware\app"
"%VITIS_ROOT%/gnuwin/bin/make.exe" -B VITIS_ROOT="%VITIS_ROOT%"
if errorlevel 1 exit /b 1
