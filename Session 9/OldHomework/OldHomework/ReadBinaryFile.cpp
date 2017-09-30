#include "ReadBinaryFile.h"
#include <ctype.h>

// because our base class requires a string to construct
// we MUST pass a string to it.
ReadBinaryFile::ReadBinaryFile(string FileToOpen)
	: ReadFileAsString(FileToOpen)
{
}

int ReadBinaryFile::CountInstances(int ByteValue)
{
	int Count = 0;
	int i;

	for(i=0; i<length(); i++)
	{
		if((*this)[i] == ByteValue)
			Count++;
	}

	return Count;
}

int ReadBinaryFile::PrintableCharCount()
{
	int Count;

	int c;

	for(c = 0; c <= 255; c++)
	{
		if(isprint(c))
			Count += CountInstances(c);
	}

	return Count;
}
