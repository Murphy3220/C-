#include "ReadFileAsString.h"

#include <fstream>

ReadFileAsString::ReadFileAsString(string PathToFile)
	{
	ifstream foo(PathToFile, ios_base::binary);

	while(foo.good())
		{
		char c = foo.get();

		this->append(&c, 1);
		}
	}
