#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Ficha.hpp"
#include "Recorrido.hpp"

using namespace std;

class Jugador {
private:
    char color;
    Ficha **fichas;
    Vector2<float >** pos_iniciales;
    Recorrido * recorrido;
    int last=0;
    bool canplay=true;
    int repeticion = 0;

public:

	Jugador(char color);

	~Jugador();

    Ficha **getFichas() const;

    Recorrido *getRecorrido() const;

    char getColor() const;

    Vector2<float> **getPosIniciales() const;

    void setLast(int last);

    void setCanplay(bool canplay);

    void setRepeticion(int repeticion);
};

#endif