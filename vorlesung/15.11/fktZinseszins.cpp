#include <iostream>

/*
Es sollen vom Benutzer ein Anlagebetrag, ein Zinssatz (in %) und eine Stehzeit eingegeben werden.
Das Programm gibt dann in einer Tabelle die Entwicklung des Kapitalzuwachses anschaulich in einer Tabelle aus.
(Auf die Zahlenformatierung brauchen Sie noch nicht Rücksicht zu nehmen.)
Beispiel: Kapital 1000 Euro, Zinssatz 3 % auf 5 Jahre angelegt

Umsetzung der Konsoleneingaben und Ausgaben über eine Funktion
*/

using namespace std;

float eingabe(string text)
{
  float zahl;
  cout << text << " eingeben: ";
  cin >> zahl;
  return zahl;
}

int main()
{
  float kapital = 0.0, nkapital = 0.0, zinssatz = 0, zinsen = 0.0;
  int jahre = 0, i;

  kapital = eingabe("Kapital");
  zinssatz = eingabe("Zinssatz");
  jahre = eingabe("Stehzeit");

  for (i = 1; i <= jahre; i++)
  {
    zinsen = kapital * zinssatz / 100;
    nkapital = kapital + zinsen;

    printf("%3i %8.2f %6.2f %8.2f\n", i, kapital, zinsen, nkapital);
    kapital = nkapital;
  }

  return 0;
}
