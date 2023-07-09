@echo off
echo write your input in in.in, output in bzsc.out
pause
g++ luoguti.cpp -o luoguti -DLOCAL -DDEBUG -Wall
luoguti 
fc out.out bzsc.out
if not errorlevel 0 echo yes
del luoguti.exe
pause
@echo on