#include "Jugador.hpp"

Jugador::Jugador(char color) {

    //Recorrido
    recorrido=new Recorrido(color);
    this->color = color;
    fichas = new Ficha*[4];
    for (int i = 0; i < 4; i++) {
        fichas[i]=new Ficha(color, i);
    }
    //Imagen Turno del jugador
    img_jugador = new sf::Texture();
    //Posiciones
    pos_iniciales=new Vector2<float >*[4];
    if (color == 'B'){
        img_jugador->loadFromFile("Texturas/azul.png");
        pos_iniciales[0] = new Vector2<float >(145,45);
        pos_iniciales[1] = new Vector2<float >(255,45);
        pos_iniciales[2] = new Vector2<float >(255,150);
        pos_iniciales[3] = new Vector2<float >(145,150);
    }
    if (color == 'R'){
        img_jugador->loadFromFile("Texturas/rojo.png");
        pos_iniciales[0] = new Vector2<float >(145,400);
        pos_iniciales[1] = new Vector2<float >(255,400);
        pos_iniciales[2] = new Vector2<float >(255,510);
        pos_iniciales[3] = new Vector2<float >(145,510);
    }
    if (color == 'G'){
        img_jugador->loadFromFile("Texturas/verde.png");
        pos_iniciales[0] = new Vector2<float >(505,510);
        pos_iniciales[1] = new Vector2<float >(615,510);
        pos_iniciales[2] = new Vector2<float >(615,400);
        pos_iniciales[3] = new Vector2<float >(505,400);
    }
    if (color == 'Y'){
        img_jugador->loadFromFile("Texturas/amarillo.png");
        pos_iniciales[0] = new Vector2<float >(505,45);
        pos_iniciales[1] = new Vector2<float >(615,45);
        pos_iniciales[2] = new Vector2<float >(615,150);
        pos_iniciales[3] = new Vector2<float >(505,150);
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

Texture *Jugador::getImgJugador() const {
    return img_jugador;
}
