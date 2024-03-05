#include <iostream>

/*
Es gelte folgende vereinfachte Steuertabelle:
20% Steuern bei mehr als 10.000€ Einkommen;
30% Steuern bei mehr als 25.000€ Einkommen;
50% Steuern bei mehr als 50.000€ Einkommen;
Geringverdiener zahlen nur 10% Steuern.

Eingegeben wird (nur) das Bruttogehalt.
Erstellen Sie ein Programm zur Ermittlung und Ausgabe der Steuerlast und des Nettogehalts.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float bruttoGehalt = 0.0;
  float steuerLast = 0.0;
  float nettoGehalt = 0.0;

  cout << "Bitte Bruttogehalt eingeben: " << endl;
  cin >> bruttoGehalt;

  if (bruttoGehalt > 50000)
  {
    nettoGehalt = bruttoGehalt * 0.5;
  }
  else if (bruttoGehalt > 25000)
  {
    nettoGehalt = bruttoGehalt * 0.7;
  }
  else if (bruttoGehalt > 10000)
  {
    nettoGehalt = bruttoGehalt * 0.8;
  }
  else
  {
    nettoGehalt = bruttoGehalt * 0.9;
  }

  steuerLast = bruttoGehalt - nettoGehalt;

  cout << "Ihr Nettogehalt betraegt: " << nettoGehalt << endl;
  cout << "Ihre Steuerlast betraegt: " << steuerLast << endl;

  return 0;
}