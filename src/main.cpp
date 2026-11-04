#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML z windows!");
    

    sf::RectangleShape dom (sf::Vector2f(200, 100));
    dom.setFillColor(sf::Color::Red);
    dom.setPosition({300, 400});
    dom.setOutlineThickness(10);

    sf::RectangleShape drzewo (sf::Vector2f(50, 200));
    drzewo.setFillColor(sf::Color(165, 42, 42));
    drzewo.setPosition({600, 200});

    
    sf::CircleShape kolo(50);
    kolo.setFillColor(sf::Color::Green);
    kolo.setPosition({550, 200});

    sf::ConvexShape dach;
    dach.setPointCount(3);
    dach.setPoint(0, sf::Vector2f(300, 400));
    dach.setPoint(1, sf::Vector2f(400, 250));
    dach.setPoint(2, sf::Vector2f(500, 400));
    dach.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();
        window.draw(dom);
        window.draw(dach);
        window.draw(kolo);
        window.draw(drzewo);
        window.display();
    }
}