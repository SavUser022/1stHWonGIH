#pragma once
#include "Sheets.h"
class TrangleSheet :
    public Sheets
{
private:
    double sideA; // �����
    double sideB; // �����
    double sideC; // ó��������
public:
    TrangleSheet();
    TrangleSheet(string type, double width, double density, double sideA, double sideB, double sideC, string material);
    ~TrangleSheet();
    void showInfo() const override;
    double calcArea() const override;
    double calcWeight() const override;
    double calcVolume() const override;

};

