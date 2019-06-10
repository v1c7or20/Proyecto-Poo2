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
    int avance = dado_juego->lanzar();
    posiciones[id_Ficha]=posiciones[id_Ficha]+avance;
    int temp=posiciones[id_Ficha];
    fichas[id_Ficha]->setPosition(recorrido_fichas[temp][0],recorrido_fichas[temp][1]);
}

int **Jugador::getRecorridoFichas() const {
    return recorrido_fichas;
}

