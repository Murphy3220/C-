#ifndef CoinsH
#define CoinsH
#include <string>

using namespace std;

class Coins
{
public:
	int OnHand;
	float Value;//Value of the coin
	string Name;//Name of the coin

	Coins();//default constructor
	Coins(int Amount, int Value1, string Label);//Overloaded Constructor
};

#endif