#include <stdio.h>

int main()
{
	char c = 'Z';// ASCII
	int C;

	c = 90;
	C = 'X';

	printf("%c\n", c);// interpret the bits in c as a character
	printf("%d\n", c);// interpret the bits in c as decimal
	printf("%c\n", C);// interpret the bits in C as a character
	printf("%d\n", C);// interpret the bits in C as decimal

	getchar();
	return 0;
}
