#include <iostream>
#include "Dice.h"

using namespace std;

class Game
{
private:
	Dice *Die[2];// pointers to two die!

public:
	Game();// default constructor

	~Game();  // destructor
};

Game::Game()
{
	int i;

	for(i=0; i<sizeof(Die)/sizeof(Die[0]); i++)
	{
		// allocate each dice on the heap
		// reason for doing this.. the constructor can have arguments!
		Die[i] = new Dice();
	}
}

// this is here to automatically reclaim the storage from the heap
Game::~Game()  // destructor
{
	int i;

	for(i=0; i<sizeof(Die)/sizeof(Die[0]); i++)
	{
		// deallocate each dice on the heap
		delete Die[i];
	}
}

int main()
{
	Game Test;

	return 0;
}