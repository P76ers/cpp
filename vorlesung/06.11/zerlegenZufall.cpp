#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

/*
Zerlegen Sie eine bis zu vierstellige Zahl (Eingabe)
und geben Sie die Teile einzeln aus, z.B.
1234 = 1 Tausender + 2 Hunderter + 3 Zehner + 4 Einer
689 = 6 Hunderter + 8 Zehner + 9 Einer
7 = 7 Einer

Mit 10 Zufallszahlen
*/

int main()
{
  int zahl, t = 0, h = 0, z = 0, i;
  srand(time(NULL));

  for (i = 1; i <= 10; i++)
  {

    zahl = rand() % 9999 + 1;
    printf("Zahl: %4i => ", zahl);

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
    cout << zahl << " Einer\n";
  }

  return 0;
}
