// Reference Code :
// https://github.com/SFML/cmake-sfml-project/blob/master/src/main.cpp

#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow( sf::VideoMode( { 1024u, 768u } ), L"CMake SFML Project ( 안녕 SFML )" );
    window.setFramerateLimit( 0 ); // frame per second limit
    // window.setFramerateLimit( 144 ); // frame per second limit

    while ( window.isOpen() )
    {
        while ( const std::optional event = window.pollEvent() )
        {
            if ( event->is<sf::Event::Closed>() )
            {
                window.close();
            }
            else if ( const auto* keyPressed = event->getIf<sf::Event::KeyPressed>() )
            {
                if ( keyPressed->scancode == sf::Keyboard::Scancode::Escape )
                {
                    window.close();
                }
            }

        }

        window.clear();
        window.display();
    }
}
