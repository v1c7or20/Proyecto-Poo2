//
// Created by Mauricio Rodriguez on 28/05/2019.
//

#ifndef PROYECTO_POO2_JUGADOR_H
#define PROYECTO_POO2_JUGADOR_H

#include "recorrido.h"
#include "dibujos.h"
#include "dado.h"

class Jugador {
protected:
    int * posiciones;
    Sprite **fichas;
    char color;
    int **recorrido_fichas;
    int  startpos[4][2];
public:
    Jugador( dibujos *_dibujos,char color, recorrido *recorridos);

    Sprite **getFichas() const;

    char getColor() const;

    int **getRecorridoFichas() const;

    void lanzar_dado(dado *dado_juego,int id_Ficha);
};


#endif //PROYECTO_POO2_JUGADOR_H
