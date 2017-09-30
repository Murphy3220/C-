#include <iostream>
#include <string>

using namespace std;

class Color
{
public:
	string Name;
	float RedPercent;
	float GreenPercent;
public:
	float BluePercent;
public:
	Color()
	{
		Name = "unknown";
		RedPercent = BluePercent = GreenPercent = 0.0;
	}
	virtual ~Color()  // destructors should be virtual
	{
	}
	// allow derrived classes to use CIE, pantone, or other rules
	virtual float BrightnessPercentage()
	{
		return(RedPercent + BluePercent + GreenPercent) / 3.0;
	}

	/* this is a pure virtual function because the reflectivity would depend on how the color comes about.
	 * Chalk reflects differently than paint of the same color.  For instance.
	 */
	virtual float ReflectivityPercentage() = 0;
};

class Red : public Color
{
public:
	Red()
	{
		Name = "red";
		RedPercent = 1.0;
		BluePercent = 0.0;
		GreenPercent = 0.0;
	}
};

class RedChalk : public Red
{
public:
	RedChalk()
	{
		Name = Name + " chalk";// add information to the name
	}
	virtual float ReflectivityPercentage()
	{
		return .2;
	}
};

class RedReflectorTape : public Red
{
public:
	RedReflectorTape()
	{
		Name = Name + " RedReflectorTape";// add information to the name
	}
	virtual float ReflectivityPercentage()
	{
		return .98;
	}
};

class RedPaint : public Red
{
public:
	RedPaint()
	{
		Name = Name + " RedPaint";// add information to the name
	}
	virtual float ReflectivityPercentage()
	{
		return .4;
	}
};

int main()
{
	RedReflectorTape SomeColor; // this must be defined at compile time and cant change
	Color *pUnknownColor = 0;// this can define which color and how at runtime

	cout << SomeColor.Name << " " << SomeColor.ReflectivityPercentage() << endl;

	pUnknownColor = new RedPaint();
	if(pUnknownColor)
	{
		cout << pUnknownColor->Name << " " << pUnknownColor->ReflectivityPercentage() << endl;
	}

	// it is OK to delete a NULL POINTER!
	delete pUnknownColor;// clean up after ourselves

	cin.get();
	return 0;
}