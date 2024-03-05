#include <iostream>
#include <stdlib.h>
#include <time.h>
#define OG 6
#define UG 1
#define ANZAHL 60

/*
Ein Programm soll 100/1000/10.000/... mal "würfeln".
Ermitteln Sie, wie oft jede Zahl (1-6) jeweils geworfen wurde.
*/

using namespace std;

int main()
{
  int i, zufall, z[7] = {0};

  srand(time(NULL)); // Start Random

  for (i = 1; i <= ANZAHL; i++)
  {
    zufall = rand() % (OG - UG + 1) + UG;
    cout << zufall << " ";
    if (i % 20 == 0)
    {
      cout << "\n";
    }
    z[zufall]++;
  }

  for (i = 1; i < 7; i++)
  {
    cout << "\n " << i << ": " << z[i] << " mal";
  }

  return 0;
}
