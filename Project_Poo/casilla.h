//
// Created by MSI on 25/05/2019.
//

#ifndef PROJECT_POO_CASILLA_H
#define PROJECT_POO_CASILLA_H

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
    casillainicio(int x , int y, bool disponible, char color);
    void mostrar() override;
};

#endif //PROJECT_POO_CASILLA_H
