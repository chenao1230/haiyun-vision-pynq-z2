@echo off
cd /d "%~dp0src\vitis\pc_app"
if defined SHIP_PYTHON (
  "%SHIP_PYTHON%" -B app.py
) else if exist "C:\Users\liudanian\miniconda3\envs\haiyun-repro\python.exe" (
  "C:\Users\liudanian\miniconda3\envs\haiyun-repro\python.exe" -B app.py
) else (
  python app.py
)
if errorlevel 1 pause
