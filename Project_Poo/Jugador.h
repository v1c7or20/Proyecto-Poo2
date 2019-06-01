//
// Created by Mauricio Rodriguez on 28/05/2019.
//
#include "ficha.h"
#ifndef PROJECT_POO_JUGADOR_H
#define PROJECT_POO_JUGADOR_H
typedef int TipoDato;
class Jugador {
private:
    string NombreJugador;
    TipoDato color;
public:
    Jugador(string NombreJugador,TipoDato color);
    void jugar(ficha* ficha,int movimiento);
    void seleccionarFichaEnJuego();
};


#endif //PROJECT_POO_JUGADOR_H
