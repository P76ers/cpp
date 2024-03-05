#include <iostream>

/*
Eingabe: Stückzahl und Einzelpreis.
Bei mehr als 10 Stück gibt es 5 % Rabatt,
bei mehr als 50 Stück gibt es 10 % Rabatt.
Ausgabe: Gesamtpreis.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int menge = 0;
  float einzelPreis = 0;
  float gesamtPreis = 0;
  int rabatt1 = 5;
  int rabatt2 = 10;

  cout << "Bitte geben Sie die Stueckzahl ein: " << endl;
  cin >> menge;

  cout << "Bitte geben Sie den Einzelpreis an: " << endl;
  cin >> einzelPreis;

  if (menge > 50)
  {
    gesamtPreis = menge * (einzelPreis + (einzelPreis * rabatt1 / 100));
  }
  else if (menge > 10)
  {
    gesamtPreis = menge * (einzelPreis + (einzelPreis * rabatt2 / 100));
  }
  else
  {
    gesamtPreis = menge * einzelPreis;
  }

  cout << "Der Gesamtpreis betraegt: " << gesamtPreis << endl;

  return 0;
}