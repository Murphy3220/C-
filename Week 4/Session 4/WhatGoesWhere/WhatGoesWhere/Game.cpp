#include "Game.h"

Game::Game()
{
	Roll();
}

void Game::Roll()
{
	int i;

	for(i=0; i<sizeof(Die)/sizeof(Die[0]); i++)
		Die[i].Roll();
}

void Game::Show()
{
	int i;

	for(i=0; i<sizeof(Die)/sizeof(Die[0]); i++)
		Die[i].Draw();
}
