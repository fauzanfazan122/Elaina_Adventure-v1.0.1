#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Elaina Adventure");

    //Loop utama
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
                //Tutup
            case sf::Event::Closed:
                    window.close();
                    break;
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}
