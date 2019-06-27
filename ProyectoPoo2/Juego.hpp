#ifndef JUEGO_HPP
#define JUEGO_HPP

#include "Dado.hpp"
#include "Jugador.hpp"
#include "Tablero.hpp"
#include <SFML/Graphics.hpp>

class Juego {
private:
    int turno;
    int N_Jugadores;
    int N_terminaron=0;
    Tablero *tablero;
    Dado *dado;
    Jugador **jugadores;
    sf::Music musica;
    Jugador** terminaron;

    sf::Texture ** img_jugador;
    sf::Sprite * sp_jugador;
public:

    Juego(int N_Jugadores);

	void nexturn();

    void comprobar_repeticiones(Jugador *jugador);

    void aumenta();

    void mover_ficha(Jugador *jugador,int id_ficha);

    bool comprobar_enjuego(Ficha *ficha);

    bool comprobar_casa(Ficha *ficha);

    void gamephase(int id);

    void middlephase(int id);

    void endphase();

    bool comprobar_final(Ficha *ficha);

    bool comprobar_segura(Ficha *ficha);

    Tablero *getTablero() const;

    Dado *getDado() const;

    Jugador **getJugadores() const;

    int getTurno() const;

    sf::Sprite *getImgturno() const ;

    ~Juego();
	
};

#endif