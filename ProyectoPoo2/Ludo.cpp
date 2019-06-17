#include "Ludo.hpp"

Ludo::Ludo() {
    ventana_juego = new sf::RenderWindow;
    ventana_juego->create(sf::VideoMode(800,600,32), "Ludo",
            sf::Style::Fullscreen);
    ventana_juego->setVerticalSyncEnabled(true);

}

Ludo::~Ludo() {}