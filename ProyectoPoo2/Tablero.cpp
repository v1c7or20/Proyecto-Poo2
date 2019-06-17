#include "Tablero.hpp"

Tablero::Tablero() {
    tablero_img = new sf::Texture;
    tablero_img->loadFromFile("Texturas/tablero.jpg");
    tablero = new sf::Sprite(*tablero);
}

Tablero::~Tablero() {}