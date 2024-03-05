#include <iostream>
#include <cmath>

/*
Ein Zeitgenosse des Pythagoras war Heron von Alexandria.
Basierend auf dem Satz des Pythagoras entwickelte er folgende Formel für
die Berechnung der Fläche jedes Dreiecks:
`𝐹=√(𝑠−𝑎)∗(𝑠−𝑏)∗(𝑠−𝑐)∗𝑠2`
wobei gilt: `𝑠=𝑎+𝑏+𝑐2`
*/

float heron(float, float, float);

using namespace std;

int main()
{
  float a, b, c, f;
  cout << "Seite a: ";
  cin >> a;
  cout << "Seite b: ";
  cin >> b;
  cout << "Seite c: ";
  cin >> c;

  f = heron(a, b, c);

  cout << "Fl\204che: " << f;
  return 0;
}

float heron(float x, float y, float z)
{
  float f, s;
  s = (x + y + z) / 2;
  f = sqrt((s - x) * (s - y) * (s - z) * s);
  return f;
}