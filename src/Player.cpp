#include "Player.h"
#include "Constants.h"

namespace pacman
{

Player::Player()
	: m_position({0,0}), m_render(constants::RAT_TEXTURE_DIRECTORY), m_speed(constants::PLAYER_SPEED)
{
	m_render.setSize({ constants::SPRITES_WIDTH, constants::SPRITES_HEIGHT });
}

void Player::move()
{
	m_position = m_position + (m_velocity * m_speed);
	m_render.setPosition(m_position);
}

void Player::setVelocity(sf::Vector2f const& movement)
{
	m_velocity = movement;
}

RenderShape& Player::draw()
{
	return m_render;
}

bool Player::intersects(RenderShape const& other) const
{
	return m_render.intersects(other);
}

bool Player::alive() const
{
	return true;
}

} //namespace