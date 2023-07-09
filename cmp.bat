
@echo off
fc /b out.out bzsc.out
IF ERRORLEVEL 1 (
    echo true
) ELSE (
    echo false
)