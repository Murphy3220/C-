#include <stdio.h>

int Function(int Parameter);

int main()
{
	int x; double y; float z;
	char c;// storage for a character
	char Name[22];// name is a constant pointer to the first element of the array
	int (*Fcn)(int);// define a pointer to a function taking an integer returning an integer
	// the * means keep track of where a char is
	char *pChar; // variable pointer to storage of a character
	
	// a pointer always points to atype
	char *MyName = "Dana"; // hidden '\0' at the end

	Fcn = Function;
	MyName = (char *)Function;

	// type instance;
	// type *pointer, *anotherpointer, instance;
	// type *pointer, instance;


	// we HAVE to tell pChar WHAT to point to
	pChar = &c;  // & means "address of"

	pChar = Name;

	pChar += 2;// math operators on pointers move the pointer in memory

	// if you have two pointers to the same type
	// the difference is the number of objects between them
	// type *pa, *pb;
	//int n = pa - pb; n is the number of objects betwen pa and pb
	return 0;
}

// Function is a constant pointer to code
int Function(int Parameter)
{
	return  Parameter * 23;
}
