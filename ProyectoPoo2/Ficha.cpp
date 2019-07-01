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
                ficha->setPosition(150,405);
                break;
            case 1:
                ficha->setPosition(260,405);
                break;
            case 2:
                ficha->setPosition(260,515);
                break;
            case 3:
                ficha->setPosition(150,515);
                break;
        }
    }
    if(color == 'B'){
        ficha_img->loadFromFile("Texturas/fichaAzul.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(150,55);
                break;
            case 1:
                ficha->setPosition(260,55);
                break;
            case 2:
                ficha->setPosition(260,160);
                break;
            case 3:
                ficha->setPosition(150,160);
                break;
        }
    }
    if(color == 'G'){
        ficha_img->loadFromFile("Texturas/fichaVerde.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(510,520);
                break;
            case 1:
                ficha->setPosition(620,520);
                break;
            case 2:
                ficha->setPosition(620,410);
                break;
            case 3:
                ficha->setPosition(510,410);
                break;
        }
    }
    if(color == 'Y'){
        ficha_img->loadFromFile("Texturas/fichaAmarilla.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(515,55);
                break;
            case 1:
                ficha->setPosition(620,55);
                break;
            case 2:
                ficha->setPosition(620,155);
                break;
            case 3:
                ficha->setPosition(510,155);
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
