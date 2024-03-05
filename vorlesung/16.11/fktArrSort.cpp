#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Bubblesort als Funktion
*/

void arrSort(int[], int);

int main()
{
  int z[10], i, y;

  srand(time(NULL));

  printf("\nVorher :");
  for (i = 0; i < 10; i++)
  {
    z[i] = rand() % 49;
    printf("%i ", z[i]);
  }

  arrSort(z, 10); // Uebergabe der Anfangsadresse des (gesamten!) Arrays

  printf("\n\nNachher:");
  for (i = 0; i < 10; i++)
  {
    printf("%i ", z[i]);
  }
  return 0;
}

void arrSort(int arr[], int i)
{
  int hilf, x;
  char tausch = 'f';

  do
  {
    tausch = 'f';
    i--;
    for (x = 0; x < i; x++)
    {
      if (arr[x] > arr[x + 1])
      {
        hilf = arr[x];
        arr[x] = arr[x + 1];
        arr[x + 1] = hilf;
        tausch = 'w';
      }
    }
  } while (tausch == 'w');
}
