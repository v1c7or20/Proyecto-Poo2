#include "Tablero.hpp"

Tablero::Tablero() {
    tablero_img = new sf::Texture;
    tablero_img->loadFromFile("Texturas/tablero.png");
    tablero = new sf::Sprite(*tablero_img);
}

Tablero::~Tablero() {}

sf::Sprite *Tablero::getTablero() const {
    return tablero;
}