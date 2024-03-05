#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#define ANZ 50

/*
Ermitteln Sie die Anzahl der geraden und ungeraden Zahlen...
*/

using namespace std;

int main()
{
  int z[ANZ], i;
  int gerade = 0, ungerade = 0;
  srand(time(NULL));

  for (i = 0; i < ANZ; i++)
  {
    z[i] = rand() % 100 + 1;
  }

  for (i = 0; i < ANZ; i++)
  {
    cout << z[i] << " ";
    if ((i + 1) % 10 == 0)
      cout << endl;
    if (z[i] % 2 == 0)
    {
      ungerade++;
    }
    else
    {
      gerade++;
    }
  }
  cout << "\n---------------------\n";

  cout << "Ungerade:  " << ungerade << endl;
  cout << "Gerade:  " << gerade << endl;

  return 0;
}
