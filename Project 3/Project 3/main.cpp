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
	//Sets the coin stock.
	Changer.SetStock(100, 1);
	Changer.SetStock(25, 2);
	Changer.SetStock(10, 3);
	Changer.SetStock(5, 4);
	Changer.SetStock(1, 5);

	cout<<"You inserted: "<<endl;

	//Inquire the amount of coins.
	Changer.HowMany(100);
	Changer.HowMany(25);
	Changer.HowMany(10);
	Changer.HowMany(5);
	Changer.HowMany(1);
	//Displays the total cash on hand
	Changer.CashOnHand();
	//Change in pennies
	Changer.GetChange(198);

	getchar();
	return 0;
}