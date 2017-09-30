#pragma once
#include <iostream>

using namespace std;

class Fraction
{
protected:// derrived classes have access
	int Numerator;
	int Denominator;
public:
	Fraction();
	Fraction(int WholeValue);  // type converstion on construction is handled by the appropriate constructor
	Fraction(int N, int D);

	// convert this type to a double
	operator double();

	// convert the type to a stream
	friend ostream &operator <<(ostream &Output, Fraction Value);
};