#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/*
Zerlegen Sie eine bis zu vierstellige Zahl (Eingabe)
und geben Sie die Teile einzeln aus, z.B.
1234 = 1 Tausender + 2 Hunderter + 3 Zehner + 4 Einer
689 = 6 Hunderter + 8 Zehner + 9 Einer
7 = 7 Einer
*/

using namespace std;

int main()
{
  int zahl = 0, t = 0, h = 0, z = 0;

  cout << "Zahl bitte: (max. 9999)";
  cin >> zahl;

  t = zahl / 1000;
  zahl = zahl % 1000;

  h = zahl / 100;
  zahl = zahl % 100;

  z = zahl / 10;
  zahl = zahl % 10;

  if (t > 0)
    cout << t << " Tausender + ";

  cout << h << " Hunderter + ";
  cout << z << " Zehner + ";
  cout << zahl << " Einer";
  cout << endl
       << "Rest : " << zahl;

  return 0;
}
