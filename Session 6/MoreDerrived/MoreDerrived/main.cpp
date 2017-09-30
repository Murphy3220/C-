#include <iostream>
#include <string>

using namespace std;

// this class is just a vague concept to impliment other classes from
// this is an abstract class
class Vehicle
{
protected:
	string Type;
public:
	Vehicle()
	{
		Type = "unknown";
	}
	Vehicle(Vehicle &Original)// copy constructor, a very good idea to impliment in all cases.
	{
		Type = Original.Type;
	}
	virtual ~Vehicle()// destructors should be declared virtual
	{
		cout << "Destruct Vehicle" << endl;
	}

	string GetType()
	{
		return Type;
	}

	virtual string GetFuelType() = 0;// pure virtual function, force the class to be abstract
};

class Boat : public Vehicle
{
protected:
	int NumbHulls;
public:
	Boat()
	{
		Type = "Boat";
		NumbHulls = 1;
	}
	virtual ~Boat()
	{
		cout << "Destruct Boat" << endl;
	}
	virtual string GetFuelType() = 0;// pure virtual function, the class is forced to be abstract
};

class Catamaran : public Boat
{
protected:
	char *Storage;
public:
	Catamaran()
	{
		Type = "Catamaran";
		NumbHulls = 2;
		Storage = new char[5];
	}

	virtual ~Catamaran()
	{
		delete [] Storage;// the [] syntax calls the destructor for each member of the array
		cout << "Destruct Catamaran" << endl;
	}
	virtual string GetFuelType()// ordinary virtual function, supply the answer, but allow derrived classes to offer a better answer
	{
		return "wind";
	}
};

int main()
{
	Vehicle *pVeh = new Catamaran();  // you cannot create an instance of ANY abstract class

	// we cant do this any more because Vehicle is now abstract
	// Vehicle InGarage = *pVeh;// use the copy constructor

	cout << pVeh->GetFuelType() << endl;

	delete pVeh;
	cin.get();// stop and show us the results
	return 0;
}// note a final destructor gets called here for InGarage when it goes out of scope
