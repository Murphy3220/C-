#include <iostream>
#include "ReadBinaryFile.h"

using namespace std;

int main()
{
	ReadBinaryFile OurFile("C:\\Users\\dana_swift\\Documents\\Visual Studio 2010\\Projects\\Session 9\\OldHomework\\ipch\\oldhomework-a127c46e\\oldhomework-a58eb8d7.ipch");

	int N_255 = OurFile.CountInstances(255);
	int N_123 = OurFile.CountInstances(123);
	int N_75 = OurFile.CountInstances(75);
	int N_A = OurFile.CountInstances('A');

	return 0;
}
