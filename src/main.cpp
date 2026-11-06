#include <SFML/Graphics.hpp>
#include <iostream>
#include "Pilka.h"


int main()
{
    Pilka p1(100,100,150,150,10);
    sf::Clock zegar;
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Baller");

    while (window.isOpen())
    {
        float dt = zegar.restart().asSeconds();
        if(dt>0.05){
            dt = 0.05;
        }
        p1.przesun(dt);
        if (p1.getX()<=0 || p1.getX() + 2*p1.getR() >=800)
        {
            p1.odbijX();
        }

         if (p1.getY()<=0 || p1.getY() + 2*p1.getR() >=600)
        {
            p1.odbijY();
        }
        
        

        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();
        p1.rysuj(window);
        window.display();
    }
}