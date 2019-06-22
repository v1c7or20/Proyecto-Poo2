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



    ~Juego();
	
};

#endif