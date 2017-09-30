#pragma once

#include "ReadFileAsString.h"

class ReadBinaryFile : public ReadFileAsString
{
public:
	ReadBinaryFile(string FileToOpen);

	int CountInstances(int ByteValue);
	int PrintableCharCount();
};

