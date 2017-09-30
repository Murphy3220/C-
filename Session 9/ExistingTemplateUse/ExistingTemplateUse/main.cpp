#include <iostream>
#include <list>

using namespace std;

int main()
{
	list <double> MyList;

	MyList.push_front(1.2);
	MyList.push_front(1.3);
	MyList.push_front(1.4);
	MyList.push_back(7.3);

	list<double>::iterator i;

	for(i=MyList.begin(); i != MyList.end(); i++)
	{
		cout << *i << endl;
	}

	cin.get();
	return 0;
}