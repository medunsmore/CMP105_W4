#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::Enemy(sf::RenderWindow* window)
{
	win = window;
	enemySpeedX = 200.f;
	enemySpeedY = 200.f;
}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	
	sf::Vector2u pos = win->getSize();
	sf::Vector2f enemPos = getPosition();

	// move the enemy
	move(enemySpeedX * dt, enemySpeedY * dt);

	// if it hit the side of the window change the direction
	if (enemPos.x > (pos.x))
	{
		enemySpeedX = -enemySpeedX;
		setPosition(pos.x, getPosition().y);
	}
	else if (enemPos.y>(pos.y))
	{
		enemySpeedY = -enemySpeedY;
		setPosition(getPosition().x,pos.y);
	}
	else if (enemPos.x < 0)
	{
		enemySpeedX = 200.f;
		setPosition(0, getPosition().y);
	}
	else if (enemPos.y < 0)
	{
		enemySpeedY = 200.f;
		setPosition(getPosition().x, 0);
	
	}
	

}
