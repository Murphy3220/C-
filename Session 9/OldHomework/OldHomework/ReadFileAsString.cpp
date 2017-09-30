#include "ReadFileAsString.h"
#include <string>
#include <fstream>

using namespace std;

ReadFileAsString::ReadFileAsString(string PathToFile)
{
ifstream foo(PathToFile, ios_base::binary);

while(foo.good())
	{
		char c = foo.get();
		this->append(&c, 1);
	}
}
