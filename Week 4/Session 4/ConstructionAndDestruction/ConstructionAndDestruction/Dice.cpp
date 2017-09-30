#include "Dice.h"
#include <iostream>

using namespace std;

Dice::Dice()
{
	Sequence.SetMaximumValue(6);
	Value = Sequence.Update();
}

int Dice::Get()
{
	return Value+1;// change 0-5 to 1-6
}

void Dice::Roll()
{
	Sequence.Update();
	this->Value = Sequence.Value();
}

void Dice::Set(int DiceValue)
{
	Value = DiceValue - 1;
	Value %= 6;// force only legal values
}

void Dice::Draw()
	{
		switch(Get())
		{
		case 1:
			cout << "+-------+" << endl;
			cout << "|       |" << endl;
			cout << "|   *   |" << endl;
			cout << "|       |" << endl;
			cout << "+-------+" << endl;
			break;
		case 2:
			cout << "+-------+" << endl;
			cout << "| *     |" << endl;
			cout << "|       |" << endl;
			cout << "|     * |" << endl;
			cout << "+-------+" << endl;
			break;
		case 3:
			cout << "+-------+" << endl;
			cout << "| *     |" << endl;
			cout << "|   *   |" << endl;
			cout << "|     * |" << endl;
			cout << "+-------+" << endl;
			break;
		case 4:
			cout << "+-------+" << endl;
			cout << "| *   * |" << endl;
			cout << "|       |" << endl;
			cout << "| *   * |" << endl;
			cout << "+-------+" << endl;
			break;
		case 5:
			cout << "+-------+" << endl;
			cout << "| *   * |" << endl;
			cout << "|   *   |" << endl;
			cout << "| *   * |" << endl;
			cout << "+-------+" << endl;
			break;
		case 6:
			cout << "+-------+" << endl;
			cout << "| * * * |" << endl;
			cout << "|       |" << endl;
			cout << "| * * * |" << endl;
			cout << "+-------+" << endl;
			break;
		}
	}

