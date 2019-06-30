#include "Juego.hpp"
#include <SFML/Audio.hpp>


Juego::Juego(int N_Jugadores){




    sp_jugador = new sf::Sprite;
    sp_jugador->setPosition(715, 165);

    //Turnos
    turno=0;
    terminaron= new Jugador*[N_Jugadores];
    musica.openFromFile("Musica/ludo.wav");
    musica.setLoop(true);
    musica.play();
    this->N_Jugadores=N_Jugadores;
    dado = new Dado();
    tablero = new Tablero();
    jugadores = new Jugador*[N_Jugadores];
    switch (N_Jugadores){
        case 2:
            jugadores[0] = new Jugador('B');
            jugadores[1] = new Jugador('G');
            break;
        case 3:
            jugadores[0] = new Jugador('B');
            jugadores[1] = new Jugador('Y');
            jugadores[2] = new Jugador('G');
            break;
        case 4:
            jugadores[0] = new Jugador('B');
            jugadores[1] = new Jugador('Y');
            jugadores[2] = new Jugador('G');
            jugadores[3] = new Jugador('R');
            break;
        default:
            break;
    }
    sp_jugador->setTexture(*jugadores[0]->getImgJugador());

}

void Juego::nexturn() {
    int actual = turno%N_Jugadores;
    jugadores[actual]->setLast(dado->lanzar());
    comprobar_repeticiones(jugadores[actual]);

}

void Juego::gamephase(int id){
    int actual = turno%N_Jugadores;
    Ficha *seleccionada = jugadores[actual]->getFichas()[id];
    if(jugadores[actual]->isCanplay()){
        if(comprobar_enjuego(seleccionada))
            mover_ficha(jugadores[actual],id);
        if(comprobar_casa(seleccionada) and jugadores[actual]->getLast()==6){
            seleccionada->setTabPos(0);
            seleccionada->getFichasp()->setPosition(jugadores[actual]->getRecorrido()->getRecorrido()[0][0],
                                                jugadores[actual]->getRecorrido()->getRecorrido()[0][1]);
            seleccionada->setEstado('J');
        }
    }
}

void Juego::middlephase(int id){
    int actual = turno%N_Jugadores,
    comparado = actual,
    x = jugadores[actual]->getFichas()[id]->getFichasp()->getPosition().x,
    y = jugadores[actual]->getFichas()[id]->getFichasp()->getPosition().y;
    for (int i = 0; i < N_Jugadores-1; i++) {
        comparado++;
        for (int j = 0; j <4 ; j++) {
            if(x== jugadores[comparado%4]->getFichas()[j]->getFichasp()->getPosition().x
            and y == jugadores[comparado%4]->getFichas()[j]->getFichasp()->getPosition().y){
                if(jugadores[comparado%4]->getFichas()[j]->getEstado() == 'J'){
                    jugadores[comparado%4]->getFichas()[j]->setTabPos(-1);
                    jugadores[comparado%4]->getFichas()[j]->setEstado('C');
                    jugadores[comparado%4]->getFichas()[j]->getFichasp()->setPosition(jugadores[comparado%4]->getPosIniciales()[j][0]);
                }
            }
        }
    }
}

void Juego::endphase(){
    int actual = turno%N_Jugadores,
    contador = 0;
    for (int i = 0; i < 4; i++) {
        if(jugadores[actual]->getFichas()[i]->getEstado() == 'F')
            contador++;
    }
    if(contador == 4 and N_terminaron <N_Jugadores){
        terminaron[N_terminaron] = jugadores[actual];
        N_terminaron++;
    }
    int act_ima = (actual+1)%N_Jugadores;
    if(jugadores[actual]->getLast() == 6){
        sp_jugador->setTexture(*jugadores[actual]->getImgJugador());
    }
    else
        sp_jugador->setTexture(*jugadores[act_ima]->getImgJugador());

}

bool Juego::comprobar_enjuego(Ficha *ficha){
    if (ficha->getEstado()=='J' or ficha->getEstado()=='S')
        return true;
    else return false;
}
bool Juego::comprobar_casa(Ficha *ficha){
    if (ficha->getEstado()=='C')
        return true;
    else return false;
}
bool Juego::comprobar_segura(Ficha *ficha){
    if (ficha->getEstado()=='S')
        return true;
    else return false;
}
bool Juego::comprobar_final(Ficha *ficha){
    if (ficha->getEstado()=='F')
        return true;
    else return false;
}

void Juego::aumenta() {
    turno++;
}

void Juego::comprobar_repeticiones(Jugador *jugador) {
    if(jugador->getLast() == 6){
        jugador->setRepeticion(jugador->getRepeticion()+1);
        if(jugador->getRepeticion()==3){
            jugador->setCanplay(false);
            jugador->setLast(0);
        }
    }
    if(jugador->getLast() != 6){
        jugador->setRepeticion(0);
        jugador->setCanplay(true);
    }
}

void Juego::mover_ficha(Jugador *jugador,int id_ficha){
    int last = jugador->getLast();
    Ficha *ficha_mover = jugador->getFichas()[id_ficha];
    if (ficha_mover->getTabPos()+last<60) {
        ficha_mover->setTabPos(ficha_mover->getTabPos() + last);
        int posactual = ficha_mover->getTabPos();
        if(posactual == 5 or posactual == 19 or posactual == 33 or posactual ==  47 )
            posactual++;

        ficha_mover->getFichasp()->setPosition(jugador->getRecorrido()->getRecorrido()[posactual][0],
                                               jugador->getRecorrido()->getRecorrido()[posactual][1]);
    }
    else{
        ficha_mover->setTabPos(60);
        ficha_mover->getFichasp()->setPosition(jugador->getRecorrido()->getRecorrido()[60][0],
                                               jugador->getRecorrido()->getRecorrido()[60][1]);
        ficha_mover->setEstado('F');

    }

}

Tablero *Juego::getTablero() const {
    return tablero;
}

Dado *Juego::getDado() const {
    return dado;
}

Jugador **Juego::getJugadores() const {
    return jugadores;
}

int Juego::getTurno() const {
    return turno;
}

sf::Sprite *Juego::getImgturno() const {
    return sp_jugador;
};
