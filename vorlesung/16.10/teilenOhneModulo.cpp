#include <iostream>

/*
Teilen ohne modulo...
  b != 0
  a > b
    z.B.  Eingaben: 3 und 8  -  299 und 100
    ->    Ausgabe:  0 Rest 3 -   2 Rest 99
*/

using namespace std;

int main()
{
  int a = 0, b = 0, c = 0;

  cout << "Eingabe a bitte: ";
  cin >> a;
  cout << "Eingabe b bitte: ";
  cin >> b;

  while (a >= b)
  {
    a -= b;
    c++;
  }

  cout << c << " Rest " << a;
  return 0;
}
