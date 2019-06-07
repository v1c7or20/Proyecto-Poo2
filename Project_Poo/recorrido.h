//
// Created by Usuario on 5/06/2019.
//

#ifndef PROYECTO_POO2_RECORRIDO_H
#define PROYECTO_POO2_RECORRIDO_H


class recorrido {
private:
    int **recorridoazul;
    int **recorridoamarillo;
    int **recorridoverde;
    int **recorridorojo;
public:
    recorrido();

    int **getRecorridoazul() const;

    int **getRecorridoamarillo() const;

    int **getRecorridoverde() const;

    int **getRecorridorojo() const;

};

#endif