#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fraction
{
protected:// derrived classes have access
	int Numerator;
	int Denominator;

	void Reduce(void);
public:
	Fraction();
	Fraction(int WholeValue);  // type converstion on construction is handled by the appropriate constructor
	Fraction(int N, int D) throw(string);

	// convert this type to a double
	// throw(string) is documentation to tell the user that a string is a possible result
	operator double() throw(string);

	// convert the type to a stream
	friend ostream &operator <<(ostream &Output, Fraction Value);

	friend Fraction &operator +(Fraction &Left, Fraction &Right);
	friend Fraction &operator -(Fraction &Left, Fraction &Right);
	friend Fraction &operator *(Fraction &Left, Fraction &Right);
	friend Fraction &operator /(Fraction &Left, Fraction &Right);

	friend Fraction &operator *(Fraction &Left, int Right);
	friend Fraction &operator *(int Left, Fraction &Right);

	friend Fraction &operator +(Fraction &Left, int Right);
	friend Fraction &operator +(int Left, Fraction &Right);
};