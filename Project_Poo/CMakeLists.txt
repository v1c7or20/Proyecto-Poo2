cmake_minimum_required(VERSION 3.14)
project(Project_Poo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project_Poo main.cpp Tablero.cpp dado.cpp casilla.cpp ficha.cpp juego.cpp Jugador.cpp)