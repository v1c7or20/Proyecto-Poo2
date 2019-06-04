//
// Created by MSI on 25/05/2019.
//
#include <iostream>
#include "casilla.h"

using namespace std;


casilla::casilla(int x, int y, bool disponible,char color)
: x(x), y(y), disponible(disponible), color(color) {}

casillainicio::casillainicio(int x, int y, bool disponible, char color,Jugador _pertenece_a)
        : casilla(x, y, disponible, color){ _pertenece_a = _pertenece_a;}


void casillainicio::mostrar() {
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<disponible<<endl;
    cout<<color<<endl;
}

casillacasa::casillacasa(int x, int y, bool disponible, char color)
: casilla(x, y, disponible, color) {}

void casillacasa::mostrar() {

}

casillarecorrido::casillarecorrido(int x, int y, bool disponible, char color)
: casilla(x, y, disponible, color) { _pertenece_a = _pertenece_a;}

void casillarecorrido::mostrar() {

}

casilladestino::casilladestino(int x, int y, bool disponible, char color) : casilla(x, y, disponible, color) {}

void casilladestino::mostrar() {

}

casillazonasegura::casillazonasegura(int x, int y, bool disponible, char color)
: casilla(x, y, disponible, color) {}

void casillazonasegura::mostrar() {

}
