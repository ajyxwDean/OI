@echo off
set /p var = FILE:
copy template.cpp %var%
@echo on