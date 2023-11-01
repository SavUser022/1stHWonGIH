#include "Sheets.h"

Sheets::Sheets() : type("NO TYPE"), width(0.0), density(0.0), material("NO MATERAIL")
{

}

Sheets::Sheets(string type, double width, double density, string material) : type(type), width(width), density(density), material(material)
{
}

Sheets::~Sheets()
{
}
void Sheets::showInfo() const
{
	cout << "���:" << type << endl;
	cout  << "�������:" << width << " ��" << endl;
	cout  << "ٳ������:" << density << " ��/�3" << endl;
	cout  << "��'��" << calcVolume() << " �3" << endl;
	cout  << "����:" << calcWeight() << " ��" << endl;
	cout  << "�����:" << calcArea() << " �2" << endl;
	cout  << "�������:" << material << endl;
}