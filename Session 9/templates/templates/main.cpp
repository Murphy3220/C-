#include <iostream>
#include "Fractions.h"

using namespace std;

template <class MyClass>
MyClass DoSomething(MyClass Value)
{
	return Value + Value;
}

int main()
{
	int n = DoSomething <int>(3);
	double d = DoSomething <double>(3.14159);
	Fraction Value(3,4);
	Fraction f = DoSomething <Fraction>(Value);

	cout << n << endl;
	cout << d << endl;
	cout << f << endl;
	cin.get();
	return 0;
}
