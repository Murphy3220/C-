#include <iostream>

using namespace std;

typedef enum
{
	undefined = 30,
	red,
	green = 17,
	blue,
	yellow
} Color;

class Example
{
public:
	int x;
	int y;
};

void Fcn(Example ex);

void FcnRef(Example &ref); // share the original storage

void Fcn_RefByPtr(Example *ptr);

int main()
{
	Color c;
	Example e;

	Example *pE = new Example;

	delete pE;

	c = yellow;

	// copy the entire class to Fcn
	Fcn(e);// pass by value
	FcnRef(e); // pass by hidden reference
	Fcn_RefByPtr(&e);  // convert e to its address

	int x = c;
}

void Fcn(Example Val)
{
	Val.x = Val.y;// does not pollute e in main
}

void FcnRef(Example &Val)
{
	Val.x = Val.y; // does change e in main
}

void Fcn_RefByPtr(Example *ptr)
{
	ptr->x = ptr->y;
	(*ptr).x = (*ptr).y;
}
