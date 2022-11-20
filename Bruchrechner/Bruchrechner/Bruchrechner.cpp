#include "Bruchrechner.h"

Bruch Bruchrechner::Addition(Bruch b1, Bruch b2)
{
    Bruch Ergebnis;

    int z = b1.GetZaehler() * b2.GetNenner() + b2.GetZaehler() * b1.GetNenner();
    Ergebnis.SetZaehler(z);
    int n = b1.GetNenner() * b2.GetNenner();
    Ergebnis.SetNenner(n);

    Ergebnis.Kuerzen();
    return Ergebnis;
}

Bruch Bruchrechner::Subtraktion(Bruch b1, Bruch b2)
{
    Bruch Ergebnis;

    int z = b1.GetZaehler() * b2.GetNenner() - b2.GetZaehler() * b1.GetNenner();
    Ergebnis.SetZaehler(z);
    int n = b1.GetNenner() * b2.GetNenner();
    Ergebnis.SetNenner(n);

    Ergebnis.Kuerzen();
    return Ergebnis;
}

Bruch Bruchrechner::Multiplikation(Bruch b1, Bruch b2)
{
    Bruch Ergebnis;

    int z = b1.GetZaehler() * b2.GetZaehler();
    Ergebnis.SetZaehler(z);
    int n = b1.GetNenner() * b2.GetNenner();
    Ergebnis.SetNenner(n);

    Ergebnis.Kuerzen();
    return Ergebnis;
}

Bruch Bruchrechner::Division(Bruch b1, Bruch b2)
{
    Bruch d1;
    d1.SetNenner(b2.GetZaehler());
    d1.SetZaehler(b2.GetNenner());
    return Multiplikation(d1, b1);
}
