#include <iostream>

/*
Das Volumen eines Quaders berechnet sich aus a * b * c.
Erstellen Sie ein Programm, dass nach Eingabe der 3 Werte das Volumen berechnet und ausgibt.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float a = 0;
  float b = 0;
  float c = 0;
  float volumen = 0;

  cout << "Bitte Seite A eingeben" << endl;
  cin >> a;

  cout << "Bitte Seite B eingeben" << endl;
  cin >> b;

  cout << "Bitte Seite C eingeben" << endl;
  cin >> c;

  volumen = a * b * c;

  cout << "das Volumen betraegt : " << volumen << endl;

  return 0;
}