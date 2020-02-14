#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Enemy : public GameObject

{
public:

	Enemy();
	Enemy(sf::RenderWindow* window);
	~Enemy();

	void update(float dt);

private:

	sf::RenderWindow* win;

	float enemySpeedX;
	float enemySpeedY;
};