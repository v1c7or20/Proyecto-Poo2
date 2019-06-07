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
    int posicionX;
    int posicionY;
    Sprite **fichas;
    char color;
    int **recorrido;
public:
    Jugador(int posicionX,int posicionY, Sprite **fichas,char color, int **recorrido);

    int getPosicionX() const;

    int getPosicionY() const;

    Sprite **getFichas() const;

    char getColor() const;

    void dibujar(int id_Ficha);

    void setPositionFicha(int id_Ficha);

    void lanzar_dado(dado *dado_juego,int id_Ficha);
};


#endif //PROYECTO_POO2_JUGADOR_H