#include <iostream>

using namespace std;

int main()
{
  int a = 0;
  int b = 0;

  // Eingabe
  //
  cout << "Eingabe von a: \n";
  cin >> a;
  cout << "Eingabe von b: \n";
  cin >> b;

  // Verarbeitung

  // modulo funktioniert nur bei integer
  a %= b;

  // int werden abgeschnitten
  // a /= b;

  // Ausgabe
  cout << a;

  /*
  Eingabe 3 und 8     -   299 und 100
  Ergebnis 0 Rest 3   -   2 Test 99
  */

  return 0;
}
