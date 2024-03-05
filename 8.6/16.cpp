#include <iostream>

/*
Ein Exporteur bietet seinen ausländischen Kunden bei Kauf des Artikels:

Endlosschleifen, rosa, wahlweise links- oder rechtsgedreht
Preis pro Stück: 3,98 €

folgende Rabatte an:
bei Abnahme von mindestens 100 Stück: 5 % Rabatt
mindestens 1.000 Stück: 10 % Rabatt
mindestens 5.000 Stück: 15 % Rabatt
mindestens 10.000 Stück: 20 % Rabatt
Ein Programm soll nach Eingabe der gekauften Menge folgende Daten berechnen und ausgeben:

Nettopreis gesamt
Rabattbetrag
Nettobetrag abzgl. Rabatt
MwSt (voller Satz)
Bruttoendpreis.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int menge = 0;
  float einzelPreis = 3.98;
  float gesamtNetto = 0;
  int rabatt = 0;
  float rabattBetrag = 0;
  float nettoNachRabatt = 0;
  float mwSt = 0;
  float bruttoEndPreis = 0;

  cout << "Bitte Menge angeben: " << endl;
  cin >> menge;

  if (menge >= 10000)
  {
    rabatt = 20;
  }
  else if (menge >= 5000)
  {
    rabatt = 15;
  }
  else if (menge >= 1000)
  {
    rabatt = 10;
  }
  else if (menge >= 100)
  {
    rabatt = 5;
  }

  gesamtNetto = menge * einzelPreis - gesamtNetto;
  rabattBetrag = menge * (einzelPreis * rabatt / 100);
  nettoNachRabatt = gesamtNetto - rabattBetrag;
  mwSt = nettoNachRabatt * 0.19;
  bruttoEndPreis = nettoNachRabatt + mwSt;

  cout
      << "Gesamtnetto: " << gesamtNetto << endl;
  cout << "Rabattbetrag: " << rabattBetrag << endl;
  cout << "Nettobetrag abzgl. Rabatt: " << nettoNachRabatt << endl;
  cout << "zzgl. Umsatzsteuer: " << mwSt << endl;
  cout << "Endpreis brutto : " << bruttoEndPreis << endl;

  return 0;
}