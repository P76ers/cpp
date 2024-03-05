#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#define ANZ 50

using namespace std;

/*
Ermitteln Sie Minumum und Maximum aus einem Array.
*/

int main()
{
  int min = 0;
  int max = 0;
  int z[ANZ], i;
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
    if (i == 0)
    {
      min = max = z[i];
    }
    else if (z[i] < min)
    {
      min = z[i];
    }
    else if (z[i] > max)
    {
      max = z[i];
    }
  }
  cout << "\n---------------------\n";

  cout << "min: " << min << endl;
  cout << "max: " << max << endl;

  return 0;
}
