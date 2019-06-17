#include "Ludo.hpp"

bool GetSpriteWin(const sf::Sprite* selected, sf::RenderWindow *ventana) {
    sf::IntRect rect(selected->getPosition().x, selected->getPosition().y,
                     selected->getGlobalBounds().width, selected->getGlobalBounds().height);
    return (rect.contains(sf::Mouse::getPosition()) && (sf::Mouse::isButtonPressed(sf::Mouse::Left)));
}

Ludo::Ludo() {
    ventana_juego = new sf::RenderWindow;
    ventana_juego->create(sf::VideoMode(800,600,32), "Ludo",
            sf::Style::Fullscreen);
    ventana_juego->setVerticalSyncEnabled(true);

}

void Ludo::inicio() {


}

Ludo::~Ludo() {}