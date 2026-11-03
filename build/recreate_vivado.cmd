@echo off
cd /d "%~dp0.."
set "PYNQ_RELEASE_ROOT=%CD%/src/vivado"
set "PYNQ_HARDWARE_BUILD=%CD%/build/vivado_new"
vivado -mode batch -source src/vivado/hardware/create_project.tcl
