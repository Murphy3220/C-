#include "CoinChanger.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

CoinChanger::CoinChanger()
{
	Total = 0;
	DollarOH = 0;
	QuarterOH = 0;
	DimeOH = 0;
	NickelOH = 0;
	PennyOH = 0;
	DollarChange;
	QuarterChange;
	DimeChange;
	NickelChange;
	PennyChange;

	//Initialize the array of coins.
	Coin[0].Value= 100;
	Coin[0].Name = "Dollar(s)";
	Coin[1].Value= 25;
	Coin[1].Name = "Quarters(s)";
	Coin[2].Value= 10;
	Coin[2].Name = "Dime(s)";
	Coin[3].Value= 5;
	Coin[3].Name = "Nickel(s)";
	Coin[4].Value= 1;
	Coin[4].Name = "Pennies";
}

void CoinChanger::SetStock(int V, int A)//This will set the count of coins.
{
	switch (V)
	{
	case 100: Coin[0].Value = V;
		DollarOH = A;
		break;
	case 25: Coin[1].Value = V;
		QuarterOH = A;
		break;
	case 10: Coin[2].Value = V;
		DimeOH = A;
		break;
	case 5: Coin[3].Value = V;
		NickelOH = A;
		break;
	case 1: Coin[4].Value = V;
		PennyOH = A;
		break;
	}
}
void CoinChanger::HowMany(int CV)
{
	switch (CV)
	{
	case 100: cout<<DollarOH<<" Dollar(s)."<<endl;break;
	case 25: cout<<QuarterOH<<" Quarter(s)."<<endl;break;
	case 10: cout<<DimeOH<<" Dime(s)."<<endl;break;
	case 5: cout<<NickelOH<<" Nickel(s)."<<endl;break;
	case 1: cout<<PennyOH<<" Penny(s)."<<endl;break;
	}
}

void CoinChanger::CashOnHand()//This will calculate how many coins the machine has.
{
	Total = ((DollarOH * Coin[0].Value) + (QuarterOH * Coin[1].Value) + (DimeOH * Coin[2].Value)//
		+(NickelOH * Coin[3].Value) + (PennyOH * Coin[4].Value));
	cout<<"That gives $"<<showpoint<<setprecision(3)<< Total * .01<<" on hand"<<endl<<endl;
}
void CoinChanger::GetChange(int Change)//This will dispense the requested change.
{
	DollarChange = Change / Coin[0].Value;
	QuarterChange = (Change - (Coin[0].Value * DollarChange)) / Coin[1].Value;
	DimeChange = (Change - ((Coin[0].Value * DollarChange)+(Coin[1].Value * QuarterChange))) / Coin[2].Value;
	NickelChange = (Change - ((Coin[0].Value * DollarChange) + (Coin[1].Value * QuarterChange) +//
		(Coin[2].Value * DimeChange))) / Coin[3].Value;
	PennyChange = (Change - ((Coin[0].Value * DollarChange) + (Coin[1].Value * QuarterChange) + //
		(Coin[2].Value * DimeChange) + (Coin[3].Value * NickelChange))) / Coin[4].Value;

	if (Change > Total)//Chacks to make sure there is enough change
	{
		cout<<"Not enough change!!!"<<endl;
	}
	else//Displays the change dispensed
	{
		cout<<"Amount of change to be dispensed: "<<endl;

		cout<<DollarChange<<" "<<Coin[0].Name<<endl;

		cout<<QuarterChange<<" "<<Coin[1].Name<<endl;

		cout<<DimeChange<<" "<<Coin[2].Name<<endl;

		cout<<NickelChange<<" "<<Coin[3].Name<<endl;

		cout<<PennyChange<<" "<<Coin[4].Name<<endl<<endl;

		cout<<"You have $"<<noshowpoint<<(Total * .01) - (Change * .01)<<" in change remaining on hand."<<endl;

	}
}