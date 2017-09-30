#include <iostream>
#include "fractions.h"

using namespace std;

int main()
{
	try
	{
	Fraction A(3, 4);
	// int B = 3;
	Fraction B(1, 2);
	Fraction C;

	C = A + B;
	double D = C;

	cout << A << " + " << B << " = " << C << endl;

	cin.get();
	return 0;
	}
	catch(char c)
	{
		return 0;
	}
	catch(int Val)
	{
		return 0;
	}
	catch(string Msg)
	{
		cout << "Troubles! " << Msg << endl;
		return 0;
	}
	catch(...)// catch any other type
	{
		return 0;
	}
}