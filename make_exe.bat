@echo off
for %%f in (*.c) do gcc "%%f" -o "%%~nf.exe"
echo Done
pause
