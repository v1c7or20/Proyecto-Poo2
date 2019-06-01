//
// Created by Usuario on 22/05/2019.
//

#include "ficha.h"


ficha::ficha(){
    estado = 'C';
    casilla = new casillacasa(1,2,true,'d');
}

void ficha::moverse(dado* dado) {
    dado->lanzar();

}