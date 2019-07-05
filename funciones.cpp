//
// Created by Usuario on 04/07/2019.
//

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

int Numero_jugadores(){
    //Musica Inicial
    sf::Music musica;
    musica.openFromFile("Musica/menu.wav");
    musica.setLoop(true);
    musica.play();
    //Pantalla de Inicio
    int N_jugadores=0;
    sf::RenderWindow *ventana_juego;
    ventana_juego = new RenderWindow(VideoMode(800, 600),"LUDO");
    ventana_juego->setFramerateLimit(60);
    auto *inicio_img =new sf::Texture();
    inicio_img->loadFromFile("Texturas/inicio.png");
    auto *button2_img = new Texture();
    button2_img->loadFromFile("Texturas/j2.png");
    auto *button3_img= new Texture();
    button3_img->loadFromFile("Texturas/j3.png");
    auto *button4_img= new Texture();
    button4_img->loadFromFile("Texturas/j4.png");
    auto *button2 = new Sprite(*button2_img);
    button2->setPosition(217,329);
    auto *button3 = new Sprite(*button3_img);
    button3->setPosition(367,329);
    auto *button4 = new Sprite(*button4_img);
    button4->setPosition(517,329);
    auto *inicio = new Sprite(*inicio_img);
    while (ventana_juego->isOpen()){
        Event event;
        while (ventana_juego->pollEvent(event)) {
            ventana_juego->clear();
            ventana_juego->draw(*inicio);
            ventana_juego->draw(*button2);
            ventana_juego->draw(*button3);
            ventana_juego->draw(*button4);
            ventana_juego->display();
            if(sf::Mouse::isButtonPressed(Mouse::Left)){
                int xmo = Mouse::getPosition(*ventana_juego).x;
                int ymo = Mouse::getPosition(*ventana_juego).y;
                if(button2->getGlobalBounds().contains(xmo,ymo)) {
                    N_jugadores = 2;
                    ventana_juego->close();
                }
                if (button3->getGlobalBounds().contains(xmo,ymo)){
                    N_jugadores=3;
                    ventana_juego->close();
                }
                if(button4->getGlobalBounds().contains(xmo,ymo)){
                    N_jugadores=4;
                    ventana_juego->close();
                }
            }
            if (event.type == Event::Closed)
                ventana_juego->close();
        }
    }
    return N_jugadores;
}