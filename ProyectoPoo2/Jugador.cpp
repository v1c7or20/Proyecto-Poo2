#include "Jugador.hpp"

Jugador::Jugador(char color) {

    //Recorrido
    recorrido=new Recorrido(color);
    this->color = color;
    fichas = new Ficha*[4];
    for (int i = 0; i < 4; i++) {
        fichas[i]=new Ficha(color, i);
    }
    pos_iniciales=new Vector2<float >*[4];
    if (color == 'B'){

        pos_iniciales[0] = new Vector2<float >(140,45);
        pos_iniciales[1] = new Vector2<float >(240,45);
        pos_iniciales[2] = new Vector2<float >(240,145);
        pos_iniciales[3] = new Vector2<float >(140,145);
    }
    if (color == 'R'){
        pos_iniciales[0] = new Vector2<float >(140,505);
        pos_iniciales[1] = new Vector2<float >(240,505);
        pos_iniciales[2] = new Vector2<float >(240,405);
        pos_iniciales[3] = new Vector2<float >(140,405);
    }
    if (color == 'G'){
        pos_iniciales[0] = new Vector2<float >(500,505);
        pos_iniciales[1] = new Vector2<float >(600,505);
        pos_iniciales[2] = new Vector2<float >(600,405);
        pos_iniciales[3] = new Vector2<float >(500,505);
    }
    if (color == 'Y'){
        pos_iniciales[0] = new Vector2<float >(500,45);
        pos_iniciales[1] = new Vector2<float >(600,45);
        pos_iniciales[2] = new Vector2<float >(600,145);
        pos_iniciales[3] = new Vector2<float >(500,145);
    }
}

Ficha **Jugador::getFichas() const {
    return fichas;
}

Vector2<float> **Jugador::getPosIniciales() const {
    return pos_iniciales;
}

Recorrido *Jugador::getRecorrido() const {
    return recorrido;
}

char Jugador::getColor() const {
    return color;
}

void Jugador::setLast(int last) {
    Jugador::last = last;
}

void Jugador::setCanplay(bool canplay) {
    Jugador::canplay = canplay;
}

void Jugador::setRepeticion(int repeticion) {
    Jugador::repeticion = repeticion;
}

int Jugador::getLast() const {
    return last;
}

int Jugador::getRepeticion() const {
    return repeticion;
}

bool Jugador::isCanplay() const {
    return canplay;
}
