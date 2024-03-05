#include <iostream>

/*
Für einen einfachen Taschenrechner soll es 3 (drei!) einzelne Eingaben geben:

- Zahl1
- Operator (+, -, x, /)
- Zahl2

Das Programm soll dann anhand des Operators die richtige Berechnung durchführen
und das Ergebnis auf dem Bildschirm ausgeben.

Achtung: Eine Division durch 0 ist nicht erlaubt und ist mit einer Fehlermeldung zu quittieren,
es darf dann kein Ergebnis ausgegeben werden.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float zahl1 = 0.0;
  float zahl2 = 0.0;
  char operat = ' ';
  float ergebnis = 0.0;

  cout << "Bitte Zahl1 eingeben: " << endl;
  cin >> zahl1;

  do
  {
    cout << "Bitte Operator eingeben: " << endl;
    cin >> operat;
  } while (operat != '+' && operat != '-' && operat != '*' && operat != '/');

  do
  {
    cout << "Bitte Zahl2 eingeben: " << endl;
    cin >> zahl2;
    if (operat == '/' && zahl2 == 0)
    {
      cout << "Division durch 0 nicht moeglich!" << endl;
    }
  } while (operat == '/' && zahl2 == 0);

  switch (operat)
  {
  case '+':
    ergebnis = zahl1 + zahl2;
    cout << zahl1 << " + " << zahl2 << " = " << ergebnis << endl;
    break;
  case '-':
    ergebnis = zahl1 - zahl2;
    cout << zahl1 << " - " << zahl2 << " = " << ergebnis << endl;
    break;
  case '*':
    ergebnis = zahl1 * zahl2;
    cout << zahl1 << " * " << zahl2 << " = " << ergebnis << endl;
    break;
  default:
    ergebnis = zahl1 / zahl2;
    cout << zahl1 << " / " << zahl2 << " = " << ergebnis << endl;
    break;
  }

  return 0;
}