#include "Random.h"
#include <climits>
#include <ctime>
#include <cstdlib>

using namespace std;

Random::Random()
{
	MinValue = 0;  // set the default minimum value
	MaxValue = INT_MAX;
	CurrentValue = 0;
}

int Random::Update()
{
	//for(;;)
	{
		CurrentValue = rand();
		CurrentValue %= MaxValue;
		//	if(CurrentValue >= 0)
		//		break;
	}
	return CurrentValue;
}

void Random::Seed(int SeedValue)
{
	CurrentValue = SeedValue;
}

void Random::SetMaximumValue(int MaxValue)
{
	// this-> refers to the member variable
	this->MaxValue = MaxValue;
}

void Random::SetMinimumValue(int MinValue)
{
	this->MinValue = MinValue;
}

int Random::Value()
{
	return CurrentValue;
}

