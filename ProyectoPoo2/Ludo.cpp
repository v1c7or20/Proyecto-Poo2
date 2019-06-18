#include "Ludo.hpp"
#include <unistd.h>

bool getCoorde(const sf::Sprite* click, sf::RenderWindow *ventana) {
    sf::IntRect rect(click->getPosition().x, click->getPosition().y,
                     click->getGlobalBounds().width, click->getGlobalBounds().height);
    return (rect.contains(sf::Mouse::getPosition()) && (sf::Mouse::isButtonPressed(sf::Mouse::Left)));
}


void Ludo::draw() {
    ventana_juego->clear();
    ventana_juego->draw(*(juego->getTablero()->getTablero()));
    ventana_juego->draw(*(juego->getDado()->getDados()));
    for (int i = 0; i <juego->getNJugadores() ; i++) {
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[0]->getFichasp()));
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[1]->getFichasp()));
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[2]->getFichasp()));
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[3]->getFichasp()));
    }
    ventana_juego->display();
}

Ludo::Ludo() {
    ventana_juego = new sf::RenderWindow(VideoMode(800, 600),"LUDO");
    ventana_juego->setFramerateLimit(60);
    juego = new Juego(4);

}

void Ludo::inicio() {
    while (ventana_juego->isOpen()) {
        Event event;
        while (ventana_juego->pollEvent(event)) {
            draw();
            
            if (event.type == Event::Closed)
                ventana_juego->close();
        }
    }
}


