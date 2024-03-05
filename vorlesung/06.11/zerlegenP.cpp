#include <iostream>

/*
  Zerlegen Sie eine bis zu vierstellige Zahl (Eingabe)
und geben Sie die Teile einzeln aus,

z.B.:
- 1234 = 1 Tausender + 2 Hunderter + 3 Zehner + 4 Einer
- 689 = 6 Hunderter + 8 Zehner + 9 Einer
- 7 = 7 Einer
*/

using namespace std;

int main()
{

  int eingabe = 5432;

  printf("%i x tausender \n", eingabe / 1000);
  printf("%i x hunderter \n", eingabe % 1000 / 100);
  printf("%i x zehner \n", eingabe % 100 / 10);
  printf("%i x einer \n", eingabe % 10);

  return 0;
}