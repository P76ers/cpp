#include <iostream>
#include <cstdlib>
#include <ctime>
#define ANZ 20

/*
Mit Angabe Schleifendurchläufe und Tauschanzahl:
*/

using namespace std;

int main()
{
  int arr[ANZ], hilf, tausch = 0, schleifen = 0;
  int i, k;

  srand(time(NULL));
  cout << "Vorher:\n";
  for (i = 0; i < ANZ; i++)
  {
    arr[i] = i; // rand()%100+1;
    cout << arr[i] << " ";
  }

  for (i = 0; i < ANZ - 1; i++)
  {
    for (k = i + 1; k < ANZ; k++)
    {
      schleifen++;
      if (arr[k] < arr[i])
      {
        tausch++;
        hilf = arr[i];
        arr[i] = arr[k];
        arr[k] = hilf;
      }
    }
  }

  cout << "\nNachher:\n";
  for (i = 0; i < ANZ; i++)
  {
    cout << arr[i] << " ";
  }

  cout << "\nEs wurde " << tausch << " mal getauscht.";
  cout << "\nSchleifendurchl\204ufe: " << schleifen;

  return 0;
}
