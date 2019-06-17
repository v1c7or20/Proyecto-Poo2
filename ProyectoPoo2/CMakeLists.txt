cmake_minimum_required(VERSION 3.13)
project(ProyectoPoo2)

set(CMAKE_CXX_STANDARD 14)


add_executable(ProyectoPoo2
        Dado.cpp
        Recorrido.cpp
        Ficha.cpp
        Tablero.cpp
        Jugador.cpp
        Juego.cpp
        Ludo.cpp main.cpp)

target_link_libraries (ProyectoPoo2 sfml-graphics sfml-window sfml-system)