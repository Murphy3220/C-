#include <iostream>
#include "Fractions.h"
#include "Dollars.h"

using namespace std;

int main()
{
	Fraction F = 1234;
	Fraction Example(7, 4);
	Fraction *pInHeap = new Fraction(7, 4);
	Dollars Greenbacks(0, 35);

	// what should (type) do?

	cout << Greenbacks << endl;
	cout << (double)Greenbacks << endl;
	cout << *pInHeap << endl;
	cout << (double)*pInHeap << endl;
	// F = reinterpret_cast<int>(12.34); // force 12.34 to be interpreted as int
	// F = static_cast<int>(12.34); // force the conversion operator to be used to make 12.34 to a fraction

	cin.get();
	delete pInHeap;
	return 0;
}