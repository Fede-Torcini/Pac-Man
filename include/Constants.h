#pragma once

namespace pacman
{
namespace constants
{
	const float SPRITES_HEIGHT = 32.0f;
	const float SPRITES_WIDTH = 32.0f;

	const int WINDOW_HEIGHT = 800;
	const int WINDOW_WIDTH = 1000;
	const std::string WINDOW_NAME = "PAC-MAN";

	const sf::Vector2f MAP_SCALE{ 3.0f, 3.0f };
	const sf::Vector2f MAP_SIZE{ 224.0f, 256.0f };
	const std::string MAP_TEXTURE_DIRECTORY = "src/resources/map.png";

	const float PLAYER_SPEED = 2.0f;
	const std::string PLAYER_TEXTURE_DIRECTORY = "src/resources/snake_skin.png";

	const std::string RAT_TEXTURE_DIRECTORY = "src/resources/rat.png";

	const int SCORE_TEXT_SIZE = 300;
	const std::string TEXT_FONT_DIR = "src/resources/sansation.ttf";
}
}