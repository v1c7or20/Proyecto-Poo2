//
// Created by MSI on 25/05/2019.
//
#include <iostream>
#include "casilla.h"

using namespace std;


casilla::casilla(int x, int y, bool disponible,char color)
: x(x), y(y), disponible(disponible), color(color) {}

casillainicio::casillainicio(int x, int y, bool disponible, char color)
        : casilla(x, y, disponible, color) {}


void casillainicio::mostrar() {
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<disponible<<endl;
    cout<<color<<endl;
}