#include <iostream>
#include <iomanip>

/*
Schreiben Sie ein Programm zur Kalkulation des Bezugspreises einer Ware.
Die Kalkulation erfolgt nach dem folgenden Beispiel.
Eingegeben wird der Listenpreis, Ausgaben bitte wie unten gezeigt.

  Listenpreis:                    125.00 EUR
- Rabatt 10 %                      12.50 EUR
= Zieleinkaufspreis               112.50 EUR
- Skonto (2 %)                      2.25 EUR
= Bareinkaufspreis                110.25 EUR
+ Versandkosten                     6.50 EUR
= Bezugspreis (Einstandspreis)    116.75 EUR
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float listenPreis = 125;
  float rabatt = 0;
  float zielEinkaufsPreis = 0;
  float skonto = 0;
  float barEinkaufsPreis = 0;
  float versandKosten = 6.5;
  float bezugsPreis = 0;

  cout << fixed << setprecision(2);
  cout << "Bitte Listenpreis eingeben: " << endl;
  cin >> listenPreis;

  rabatt = listenPreis * 0.1;
  zielEinkaufsPreis = listenPreis - rabatt;
  skonto = zielEinkaufsPreis * 0.02;
  barEinkaufsPreis = zielEinkaufsPreis - skonto;
  bezugsPreis = barEinkaufsPreis + versandKosten;

  cout << " Listenpreis:  \t \t" << setw(11) << right << listenPreis << " EUR" << endl;
  cout << "- Rabatt 10%:  \t \t" << setw(11) << right << rabatt << " EUR" << endl;
  cout << "= Zieleinkaufspreis:  \t" << setw(11) << right << zielEinkaufsPreis << " EUR" << endl;
  cout << "- Skonto 10%:  \t \t" << setw(11) << right << skonto << " EUR" << endl;
  cout << "= Bareinkaufspreis:  \t" << setw(11) << right << barEinkaufsPreis << " EUR" << endl;
  cout << "+ Versandkosten:  \t" << setw(11) << right << versandKosten << " EUR" << endl;
  cout << "= Bezugspreis:  \t" << setw(11) << right << bezugsPreis << " EUR" << endl;

  return 0;
}