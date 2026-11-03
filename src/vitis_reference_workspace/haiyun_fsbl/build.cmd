@echo off
setlocal
if "%VITIS_ROOT%"=="" set "VITIS_ROOT=E:\viti\Vitis\2019.2"
set "PATH=%VITIS_ROOT%\gnuwin\bin;%PATH%"
pushd "%~dp0"
"%VITIS_ROOT%\gnuwin\bin\make.exe" all
set "BUILD_RESULT=%ERRORLEVEL%"
popd
exit /b %BUILD_RESULT%
