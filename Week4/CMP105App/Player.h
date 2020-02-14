#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Player : public GameObject

{
public:

	Player();
	~Player();
	void handleInput(float dt);

	float speed;


};