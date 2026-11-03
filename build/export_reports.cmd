@echo off
cd /d "%~dp0.."
vivado -mode batch -source skill/scripts/export_reports.tcl -tclargs src/vivado/hardware/golden/routed.dcp build/reports_new
