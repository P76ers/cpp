#include <iostream>
#include <cmath>

/*
Der Satz des Pythagoras lautet "a² + b² = c²".
Erstellen Sie ein Programm zur Berechnung der Seite C nach
Eingabe der Werte für a und b.

Für die Wurzelberechnung können Sie die Funktion "sqrt()" benutzen.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float a = 0;
  float b = 0;
  float c = 0;

  cout << "Bitte Seite A eingeben" << endl;
  cin >> a;

  cout << "Bitte Seite B eingeben" << endl;
  cin >> b;

  c = sqrt(a * a + b * b);

  cout << "Seite C betraegt : " << c << endl;

  return 0;
}