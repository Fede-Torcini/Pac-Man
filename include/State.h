#pragma once

#include <vector>

#include <SFML/Graphics.hpp>

namespace pacman
{
class State
{
private:
	std::weak_ptr <sf::RenderWindow> window;
	std::vector<sf::Texture> Textures;
public:
	State();
	virtual ~State();

	virtual void update(float const& deltaTime) = 0;
	virtual void render(std::weak_ptr<sf::RenderTarget> target) = 0;
};
}
