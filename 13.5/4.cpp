#include <iostream>

double joule(double);

/*
Immer wieder gern (zu)genommen, aber aus der Mode: Die Kilokalorie (kcal).
Erstellen Sie daher eine Funktion "Joule(k)", die aus Kalorien Joule errechnet. (1 Kcal = 4,31 Joule)
*/

using namespace std;

int main(int argc, char const *argv[])
{
  double a, erg = 0;

  cout << "Bitte Kilokalorie eingeben:" << endl;
  cin >> a;

  erg = joule(a);

  printf("%.2lf kcal = %.2lf Joule", a, erg);

  return 0;
}

double joule(double x)
{
  double result = 4.32;

  return result *= x;
}