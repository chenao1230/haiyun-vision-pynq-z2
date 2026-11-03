@echo off
cd /d "%~dp0..\board"
bootgen -arch zynq -image boot.bif -o BOOT_rebuilt.bin -w on
