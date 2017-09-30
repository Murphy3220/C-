#include "Person.h"
#include <string.h>

// what goes into Person.cpp is the CODE
// to make Person work

// this is HOW to fill in the default values
// classname :: classname()
// :: is "scope resolution operator"
Person::Person()
{
	Age = 3;
	strcpy(Name, "Baby");
}

