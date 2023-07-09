@echo off
set /p var1 = FILE:
copy template.cpp %var1%
pause>nul
@echo on