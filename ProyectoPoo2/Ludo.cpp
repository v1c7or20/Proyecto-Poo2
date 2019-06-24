#include "Ludo.hpp"
#include <unistd.h>
#include <conio.h>
#include <windows.h>

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

int Ludo::seleccionar(){
    int actual = juego->getTurno()%N_Jugadores;
    Jugador *jugador= juego->getJugadores()[actual];
    for (int i = 0; i < 4; i++) {
        if(getCoorde(jugador->getFichas()[i]->getFichasp())){
            return i;
        }
    }
}

Ludo::Ludo(int N_Jugadores) {
    this->N_Jugadores=N_Jugadores;
    ventana_juego = new sf::RenderWindow(VideoMode(800, 600),"LUDO");
    ventana_juego->setFramerateLimit(60);
    juego = new Juego(N_Jugadores);

}

void Ludo::inicio() {
    int id=0;
    while (ventana_juego->isOpen()) {
        Event event;
        while (ventana_juego->pollEvent(event)) {
            draw();
            if(Keyboard::isKeyPressed(Keyboard::Space)){
                juego->nexturn();
                draw();
                id=-1;
                while(id == -1){
                    int xfi,yfi,xmo,ymo;
                    if(Mouse::isButtonPressed(Mouse::Left)){
                        xmo = Mouse::getPosition().x;
                        ymo = Mouse::getPosition().y;
                        for (int i = 0; i <4 ; i++) {
                            xfi = juego->getJugadores()[juego->getTurno()%N_Jugadores]->getFichas()[i]->getFichasp()->getPosition().x;
                            yfi = juego->getJugadores()[juego->getTurno()%N_Jugadores]->getFichas()[i]->getFichasp()->getPosition().y;
                            if(xfi<xmo+25 and xfi>xmo-25 and yfi<ymo+25 and yfi>ymo-25){
                                id=i;
                            }
                        }
                    }
                    if(Keyboard::isKeyPressed(Keyboard::Num1) or Keyboard::isKeyPressed(Keyboard::Numpad1))
                        id=0;
                    if(Keyboard::isKeyPressed(Keyboard::Num2) or Keyboard::isKeyPressed(Keyboard::Numpad2))
                        id=1;
                    if(Keyboard::isKeyPressed(Keyboard::Num3) or Keyboard::isKeyPressed(Keyboard::Numpad3))
                        id=2;
                    if(Keyboard::isKeyPressed(Keyboard::Num4) or Keyboard::isKeyPressed(Keyboard::Numpad4))
                        id=3;}
                juego->gamephase(id);
                juego->middlephase(id);
                juego->endphase();
                if(juego->getJugadores()[juego->getTurno()%N_Jugadores]->getLast()!=6){
                    juego->aumenta();
                }
            }
            if (event.type == Event::Closed)
                ventana_juego->close();
        }
    }
}


