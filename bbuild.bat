@echo off

set project_name=main

mkdir build
pushd build

cl ..\source\%project_name%.c ..\source\m_vec.c ..\source\m_matrix.c /ZI "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\x64\kernel32.lib" "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\x64\user32.lib"  "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\x64\gdi32.lib" /link /subsystem:console /DEBUG:FULL 

type errors.txt

popd
