#ifndef JUEGO_HPP
#define JUEGO_HPP

#include "Dado.hpp"
#include "Jugador.hpp"
#include "Tablero.hpp"

class Juego {
private:
    int turno;
    int N_Jugadores;
    Tablero *tablero;
    Dado *dado;
    Jugador **jugadores;
public:
	Juego(int N_Jugadores);

	void nexturn();

    void comprobar_repeticiones(Jugador *jugador);

    void aumenta();

    int getTurno() const;

    int getNJugadores() const;

    void mover_ficha(Jugador *jugador,int id_ficha);

    Tablero *getTablero() const;

    Dado *getDado() const;

    Jugador **getJugadores() const;



    ~Juego();
	
};

#endif