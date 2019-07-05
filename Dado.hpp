#ifndef DADO_HPP
#define DADO_HPP

#include <SFML/Graphics.hpp>

class Dado {
private:
    sf::Texture ** dado_img;
    sf::Sprite * dados;
public:
    int lanzar();
	Dado();
	~Dado();

    sf::Texture **getDadoImg() const;

    sf::Sprite *getDados() const;

};

#endif
