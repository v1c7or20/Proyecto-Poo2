//
// Created by Mauricio Rodriguez on 28/05/2019.
//

#include "Jugador.h"

Jugador::Jugador(int numero):numero(numero) {}

int Jugador::getNumero() const {
    return numero;
}

ficha *Jugador::getFichas() const {
    return fichas;
}
