#ifndef TABLERO_HPP
#define TABLERO_HPP

#include <SFML/Graphics.hpp>

class Tablero {
private:
    sf::Texture *tablero_img;
    sf::Sprite *tablero;
public:

	Tablero();
	~Tablero();

    sf::Sprite *getTablero() const;

};


#endif