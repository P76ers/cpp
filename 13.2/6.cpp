#include <iostream>

/*
Berechnen Sie die Fakultät einer Zahl.
Eingabe                         Ausgabe
3       1 x 2 x 3 =             6
4       1 x 2 x 3 x 4 =         24
5       1 x 2 x 3 x 4 x 5 =     120
*/

using namespace std;

int main()
{
  int zahl = 0;
  int erg = 1;

  cout << "Eingabe a bitte: ";
  cin >> zahl;
  cout << zahl;

  while (zahl > 0)
  {
    erg = erg * zahl;
    zahl--;
  }

  cout << "! = " << erg;

  return 0;
}
