//
// Created by Usuario on 3/06/2019.
//

#include "juego.hpp"
#include <iostream>

using namespace std;


void juego::iniciarjuego() {

}

juego::juego(int numjugador, int turnos)
        : numjugador(2), turnos(0){
    jugadores= new Jugador*[2];
    Tabla_juego= new Tablero();
    dado_juego = new dado();
}

void juego::siguienteturno() {

}

void juego::adicionarJugador() {
    if(numjugador<4){
        numjugador++;
        delete jugadores;
        jugadores = new Jugador*[numjugador];
        for (int i = 0; i <numjugador ; i++) {
            jugadores[i]=new Jugador(i+1);
        }
    }
    else
        cout<<"No se puede agregar mas jugadores"<<endl;
}

void juego::validadsalidadeficha() {

}

void juego::validarcapturadeficha() {

}
