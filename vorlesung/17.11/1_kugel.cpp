#include <iostream>
#include <cmath>

using namespace std;

void kugel(double, double *, double *);

/*
Fassen Sie in C++ die beiden Funktionen "ober()" und "vol()" zu einer Funktion zusammen,
die Oberfläche und Volumen der Kugel gleichzeitig berechnet und schreiben Sie das Programm
entsprechend um
*/

using namespace std;

int main(int argc, char const *argv[])
{
  double s = 0.0, v = 0.0, r = 0.0;

  cout << "Bitte radius eingeben: " << endl;
  cin >> r;

  kugel(r, &s, &v);

  cout << "Oberflaeche = " << s << endl;
  cout << "Volumen     = " << v << endl;

  return 0;
}

void kugel(double r, double *s, double *v)
{

  *s = 4 * M_PI * pow(r, 2);
  *v = 4 / 3.0 * M_PI * pow(r, 3);
}