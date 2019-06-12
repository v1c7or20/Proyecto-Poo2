//
// Created by Renzo on 2/06/2019.
//

#ifndef SFMLAPP_DIBUJOS_H
#define SFMLAPP_DIBUJOS_H

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class dibujos {
private:
    int N_Jugadores;
    //tablero
    Texture * tablero;
    Sprite * tablero_fondo;

    //Dado
    Texture ** dado_img;
    Sprite ** dados;
    //Fichas
        //ficha Azul
    Texture * fichaAzul;
    Sprite ** fichasAzules;

    //ficha Roja
    Texture * fichaRojo;
    Sprite ** fichasRojas;

    //ficha Verde
    Texture * fichaVerde;
    Sprite ** fichasVerdes;

    //ficha Amarilla
    Texture * fichaAmarilla;
    Sprite **fichasAmarillas;


    //Ventana Juego
    RenderWindow * ventana_juego;
    int fps;
public:
    dibujos(int res_x, int res_y,string titulo, int N_Jugadores);

    //Funciones dibujar

    void dibujarAzul();
    void dibujarRojo();
    void dibujarVerde();
    void dibujarAmarilla();

    //Funciones dibujar
    void draw_game();

    int getNJugadores() const;

    void game_loop();

    Sprite **getFicha(char);
    float **posiciones(Sprite**);
};


#endif //SFMLAPP_DIBUJOS_H
