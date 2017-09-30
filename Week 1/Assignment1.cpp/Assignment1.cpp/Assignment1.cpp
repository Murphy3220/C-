//Ryan Murphy
//C++
//Assigntmemt 1
//This program checks a program for unbalanced brackets, braces, etc.

#include <iostream>
#include <fstream>

using namespace std;

void CheckForCount (ifstream&);

int main()
{
	char Char;
	ifstream Assignment1;
	Assignment1.open ("C:\\Assignment1.cpp"); //Reads the input file

	if (!Assignment1)	//Check to make sure file is opened
	{
		cout<<"cant open file!"<<endl;
	}
	CheckForCount (Assignment1);

	return 0;
}
void CheckForCount ( ifstream& Assignment1)
{
	char character;
	int LeftCount = 0;
	int RightCount = 0;
	int TotalCount = 0;
	int runningCount = 0;	
	Assignment1.get(character); //Reads the first character
	while ( Assignment1) //Reads the input file
	{
		while ( Assignment1 && (character == ' ' || character == '\n') )
		{
			Assignment1.get(character);		
		}
		if ( character == '(') //Checks the cpp for "("
		{
			LeftCount++;
			runningCount++;		
			TotalCount++;
		}
		else if (character == ')')//Checks the cpp for ")"
		{
			RightCount++;
			runningCount--;		
			TotalCount++;
		}
		if (character == '{') //Checks the cpp for "{"
		{
			LeftCount++;
			runningCount++;
			TotalCount++;
		}
		if (character == '}') //Checks the cpp for "}"
		{
			RightCount++;
			runningCount--;
			TotalCount++;
		}
		if (character == '[') //Checks the cpp for "["
		{
			LeftCount++;
			runningCount++;
			TotalCount++;
		}
		if (character == ']') //Checks the cpp for "]"
		{
			RightCount++;
			runningCount--;
			TotalCount++;
		}

		if ( runningCount < 0 )	//Checks to see if the running count is  greather than
			//zero
		{

			cout << "Count is out of balance!" << endl << endl;
			exit (1);
		}			
		Assignment1.get(character);	//Gets the next character	
	}											

	cout << "The left count is " << LeftCount << endl; //These 3 lines give totals
	cout << "The right count is " << RightCount << endl;
	cout << "The Total Count is " << TotalCount << endl;			
	if ( runningCount == 0 )
	{
		cout << "Everything is in balance." << endl<<endl; //Displays if count in balance
	}
	if ( runningCount != 0 )
	{																
		cout << "The count is out of balance. " << endl<<endl; //Displays if count out of balace
	}
}