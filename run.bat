
cd /d "%~dp0"
if not exist build mkdir build
C:\Users\pawel\Desktop\informatyka2\mingw64\bin\g++ -c src\main.cpp -o C:\Users\pawel\projekt_informatyka_2026_27\build\baller.o -I"C:\Users\pawel\Desktop\informatyka2\SFML-3.1.0\include"
C:\Users\pawel\Desktop\informatyka2\mingw64\bin\g++ C:\Users\pawel\projekt_informatyka_2026_27\build\baller.o -o build\baller.exe -L"C:\Users\pawel\Desktop\informatyka2\SFML-3.1.0\lib" -lsfml-graphics -lsfml-window -lsfml-system