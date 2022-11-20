#include "Bruch.h"
#include <iostream>

int Bruch::GetNenner()
{
	return this->_nenner;
}

int Bruch::GetZaehler()
{
	return this->_zaehler;
}

void Bruch::SetNenner(int nenner)
{
	this->_nenner = nenner;
}

void Bruch::SetZaehler(int zaehler)
{
	if (zaehler == 0)
	{
		std::cout << "Zähler kann nicht 0 sein." << std::endl;
	}
	_zaehler = zaehler;
}

void Bruch::Kuerzen()
{
	if (this->_zaehler == 0)
	{
		return;
	}
	bool negative = false;
	if (_nenner < 0)
	{
		_nenner = _nenner * (-1);
		negative = true;
	}
	if (_zaehler < 0)
	{
		negative = !negative;
		_zaehler = _zaehler * (-1);
	}

	int n = _nenner, z = _zaehler;
	while (n != 0)
	{
		int h = z % n;
		z = n;
		n = h;
	}

	_zaehler = _zaehler/z;
	_nenner = _nenner / z;

	if (negative)
	{
		_zaehler = _zaehler * (-1);
	}
}
