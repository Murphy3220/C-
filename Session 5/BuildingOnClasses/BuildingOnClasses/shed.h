#ifndef ShedH
#define ShedH

#include "Building.h"

// the : public Building syntax defines the shed
// IS a building
class Shed : public Building
{
public:
	int NumberOfLawnmowers;

	//	Building TheShed;// has a relationship

	Shed() : Building(1, 10, 8)// initialize a compound member
	{
		NumberOfLawnmowers = 1;
		TaxRatePerSquareFoot = 0.01;
	}

	double PayAnnualTax()
	{
		// this is the Shed definition for taxes
		return TaxRatePerSquareFoot * (SquareFeet / 2);
	}

};


#endif
