#include <iostream>
#include "funciones.cpp"
#include "Ludo.hpp"
using namespace std;

int main(){
    srand(time(nullptr));
    int N_jugadores = Numero_jugadores();
    Ludo* ludo=new Ludo(N_jugadores);
    ludo->inicio();
    return 0;
}