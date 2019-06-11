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
    int repeticion=0;
    int last;
    bool canplay=true;
public:
    Jugador( dibujos *_dibujos,char color, recorrido *recorridos);

    Sprite **getFichas() const;

    char getColor() const;

    int **getRecorridoFichas() const;

    void lanzar_dado(dado *dado_juego,int id_Ficha);

    void setLast(int last);

    int getLast() const;

    int getRepeticion() const;

    void setRepeticion(int repeticion);

    bool isCanplay() const;

    void setCanplay(bool canplay);
};


#endif //PROYECTO_POO2_JUGADOR_H
