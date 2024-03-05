#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Minimum und Maximum aus einem Array über zwei Funktionen arrMin() und arrMax() bestimmen:
*/

using namespace std;

int arrMin(int[], int);
int arrMax(int[], int);

int main()
{
  int z[10], i, mini, maxi;

  srand(time(NULL));

  for (i = 0; i < 10; i++)
  {
    z[i] = rand() % 49;
    printf("%i ", z[i]);
  }

  mini = arrMin(z, 10);
  maxi = arrMax(z, 10);

  cout << "\nMinimum ist: " << mini << endl;
  cout << "Maximum ist: " << maxi << endl;

  return 0;
}

int arrMin(int arr[], int x)
{
  int min;
  min = arr[0];
  for (int i = 1; i < x; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

int arrMax(int arr[], int x)
{
  int max;
  max = arr[0];
  for (int i = 1; i < x; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}