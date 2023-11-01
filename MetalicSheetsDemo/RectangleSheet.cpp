#include "RectangleSheet.h"

RectangleSheet::RectangleSheet() : sideA(0.0), sideB(0.0), Sheets()
{
}

RectangleSheet::RectangleSheet(double sideA, double sideB, string type, double width, double density, string material) 
	: Sheets(type, width, density, material)
{}

RectangleSheet::~RectangleSheet()
{
}

double RectangleSheet::calcArea() const
{

	return sideA * sideB;
}

double RectangleSheet::calcVolume() const
{

	return sideA * sideB * width;
}

double RectangleSheet::calcWeight() const
{
	double volume = sideA * sideB * width;
	return volume * density;
}

void RectangleSheet::showInfo() const
{
	cout << setw(10) << "Сторона: А" << sideA << endl;
	cout << setw(10) << "Сторона: Б" << sideB << endl;
	Sheets::showInfo();
}
