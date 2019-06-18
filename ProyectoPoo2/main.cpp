#include <iostream>
#include "Ludo.hpp"
using namespace std;

int main(){
    srand(time(nullptr));

    Ludo* ludo=new Ludo();
    ludo->inicio();
    return 0;
}