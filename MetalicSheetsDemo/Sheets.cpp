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
	cout << "Òèï:" << type << endl;
	cout  << "Òîâùèíà:" << width << " ìì" << endl;
	cout  << "Ù³ëüí³ñòü:" << density << " êã/ì3" << endl;
	cout  << "Îá'ºì" << calcVolume() << " ì3" << endl;
	cout  << "Âàãà:" << calcWeight() << " êã" << endl;
	cout  << "Ïëîùà:" << calcArea() << " ì2" << endl;
	cout  << "Ìàòåð³àë:" << material << endl;
}