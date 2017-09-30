#include <iostream>
//#include "Random.h"
//#include "Dice.h"
#include "Game.h"

using namespace std;

int main()
{
	//Dice Die;
	Game Test;

	int i;

	for(i=0; i<200; i++)
	{
		Test.Roll();
		Test.Show();
		cout << endl;

		//Die.Draw();
		//cout << endl;
		//Die.Roll();
	}


	//int n = Number.CurrentValue;
	//Number.Hidden; // this is private

	return 0;
}