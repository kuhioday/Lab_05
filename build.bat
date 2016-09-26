@echo off
cls

set DRIVE_LETTER=c:
set PATH=%DRIVE_LETTER%\MinGW\bin;%DRIVE_LETTER%\MinGW\msys\1.0\bin;c:\Windows;c:\Windows\system32

g++ -I./Lab05Files -L./Lab05Files/lib -c SortedListLinked.h -lCSC2110
g++ -I./Lab05Files/lib -L./Lab05Files/lib -c SortedListLinkedDriver.cpp -lCSC2110

g++ -I./Lab05Files -L./Lab05Files/lib -o  SortedListLinked.exe SortedListLinkedDriver.o -L. -lCSC2110

pause







