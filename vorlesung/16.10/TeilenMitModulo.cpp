#include <iostream>

using namespace std;

int main()
{
  // Deklarationen und Initialisierungen
  int a = 0, b = 0, c = 0;

  // Eingabe(n)
  cout << "Eingabe a bitte: ";
  cin >> a; // "Console Input"
  cout << "Eingabe b bitte: ";
  cin >> b; // "Console Input"

  // Verarbeitung
  c = a / b;
  a %= b; // a = a / b

  // Ausgabe(n)
  //  Eingaben: 3 und 8  -  299 und 100
  //  Ausgabe:  0 Rest 3 -   2 Rest 99

  cout << c << " Rest " << a; // "Console Output"
  return 0;
}
