#ifndef DiceH
#define DiceH

#include "Random.h"

class Dice
{
private:
	int Value;
	Random Sequence;

public:
	Dice();

	void Draw();
	int Get();
	void Roll();
	void Set(int DiceValue);
};


#endif
