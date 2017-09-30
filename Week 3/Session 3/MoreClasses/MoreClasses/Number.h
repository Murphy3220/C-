#ifndef NumberH
#define NumberH

#include <string>

using namespace std;

class Number
{
public:
	string Digits;

	Number(string Value);

	Number Reverse();
	Number Add(Number B);

	// legal, but I discourage defining the function in the class definition
	int Length()
	{
		return Digits.length();
	}
};

#endif
