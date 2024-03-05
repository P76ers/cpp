#include <iostream>

/*
Es sollen vom Benutzer ein Anlagebetrag, ein Zinssatz (in %) und eine Stehzeit eingegeben werden.
Das Programm gibt dann in einer Tabelle die Entwicklung des Kapitalzuwachses anschaulich in einer Tabelle aus.
(Auf die Zahlenformatierung brauchen Sie noch nicht Rücksicht zu nehmen.)
Beispiel: Kapital 1000 Euro, Zinssatz 3 % auf 5 Jahre angelegt

Umsetzung der Konsoleneingaben und Ausgaben über eine Funktion.

Erweiterung der Funktion mit Schleifen, falls Werte nicht innerhalb vorgegebener Grenzen
*/

using namespace std;

double eingabe(string text, float unten, float oben)
{
  double zahl;

  do
  {
    cout << text << " eingeben(" << unten << "-" << oben << "): ";
    cin >> zahl;
  } while (zahl < unten || zahl > oben);

  return zahl;
}

int main()
{
  float kapital = 0.0, nkapital = 0.0, zinssatz = 0, zinsen = 0.0;
  int jahre = 0, i;

  kapital = eingabe("Kapital", 500, 500000);
  zinssatz = eingabe("Zinssatz", 0.5, 10);
  jahre = eingabe("Stehzeit", 1, 50);

  for (i = 1; i <= jahre; i++)
  {
    zinsen = kapital * zinssatz / 100;
    nkapital = kapital + zinsen;

    printf("%3i %8.2f %6.2f %8.2f\n", i, kapital, zinsen, nkapital);
    kapital = nkapital;
  }

  return 0;
}
