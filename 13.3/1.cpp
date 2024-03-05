#include <iostream>

/*
Das Programm gibt das kleine Einmaleins aus, d.h. 1 x 1 = 1 bis 10 x 10 = 100.
Erstellen Sie 4 Lösungen:
  mit 2 Kopfschleifen + Laufbedingungen,
  mit 2 Fußschleifen + Abbruchbedingungen
  mit 2 For-Schleifen
  und mit nur einer Schleife und einer Verzweigung darin.
*/

using namespace std;

int main()
{
  int a, b, c;

  for (b = 1; b <= 10; b++)
  {
    for (a = 1; a <= 10; a++)
    {
      c = a * b;
      cout << a << " x " << b << " = " << c << "\n";
    }
  }

  return 0;
}