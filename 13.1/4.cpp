#include <iostream>

/*
Erstellen sie ein einfaches Kassenprogramm.
Es soll eine Kaufsumme eingegeben werden, dazu die Zahlung des Kunden.

Das Programm soll den Rückgabebetrag (Wechselgeld),
sowie die im Kaufpreis enthaltene Mehrwertsteuer (voller Satz) berechnen und anzeigen.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float kaufSumme = 0;
  float zahlung = 0;
  float wechselGeld = 0;
  float mwSt = 0;

  cout << "Kaufsumme bitte: " << endl;
  cin >> kaufSumme;
  cout << "Ihr Zahlung bitte: " << endl;
  cin >> zahlung;

  wechselGeld = zahlung - kaufSumme;
  mwSt = kaufSumme * 0.19;

  cout << "Ihre Kaufsumme: " << kaufSumme << endl;
  cout << "MwStAnteil: " << mwSt << endl;
  cout << "Ihre Zahlung:" << zahlung << endl;
  cout << "Ihr Wechselgeld: " << wechselGeld << endl;

  return 0;
}