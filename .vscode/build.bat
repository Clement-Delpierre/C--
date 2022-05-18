@ECHO OFF

SET compil=gcc
if ".cpp" == "%3" (
    SET compil=g++
)

:: On compile le fichier; si pas d'erreur, on l'exécute
%compil% -o out\%2.exe %1 && (
    out\%2.exe
)