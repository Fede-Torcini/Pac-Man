#pragma once

#include <SFML/Graphics.hpp>

#include "RenderShape.h"

namespace pacman
{
class Player
{
public:
    Player();
    void move();
    void setVelocity(sf::Vector2f const& movement);
    RenderShape& draw();
    bool intersects(RenderShape const& other) const;
    bool alive() const;

private:

    float m_speed;
    sf::Vector2f m_position;
    sf::Vector2f m_velocity;
    
    sf::Texture m_texture;
    RenderShape m_render;
};
}//namespace

