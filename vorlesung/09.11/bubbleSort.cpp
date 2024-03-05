#include <iostream>

/*
Aufsteigende Sortierung eines Arrays nach Methode Bubblesort.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[5] = {25, 9, 14, 25, 7}, anz = 5, i = 0, hilf = 0;
  bool tausch = true;

  printf("Vorher: ");
  for (i = 0; i < 5; i++)
  {
    printf("%3i ", arr[i]);
  }

  do
  {
    tausch = false;
    anz = anz - 1;
    for (i = 0; i < anz; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        hilf = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = hilf;
        tausch = true;
      }
    }

  } while (tausch == true);

  printf("\nNachher:");
  for (i = 0; i < 5; i++)
  {
    printf("%3i ", arr[i]);
  }

  return 0;
}