#include "Ludo.hpp"
#include <unistd.h>

bool Ludo::getCoorde(const sf::Sprite* click) {
    sf::IntRect rect(click->getPosition().x, click->getPosition().y,
                     click->getGlobalBounds().width, click->getGlobalBounds().height);
    return (rect.contains(sf::Mouse::getPosition()) && (sf::Mouse::isButtonPressed(sf::Mouse::Left)));
}



void Ludo::draw() {
    ventana_juego->clear();
    ventana_juego->draw(*(juego->getTablero()->getTablero()));
    ventana_juego->draw(*(juego->getDado()->getDados()));
    for (int i = 0; i <N_Jugadores ; i++) {
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[0]->getFichasp()));
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[1]->getFichasp()));
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[2]->getFichasp()));
        ventana_juego->draw(*(juego->getJugadores()[i]->getFichas()[3]->getFichasp()));
    }
    ventana_juego->display();
}

Ludo::Ludo(int N_Jugadores) {
    this->N_Jugadores=N_Jugadores;
    ventana_juego = new sf::RenderWindow(VideoMode(800, 600),"LUDO");
    ventana_juego->setFramerateLimit(60);
    juego = new Juego(N_Jugadores);

}

void Ludo::inicio() {
    while (ventana_juego->isOpen()) {
        Event event;
        while (ventana_juego->pollEvent(event)) {
            draw();
            if(event.type== sf::Event::KeyPressed){
                juego->nexturn();
                juego->gamephase(1);
            }
            /*while(getCoorde(juego->getJugadores()[juego->getTurno()%N_Jugadores]->getFichas()[n]->getFichasp()){

            }*/
            if (event.type == Event::Closed)
                ventana_juego->close();
        }
    }
}


