#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Übergeben Sie 2 Variablen mit beliebigem Inhalt "Call by Reference" an eine Funktion "multi()"
und berechnen Sie die Summe, die Differenz, das Produkt und den Quotienten dieser beiden Zahlen
*/

using namespace std;

void multi(double a, double b,
           double *sum, double *dif, double *pro, double *quo)
{
  *sum = a + b;
  *dif = a - b;
  *pro = a * b;
  *quo = a / b;
}

int main()
{
  double z1, z2, s, d, p, q;
  cout << "Zahl 1: ";
  cin >> z1;
  cout << "Zahl 2: ";
  cin >> z2;

  multi(z1, z2, &s, &d, &p, &q);

  cout << "\nSumme   ist " << s;
  cout << "\nDifferenz ist " << d;
  cout << "\nProdukt ist " << p;
  cout << "\nQuotient ist " << q;
  return 0;
}
