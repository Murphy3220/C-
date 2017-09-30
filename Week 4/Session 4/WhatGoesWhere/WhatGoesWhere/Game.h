#pragma once
#include "Dice.h"

class Game
{
private:
	Dice Die[2];

public:
	Game();

	void Roll();
	void Show();
};