#ifndef FICHA_HPP
#define FICHA_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


using namespace sf;
using namespace std;

class Ficha {
private:
    char color;
    Texture *ficha_img;
    Sprite * ficha;
    int id;
    char estado;
    int tab_pos=-1;
    /*C casa J jugando F final S segura  */
public:

	Ficha(char color, int id);

    Sprite *getFichasp() const;

    void setEstado(char estado);

    int getTabPos() const;

    void setTabPos(int tabPos);

    char getEstado() const;

    int getId() const;

    ~Ficha();
	
};

#endif