@echo off

set project_name=main
set kit_path="C:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\x64"
set libs=%kit_path%\kernel32.lib %kit_path%\user32.lib  %kit_path%\gdi32.lib

mkdir build
pushd build

cl ..\source\%project_name%.c ..\source\m_vec.c ..\source\m_matrix.c /ZI %libs% /link /subsystem:console /DEBUG:FULL 

popd
