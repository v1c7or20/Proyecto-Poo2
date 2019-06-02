//
// Created by Mauricio Rodriguez on 28/05/2019.
//
#include "ficha.cpp"
#include <string>

#ifndef PROJECT_POO_JUGADOR_H
#define PROJECT_POO_JUGADOR_H



using  namespace std;

class Jugador {
private:
    string NombreJugador;
    char color;
    ficha* fichaj;
public:
    Jugador(string NombreJugador,char color);

    void jugar(ficha* ficha,int movimiento);

    void seleccionarFichaEnJuego();
};


#endif //PROJECT_POO_JUGADOR_H
