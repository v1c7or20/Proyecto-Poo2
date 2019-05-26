#include "casilla.cpp"
#include "ficha.cpp"

int main() {
    casilla *c1= new casillainicio (1, 1, false,'r');
    c1->mostrar();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
