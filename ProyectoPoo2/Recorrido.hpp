#ifndef RECORRIDO_HPP
#define RECORRIDO_HPP

class Recorrido {
private:
    int **recorrido;
    char color;
public:
    Recorrido(char color);

    int **getRecorrido() const;
};


#endif
