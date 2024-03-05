#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/*
Füllen Sie ein Array mit 10 Zufallszahlen (zwischen 10 und 50)
übertragen Sie alle geraden Zahlen in das zweite Array.
*/

using namespace std;

int main()
{
  int arr[10], arrGerade[10] = {0}, i, k = 0;
  srand(time(NULL));

  for (i = 0; i < 10; i++)
  {
    arr[i] = rand() % (50 - 10 + 1) + 10;
    cout << arr[i] << " ";
  }
  cout << endl;
  for (i = 0; i < 10; i++)
  {
    if (arr[i] % 2 == 0)
    {
      arrGerade[k] = arr[i];
      // cout << arrGerade[k] << " ";
      k++;
    }
  }

  for (i = 0; i < k; i++)
  {
    cout << arrGerade[i] << " ";
  }
  return 0;
}
