#include <iostream>
#include "Ludo.hpp"
using namespace std;

int main(){
    srand(time(nullptr));

    Ludo* ludo=new Ludo(4);
    ludo->inicio();
    return 0;
}