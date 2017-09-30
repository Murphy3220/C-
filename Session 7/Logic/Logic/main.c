#include <stdio.h>

int main()
{
	int a, b;
	int c, i;

	a = 8;
	b = 2;

	// & can mean take the address of storage
	// & can mean bitwise AND
	// && means logical AND
	c = a & b; \

	// |  bitwise or   ||  logical or
	// ~  bitwise change each 0 to a 1 and 1 to 0
	// !  logical invert
	// >> shift bits right
	c = a >> b;
	// n << (numb shifts)shift bits left

	for(i=0; i<5; i++)
		c = i;

	/*
	c = 0;
	c = 1;
	c = 2;
	c = 3;
	c = 4;
	*/
}