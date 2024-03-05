#include <iostream>
#include <stdlib.h>
#include <time.h>
#define OG 500
#define UG 1
#define ANZAHL 100

using namespace std;

int main()
{

  int i, mini = 0, maxi = 0, zahl = 0;
  float summe = 0.0, durch = 0.0;
  srand(time(NULL));

  for (i = 1; i <= ANZAHL; i++)
  {
    zahl = rand() % (OG - UG + 1) + UG;
    printf("%3i ", zahl);

    if (i % 10 == 0)
    {
      printf("\n");
    }
    summe = summe + zahl;
    if (i == 1)
    {
      maxi = zahl;
      mini = zahl;
    }
    else if (zahl > maxi)
    {
      maxi = zahl;
    }
    else if (zahl < mini)
    {
      mini = zahl;
    }
  }

  durch = summe / ANZAHL;

  cout << "\nMinimum: " << mini;
  cout << "\nMaximum: " << maxi;
  cout << "\nDurchschnitt: " << durch;

  return 0;
}
