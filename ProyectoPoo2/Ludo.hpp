#ifndef LUDO_HPP
#define LUDO_HPP

#include <SFML/Graphics.hpp>
#include "Juego.hpp"

class Ludo {
private:
    sf::RenderWindow *ventana_juego;
    Juego *juego;
public:
	Ludo();
	void inicio();
	~Ludo();
	
};

#endif