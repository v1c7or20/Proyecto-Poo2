//
// Created by Usuario on 22/05/2019.
//

#ifndef PROYECTO_POO2_FICHA_H
#define PROYECTO_POO2_FICHA_H


class ficha {
protected:
    int id;
    casilla *posicion;
public:
    ficha(int id, casilla *posicion, tablero *tablero_juego);

    void moverse(dado *dado_juego, tablero *tablero_juego);

    virtual ~ficha();

};


#endif //PROYECTO_POO2_FICHA_H
