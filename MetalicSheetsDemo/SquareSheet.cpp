#include "SquareSheet.h"

SquareSheet::SquareSheet() : Sheets(), sideA(0.0), sideB(0.0)
{
}

SquareSheet::SquareSheet(double sideA, double sideB, string type, double width, double density, string material)
	: sideA(sideA), sideB(sideB), Sheets(type, width, density, material)
{
}

SquareSheet::~SquareSheet()
{
}

double SquareSheet::calcArea() const
{
	
	return sideA * sideB;
}

double SquareSheet::calcVolume() const
{

	return sideA * sideB * width;
}

double SquareSheet::calcWeight() const
{
	double volume = sideA * sideB * width;
	return volume * density;
}

void SquareSheet::showInfo() const
{
	cout << "Сторона А:" << sideA << endl;
	cout << "Сторона Б:" << sideB << endl;
	Sheets::showInfo();
}
