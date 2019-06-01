//
// Created by Usuario on 22/05/2019.
//

#include "dado.cpp"
#include "casilla.cpp"

#ifndef PROJECT_POO_FICHA_H
#define PROJECT_POO_FICHA_H

/*
 F- Final J- En juego C- Casa S- Seguro
*/



class ficha {
protected:
    char estado;
    casilla *casilla;
public:
    ficha();
    void moverse(dado* dado);
};


#endif //PROJECT_POO_FICHA_H
