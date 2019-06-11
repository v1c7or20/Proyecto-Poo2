//
// Created by Mauricio Rodriguez on 28/05/2019.
//

#include "Jugador.h"

Jugador::Jugador(dibujos *_dibujos,char color, recorrido *recorridos)
 {fichas = _dibujos->getFicha(color);
 recorrido_fichas=recorridos->getRecorridocolor(color);
 posiciones = new int [4];
    for (int i = 0; i <4 ; i++) {
         posiciones[i]=0;
    }
    for (int j = 0; j < 4; j++) {
        startpos[j][0]=fichas[j]->getPosition().x;
        startpos[j][1]=fichas[j]->getPosition().x;
    }
 }


Sprite **Jugador::getFichas() const {
    return fichas;
}

char Jugador::getColor() const {
    return color;
}

void Jugador::lanzar_dado(dado *dado_juego,int id_Ficha) {
    last = dado_juego->lanzar();
}

void Jugador::dibuja_avance(int id_Ficha){
    int temp=posiciones[id_Ficha]+last;
    int num=posiciones[id_Ficha];
    for (int i = 0; i < last; i++) {
        num+1;
        fichas[id_Ficha]->setPosition(recorrido_fichas[num][0],recorrido_fichas[num][1]);
    }
    fichas[id_Ficha]->setPosition(recorrido_fichas[temp][0],recorrido_fichas[temp][1]);
}

int **Jugador::getRecorridoFichas() const {
    return recorrido_fichas;
}

void Jugador::setLast(int last) {
    Jugador::last = last;
}

int Jugador::getLast() const {
    return last;
}

int Jugador::getRepeticion() const {
    return repeticion;
}

void Jugador::setRepeticion(int repeticion) {
    Jugador::repeticion = repeticion;
}

bool Jugador::isCanplay() const {
    return canplay;
}

void Jugador::setCanplay(bool canplay) {
    Jugador::canplay = canplay;
}

