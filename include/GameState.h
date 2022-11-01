#pragma once

#include <State.h>

namespace pacman
{
	class GameState : public State
	{
	private:

	public:
		GameState(std::shared_ptr<sf::RenderWindow> window);
		virtual ~GameState();

		void endState();

		virtual void update(float const& deltaTime) = 0;
		virtual void render(std::weak_ptr<sf::RenderTarget> target) = 0;
	};
}