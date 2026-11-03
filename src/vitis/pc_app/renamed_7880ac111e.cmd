@echo off
cd /d "%~dp0"
if exist "D:\Anaconda\envs\yolo11_power\python.exe" (
 "D:\Anaconda\envs\yolo11_power\python.exe" app.py
) else (
 python app.py
)
if errorlevel 1 pause
