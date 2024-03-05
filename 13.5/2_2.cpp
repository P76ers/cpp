#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Stellen Sie sich vor, die Potenz-Funktion wäre "kaputt"/nicht vorhanden.
Erstellen Sie eine Funktion "hoch(basis, exponent)", die eine ganze Zahl n-mal potenzieren kann.

Hilfe:
2² = 2 x 2
9³ = 9 x 9 x 9
*/

using namespace std;

int hoch(int a, int b)
{
  int hoch = 1, i;
  for (i = 1; i <= b; i++)
  {
    hoch = hoch * a;
  }
  return hoch;
}

int main()
{
  int a, b;
  srand(time(NULL));
  a = rand() % 10 + 1;
  b = rand() % 6;

  cout << a << " hoch " << b << " = " << hoch(a, b);

  return 0;
}
