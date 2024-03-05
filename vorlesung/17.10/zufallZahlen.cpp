#include <iostream>
#include <stdlib.h>
#include <time.h>
#define OG 6
#define UG 1

/*
Geben Sie 50 zufällig ermittelte Zahlen in der Konsole aus.
*/

using namespace std;

int main()
{
  int i, zufall;
  srand(time(NULL)); // Start Random

  for (i = 1; i <= 50; i++)
  {
    //	zufall=rand()%(Obergrenze-Untergrenze+1)+Untergrenze
    zufall = rand() % (OG - UG + 1) + UG;
    cout << zufall << " ";
    if (i % 10 == 0)
    {
      cout << endl;
    }
  }

  return 0;
}
