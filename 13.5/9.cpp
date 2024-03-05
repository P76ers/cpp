#include <iostream>
#include <cmath>

/*
Bestimmen Sie nach Eingabe des Radius in einer Funktion Volumen, Oberfläche und Umfang einer Kugel.
(Hilfe: Die Konstante M_PI ist in der math.h enthalten)

`Call by Reference`

Formelübersicht:
  - d = 2·r ← Durchmesser = 2 mal Radius
  - U = 2·π·r ← Umfang = 2 mal Pi mal Radius.
  - A = π·r² ← Kreisfläche = Pi mal Radius ins Quadrat.
  - O = 4·π·r² ← Oberfläche = 4 mal Pi mal Radius ins Quadrat.
  - V = (4/3)·π·r³ ← Volumen = Vier Drittel mal Pi mal Radius hoch 3
*/

using namespace std;

void kugel(float r, float *u, float *o, float *v)
{
  *u = 2 * M_PI * r;
  *o = 4 * M_PI * r * r;
  *v = (4.0 / 3) * M_PI * pow(r, 3);
}

int main()
{
  float r, umf, ober, vol;

  cout << "Radius? ";
  cin >> r;

  kugel(r, &umf, &ober, &vol);

  cout << "Umfang: " << umf << endl;
  cout << "Oberfl\204che: " << ober << endl;
  cout << "Volumen: " << vol << endl;
  return 0;
}