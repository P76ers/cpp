#include <iostream>
#include <cmath>

/*
Der Satz des Pythagoras lautet "a² + b² = c²".
Erstellen Sie ein Programm zur Berechnung der Seite C nach Eingabe der Werte für a und b.
Für die Wurzelberechnung können Sie die Funktion "sqrt()" benutzen.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float a = 0;
  float b = 0;
  float c = 0;

  do
  {
  cout << "Bitte Seite a eingeben: " << endl;
  cin >> a;
  } while (a < 0);

  do
  {
    cout << "Bitte Seite a eingeben: " << endl;
    cin >> b;
  } while (b < 0);

  c = sqrt(a * a + b * b);

  cout << "Fuer a = " << a << " und b = " << b << endl;
  cout << "Betraegt c = " << c << endl;

  return 0;
}