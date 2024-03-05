#include <iostream>

int hoch(int, int);

/*
Stellen Sie sich vor, die Potenz-Funktion wäre "kaputt"/nicht vorhanden.
Erstellen Sie eine Funktion "hoch(basis, exponent)", die eine ganze Zahl n-mal potenzieren kann.

Hilfe:
2² = 2 x 2
9³ = 9 x 9 x 9
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 9;
  int b = 3;
  int c = 0;

  // cout << "Bitte Seite A eingeben" << endl;
  // cin >> a;

  // cout << "Bitte Seite B eingeben" << endl;
  // cin >> b;

  c = hoch(a, b);

  cout << "Seite C betraegt : " << c << endl;
  return 0;
}

int hoch(int a, int b)
{
  int c = 1;

  for (b; b >= 1; b--)
  {
    c *= a;
  }

  return c;
}