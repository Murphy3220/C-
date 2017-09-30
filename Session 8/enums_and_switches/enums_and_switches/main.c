#include <stdio.h>

typedef struct
{
	int x;
	int y;
} Symbol;

enum Color
{
	red,
	blue,
	green,
	yellow
} ;

int main()
{
	char n;
	enum Color c;
	Symbol s;

	s.x = 3;
	
	c = green;

	switch(c)
	{
	case red:
		break;
	default:
		break;
	}


	switch(n)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		{
			// do whatever is here
		}
		break;
	case 'x':
	case 'y':
		{
			// do something here
		}
		// fall down to the following case
	case 'z':
			// handle this case here.
		break;
	default:
		// handle all other characters
		break;
	}

	return 0;
}