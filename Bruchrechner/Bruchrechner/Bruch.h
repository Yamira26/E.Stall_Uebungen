#pragma once
class Bruch
{
public:
	int GetNenner();
	int GetZaehler();
	void SetNenner(int nenner);
	void SetZaehler(int zaehler);
	void Kuerzen();

private:
	int _zaehler;
	int _nenner;
};

