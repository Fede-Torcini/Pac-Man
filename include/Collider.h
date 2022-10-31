#pragma once
#include <SFML/System/Vector2.hpp>

namespace pacman
{
class Collider
{
public:
	sf::Vector2f getCenter() const;
	bool collidesWith(Collider const& other) const;

private:
	sf::Vector2f m_position;
	sf::Vector2f m_size;

};
}
