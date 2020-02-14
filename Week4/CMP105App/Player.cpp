#include "Player.h"
#include "Framework/Input.h"



Player::Player()
{
	speed = 0;
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	//Up
	if (input->isKeyDown(sf::Keyboard::W))
	{
		speed = -200.f;
		move(0, speed * dt);
	}
	//down
	else if (input->isKeyDown(sf::Keyboard::S))
	{
		speed = 200.f;
		move(0, speed * dt);
	}
	//left
	else if (input->isKeyDown(sf::Keyboard::A))
	{
		speed = -200.f;
		move(speed * dt, 0);
	}
	//right
	else if (input->isKeyDown(sf::Keyboard::D))
	{
		speed = 200.f;
		move(speed * dt, 0);
	}
}
