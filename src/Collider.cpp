#include "Collider.h"

namespace pacman
{
sf::Vector2f Collider::getCenter() const
{
	return sf::Vector2f();
}

bool Collider::collidesWith(Collider const& other) const
{
	return false;
}
}
