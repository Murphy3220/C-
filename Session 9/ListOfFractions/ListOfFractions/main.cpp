#include <iostream>
#include "Fractions.h"
#include <list>

using namespace std;

int main()
{
	list<Fraction> MyList;

	for(;;)
	{
		int n, d;

		cin >> n >> d;

		if((n == 0) && (d == 0)) break;

		Fraction F(n, d);
		MyList.push_front(F);

		list<Fraction>::iterator p;

		Fraction Sum;
		for(p= MyList.begin(); p != MyList.end(); p++)
		{
			if(p != MyList.begin())
				cout << " + ";
			cout << *p;
			Sum = Sum + *p;
		}
		cout << " = " << Sum << endl;
	}

	cin.get();
	return 0;
}

