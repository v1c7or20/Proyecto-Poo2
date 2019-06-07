//
// Created by Renzo on 2/06/2019.
//

#include "dibujos.h"
#include "Jugador.h"
#include "recorrido.h"
dibujos::dibujos(int res_x, int res_y, string titulo, int N_Jugadores)  {

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

    //Cargamos el archivo de textura
    //Tablero
    tablero->loadFromFile("Texturas/tablero.jpg");
    tablero_fondo->setTexture(*tablero);
    //Ficha
    fichaAzul->loadFromFile("Texturas/fichaAzul.png");
    fichaVerde->loadFromFile("Texturas/fichaVerde.png");
    fichaRojo->loadFromFile("Texturas/fichaRojo.png");
    fichaAmarilla->loadFromFile("Texturas/fichaAmarilla.png");


        //Ficha Azul
    fichasAzules=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasAzules[i]= new Sprite;
    }
    for (int i = 0; i < 4; i++) {
        fichasAzules[i]->setTexture(*fichaAzul);
    }

        //Ficha Rojo
    fichasRojas=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasRojas[i]= new Sprite;
    }
    for (int i = 0; i < 4; i++) {
        fichasRojas[i]->setTexture(*fichaRojo);
    }

        //Ficha Verde
    fichasVerdes=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasVerdes[i]= new Sprite;
    }
    for (int i = 0; i < 4; i++) {
        fichasVerdes[i]->setTexture(*fichaVerde);
    };

        //Ficha Amarilla
    fichasAmarillas=new Sprite*[4];
    for (int i = 0; i < 4; i++) {
        fichasAmarillas[i]= new Sprite;
    }
    for (int i = 0; i < 4; i++) {
        fichasAmarillas[i]->setTexture(*fichaAmarilla);
    }


    //Posiciones
        //Ficha Azul
    float xf1=130,yf1=50;
    fichasAzules[0]->setPosition(xf1,yf1);
            //Ficha 2
    fichasAzules[1]->setPosition(230,50);
            //Ficha 2
    fichasAzules[2]->setPosition(230,150);
            //Ficha 2
    fichasAzules[3]->setPosition(130,150);
    
        //Ficha Verde
    fichasVerdes[0]->setPosition(520,500);
    //Ficha 2
    fichasVerdes[1]->setPosition(620,500);
    //Ficha 2
    fichasVerdes[2]->setPosition(520,400);
    //Ficha 2
    fichasVerdes[3]->setPosition(620,400);

        //Ficha Rojo
    fichasRojas[0]->setPosition(130,500);
    //Ficha 2
    fichasRojas[1]->setPosition(230,500);
    //Ficha 2
    fichasRojas[2]->setPosition(230,400);
    //Ficha 2
    fichasRojas[3]->setPosition(130,400);
    
        //Ficha Amarilla
    fichasAmarillas[0]->setPosition(520,50);
    //Ficha 2
    fichasAmarillas[1]->setPosition(620,50);
    //Ficha 2
    fichasAmarillas[2]->setPosition(620,150);
    //Ficha 2
    fichasAmarillas[3]->setPosition(520,150);


    game_loop();

}

void dibujos::draw_game() {
    ventana_juego->clear();

    //Tablero
    ventana_juego->draw(*tablero_fondo);

    //fichas

    if (dibujos::getNJugadores()==2){
        dibujarAzul();
        dibujarAmarilla();

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

    float xf1=130,yf1;
    if (Keyboard::isKeyPressed(Keyboard::Num6)) {
        fichasAzules[0]->setPosition(xf1, yf1 = 235);
    if (Keyboard::isKeyPressed(Keyboard::Right))
        fichasAzules[0]->setPosition(xf1+=40,yf1);
    }


}

//Establecer funciones dibujar
void dibujos::dibujarAzul(){
    ventana_juego->draw(*fichasAzules[0]);
    ventana_juego->draw(*fichasAzules[1]);
    ventana_juego->draw(*fichasAzules[2]);
    ventana_juego->draw(*fichasAzules[3]);
}

void dibujos::dibujarAmarilla() {
    ventana_juego->draw(*fichasAmarillas[0]);
    ventana_juego->draw(*fichasAmarillas[1]);
    ventana_juego->draw(*fichasAmarillas[2]);
    ventana_juego->draw(*fichasAmarillas[3]);
}

void dibujos::dibujarRojo() {
    ventana_juego->draw(*fichasRojas[0]);
    ventana_juego->draw(*fichasRojas[1]);
    ventana_juego->draw(*fichasRojas[2]);
    ventana_juego->draw(*fichasRojas[3]);
}

void dibujos::dibujarVerde() {
    ventana_juego->draw(*fichasVerdes[0]);
    ventana_juego->draw(*fichasVerdes[1]);
    ventana_juego->draw(*fichasVerdes[2]);
    ventana_juego->draw(*fichasVerdes[3]);
}

//Loop
void dibujos::game_loop() {
    recorrido *recorridoJuego= new recorrido();
    Jugador **jugadores = new Jugador*[4];

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
auto dibujos::getPosition(Sprite **fichas,int num) {
    num=-1;
    return fichas[num]->getPosition().x;
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
