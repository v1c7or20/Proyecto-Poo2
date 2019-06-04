//
// Created by Usuario on 22/05/2019.
//

#include "ficha.h"

ficha::~ficha() {

}

ficha::ficha(int id, casilla *posicion, tablero *tablero_juego)
        : id(id) {posicion = tablero_juego->getcasa(id)}

void ficha::moverse(dado *dado_juego, tablero *tablero_juego) {
    int numero_sacado = dado_juego->lanzar();
    if(*posicion == casillacasa){
        if(numero_sacado == 6)
            posicion=tablero_juego->getinicioxjugador(id);
    }
    else
        posicion=tablero_juego->avanzar()
}
