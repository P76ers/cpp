#include <iostream>
#include <cstdlib>
#include <ctime>
#define ANZAHL 50

/*
Ermittlung und Ausgabe von Minimum und Maximum eines Arrays (Ganzzahlen).
*/

using namespace std;

int main()
{
  int a[ANZAHL] = {0}, i, mini, maxi;
  srand(time(NULL));

  for (i = 0; i < ANZAHL; i++)
  {
    a[i] = rand() % 100 + 1;
    cout << a[i] << " ";
  }

  mini = maxi = a[0];
  for (i = 1; i < ANZAHL; i++)
  {
    if (a[i] > maxi)
    {
      maxi = a[i];
    }
    else if (a[i] < mini)
    {
      mini = a[i];
    }
  }
  printf("\nMinimum ist: %i", mini);
  printf("\nMaximum ist: %i", maxi);

  return 0;
}
