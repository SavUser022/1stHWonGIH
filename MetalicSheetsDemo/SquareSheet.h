#pragma once
#include "Sheets.h"
class SquareSheet :
    public Sheets
{
private:
    double sideA;
    double sideB;
public:
    SquareSheet();
    SquareSheet(double sideA, double sideB, string type, double width, double density, string material);
    ~SquareSheet();
    double calcArea() const override;
    double calcVolume() const override;
    double calcWeight() const override;
    void showInfo() const override;
};

