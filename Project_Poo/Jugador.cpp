//
// Created by Mauricio Rodriguez on 28/05/2019.
//

#include "Jugador.h"

Jugador::Jugador(int *poscicion, Sprite **fichas,char color, int **recorrido)
: poscicion(poscicion), fichas(fichas),color(color),recorrido(recorrido) {}

int *Jugador::getPoscicion() const {
    return poscicion;
}

Sprite **Jugador::getFichas() const {
    return fichas;
}

char Jugador::getColor() const {
    return color;
}

void Jugador::dibujar(int id_Ficha) {
    fichas[id_Ficha]->setPosition(recorrido[poscicion[id_Ficha]][0],recorrido[poscicion[id_Ficha]][2]);
}

void Jugador::setPositionFicha(int id_Ficha) {

}

void Jugador::lanzar_dado(dado *dado_juego,int id_Ficha) {
    int avance = dado_juego->lanzar();
    poscicion[id_Ficha]+=avance;
}

