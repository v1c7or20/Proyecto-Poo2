//
// Created by Usuario on 22/05/2019.
//

#ifndef PROJECT_POO_FICHA_H
#define PROJECT_POO_FICHA_H


class ficha {
protected:
    const unsigned int pos_ini;
    unsigned int pos_act;
    const unsigned int pos_final;
    bool jugable= true;
public:
    ficha(unsigned int posIni, unsigned int posAct, unsigned int posFinal, bool jugable);
    void moverse();
    void esjugable();
    bool comprueba();

};


#endif //PROJECT_POO_FICHA_H
