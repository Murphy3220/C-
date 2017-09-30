#ifndef CoinChangerH
#define CoinChangerH
#include <string>
#include "coins.h"

using namespace std;

class CoinChanger
{
public:
	double Total;
	int DollarOH;//OH = On Hand, Sets the on hand value
	int QuarterOH;
	int DimeOH;
	int NickelOH;
	int PennyOH;
	int DollarChange;
	int QuarterChange;
	int DimeChange;
	int NickelChange;
	int PennyChange;

	Coins Coin[5];//Array of coins
	CoinChanger();//default constructor

	void SetStock(int V,int A);
	void HowMany(int CV);//CV = Currency Value
	void CashOnHand();
	void GetChange(int Change);
};

#endif 