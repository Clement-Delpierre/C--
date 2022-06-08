@ECHO OFF

:: Gestion de la différence C/C++
SET build=gcc
IF "%3"==".cpp" (
    SET build-g++
)

SET list=
>nul find "Modules/point.h" %1 && (
    SET list= Modules/point.cpp
)
>nul find "Modules/vecteur.h" %1 && (
    SET list=%list% Modules/vecteur.cpp
)

:: On compile le fichier; si pas d'erreur, on l'exécute
%build% -o out\%2.exe %1%list% && (
    out\%2.exe
)