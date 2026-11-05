#include <SFML/Graphics.hpp>
#include <iostream>
#include "Pilka.h"


int main()
{
    Pilka p1(100,100,200,150,10);


    sf::RenderWindow window(sf::VideoMode({800, 600}), "Baller");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();
        window.display();
    }
}