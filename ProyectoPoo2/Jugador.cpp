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
        pos_iniciales[0] = new Vector2<float >(150,55);
        pos_iniciales[1] = new Vector2<float >(260,55);
        pos_iniciales[2] = new Vector2<float >(260,160);
        pos_iniciales[3] = new Vector2<float >(150,160);
    }
    if (color == 'R'){
        img_jugador->loadFromFile("Texturas/rojo.png");
        pos_iniciales[0] = new Vector2<float >(150,405);
        pos_iniciales[1] = new Vector2<float >(260,405);
        pos_iniciales[2] = new Vector2<float >(260,515);
        pos_iniciales[3] = new Vector2<float >(150,515);
    }
    if (color == 'G'){
        img_jugador->loadFromFile("Texturas/verde.png");
        pos_iniciales[0] = new Vector2<float >(510,520);
        pos_iniciales[1] = new Vector2<float >(620,520);
        pos_iniciales[2] = new Vector2<float >(620,410);
        pos_iniciales[3] = new Vector2<float >(510,410);
    }
    if (color == 'Y'){
        img_jugador->loadFromFile("Texturas/amarillo.png");
        pos_iniciales[0] = new Vector2<float >(515,55);
        pos_iniciales[1] = new Vector2<float >(620,55);
        pos_iniciales[2] = new Vector2<float >(620,155);
        pos_iniciales[3] = new Vector2<float >(515,155);
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
