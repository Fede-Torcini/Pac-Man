#pragma once

#include <SFML/Graphics.hpp>

#include "Player.h"

namespace pacman
{
using PlayerPtr = std::unique_ptr<Player>;

class Game
{
public:
    Game();
    void initVariables();
    void initWindow();
    void update();
    void render();
    bool running() const;
    void pollEvents();

private:
    
    std::unique_ptr<sf::RenderWindow> m_window;
    sf::Event m_event;
    sf::VideoMode m_videoMode;

    PlayerPtr m_player = std::make_unique<Player>();
    RenderShape m_map;
};
} //namespace

