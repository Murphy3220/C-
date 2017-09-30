// #pragma once  // use instead of the RandomH test

#ifndef RandomH
#define RandomH

class Random
{
private:
	int MaxValue;
	int MinValue;
	// this is visible outside the class
	int CurrentValue;// this is a value between MinimumValue and MaxValue-1

public:
	Random();

	int Update();
	int Value();
	void Seed(int SeedValue);
	void SetMaximumValue(int MaxValue);
	void SetMinimumValue(int MaxValue);
	

//private:
	//	int Hidden;// this is available only to member functions

};


#endif