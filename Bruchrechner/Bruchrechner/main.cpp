// Bruchrechner.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Bruchrechner.h"

int main()
{
    Bruch a,b; 
    a.SetNenner(429);
    a.SetZaehler(1155);

    b.SetNenner(462);
    b.SetZaehler(-60);

    Bruchrechner r;
    Bruch add = r.Addition(a, b);
    Bruch sub = r.Subtraktion(a, b);
    Bruch mult = r.Multiplikation(a, b);
    Bruch div = r.Division(a, b);

    std::cout << "Bruch 1: " << a.GetZaehler() << "/" << a.GetNenner() << std::endl;
    std::cout << "Bruch 2: " << b.GetZaehler() << "/" << b.GetNenner() << std::endl;

    std::cout << "Addiert: " << add.GetZaehler() << "/" << add.GetNenner() << std::endl;
    std::cout << "Subrathiert: " << sub.GetZaehler() << "/" << sub.GetNenner() << std::endl;
    std::cout << "Multipliziert: " << mult.GetZaehler() << "/" << mult.GetNenner() << std::endl;
    std::cout << "Dividiert: " << div.GetZaehler() << "/" << div.GetNenner() << std::endl;



}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
