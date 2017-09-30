#ifndef CoinChangerH
#define CoinChangerH
#include <string>
#include "coins.h"

using namespace std;

class CoinChanger
{
public:
	float Total;
	int Change;
	int DollarChange;
	int QuarterChange;
	int DimeChange;
	int NickelChange;
	int PennyChange;

	Coins Coin[5];//Array of coins
	CoinChanger();//default constructor

	void SetStock();
	void CashOnHand();
	void GetChange();
};

#endif 