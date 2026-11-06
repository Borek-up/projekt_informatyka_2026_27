#include "Pilka.h"

Pilka::Pilka(float sx, float sy, float svx, float svy, float sr)
//Lista inicjalizacyjna, pola obiektu dostaja swoja wartosc od razu. Nie sa najpierw tworzone i nadpisywane.
    : x(sx), y(sy), vx(svx), vy(svy), r(sr), ksztalt(sr)
{
    ksztalt.setFillColor(sf::Color::Red);
}

void Pilka::przesun(float dt){
    x = x + (vx*dt);
    y = y + (vy*dt);
}

void Pilka::odbijX(){
    vx = -vx;
}

void Pilka::odbijY(){
    vy = -vy;
}

void Pilka::rysuj(sf::RenderWindow& okno){
    ksztalt.setPosition({x,y});
    okno.draw(ksztalt);
}
