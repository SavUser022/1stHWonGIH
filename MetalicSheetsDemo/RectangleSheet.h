#pragma once
#include "Sheets.h"
class RectangleSheet :
    public Sheets
{
private:
    double sideA;
    double sideB;
public:
    RectangleSheet();
    RectangleSheet(double sideA, double sideB, string type, double width, double density, string materail);
    ~RectangleSheet();
    double calcArea() const override;
    double calcVolume() const override;
    double calcWeight() const override;
    void showInfo() const override;
};

