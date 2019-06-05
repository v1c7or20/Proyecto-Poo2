//
// Created by Usuario on 5/06/2019.
//

#include "recorrido.h"

int **recorrido::getRecorridoazul() const {
    return recorridoazul;
}

int **recorrido::getRecorridoamarillo() const {
    return recorridoamarillo;
}

int **recorrido::getRecorridoverde() const {
    return recorridoverde;
}

int **recorrido::getRecorridorojo() const {
    return recorridorojo;
}

recorrido::recorrido() {
    recorridoazul=new int*[62];
    for (int i = 0; i <62 ; i++) {
        *recorridoazul=new int [2];}
    int x=130;
    int y=235;
    recorridoazul[1][0]=x;
    recorridoazul[1][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            x+=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=6 and i<12){
            y-=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=12 and i<14){
            x+=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;

        }
        if(i>=14 and i<20){
            y+=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=20 and i<26){
            x+=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=26 and i<28){
            y+=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=28 and i<34){
            x-=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=34 and i<40){
            y+=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=40 and i<42){
            x-=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=42 and i<48){
            y-=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if(i>=48 and i<54){
            x-=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
        if (i==54) {
            y -= 40;
            recorridoazul[i][0] = x;
            recorridoazul[i][1] = y;

        }
        if(i>=55 and i<=60){
            x+=40;
            recorridoazul[i][0]=x;
            recorridoazul[i][1]=y;
        }
    }
    recorridoamarillo = new int*[62];
    for (int i = 0; i <62 ; i++) {
        *recorridoamarillo=new int [2];}
    x=410;
    y=35;
    recorridoamarillo[1][0]=x;
    recorridoamarillo[1][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            y+=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=6 and i<12){
            x+=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=12 and i<14){
            y+=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=14 and i<20){
            x-=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=20 and i<26){
            y+=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=26 and i<28){
            x-=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=28 and i<34){
            y-=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=34 and i<40){
            x-=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=40 and i<42){
            y-=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=42 and i<48){
            x+=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if(i>=48 and i<54){
            y-=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
        if (i==54) {
            x+= 40;
            recorridoamarillo[i][0] = x;
            recorridoamarillo[i][1] = y;

        }
        if(i>=55 and i<=60){
            y+=40;
            recorridoamarillo[i][0]=x;
            recorridoamarillo[i][1]=y;
        }
    }
    recorridorojo = new int*[62];
    for (int i = 0; i <62 ; i++) {
        *recorridorojo=new int [2];}
    x=330;
    y=515;
    recorridorojo[1][0]=x;
    recorridorojo[1][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            y-=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=6 and i<12){
            x-=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=12 and i<14){
            y-=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=14 and i<20){
            x+=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=20 and i<26){
            y-=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=26 and i<28){
            x+=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=28 and i<34){
            y+=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=34 and i<40){
            x+=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=40 and i<42){
            y+=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=42 and i<48){
            x-=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if(i>=48 and i<54){
            y+=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
        if (i==54) {
            x-= 40;
            recorridorojo[i][0] = x;
            recorridorojo[i][1] = y;

        }
        if(i>=55 and i<=60){
            y-=40;
            recorridorojo[i][0]=x;
            recorridorojo[i][1]=y;
        }
    }
    recorridoverde=new int*[62];
    for (int i = 0; i <62 ; i++) {
        *recorridoverde=new int [2];}
    x=610;
    y=315;
    recorridoverde[1][0]=x;
    recorridoverde[1][1]=y;
    for(int i=1; i<62;i++){
        if(i<6){
            x-=40;
            recorridoverde[i][0]=x;
            recorridoverde[i][1]=y;

            if(i>=6 and i<12){
                y+=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=12 and i<14){
                x-=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;

            }
            if(i>=14 and i<20){
                y-=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=20 and i<26){
                x-=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=26 and i<28){
                y-=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=28 and i<34){
                x+=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=34 and i<40){
                y-=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=40 and i<42){
                x+=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=42 and i<48){
                y+=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if(i>=48 and i<54){
                x+=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
            if (i==54) {
                y += 40;
                recorridoverde[i][0] = x;
                recorridoverde[i][1] = y;

            }
            if(i>=55 and i<=60){
                x-=40;
                recorridoverde[i][0]=x;
                recorridoverde[i][1]=y;
            }
        }
    }}


