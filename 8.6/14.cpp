#include <iostream>
#define GRUNDGEHALT 3000

/*
Sie haben in Ihrem Außendienst mehrere Vertreter beschäftigt und wollen für diese Mitarbeiter Provisionen und
jeweils das Gesamtgehalt eines Mitarbeiters berechnen.

Das Grundgehalt der Vertreter beträgt 3.000 €, und es gilt folgende Provisionsregelung im Unternehmen:

- Unter 10.000 € Umsatz bekommt ein Vertreter 3% Provision.
- bei einem Umsatz zwischen 10.000 € und 20.000 € gibt es 5% Provision.
- liegt der Umsatz über 20.000 €, so bekommt ein Vertreter 7.5% Provision.

Für jeden Vertreter soll nach Eingabe des Umsatzes das Gehalt berechnet und ausgegeben werden.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float umsatz = 0.0;
  float gehalt = 0.0;

  cout << "Bitte Umsatz eingeben:" << endl;
  cin >> umsatz;

  if (umsatz < 10000)
  {
    gehalt = GRUNDGEHALT * 1.03;
  }
  else if (umsatz >= 10000 && umsatz <= 20000)
  {
    gehalt = GRUNDGEHALT * 1.05;
  }
  else if (umsatz > 20000)
  {
    gehalt = GRUNDGEHALT * 1.075;
  }
  cout << "Sie erhalten insgesamt: " << gehalt << endl;
  return 0;
}