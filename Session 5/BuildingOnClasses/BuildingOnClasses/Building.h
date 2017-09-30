#ifndef BuildingH
#define BuildingH

class Building
{
private:
	void Initialize()
	{
	NumberOfDoors = 1;
	SquareFeet = 0;
	Floors = 0;
	Length = 0;
	Width = 0;
	TaxRatePerSquareFoot = 0.05;
	}

protected:
	double TaxRatePerSquareFoot;

public:
	int NumberOfDoors;
	int Width;
	int Length;
	int SquareFeet;
	int Floors;


	Building()
	{
		Initialize();
	}

	Building(int Floors, int Length, int Width)
	{
		Initialize();

		// because this is a pointer to the storage
		// of the current class variables, -> is
		// available.
		this->Floors = Floors;
		this->Length = Length;

		// accessing member variables using pointer syntax
		(*this).Width = Width;

		this->SquareFeet = Floors * Length * Width;
	}

	// virtual means "use the derrived function if one is
	// defined"
	virtual double PayAnnualTax()
	{
		// this is the generic building definition for taxes
		return TaxRatePerSquareFoot * SquareFeet;
	}

};


#endif
