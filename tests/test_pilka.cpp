#include "Pilka.h"
//Biblioteka przydatna do debugowania, w przypadku błędu wstrzymuje pracę i wskazuje jego lokalizacje
#include <cassert>
#include <iostream>
#include <cmath>

//funkcja bool zwracajaca T lub F pozwalająca porównywać liczby zmiennoprzecinkowe
bool prawieRowne(float liczbaA, float liczbaB, float epsilon = 0.001f)
{
    return std::abs(liczbaA-liczbaB) <= epsilon;
}
//Testy czy wszystko dziala
int main(){
    Pilka p1(100, 100, 10, 10, 5);
    Pilka p2(300, 100, 10, 10, 5);
    Pilka p3(100, 400, 10, 10, 5);
    
    p1.przesun(0.1f);
    std::cout << "Pozycja X: " << p1.getX() << " " << "Pozycja Y: " << p1.getY() << std::endl;
    assert(prawieRowne(p1.getX(), 101.0f));
    assert(prawieRowne(p1.getY(), 101.0f));

    p2.odbijX();
    p2.przesun(0.1f);
    std::cout << "Pozycja X: " << p2.getX() << " " << "Pozycja Y: " << p2.getY() << std::endl;
    assert(prawieRowne(p2.getX(), 299.0f));
    assert(prawieRowne(p2.getY(), 101.0f));

    p3.odbijY();
    p3.przesun(0.2f);
    std::cout << "Pozycja X: " << p3.getX() << " " << "Pozycja Y: " << p3.getY() << std::endl;
    assert(prawieRowne(p3.getX(), 102.0f));
    assert(prawieRowne(p3.getY(), 398.0f));

    std::cout << "Wszystkie testy przebiegly pomyslnie"<<std::endl;

}