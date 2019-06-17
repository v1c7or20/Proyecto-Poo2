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
                ficha->setPosition(140,505);
                break;
            case 1:
                ficha->setPosition(240,505);
                break;
            case 2:
                ficha->setPosition(240,405);
                break;
            case 3:
                ficha->setPosition(140,405);
                break;
        }
    }
    if(color == 'B'){
        ficha_img->loadFromFile("Texturas/fichaAzul.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(140,45);
                break;
            case 1:
                ficha->setPosition(240,45);
                break;
            case 2:
                ficha->setPosition(240,145);
                break;
            case 3:
                ficha->setPosition(140,145);
                break;
        }
    }
    if(color == 'G'){
        ficha_img->loadFromFile("Texturas/fichaVerde.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(500,505);
                break;
            case 1:
                ficha->setPosition(600,505);
                break;
            case 2:
                ficha->setPosition(600,405);
                break;
            case 3:
                ficha->setPosition(500,405);
                break;
        }
    }
    if(color == 'Y'){
        ficha_img->loadFromFile("Texturas/fichaAmarilla.png");
        ficha->setTexture(*ficha_img);
        switch (id){
            case 0:
                ficha->setPosition(500,45);
                break;
            case 1:
                ficha->setPosition(600,45);
                break;
            case 2:
                ficha->setPosition(600,145);
                break;
            case 3:
                ficha->setPosition(500,145);
                break;
        }
    }
}

Ficha::~Ficha() {}

Sprite *Ficha::getFicha() const {
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
