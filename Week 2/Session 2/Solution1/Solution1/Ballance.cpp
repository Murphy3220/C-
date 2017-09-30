#include "Ballance.h"
#include <string.h>
#include <stdio.h>

void Ballance(char *FileContents, char *Left, char *Right)
{
	int LeftLen = strlen(Left);
	int RightLen = strlen(Right);
	int Depth = 0;
	int MaxDepth = 0;

	// for the first char to the last char
	for(; *FileContents; FileContents++)
	{
		if(!strncmp(FileContents, Left, LeftLen))
		{
			Depth++;
			if(Depth > MaxDepth)
				MaxDepth = Depth;
		}
		if(!strncmp(FileContents, Right, RightLen))
		{
			Depth--;
			if(Depth < 0)
				printf("%s found before %s\n", Right, Left);
		}
	}
	if(Depth != 0)
		printf("%s and %s are not ballanced!", Left, Right);
	printf("The max depth of %s is %d\n", Left, MaxDepth);
}

