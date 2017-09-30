//Ryan Murphy
//C++ Programing
//Assignment 3

//THIS PROGRAM DOES NOT WORK!!!!!!

#include <iostream>
#include <string>
#include "CoinChanger.h"
#include "coins.h"

using namespace std;

int main()
{
	CoinChanger Changer;//Creats the Changer Class.

	Changer.SetStock();
	Changer.CashOnHand();
	Changer.GetChange();

	return 0;
}