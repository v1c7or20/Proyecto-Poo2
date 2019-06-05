//
// Created by Usuario on 3/06/2019.
//

#ifndef PROYECTO_POO2_JUEGO_H
#define PROYECTO_POO2_JUEGO_H


#include "Tablero.h"
#include "dado.h"
#include "Jugador.h"

class juego {
protected:
    int numjugador;
    int turnos;
    Tablero *Tabla_juego;
    Jugador **jugadores;
    dado *dado_juego;
public:
    juego(int jugadores, int turnos);
    void siguienteturno();
    void adicionarJugador();
    virtual void validarfindejuego() =0;
    void validadsalidadeficha();
    void validarcapturadeficha();
    virtual void finalizarjuego()=0;
    virtual void iniciarjuego()=0;

};
#endif //PROYECTO_POO2_JUEGO_H
