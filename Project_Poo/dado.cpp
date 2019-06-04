//
// Created by Usuario on 31/05/2019.
//

#include <ctime>
#include <cstdlib>
#include "dado.h"

dado::dado() {
    srand(time(nullptr));
}

int dado::lanzar() {
    return rand()%6+1;
}
