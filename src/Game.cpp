#include "Game.h"
#include "Constants.h"

namespace pacman
{

Game::Game()
    : m_videoMode({constants::WINDOW_WIDTH,constants::WINDOW_HEIGHT})
    , m_map(constants::MAP_TEXTURE_DIRECTORY)
{
    this->initVariables();
    this->initWindow();
}


void Game::initVariables()
{
    m_map.setSize({ constants::MAP_SIZE.x, constants::MAP_SIZE.y});
    m_map.setScale({ constants::MAP_SCALE.x,constants::MAP_SCALE.y });
    m_map.setPosition(sf::Vector2f(m_videoMode.width/2 - constants::MAP_SIZE.x/2 * constants::MAP_SCALE.x, m_videoMode.height / 2 - constants::MAP_SIZE.y/2 * constants::MAP_SCALE.y));
}


void Game::initWindow()
{
    m_window = std::make_unique<sf::RenderWindow>(m_videoMode, constants::WINDOW_NAME);

    m_window->setFramerateLimit(60);
}


void Game::update()
{
    this->pollEvents();
    m_player->move();
}


void Game::render()
{
    m_window->clear();

    m_window->draw(m_map);
    m_window->draw(m_player->draw());

    m_window->display();
}


bool Game::running() const
{
    return m_window->isOpen();
}


void Game::pollEvents()
{
    while (m_window->pollEvent(m_event))
    {
        switch (m_event.type)
        {
        case sf::Event::Closed:
            m_window->close();
            break;
        case sf::Event::KeyPressed:
          
            switch (m_event.key.code)
            {
            case sf::Keyboard::W:
                m_player->setVelocity({ 0,-1 });
                break;
            case sf::Keyboard::S:
                m_player->setVelocity({ 0,1 });
                break;
            case sf::Keyboard::A:
                m_player->setVelocity({ -1,0 });
                break;
            case sf::Keyboard::D:
                m_player->setVelocity({ 1,0 });
                break;
            case sf::Keyboard::Escape:
                m_window->close();
                break;
            }
            break;
        } 
    }
}

} //namespace snakegame