#include "Number.h"

Number::Number(string Value)
{
	Digits = Value;
}

Number Number::Reverse()
{
	string Builder;
	int i;

	for(i=0; i<Length(); i++)
	{
		string c = Digits.substr(Length() - i - 1, 1);
		Builder = Builder + c;
	}

	return Number(Builder);
}

Number Number::Add(Number B)
{
	Number BReversed = B.Reverse();
	Number OurselvesReversed = Reverse();

	int Longer = BReversed.Length();
	if(OurselvesReversed.Digits.length() > Longer)
		Longer = OurselvesReversed.Digits.length();

	const char *pB = BReversed.Digits.c_str();
	const char *pA = OurselvesReversed.Digits.c_str();

	int i;
	int Carry = 0;
	string Result;

	for(i=0; i<Longer; i++)
	{
		int a, b;
		int Sum;

		if(i <  OurselvesReversed.Digits.length())
			a = pA[i] - '0';
		else
			a = 0;

		if(i < BReversed.Digits.length())
			b = pB[i] - '0';
		else
			b = 0;

		Sum = a + b + Carry;
		if(Sum > 9)
		{
			Sum = Sum - 10;
			Carry = 1;
		}
		else
			Carry = 0;

		char c = Sum + '0';
		Result = Result + c;
	}
	if(Carry)
		Result = Result + '1';

	return Number(Result).Reverse();
}

