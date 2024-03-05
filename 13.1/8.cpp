#include <iostream>
#include <cmath>

/*
Ein Zeitgenosse des Pythagoras war Heron von Alexandria.
Basierend auf dem Satz des Pythagoras entwickelte er folgende Formel für
die Berechnung der Fläche jedes Dreiecks:
`𝐹=√(𝑠−𝑎)∗(𝑠−𝑏)∗(𝑠−𝑐)∗𝑠2`
wobei gilt: `𝑠=𝑎+𝑏+𝑐2`
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float a = 0;
  float b = 0;
  float c = 0;
  float s = 0;
  float f = 0;

  cout << "Bitte Seite a eingeben: " << endl;
  cin >> a;

  do
  {
    cout << "Bitte positive Werte fuer Seite a eingeben: " << endl;
    cin >> a;
  } while (a < 0);

  cout << "Bitte Seite b eingeben: " << endl;
  cin >> b;

  do
  {
    cout << "Bitte positive Werte fuer Seite b eingeben: " << endl;
    cin >> b;
  } while (b < 0);

  c = sqrt(a * a + b * b);
  s = (a + b + c) / 2;
  f = sqrt((s - a) * (s - b) * (s - c) * s);

  cout << "Fuer a = " << a << " und b = " << b << endl;
  cout << "Betraegt c = " << c << endl;
  cout << "S betraegt: " << s << endl;
  cout << "Flaeche betraegt: " << f << endl;

  return 0;
}
