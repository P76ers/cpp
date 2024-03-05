#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Minimum und Maximum aus einem Array über eine Funktion und `call by reference` bestimmen
*/

void arrMinMax(int[], int, int *, int *);

int main()
{
  int z[10], i, mini, maxi;

  srand(time(NULL));

  printf("\nVorher :");
  for (i = 0; i < 10; i++)
  {
    z[i] = rand() % 100 + 1;
    printf("%i ", z[i]);
  }

  arrMinMax(z, 10, &mini, &maxi);

  printf("\nMinimum: %i ", mini);
  printf("\nMaximum: %i ", maxi);
  return 0;
}

void arrMinMax(int arr[], int anz, int *min, int *max)
{
  int i;
  *min = *max = arr[0];
  for (i = 0; i < anz; i++)
  {
    if (arr[i] < *min)
    {
      *min = arr[i];
    }
    else if (arr[i] > *max)
    {
      *max = arr[i];
    }
  }
}
