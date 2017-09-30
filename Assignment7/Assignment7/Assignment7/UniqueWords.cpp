//Ryan Murphy
//C++ Programming
//Assignment 7

#include "UniqueWords.h"

UniqueWords::UniqueWords()
{
}

void UniqueWords::GetUnique(list<string> UniqueList)
{
	ofstream Unique;
	int Unique_Count = 0;

	Unique.open ("C:\\Users\\Murphy\\Desktop\\Unique.txt");//Creates the output file
	
	UniqueList.sort();//sorts the list
	UniqueList.unique();//finds the unique words in the list

	//displays the elements of the list
	for (list<string>::iterator it=UniqueList.begin(); it!=UniqueList.end(); it++)
	{
		Unique_Count++;
		Unique << *it <<endl;
		cout << *it<<endl;
	}
	cout<<endl<<"Amount of unique words: "<<Unique_Count<<endl<<endl;
	Unique<<endl<<"Amount of unique words: "<<Unique_Count<<endl<<endl;
}
