#include <iostream>
#include <ctime>
#define ANZ 5
#define OG 100
#define UG 1

/*
Minimumsort mit Zufallszahlen
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[ANZ], i, hilf, k;

  srand(time(NULL));

  for (i = 0; i < ANZ; i++)
  {
    arr[i] = rand() % (OG - UG - 1) + UG;
  }

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