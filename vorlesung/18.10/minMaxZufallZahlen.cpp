#include <iostream>
#include <stdlib.h>
#include <time.h>
#define OG 200
#define UG 100

using namespace std;

int main()
{

  int i = 0, mini = 0, maxi = 0, zahl = 0;
  float summe = 0.0, durch = 0.0;

  srand(time(NULL)); // Start Random
  zahl = rand() % (OG - UG + 1) + UG;

  mini = zahl;
  maxi = zahl;
  summe = zahl;

  for (i = 1; i < 10; i++)
  {

    zahl = rand() % (OG - UG + 1) + UG;

    summe += zahl;
    if (zahl > maxi)
    {
      maxi = zahl;
    }
    else if (zahl < mini)
    {
      mini = zahl;
    }
  }
  durch = summe / i;

  cout << "Minimum:" << mini << endl;
  cout << "Maximum:" << maxi << endl;
  cout << "Durchschnitt" << durch << endl;

  return 0;
}