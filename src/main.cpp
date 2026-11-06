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
        p1.przesun(dt);

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