#include <iostream>
#include "Building.h"
#include "shed.h"

using namespace std;

int main()
{
	Building House(1, 40, 30);
	Building Apartment(2, 200, 40);
	Shed Storage;
	Building *Development;

	//Development = new Building(1, 40, 40);
	// you can initalize a pointer to any derrived
	// type of the pointer type.
	Development = new Shed();

	// the default resolution is to use the type
	// of the pointer.. building
	double Taxes = Development->PayAnnualTax();

	// casting (Shed *) can tell the compiler that the pointer is actually
	// a pointer to a derrived type.
	Shed *pShed = (Shed *)Development;
	int Mowers = pShed->NumberOfLawnmowers;
	delete Development;// give the heap back the memory

	int x = Storage.NumberOfLawnmowers;
	// double TaxRate = Storage.TaxRatePerSquareFoot;
	Taxes = Storage.PayAnnualTax();
	Taxes = Apartment.PayAnnualTax();

	return 0;
}
