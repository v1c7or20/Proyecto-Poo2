//
// Created by MSI on 25/05/2019.
//

#ifndef PROJECT_POO_CASILLA_H
#define PROJECT_POO_CASILLA_H

#include "Jugador.h"

class casilla {
protected:
    int x;
    int y;
    bool disponible;
    char color;
public:
    casilla(int x, int y, bool disponible, char color);
    virtual void mostrar()=0;
};

class casillainicio: public casilla{
public:
    casillainicio(int x , int y, bool disponible, char color,Jugador pertenece_a);
    void mostrar() override;
};

class casillacasa: public casilla{
public:
    casillacasa(int x, int y, bool disponible, char color);

    void mostrar() override;
};

class casillarecorrido: public casilla{
public:
    casillarecorrido(int x, int y, bool disponible, char color);

    void mostrar() override;
};

class casilladestino: public casilla{
public:
    casilladestino(int x, int y, bool disponible, char color,Jugador pertenece_a));

    void mostrar() override;
};

class casillazonasegura: public casilla{
public:
    casillazonasegura(int x, int y, bool disponible, char color);

    void mostrar() override;
};

#endif //PROJECT_POO_CASILLA_H
