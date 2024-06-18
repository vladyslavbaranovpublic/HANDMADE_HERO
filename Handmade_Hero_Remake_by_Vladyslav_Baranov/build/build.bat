echo off

mkdir ..\build
pushd ..\build
cl /Zi ..\code\win32_handmade.cpp /link User32.lib /out:win32_handmade.exe
popd