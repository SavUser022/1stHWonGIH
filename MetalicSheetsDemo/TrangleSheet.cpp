#include "TrangleSheet.h"

TrangleSheet::TrangleSheet() : 
	Sheets(), sideA(0.0), sideB(0.0), sideC(0.0)
{
}

TrangleSheet::TrangleSheet(string type, double width, double density, double sideA, double sideB, double sideC, string material) 
	: Sheets(type, width, density, material) , sideA(sideA), sideB(sideB), sideC(sideC)
{}

TrangleSheet::~TrangleSheet()
{}

void TrangleSheet::showInfo() const
{	
	cout << setw(10) << "Сторона А:" << sideA << endl;
	cout << setw(10) << "Сторона Б:" << sideB << endl;
	cout << setw(10) << "Сторона С:" << sideC << endl;
	Sheets::showInfo();
}

double TrangleSheet::calcArea() const
{
	return  (sideA * sideB) / 2;
}

double TrangleSheet::calcWeight() const
{
	double volume = sideA * sideB * sideC * width;
	return density * volume;
}

double TrangleSheet::calcVolume() const
{
	return sideA * sideB * sideC * width;
}

