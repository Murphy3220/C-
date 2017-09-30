#include "Evaluate.h"
#include <string>
#include <stdlib.h>

using namespace std;

Evaluate::Evaluate(string Exp)
{
	int p = 0;
	string Symbol;

	for(;;)
	{
		int Start = p;

		if(p == 0) p--;

		p = Exp.find(" ", p + 1);
		if(p == -1)
		{
			if(Start != 0) Start++;
			Symbol = Exp.substr(Start, p - Start);
			Handle(Symbol);
			while(Operators.size() > 0)
				DoOperator();
			break;
		}

		if(Start != 0) Start++;
		Symbol = Exp.substr(Start, p - Start);
		Handle(Symbol);
	}
}

int Evaluate::Value()
{
	int Result = *Operands.begin();
	Operands.pop_front();
	return Result;
}

void Evaluate::Handle(string Symbol)
{
	char *End;
	const char *Start = Symbol.c_str();
	int Val = strtol(Start, &End, 10);

	if(Start == End) // is non number
	{
		if(Operators.size() > 0)
		{
			int CurrentSymbol = GetPrecedence(*Start);
			int PreviousSymbol = GetPrecedence(*Operators.begin());
			if(CurrentSymbol <= PreviousSymbol)
				DoOperator();
		}
		Operators.push_front(*Start);
	}
	else
	{// is number
		Operands.push_front(Val);
	}
}

void Evaluate::DoOperator()
{
	if(Operators.size() > 0)
	{
		char Op = *Operators.begin();
		Operators.pop_front();

		int Right = *Operands.begin();
		Operands.pop_front();
		int Left = *Operands.begin();
		Operands.pop_front();

		switch(Op)
		{
		case '+':
			Operands.push_front(Left + Right);
			return;
		case '-':
			Operands.push_front(Left - Right);
			return;
		case '*':
			Operands.push_front(Left * Right);
			return;
		}
	}
}

int Evaluate::GetPrecedence(char Oper)
{
	switch(Oper)
	{
	case '/':
	case '*':
		return 10;
	default:
		return 5;
	}
}

