#include <iostream>

using namespace std;

int MyFcn(int Val)
{
	int x;

	x = Val * 7;

	return x;
}

int main()
{
	// all variables in main get put on the stack
	int x;
	char StackArray[10000000];// array sizes MUST be constant

	// allocate a block in the heap if memory is available
	// heap allocation sizes may be computed!
	char *pMyMemoryBlock = new char[10000000];

	// zero is returned any time inadequate memory is available
	// to fulfill you request.  CHECK FOR IT
	if(pMyMemoryBlock == 0) 
	{
		// handle the problem, out of memory
	}


	// use the storage in here
	int y;

	// it is legal in C++ to delete the address 0
	if(!pMyMemoryBlock)
		delete pMyMemoryBlock; // return the storage to the OS

	x = MyFcn(23);
}
