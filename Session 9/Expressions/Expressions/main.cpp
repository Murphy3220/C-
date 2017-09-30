#include <iostream>
#include "Evaluate.h"

using namespace std;

int main()
{
	// convert an algebraic expression to RPN
	Evaluate Expression("2 * 3 + 7");

	int Result = Expression.Value();
	return 0;
}