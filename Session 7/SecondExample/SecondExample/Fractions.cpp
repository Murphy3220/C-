#include "Fractions.h"	

Fraction::Fraction()
{
	Numerator = 0;
	Denominator = 1;
}

Fraction::Fraction(int WholeValue)
{
	Numerator = WholeValue;
	Denominator = 1;
}

Fraction::Fraction(int N, int D)
{
	Numerator = N;
	Denominator = D;
}

Fraction::operator double()
{
	return (double)Numerator / (double)Denominator;
}

ostream &operator <<(ostream &Output, Fraction Value)
{
	if(Value.Denominator == 1)
		Output << Value.Numerator;
	else
	{
		int WholeValue = Value.Numerator / Value.Denominator;
		int Remainder = Value.Numerator % Value.Denominator;

		if(Remainder == 0)
			Output << WholeValue;
		else
		{
			if(WholeValue > 0)
				Output << WholeValue << " ";
			Output << Remainder << "/" << Value.Denominator;
		}
	}
	return Output;
}

