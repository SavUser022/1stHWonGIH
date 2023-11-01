#pragma once
#include "Header.h"
class Sheets
{
protected:
	string type;
	double width;
	double density;
	string material;
public:
	Sheets();
	Sheets(string type, double width, double density, string material);
	~Sheets();
	virtual void showInfo() const ;
	virtual double  calcArea() const = 0;
	virtual double  calcWeight() const = 0;
	virtual double calcVolume() const = 0;
};

