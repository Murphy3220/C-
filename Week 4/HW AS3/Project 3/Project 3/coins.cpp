#include "coins.h"

using namespace std;

Coins::Coins()//Default Constructor
{
	OnHand = 0;
	Value = 0;
	Name = "Coin";
}
Coins::Coins(int Amount,int Value1, string Label)//Overloaded Constructor
{
	OnHand = Amount;
	Value = Value1;
	Name = Label;
}
