#include <iostream>
#include <string>
#include "ReadFileAsString.h"

using namespace std;

int main()
{
	string Example = "hi";
	char c = Example[1];

	ReadFileAsString MyFile("C:\\Users\\dana_swift\\Documents\\Visual Studio 2010\\Projects\\Session 5\\BuildingOnClasses\\BuildingOnClasses\\Building.h");

	c = MyFile[2];

	return 0;
}
