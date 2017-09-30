#include "CoinChanger.h"
#include <iostream>
#include <string>

using namespace std;

CoinChanger::CoinChanger()
{
	Total = 0;
	Change = 0;
	DollarChange;
	QuarterChange;
	DimeChange;
	NickelChange;
	PennyChange;

	//Initialize the array of coins.
	Coin[0].OnHand = 0;
	Coin[0].Value= 100;
	Coin[0].Name = "Dollar(s)";
	Coin[0].OnHand = 0;
	Coin[1].Value= 25;
	Coin[1].Name = "Quarters(s)";
	Coin[0].OnHand = 0;
	Coin[2].Value= 10;
	Coin[2].Name = "Dime(s)";
	Coin[0].OnHand = 0;
	Coin[3].Value= 5;
	Coin[3].Name = "Nickel(s)";
	Coin[0].OnHand = 0;
	Coin[4].Value= 1;
	Coin[4].Name = "Pennies";
}

void CoinChanger::SetStock()//This will set the count of coins.
{
	cout<<"Enter the Amount of Dollars, Quarters, Dimes, Nickels, and Pennies:"<<endl;
	cin>>Coin[0].OnHand;
	cin>>Coin[1].OnHand;
	cin>>Coin[2].OnHand;
	cin>>Coin[3].OnHand;
	cin>>Coin[4].OnHand;
}


void CoinChanger::CashOnHand()//This will calculate how many coins the machine has.
{
	Total = ((Coin[0].OnHand * Coin[0].Value) + (Coin[1].OnHand * Coin[1].Value) + (Coin[2].OnHand * Coin[2].Value)//
		+(Coin[3].OnHand * Coin[3].Value) + (Coin[4].OnHand * Coin[4].Value));
	cout<<"That gives $"<<Total * .01<<" on hand"<<endl;


}
void CoinChanger::GetChange()//This will dispense the requested change.
{
	cout<<"How much change would you like back?"<<endl;
	cin>>Change;

	DollarChange = Change / Coin[0].Value;
	QuarterChange = (Change - (Coin[0].Value * DollarChange)) / Coin[1].Value;
	DimeChange = (Change - ((Coin[0].Value * DollarChange)+(Coin[1].Value * QuarterChange))) / Coin[2].Value;
	NickelChange = (Change - ((Coin[0].Value * DollarChange) + (Coin[1].Value * QuarterChange) +//
		(Coin[2].Value * DimeChange))) / Coin[3].Value;
	PennyChange = (Change - ((Coin[0].Value * DollarChange) + (Coin[1].Value * QuarterChange) + //
		(Coin[2].Value * DimeChange) + (Coin[3].Value * NickelChange))) / Coin[4].Value;

	if (Change > Total)
	{
		cout<<"Not enough change!!!"<<endl;
	}
	else
	{
		cout<<DollarChange<<" "<<Coin[0].Name<<endl;

		cout<<QuarterChange<<" "<<Coin[1].Name<<endl;

		cout<<DimeChange<<" "<<Coin[2].Name<<endl;

		cout<<NickelChange<<" "<<Coin[3].Name<<endl;

		cout<<PennyChange<<" "<<Coin[4].Name<<endl;

		cout<<"$"<<(Total * .01) - (Change * .01)<<" in change remaining on hand."<<endl;

	}
}