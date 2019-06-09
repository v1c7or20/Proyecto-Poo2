cmake_minimum_required(VERSION 3.13)
project(SFMLApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(SFMLApp main.cpp dibujos.cpp recorrido.cpp Jugador.cpp dado.cpp juego.cpp juego.h)
target_link_libraries (SFMLApp sfml-graphics sfml-window sfml-system)