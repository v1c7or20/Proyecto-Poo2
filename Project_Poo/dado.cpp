//
// Created by Usuario on 31/05/2019.
//
#include <time.h>
#include <random>
#include "dado.h"


dado::dado() {
    srand(time(nullptr));
}

dado::~dado() {

}

int dado::lanzar() {
    return rand()%6+1;
}

void dado::dibujar() {

}
