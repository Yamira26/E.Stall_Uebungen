// Vektorrechnung(simpel).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "stdfx.h"


typedef struct
{
	int x;
	int y;

} Vektor;

Vektor Addiere(Vektor add1, Vektor add2);
Vektor Subtrahiere(Vektor minuend, Vektor subtrahent);

int main()
{
	//Definition
	Vektor a, b, c, d;

	//Initialisierung
	a.x = 0;
	b.x = 0;
	a.y = 0;
	b.y = 0;

	printf("Vektorrechnung\n");
	printf("==============\n\n");
	printf("Gib die x-Koordinate des 1. Vektors an: ");
	scanf_s("%i", &a.x);
	rewind(stdin);
	printf("Gib die y-Koordinate des 1. Vektors an: ");
	scanf_s("%i", &a.y);
	rewind(stdin);
	printf("Gib die x-Koordinate des 2. Vektors an: ");
	scanf_s("%i", &b.x);
	rewind(stdin);
	printf("Gib die y-Koordinate des 2. Vektors an: ");
	scanf_s("%i", &b.y);
	rewind(stdin);

	c = Addiere(a, b);
	d = Subtrahiere(a, b);
	printf("\nDie Summe der beiden Vektoren fuehrt zu einem Vektor mit x=%i y=%i als Koordinaten. \n", c.x, c.y);
	printf("\nDie Differenz der beiden Vektoren fuehrt zu einem Vektor mit x=%i y=%i als Koordinaten. \n", d.x, d.y);
	getchar();
}



Vektor Addiere(Vektor a, Vektor b) 
{
	Vektor temp;
	temp.x = a.x + b.x;
	temp.y = a.y + b.y;
	return temp;
}

Vektor Subtrahiere(Vektor m, Vektor s)
{
	Vektor temp;
	temp.x = m.x - s.x;
	temp.y = m.y - s.y;
	return temp;
}