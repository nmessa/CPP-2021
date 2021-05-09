//Pump class definition file
//Author: nmessa

class Pump
{
public:
	Pump();
	double gallonsSold();
	void resetGallonsSold();
	void purchase(double);

private:
	double gallons;
};