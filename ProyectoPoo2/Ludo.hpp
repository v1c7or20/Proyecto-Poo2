#ifndef LUDO_HPP
#define LUDO_HPP

#include <SFML/Graphics.hpp>
#include "Juego.hpp"

class Ludo {
private:
    sf::RenderWindow *ventana_juego;
    Juego *juego;
    int N_Jugadores;
public:
	Ludo(int N_Jugadores);
	void inicio();
	void draw();
	bool getCoorde(const sf::Sprite* click);
	int seleccionar();
};

#endif