//
// Created by Usuario on 22/05/2019.
//

#include "ficha.h"


ficha::ficha(unsigned int posIni,unsigned int posAct, unsigned int posFinal)
        : pos_ini(posIni),
        pos_act(posAct),
        pos_final(posFinal) {}

void ficha::esjugable() {
    if (pos_final == pos_final ){
        jugable=false;
    }
    else jugable=true;
}

void ficha::moverse() {
    int pasos;
    if (jugable){
        pasos=rand()%6; //falta incluir la libreria
        pos_act=pos_act+pasos;
    }
    if(pos_act>56){
        pos_act=pos_act%56;
    }
}
