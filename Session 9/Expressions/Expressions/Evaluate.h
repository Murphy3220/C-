#pragma once

#include <string>
#include <list>
using namespace std;

class Evaluate
{
private:
	void Handle(string Symbol);

	void DoOperator();
	int GetPrecedence(char Oper);

	list<int>Operands;
	list<char>Operators;

public:
	Evaluate(string Exp);

	int Value();
};