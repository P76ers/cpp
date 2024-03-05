#include <iostream>
#define ANZ 5

/*
Aufsteigende Sortierung eines Arrays nach Minimumsort / Methode des kleinsten Elementes
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[ANZ] = {7, 12, 2, 15, 9}, i, hilf, k;

  cout << "Vorher: ";
  for (i = 0; i < ANZ; i++)
  {
    printf("%4i ", arr[i]);
  }

  for (i = 0; i < ANZ - 1; i++)
  {
    for (k = i + 1; k < 5; k++)
    {
      if (arr[k] < arr[i])
      {
        hilf = arr[i];
        arr[i] = arr[k];
        arr[k] = hilf;
      }
    }
  }

  cout << "\nNachher:";
  for (i = 0; i < ANZ; i++)
  {
    printf("%4i ", arr[i]);
  }

  return 0;
}