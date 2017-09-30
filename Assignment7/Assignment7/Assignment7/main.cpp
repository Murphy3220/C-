//Ryan Murphy
//C++ Programming
//Assignment 7

#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<list>
#include "UniqueWords.h"

using namespace std;

int main()
{
	ifstream GETSBURG;
	string c;
	UniqueWords UW;
	list<string> List;
	char chars[] = ".-,";

	GETSBURG.open("C:\\Users\\Murphy\\Desktop\\C++\\GETSBURG.txt");

	if(!GETSBURG.good())
	{
		cout << "Cant open the file" << endl;
		return 0;
	}

	while(GETSBURG.good())
	{ 
		GETSBURG>>c;
		//converts uppercase to lower case
		transform(c.begin(), c.end(), c.begin(),ptr_fun(tolower));

		//removes the ".-," characters from the list
		for (unsigned int i = 0; i < strlen(chars); ++i)
		{
			c.erase (remove(c.begin(), c.end(), chars[i]), c.end());
		}
		List.push_back(c);
	}

	UW.GetUnique(List);//sorts the list and finds unique words

	return 0;
}