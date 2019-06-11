//
// Created by Usuario on 6/06/2019.
//
#include <iostream>
#include "juego.h"

juego::juego(int num_jugadores):numero_jugadores(num_jugadores) {
    dibujo=new dibujos(800,600,"Ludo",num_jugadores);
    jugadores = new Jugador*[num_jugadores];
    recorridos=new recorrido();
    dados = new dado();
   if(num_jugadores==2){
       jugadores[0]=new Jugador(dibujo,'B',recorridos);
       jugadores[1]=new Jugador(dibujo,'G',recorridos);
    }
    if(num_jugadores==3){
        jugadores[0]=new Jugador(dibujo,'B',recorridos);
        jugadores[1]=new Jugador(dibujo,'Y',recorridos);
        jugadores[2]=new Jugador(dibujo,'R',recorridos);
    }
    if(num_jugadores==4){
        jugadores[0]=new Jugador(dibujo,'B',recorridos);
        jugadores[1]=new Jugador(dibujo,'Y',recorridos);
        jugadores[2]=new Jugador(dibujo,'R',recorridos);
        jugadores[2]=new Jugador(dibujo,'G',recorridos);
    }
}

// verica que no se en repitan fichas en una casilla

bool juego::comprobarcasillas() {
    for (int i = 0; i <3 ; i++) {
        int pos_x = jugadores[i]->getFichas()[i]->getPosition().x;
        int pos_y = jugadores[i]->getFichas()[i]->getPosition().y;
        for (int j = 1; j < numero_jugadores ; j++) {
            int pos_x2=jugadores[j]->getFichas()[j]->getPosition().x;
            int pos_y2=jugadores[j]->getFichas()[j]->getPosition().y;
            if(pos_x==pos_x2 and pos_y==pos_y2) {
                return false;
            }
        }
        return true;
    }
}

bool juego::comprobarjugadores() {
    return false;
}

void juego::next_turn() {
    int selected, actual;
    std::cin>>selected;
    actual = turno%4;
    jugadores[actual]->lanzar_dado(dados,selected);
    comprobar_repeticiones(jugadores[actual]);
    if(jugadores[actual]->isCanplay()){
        if(jugadores[actual]->getLast()!=6) {
            turno += 1;
            jugadores[actual]->dibuja_avance(selected);
            jugadores[actual]->setRepeticion(0);
        }
        else{
            jugadores[actual]->dibuja_avance(selected);
            jugadores[actual]->setRepeticion(jugadores[actual]->getRepeticion()+1);
        }
    }
    else turno +=1;

}



bool juego::comprobar_repeticiones(Jugador *jugador) {
    if(jugador->getRepeticion()==3){
        jugador->setRepeticion(0);
        jugador->setCanplay(false);
    }
    if(!(jugador->isCanplay())){
        jugador->setCanplay(true);
    }
}
