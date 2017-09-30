#include <iostream>
#include <string>
#include "Person.h"
#include "Number.h"

using namespace std;

int main()
{
	Number A("9999");
	Number B("1");

	Number C = A.Add(B);

	char Storage[123] = "Some String"; // the "C" way of doing things..

	string MyName = "Dana";
	string YourName = "SomeoneElse";
	Person Student("Dana", "Swift", 2);

	Student.FirstName = "Suzy";
	Student.LastName = "Q";
	Student.AgeInDays = 365;
	Student.SetAgeInYears(17.0);


	cout << Student.GetAgeInYears() << endl;

	cout << Storage << MyName << endl;
	cout <<Student.FirstName<<endl;
	string Combined = MyName + YourName; // join strings is easier
	
	// get the storage of the string for use by C functions
	const char *pText = Combined.c_str();

	cout<<Combined<<endl;

	cout << "pText print: " << pText << endl;

	char c;
	cin >> c;

	return 0;// error code to the operating system
}
