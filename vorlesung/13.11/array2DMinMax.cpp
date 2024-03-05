#include <iostream>
#include <cstdlib>
#include <ctime>
#define ZEILEN 10
#define SPALTEN 5

/*
Minimum und Maximum aus einem zweidimensionalen Array ausgeben.
*/

using namespace std;

int main()
{
  int a[ZEILEN][SPALTEN] = {0}, i, k, mini = 0, maxi = 0;
  srand(time(NULL));

  a[i][k] = rand() % 451 + 50;
  mini = maxi = a[i][k];
  i++;
  k++;

  for (i = 0; i < ZEILEN; i++)
  {
    for (k = 0; k < SPALTEN; k++)
    {
      a[i][k] = rand() % 451 + 50;
      printf("%4i", a[i][k]);

      if (a[i][k] > maxi)
      {
        maxi = a[i][k];
      }
      else if (a[i][k] < mini)
      {
        mini = a[i][k];
      }
    }
    cout << endl;
  }

  printf("\nMinimum: %3i", mini);
  printf("\nMaximum: %3i", maxi);

  return 0;
}
