#include <SFML/Graphics.hpp>
#include <iostream>
#include "juego.h"

using namespace sf;
using namespace std;

int main()
{
    int N_Jugadores=0;
    do{
        cout << "Ingrese numero de jugadores: " <<endl;
        cin >> N_Jugadores;
        if (N_Jugadores>4 or N_Jugadores==1)
            cout << "El numero de jugadores debe ser entre 2 y 4."<<endl;

    }while (N_Jugadores>4 or N_Jugadores==1);
    juego * partida1 =  new juego(800,600,"Ludo",N_Jugadores);

    return 0;
}