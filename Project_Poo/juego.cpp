//
// Created by Usuario on 6/06/2019.
//

#include "juego.h"

juego::juego(int num_jugadores):numero_jugadores(num_jugadores) {
    dibujo=new dibujos(800,600,"Ludo",num_jugadores);
    jugadores = new Jugador*[num_jugadores];
    recorridos=new recorrido();
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