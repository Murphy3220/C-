#include "Person.h"

// this is the constructor
Person::Person()
{
	FirstName = "Unknown";
	LastName = "Unknown";
	AgeInDays = -1;
}

Person::Person(string First, string Last, int AgeDays)
{
	FirstName = First;
	LastName = Last;
	AgeInDays = AgeDays;
}

double Person::GetAgeInYears()
{
	return AgeInDays / 365.2425;
}

void Person::SetAgeInYears(double YearsOld)
{
	AgeInDays = (int)(YearsOld * 365.2425 + 0.5);  // get rounding!
}


