#include <stdio.h>

int GlobalArray[3];

int main()
{
	// push stuff on the stack
	int x, y, z;
	int FluidLevel_Gallons;
	int reportTotal;
	int *pI;// you must assign a value to the pointer before using it!
	double dArray[5];// an array is a pointer to the first element of its storage
	double *pD;   // the * defines pD as a pointer, the name "p"D is
	// just a convention to say the identifier is a pointer

	// stop pushing stuff and start running

	pI = &x;// now pI points to X
	*pI = 3; // its legal to use pI now

	pD = dArray;
	dArray[2] = 1.23;// change the second element
	pD += 1;
	pD[3] = 3.21;// change the third element to 3.21

	// if -- or ++ preceed a pointer or value, the value is changed
	// then used.
	// if -- or ++ follow a pointer or value, the value is used then
	// changed.
	*--pD = 7.6;

	x = 1;
	y = 2;
	//z = x++ +y;
	z = ++x + y;
	z = --x + ++x;

	return 0;
}
