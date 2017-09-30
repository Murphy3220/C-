#include "Dollars.h"

Dollars::Dollars(int Val)
	: Fraction(Val * 100, 100)
{
}

Dollars::Dollars(int D, int Cents)
	: Fraction(D * 100 + Cents, 100)
{
}

Dollars::Dollars(double Value)
	: Fraction((Value + 0.005) * 100, 100)// force proper rounding
{
}

ostream &operator <<(ostream &Output, Dollars Value)
{
	Output << "$" << (Fraction)Value;
	return Output;
}

