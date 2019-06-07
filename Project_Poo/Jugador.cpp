//
// Created by Mauricio Rodriguez on 28/05/2019.
//

#include "Jugador.h"

Jugador::Jugador(int posicionX,int posicionY, Sprite **fichas,char color, int **recorrido)
: posicionX(posicionX),posicionY(posicionY),fichas(fichas),color(color),recorrido(recorrido) {}

int Jugador::getPosicionX() const {
    return posicionX;
}

int Jugador::getPosicionY() const {
    return posicionY;
}

Sprite **Jugador::getFichas() const {
    return fichas;
}

char Jugador::getColor() const {
    return color;
}

void Jugador::dibujar(int id_Ficha) {
}

void Jugador::setPositionFicha(int id_Ficha) {

}

void Jugador::lanzar_dado(dado *dado_juego,int id_Ficha) {
    int avance = dado_juego->lanzar();

}

