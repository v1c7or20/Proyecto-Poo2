//
// Created by Renzo on 2/06/2019.
//
#include <stdlib.h>
#include <time.h>
#include "dibujos.h"
#include "Jugador.h"
#include "recorrido.h"

dibujos::dibujos(int res_x, int res_y, string titulo, int N_Jugadores)  {
    //Principales parametro del constructor SFML
    this->N_Jugadores = N_Jugadores;
    fps =60;
    ventana_juego = new RenderWindow(VideoMode(res_x, res_y),titulo);
    ventana_juego->setFramerateLimit(fps);


    //Tablero
    tablero = new Texture;
    tablero->loadFromFile("Texturas/tablero.jpg");
    tablero_fondo = new Sprite(*tablero);

    //Dado
    dado_img = new Texture*[6];
    dados = new Sprite*[6];
    //Fichas
    fichaAzul = new Texture;
    fichaAmarilla = new Texture;
    fichaVerde = new Texture;
    fichaRojo = new Texture;
    fichaAzul->loadFromFile("Texturas/fichaAzul.png");
    fichaVerde->loadFromFile("Texturas/fichaVerde.png");
    fichaRojo->loadFromFile("Texturas/fichaRojo.png");
    fichaAmarilla->loadFromFile("Texturas/fichaAmarilla.png");

    //Cargamos el archivo de textura
    //Dado
        //Textura
    for(int i = 0; i<6 ; i++){
        dado_img[i] = new Texture;
    }
    dado_img[0]->loadFromFile("Texturas/cara1.png");
    dado_img[1]->loadFromFile("Texturas/cara2.png");
    dado_img[2]->loadFromFile("Texturas/cara3.png");
    dado_img[3]->loadFromFile("Texturas/cara4.png");
    dado_img[4]->loadFromFile("Texturas/cara5.png");
    dado_img[5]->loadFromFile("Texturas/cara6.png");

        //Creamos los Sprites para las caras del dado
    for(int i = 0; i<6 ; i++){
        dados[i] = new Sprite(*dado_img[i]);
    }

    //Creamos los Sprites de cada ficha
        //Ficha Azul
    fichasAzules=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasAzules[i]= new Sprite(*fichaAzul);
    }
        //Ficha Rojo
    fichasRojas=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasRojas[i]= new Sprite(*fichaRojo);
    }
        //Ficha Verde
    fichasVerdes=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasVerdes[i]= new Sprite(*fichaVerde);
    }
        //Ficha Amarilla
    fichasAmarillas=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasAmarillas[i]= new Sprite(*fichaAmarilla);
    }
    //Posiciones
        //Dado



        //Ficha Azul
    float xf1=140,yf1=45;
    fichasAzules[0]->setPosition(xf1,yf1);
            //Ficha 2
    fichasAzules[1]->setPosition(240,45);
            //Ficha 2
    fichasAzules[2]->setPosition(240,145);
            //Ficha 2
    fichasAzules[3]->setPosition(140,145);
    
        //Ficha Verde
    fichasVerdes[0]->setPosition(500,505);
    //Ficha 2
    fichasVerdes[1]->setPosition(600,505);
    //Ficha 2
    fichasVerdes[2]->setPosition(500,405);
    //Ficha 2
    fichasVerdes[3]->setPosition(600,405);

        //Ficha Rojo
    fichasRojas[0]->setPosition(140,505);
    //Ficha 2
    fichasRojas[1]->setPosition(240,505);
    //Ficha 2
    fichasRojas[2]->setPosition(240,405);
    //Ficha 2
    fichasRojas[3]->setPosition(140,405);
    
        //Ficha Amarilla
    fichasAmarillas[0]->setPosition(500,45);
    //Ficha 2
    fichasAmarillas[1]->setPosition(600,45);
    //Ficha 2
    fichasAmarillas[2]->setPosition(600,145);
    //Ficha 2
    fichasAmarillas[3]->setPosition(500,145);



    game_loop();

}



void dibujos::draw_game() {
    ventana_juego->clear();

    //Tablero
    ventana_juego->draw(*tablero_fondo);

    //Dado
    srand(time(NULL));
    if (Keyboard::isKeyPressed(Keyboard::Space)) {
        int n_dado = 1 + rand() % (6 + 1 - 1);
        for (int i = 0; i < 6 ; i++){
            if (n_dado == i+1){
                ventana_juego->draw(*dados[i]);
                dados[i]->setPosition(710,45);
            }
        }
    }

    //fichas

    if (dibujos::getNJugadores()==2){
        dibujarAzul();
        dibujarVerde();

    }
    if ( dibujos::getNJugadores()==3){
        dibujarAzul();
        dibujarAmarilla();
        dibujarRojo();
    }
    if ( dibujos::getNJugadores()==4){
        dibujarAzul();
        dibujarAmarilla();
        dibujarRojo();
        dibujarVerde();
    }
    //Display
    ventana_juego->display();

    //Posicion de la primera casilla azul
    float xf1=130,yf1=235;
    if (Keyboard::isKeyPressed(Keyboard::Num6))
        fichasAzules[0]->setPosition(xf1, yf1);
    if (Keyboard::isKeyPressed(Keyboard::Right))
        fichasAzules[0]->setPosition(fichasAzules[0]->getPosition().x+40, fichasAzules[0]->getPosition().y);
    if (Keyboard::isKeyPressed(Keyboard::Left))
        fichasAzules[0]->setPosition(fichasAzules[0]->getPosition().x-40, fichasAzules[0]->getPosition().y);
    if (Keyboard::isKeyPressed(Keyboard::Up))
        fichasAzules[0]->setPosition(fichasAzules[0]->getPosition().x, fichasAzules[0]->getPosition().y-40);
    if (Keyboard::isKeyPressed(Keyboard::Down))
        fichasAzules[0]->setPosition(fichasAzules[0]->getPosition().x, fichasAzules[0]->getPosition().y+40);
}

//Establecer funciones dibujar
void dibujos::dibujarAzul(){
    for (int i = 0; i<4 ; i++){
        ventana_juego->draw(*fichasAzules[i]);
    }
}

void dibujos::dibujarAmarilla() {
    for (int i = 0; i<4 ; i++){
        ventana_juego->draw(*fichasAmarillas[i]);
    }
}

void dibujos::dibujarRojo() {
    for (int i = 0; i<4 ; i++){
        ventana_juego->draw(*fichasRojas[i]);
    }
}

void dibujos::dibujarVerde() {
    for (int i = 0; i<4 ; i++){
        ventana_juego->draw(*fichasVerdes[i]);
    }

}
float **dibujos::posiciones(Sprite** ficha){
    auto **coleccion_posiciones= new float*[4];
    for (int i=0;i<4;i++){
        coleccion_posiciones[i]= new float[2];
        for(int j=0;j<2;j++){
            coleccion_posiciones[i][j]= ficha[i]->getPosition().x;
            coleccion_posiciones[i][j]= ficha[i]->getPosition().y;
        }
    }
    return coleccion_posiciones;
}

//Loop
void dibujos::game_loop() {

    while (ventana_juego->isOpen()) {
        Event event;
        while (ventana_juego->pollEvent(event)) {
            draw_game();
            if (event.type == Event::Closed)
                ventana_juego->close();

        }
    }
}
int dibujos::getNJugadores() const {
    return N_Jugadores;
}

Sprite **dibujos::getFicha(char color) {
    if (color=='R')
        return fichasRojas;
    if (color=='Y')
        return fichasAmarillas;
    if (color=='G')
        return fichasVerdes;
    if (color=='B')
        return fichasAzules;
}
