//
// Created by Renzo on 28/05/2019.
//

#include "Tablero.h"

Tablero::Tablero() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <4 ; j++) {
            casas[i][j] = new casillacasa(i,j,true,i);
        }
    }
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j <6 ; j++) {
            if (i==1 or i==4 or i==7 or i==11){

            }
            else{
                recorrido[i][j] = new casillarecorrido(i,j,true,i);
            }
        }
    }
}

void Tablero::mostrar() {

}
