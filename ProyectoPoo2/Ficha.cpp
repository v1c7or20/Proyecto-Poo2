#include "Ficha.hpp"

Ficha::Ficha(char color, int id) {
    ficha_img = new Texture;
    ficha = new Sprite;
    estado = 'C';
    if(color == 'R'){
        ficha_img->loadFromFile("Texturas/fichaRojo.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(145,400);
                break;
            case 1:
                ficha->setPosition(255,400);
                break;
            case 2:
                ficha->setPosition(255,510);
                break;
            case 3:
                ficha->setPosition(145,510);
                break;
        }
    }
    if(color == 'B'){
        ficha_img->loadFromFile("Texturas/fichaAzul.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(145,45);
                break;
            case 1:
                ficha->setPosition(255,45);
                break;
            case 2:
                ficha->setPosition(255,150);
                break;
            case 3:
                ficha->setPosition(145,150);
                break;
        }
    }
    if(color == 'G'){
        ficha_img->loadFromFile("Texturas/fichaVerde.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(505,510);
                break;
            case 1:
                ficha->setPosition(615,510);
                break;
            case 2:
                ficha->setPosition(615,400);
                break;
            case 3:
                ficha->setPosition(505,400);
                break;
        }
    }
    if(color == 'Y'){
        ficha_img->loadFromFile("Texturas/fichaAmarilla.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(505,45);
                break;
            case 1:
                ficha->setPosition(615,45);
                break;
            case 2:
                ficha->setPosition(615,150);
                break;
            case 3:
                ficha->setPosition(505,150);
                break;
        }
    }
}

Ficha::~Ficha() {}

Sprite *Ficha::getFichasp() const {
    return ficha;
}

void Ficha::setTabPos(int tabPos) {
    tab_pos = tabPos;
}

int Ficha::getTabPos() const {
    return tab_pos;
}

void Ficha::setEstado(char estado) {
    Ficha::estado = estado;
}

char Ficha::getEstado() const {
    return estado;
}

int Ficha::getId() const {
    return id;
}
