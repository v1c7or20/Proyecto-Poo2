#include "Dado.hpp"


Dado::~Dado() {}

Dado::Dado() {
    srand(time(nullptr));
    for(int i = 0; i<6 ; i++){
        dado_img[i] = new sf::Texture;
    }

    dado_img[0]->loadFromFile("Texturas/cara1.png");
    dado_img[1]->loadFromFile("Texturas/cara2.png");
    dado_img[2]->loadFromFile("Texturas/cara3.png");
    dado_img[3]->loadFromFile("Texturas/cara4.png");
    dado_img[4]->loadFromFile("Texturas/cara5.png");
    dado_img[5]->loadFromFile("Texturas/cara6.png");

        //Creamos los Sprites para las caras del dado
    dados=new sf::Sprite;
    dados->setTexture(*dado_img[5]);
}

int Dado::lanzar() {
    int obtenido=(rand()%6)+1;
    dados->setTexture(*dado_img[obtenido-1]);
    return obtenido;
}

sf::Texture **Dado::getDadoImg() const {
    return dado_img;
}

sf::Sprite *Dado::getDados() const {
    return dados;
}
