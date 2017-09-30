#pragma once
#include "Fractions.h"

class Dollars : public Fraction
{
public:
	Dollars(int Value);
	Dollars(int D, int Cents);
	Dollars(double Value);

		// convert the type to a stream
	friend ostream &operator <<(ostream &Output, Dollars Value);

};
