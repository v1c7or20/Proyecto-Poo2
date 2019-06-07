//
// Created by Mauricio Rodriguez on 28/05/2019.
//

#include "Jugador.h"

Jugador::Jugador(float **poiciones, Sprite **fichas,char color, int **recorrido)
: posiciones(posiciones),fichas(fichas),color(color),recorrido(recorrido) {}


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

