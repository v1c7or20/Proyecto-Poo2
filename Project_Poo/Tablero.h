//
// Created by Renzo on 28/05/2019.
//

#ifndef PROJECT_POO_TABLERO_H
#define PROJECT_POO_TABLERO_H

#include "casilla.h"

class Tablero {
private:
    casilla* recorrido[12][6];
    casillacasa* casas[4][4];
public:
    Tablero();

    void mostrar();

};


#endif //PROJECT_POO_TABLERO_H
