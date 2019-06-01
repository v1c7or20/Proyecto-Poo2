#ifndef JUEGO_HPP
#define JUEGO_HPP

#include "Jugador.cpp"

class juego {
private:
    int turno;
    int numerojugadores;
    Jugador* jugardores;
    bool iniciado = false;
public:
	juego();
	~juego();
	void iniciajuego();
    void siguienteturno();
    void adicionajugador(string nombre,char color);
    bool validarsalidaficha();
    bool validarfindejuego();
    void finalizajuego();
};

#endif
