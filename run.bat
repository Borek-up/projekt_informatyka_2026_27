cd /d "%~dp0"
if not exist build mkdir build
C:\Users\pawel\Desktop\informatyka2\mingw64\bin\g++ -c src\main.cpp -o build\main.o -I"C:\Users\pawel\Desktop\informatyka2\SFML-3.1.0\include"
C:\Users\pawel\Desktop\informatyka2\mingw64\bin\g++ -c src\Pilka.cpp -o build\Pilka.o -I"C:\Users\pawel\Desktop\informatyka2\SFML-3.1.0\include"
C:\Users\pawel\Desktop\informatyka2\mingw64\bin\g++ build\main.o build\Pilka.o -o build\baller.exe -L"C:\Users\pawel\Desktop\informatyka2\SFML-3.1.0\lib" -lsfml-graphics -lsfml-window -lsfml-system
C:\Users\pawel\Desktop\informatyka2\mingw64\bin\g++ -c tests\test_pilka.cpp -o build\test_pilka.o -Isrc
C:\Users\pawel\Desktop\informatyka2\mingw64\bin\g++ build\Pilka.o build\test_pilka.o -o build\testy.exe
build\testy.exe