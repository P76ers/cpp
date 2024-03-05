#include <iostream>

/*

*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[5] = {7, 12, 2, 15, 9}, i, hilf, k;

  cout << "Vorher: ";
  for (i = 0; i < 5; i++)
  {
    printf("%4i ", arr[i]);
  }

  for (i = 0; i < 4; i++)
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
  for (i = 0; i < 5; i++)
  {
    printf("%4i ", arr[i]);
  }

  return 0;
}