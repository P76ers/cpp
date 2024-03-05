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
  int a = 1;
  int b = 1;
  int c = 0;

  while (b <= 10)
  {
    c = a * b;
    cout << a << " x " << b << " = " << c << "\n";
    a++;
    if (a == 11)
    {
      a = 1;
      b++;
    }
  }

  return 0;
}