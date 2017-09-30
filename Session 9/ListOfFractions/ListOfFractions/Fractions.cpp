#include "Fractions.h"	
#include <string>

using namespace std;

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
	if(!D)
		throw string("Denominator specified as zero is illegal.");
	Numerator = N;
	Denominator = D;
	Reduce();
}

void Fraction::Reduce(void)
{
	int PossibleRatio;
	int Candidate = 1;

	for(PossibleRatio = 1; PossibleRatio <= Denominator; PossibleRatio ++)
	{
		int RemainderN = Numerator % PossibleRatio;
		int RemainderD = Denominator % PossibleRatio;
		if((RemainderN == 0) && (RemainderD == 0))
			Candidate = PossibleRatio;
	}
	Numerator /= Candidate;
	Denominator /= Candidate;
}

Fraction::operator double()
{
	if(Denominator == 0)
	{
		throw string("Denominator is zero, result undefined");
	}

	return static_cast<double>(Numerator) /
		static_cast<double>(Denominator);
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

Fraction &operator +(Fraction &Left, Fraction &Right)
{
	Fraction Result;

	if(Left.Denominator == Right.Denominator)
	{
		Result.Denominator = Left.Denominator;
		Result.Numerator = Left.Numerator + Right.Numerator;
	}
	else
	{
		int NewDen = Left.Denominator * Right.Denominator;
		Result.Denominator = NewDen;
		Result.Numerator = Left.Numerator * Right.Denominator +
			Right.Numerator * Left.Denominator;
	}
	Result.Reduce();
	return Result;
}

Fraction &operator -(Fraction &Left, Fraction &Right)
{
	Fraction Result;

	if(Left.Denominator == Right.Denominator)
	{
		Result.Denominator = Left.Denominator;
		Result.Numerator = Left.Numerator - Right.Numerator;
	}
	else
	{
		int NewDen = Left.Denominator * Right.Denominator;
		Result.Denominator = NewDen;
		Result.Numerator = Left.Numerator * Right.Denominator -
			Right.Numerator * Left.Denominator;
	}
	Result.Reduce();
	return Result;
}

Fraction &operator *(Fraction &Left, Fraction &Right)
{
	Fraction Result(Left.Numerator * Right.Numerator,
		Left.Denominator * Right.Denominator);

	return Result;
}

Fraction &operator /(Fraction &Left, Fraction &Right)
{
	Fraction Temp(Right.Denominator, Right.Numerator);

	Fraction Product = Left * Temp;
	return Product;
}

Fraction &operator *(Fraction &Left, int Right)
{
	Fraction Result(Left.Numerator * Right,
		Left.Denominator);

	return Result;
}

Fraction &operator *(int Left, Fraction &Right)
{
	Fraction Result(Right.Numerator * Left,
		Right.Denominator);

	return Result;
}

Fraction &operator +(Fraction &Left, int Right)
{
	Fraction Result(Left.Numerator + Right * Left.Denominator,
		Left.Denominator);

	return Result;
}

Fraction &operator +(int Left, Fraction &Right)
{
	Fraction Result(Right.Numerator + Left * Right.Denominator,
		Right.Denominator);

	return Result;
}


