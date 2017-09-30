#ifndef PersonH
#define PersonH

#include <string>

using namespace std;

class Person
{
public:
	// member variables
	string FirstName;
	string LastName;
	int AgeInDays;

	Person();// default constructor
	Person(string First, string Last, int AgeDays);

	//member function
	double GetAgeInYears();
	void SetAgeInYears(double YearsOld);
};

#endif
