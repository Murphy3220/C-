#include <string.h>
#include <iostream>
#include "Person.h"

// this is REQUIRED!!!  after your last include
using namespace std;

/* The C way:
typedef struct
{
	int x;
} CTypeStruct;
*/

// the ampersand asks for pass by reference..
void PrintPerson(Person &Who)
{
	Who.Age = 1; // this WILL CHANGE THE VALUE IN MAIN
	cout << Who.Name << " is " << Who.Age << " years old" << endl;
}

/*  this is for cases where the person is passed as PrintPerson(&Name);
void PrintPerson(Person *pWho)
{
	pWho->Age = 1; // this WILL CHANGE THE VALUE IN MAIN
	cout << pWho->Name << " was " << pWho->Age << " years old" << endl;
}
*/

int main()
{
	//object oriented programming is:
	// programming custom types.
	// make the types do MOST of the work
	// type Instance;

	Person Example;
	Person Mom;
	Person People[2];  // you can make arrays of persons
	char Array[2];  // note uninitialized storage

	// proceedural.. we are "decorating" the instances
	// in the program
	Example.Age = 12;
	strcpy(Example.Name, "Junior");

	Mom.Age = 22;
	strcpy(Mom.Name, "Martha");

	PrintPerson(Mom);
	PrintPerson(Example);
	// cout << Mom.Name << " is " << Mom.Age << " years old" << endl;

	// how to get input for your data
	cout << "What is moms age? ";// create a prompt
	cin >> Mom.Age;

	cout << "What is moms name? "; //prompt for the other input
	cin >> Mom.Name;

	return 0;
}