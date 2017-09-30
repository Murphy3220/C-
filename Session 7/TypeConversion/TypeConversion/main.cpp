#include <iostream>

using namespace std;

int main()
{
	int x = 5;
	double y;
	double Example = 12.34;
	int Result;

	int Value = 1234;
	int Remainder = Value % 50;
	int i;

	for(i=0; i<20; i++)
	{
		cout << i % 5 << "  " << i / 5 << endl;
	}

	y = x;
	x = Example;

	Result = x * 5;
	Result = (double)Example * 5;

	return 0;
}
