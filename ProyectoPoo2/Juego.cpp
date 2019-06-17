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
    }
}

Juego::~Juego() {}

void Juego::nexturn() {
    int actual = turno%N_Jugadores;
    jugadores[actual]->setLast(dado->lanzar());
}

void Juego::aumenta() {
    turno++;
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
