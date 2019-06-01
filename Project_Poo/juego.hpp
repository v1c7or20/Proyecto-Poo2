#ifndef JUEGO_HPP
#define JUEGO_HPP

class juego {
private:
    int turno;
    int numerojugadores;
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
