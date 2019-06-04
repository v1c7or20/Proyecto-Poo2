//
// Created by Mauricio Rodriguez on 28/05/2019.
//

#ifndef PROYECTO_POO2_JUGADOR_H
#define PROYECTO_POO2_JUGADOR_H


#include "ficha.h"

class Jugador {
protected:
    int numero;
    ficha *fichas;
public:
    Jugador(int numero);

    int getNumero() const;

    ficha *getFichas() const;
};


#endif //PROYECTO_POO2_JUGADOR_H
