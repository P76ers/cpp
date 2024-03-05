#include <iostream>
using namespace std;

/*
Erstellen Sie bitte ein komplettes C++-Programm "kw.cpp", das eine PS-Leistung
eingegeben bekommt und dann die entsprechenden Kilowattwert berechnet und aus
gibt.

Hilfe: 1 PS = 0,735499 kW
*/

int main()
{
  float ps = 0, kw = 0;

  cout << "Bitte PS eingeben:" << endl;
  cin >> ps;

  kw = ps * 0.735499;

  cout << ps << " PS entsprechen " << kw << " kW" << endl;

  return 0;
}
