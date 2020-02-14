#include "Level.h"
#include "Player.h"
#include "Enemy.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	playerTexture.loadFromFile("gfx/Mushroom.png");

	player.setTexture(&playerTexture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);
	player.setInput(input);

	enemyTexture.loadFromFile("gfx/Goomba.png");

	enemy = Enemy(window);
	enemy.setTexture(&enemyTexture);
	enemy.setSize(sf::Vector2f(50, 50));
	enemy.setPosition(50, 50);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

}

// Update game objects
void Level::update(float dt)
{
	player.handleInput(dt);
	enemy.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(player);
	window-> draw(enemy);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}