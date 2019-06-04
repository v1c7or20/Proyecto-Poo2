//
// Created by Renzo on 2/06/2019.
//

#ifndef SFMLAPP_JUEGO_H
#define SFMLAPP_JUEGO_H

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class juego {
private:
    int N_Jugadores;
    //tablero
    Texture * tablero;
    Sprite * tablero_fondo;
    //Fichas
        //ficha Azul
    Texture * fichaAzul;
    Sprite * fichaAzul_1;
    Sprite * fichaAzul_2;
    Sprite * fichaAzul_3;
    Sprite * fichaAzul_4;

    //ficha Roja
    Texture * fichaRojo;
    Sprite * fichaRojo_1;
    Sprite * fichaRojo_2;
    Sprite * fichaRojo_3;
    Sprite * fichaRojo_4;

    //ficha Verde
    Texture * fichaVerde;
    Sprite * fichaVerde_1;
    Sprite * fichaVerde_2;
    Sprite * fichaVerde_3;
    Sprite * fichaVerde_4;

    //ficha Amarilla
    Texture * fichaAmarilla;
    Sprite * fichaAmarilla_1;
    Sprite * fichaAmarilla_2;
    Sprite * fichaAmarilla_3;
    Sprite * fichaAmarilla_4;

    //Ventana Juego
    RenderWindow * ventana_juego;
    int fps;
public:
    juego(int res_x, int res_y,string titulo, int N_Jugadores);

    //Funciones dibujar

    void dibujarAzul();
    void dibujarRojo();
    void dibujarVerde();
    void dibujarAmarilla();

    //Funciones dibujar
    void draw_game();

    int getNJugadores() const;

    void game_loop();

};


#endif //SFMLAPP_JUEGO_H
