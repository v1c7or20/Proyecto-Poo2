//
// Created by Usuario on 6/06/2019.
//

#ifndef SFMLAPP_JUEGO_H
#define SFMLAPP_JUEGO_H

#include "Jugador.h"


class juego {
protected:
    Jugador **jugadores;
    int numero_jugadores;
    dibujos *dibujo;
    recorrido *recorridos;
public:
    juego(int num_jugadores);

    bool comprobarcasillas();

    bool comprobarjugadores();

    void next_turn();

    
};


#endif //SFMLAPP_JUEGO_H
