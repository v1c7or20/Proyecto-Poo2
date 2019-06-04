//
// Created by Renzo on 2/06/2019.
//

#include "juego.h"

juego::juego(int res_x, int res_y, string titulo, int N_Jugadores) {

    this->N_Jugadores = N_Jugadores;
    fps =60;
    ventana_juego = new RenderWindow(VideoMode(res_x, res_y),titulo);

    ventana_juego->setFramerateLimit(fps);

    //Tablero
    tablero = new Texture;
    tablero_fondo = new Sprite;

    //Fichas
    fichaAzul = new Texture;
    fichaAmarilla = new Texture;
    fichaVerde = new Texture;
    fichaRojo = new Texture;
        //Ficha Azul
    fichaAzul_1 = new Sprite;
    fichaAzul_2 = new Sprite;
    fichaAzul_3 = new Sprite;
    fichaAzul_4 = new Sprite;

        //Ficha Rojo
    fichaRojo_1 = new Sprite;
    fichaRojo_2 = new Sprite;
    fichaRojo_3 = new Sprite;
    fichaRojo_4 = new Sprite;

        //Ficha Verde
    fichaVerde_1 = new Sprite;
    fichaVerde_2 = new Sprite;
    fichaVerde_3 = new Sprite;
    fichaVerde_4 = new Sprite;

        //Ficha Amarilla
    fichaAmarilla_1 = new Sprite;
    fichaAmarilla_2 = new Sprite;
    fichaAmarilla_3 = new Sprite;
    fichaAmarilla_4 = new Sprite;


    //Cargamos el archivo de textura
        //Tablero
    tablero->loadFromFile("Texturas/tablero.jpg");
    tablero_fondo->setTexture(*tablero);
        //Ficha
    fichaAzul->loadFromFile("Texturas/fichaAzul.png");
    fichaVerde->loadFromFile("Texturas/fichaVerde.png");
    fichaRojo->loadFromFile("Texturas/fichaRojo.png");
    fichaAmarilla->loadFromFile("Texturas/fichaAmarilla.png");
    //Posiciones
        //Ficha Azul
    float xf1=130,yf1=50;
    fichaAzul_1->setTexture(*fichaAzul);
    fichaAzul_1->setPosition(xf1,yf1);
            //Ficha 2
    fichaAzul_2->setTexture(*fichaAzul);
    fichaAzul_2->setPosition(230,50);
            //Ficha 2
    fichaAzul_3->setTexture(*fichaAzul);
    fichaAzul_3->setPosition(230,150);
            //Ficha 2
    fichaAzul_4->setTexture(*fichaAzul);
    fichaAzul_4->setPosition(130,150);
    
        //Ficha Verde
    fichaVerde_1->setTexture(*fichaVerde);
    fichaVerde_1->setPosition(520,500);
    //Ficha 2
    fichaVerde_2->setTexture(*fichaVerde);
    fichaVerde_2->setPosition(620,500);
    //Ficha 2
    fichaVerde_3->setTexture(*fichaVerde);
    fichaVerde_3->setPosition(520,400);
    //Ficha 2
    fichaVerde_4->setTexture(*fichaVerde);
    fichaVerde_4->setPosition(620,400);

        //Ficha Rojo
    fichaRojo_1->setTexture(*fichaRojo);
    fichaRojo_1->setPosition(130,500);
    //Ficha 2
    fichaRojo_2->setTexture(*fichaRojo);
    fichaRojo_2->setPosition(230,500);
    //Ficha 2
    fichaRojo_3->setTexture(*fichaRojo);
    fichaRojo_3->setPosition(230,400);
    //Ficha 2
    fichaRojo_4->setTexture(*fichaRojo);
    fichaRojo_4->setPosition(130,400);
    
        //Ficha Amarilla
    fichaAmarilla_1->setTexture(*fichaAmarilla);
    fichaAmarilla_1->setPosition(520,50);
    //Ficha 2
    fichaAmarilla_2->setTexture(*fichaAmarilla);
    fichaAmarilla_2->setPosition(620,50);
    //Ficha 2
    fichaAmarilla_3->setTexture(*fichaAmarilla);
    fichaAmarilla_3->setPosition(620,150);
    //Ficha 2
    fichaAmarilla_4->setTexture(*fichaAmarilla);
    fichaAmarilla_4->setPosition(520,150);


    game_loop();

}

void juego::draw_game() {

    ventana_juego->clear();

    //Tablero
    ventana_juego->draw(*tablero_fondo);

    //fichas

    if (juego::getNJugadores()==2){
        dibujarAzul();
        dibujarAmarilla();
    }
    if ( juego::getNJugadores()==3){
        dibujarAzul();
        dibujarAmarilla();
        dibujarRojo();
    }
    if ( juego::getNJugadores()==4){
        dibujarAzul();
        dibujarAmarilla();
        dibujarRojo();
        dibujarVerde();
    }
    //Display
    ventana_juego->display();

    float xf1=130,yf1;
    if (Keyboard::isKeyPressed(Keyboard::Num6)) {
        fichaAzul_1->setPosition(xf1, yf1 = 235);
        if (Keyboard::isKeyPressed(Keyboard::Right))
            fichaAzul_1->setPosition(xf1+=50,yf1);
    }


}

//Establecer funciones dibujar
void juego::dibujarAzul(){
    ventana_juego->draw(*fichaAzul_1);
    ventana_juego->draw(*fichaAzul_2);
    ventana_juego->draw(*fichaAzul_3);
    ventana_juego->draw(*fichaAzul_4);
}

void juego::dibujarAmarilla() {
    ventana_juego->draw(*fichaAmarilla_1);
    ventana_juego->draw(*fichaAmarilla_2);
    ventana_juego->draw(*fichaAmarilla_3);
    ventana_juego->draw(*fichaAmarilla_4);
}

void juego::dibujarRojo() {
    ventana_juego->draw(*fichaRojo_1);
    ventana_juego->draw(*fichaRojo_2);
    ventana_juego->draw(*fichaRojo_3);
    ventana_juego->draw(*fichaRojo_4);
}

void juego::dibujarVerde() {
    ventana_juego->draw(*fichaVerde_1);
    ventana_juego->draw(*fichaVerde_2);
    ventana_juego->draw(*fichaVerde_3);
    ventana_juego->draw(*fichaVerde_4);
}

//Loop
void juego::game_loop() {

    while (ventana_juego->isOpen()) {

        Event event;
        while (ventana_juego->pollEvent(event)) {
            draw_game();
            if (event.type == Event::Closed)
                ventana_juego->close();
        }
    }
}

int juego::getNJugadores() const {
    return N_Jugadores;
}


