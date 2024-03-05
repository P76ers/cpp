#include <iostream>
using namespace std;

/*
Übergeben Sie 2 Variablen mit beliebigem Inhalt "Call by Reference" an eine Funktion "multi()"
und berechnen Sie die Summe, die Differenz, das Produkt und den Quotienten dieser beiden Zahlen
*/

void multi(double, double, double *, double *, double *, double *);

int main()
{
  double a = 4, b = 3, summe = 0, differenz = 0, produkt = 0, quotient = 0;
  cout << "Vorher: " << a << " und " << b << endl;
  cout << "Summe " << summe << " Differenz " << differenz << " Produkt " << produkt << " Quotient " << quotient << endl;

  multi(a, b, &summe, &differenz, &produkt, &quotient);

  cout << "Nachher: " << a << " und " << b << endl;
  cout << "Summe " << summe << " Differenz " << differenz << " Produkt " << produkt << " Quotient " << quotient << endl;

  return 0;
}

void multi(double a, double b, double *s, double *d, double *p, double *q)
{
  *s = a + b;
  *d = a - b;
  *p = a * b;
  *q = a / b;
}
