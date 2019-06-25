#include "Recorrido.hpp"

/*crea los posibles recorridos de las fichas basado en las coordenadas
  para cada inicio de pieza */

Recorrido::Recorrido(char color) {
    this->color = color;
    recorrido=new int*[61];
    int x;
    int y;
    for (int i = 0; i <62 ; i++) {
        recorrido[i]=new int [2];}
    if (color=='B'){

    x=130;
    y=235;
    recorrido[0][0]=x;
    recorrido[0][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=6 and i<12){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=12 and i<14){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;

        }
        if(i>=14 and i<20){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=20 and i<26){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=26 and i<28){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=28 and i<34){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=34 and i<40){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=40 and i<42){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=42 and i<48){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=48 and i<54){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if (i==54) {
            y -= 40;
            recorrido[i][0] = x;
            recorrido[i][1] = y;

        }
        if(i>=55 and i<=60){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
    }}
    if(color == 'Y'){
    x=413.5;
    y=38.5;
    recorrido[0][0]=x;
    recorrido[0][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=6 and i<12){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=12 and i<14){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=14 and i<20){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=20 and i<26){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=26 and i<28){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=28 and i<34){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=34 and i<40){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=40 and i<42){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=42 and i<48){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=48 and i<54){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if (i==54) {
            x+= 40;
            recorrido[i][0] = x;
            recorrido[i][1] = y;

        }
        if(i>=55 and i<=60){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
    }}
    if (color == 'R'){
    x=332;
    y=514.5;
    recorrido[0][0]=x;
    recorrido[0][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=6 and i<12){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=12 and i<14){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=14 and i<20){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=20 and i<26){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=26 and i<28){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=28 and i<34){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=34 and i<40){
            x+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=40 and i<42){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=42 and i<48){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if(i>=48 and i<54){
            y+=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
        if (i==54) {
            x-= 40;
            recorrido[i][0] = x;
            recorrido[i][1] = y;

        }
        if(i>=55 and i<=60){
            y-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;
        }
    }}
    if(color == 'G'){
    x=614.5;
    y=318;
    recorrido[0][0]=x;
    recorrido[0][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            x-=40;
            recorrido[i][0]=x;
            recorrido[i][1]=y;}

            if(i>=6 and i<12){
                y+=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=12 and i<14){
                x-=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;

            }
            if(i>=14 and i<20){
                y-=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=20 and i<26){
                x-=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=26 and i<28){
                y-=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=28 and i<34){
                x+=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=34 and i<40){
                y-=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=40 and i<42){
                x+=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=42 and i<48){
                y+=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if(i>=48 and i<54){
                x+=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
            if (i==54) {
                y += 40;
                recorrido[i][0] = x;
                recorrido[i][1] = y;

            }
            if(i>=55 and i<=60){
                x-=40;
                recorrido[i][0]=x;
                recorrido[i][1]=y;
            }
        }
    }
}

int **Recorrido::getRecorrido() const {
    return recorrido;
}



