#pragma once

#include "State.h"

#include "Player.h"
#include <stack>

namespace pacman
{
using PlayerPtr = std::unique_ptr<Player>;

class Game
{
public:
    Game();
    void initVariables();
    void initWindow();
    void inintStates();
    void updateTime();
    void update();
    void render();
    bool running() const;
    void pollEvents();

private:
    
    std::stack<std::unique_ptr<State>> m_states;

    std::shared_ptr<sf::RenderWindow> m_window;
    sf::Event m_event;
    sf::VideoMode m_videoMode;

    float m_deltaTime;
    sf::Clock m_clock;

    PlayerPtr m_player;
    RenderShape m_map;
};
} //namespace

