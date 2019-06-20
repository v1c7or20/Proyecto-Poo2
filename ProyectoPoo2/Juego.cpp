#include "Juego.hpp"

Juego::Juego(int N_Jugadores) {
    turno=1;
    this->N_Jugadores=N_Jugadores;
    dado = new Dado();
    tablero = new Tablero();
    jugadores = new Jugador*[N_Jugadores];
    switch (N_Jugadores){
        case 2:
            jugadores[0] = new Jugador('B');
            jugadores[1] = new Jugador('G');
            break;
        case 3:
            jugadores[0] = new Jugador('B');
            jugadores[1] = new Jugador('Y');
            jugadores[2] = new Jugador('G');
            break;
        case 4:
            jugadores[0] = new Jugador('B');
            jugadores[1] = new Jugador('Y');
            jugadores[2] = new Jugador('G');
            jugadores[3] = new Jugador('R');
            break;
        default:
            break;
    }
}

Juego::~Juego() {}

void Juego::nexturn() {
    int actual = turno%N_Jugadores;
    jugadores[actual]->setLast(dado->lanzar());
    comprobar_repeticiones(jugadores[actual]);
    mover_ficha(jugadores[actual],1);
    aumenta();
}

void Juego::aumenta() {
    turno++;
}

void Juego::comprobar_repeticiones(Jugador *jugador) {
    if(jugador->getLast() == 6){
        jugador->setRepeticion(jugador->getRepeticion()+1);
        if(jugador->getRepeticion()==3){
            jugador->setCanplay(false);
        }
    }
    if(jugador->getLast() != 6){
        jugador->setRepeticion(0);
        jugador->setCanplay(true);
    }
}

void Juego::mover_ficha(Jugador *jugador,int id_ficha){
    int last = jugador->getLast();
    Ficha *ficha_mover = jugador->getFichas()[id_ficha];
    float x = ficha_mover->getFichasp()->getPosition().x, y = ficha_mover->getFichasp()->getPosition().y ;
    ficha_mover->setTabPos(ficha_mover->getTabPos()+last);
    int posactual = ficha_mover->getTabPos();
    ficha_mover->getFichasp()->setPosition(jugador->getRecorrido()->getRecorrido()[posactual][0],jugador->getRecorrido()->getRecorrido()[posactual][1]);

}


int Juego::getTurno() const {
    return turno;
}

int Juego::getNJugadores() const {
    return N_Jugadores;
}

Tablero *Juego::getTablero() const {
    return tablero;
}

Dado *Juego::getDado() const {
    return dado;
}

Jugador **Juego::getJugadores() const {
    return jugadores;
}
