#include <iostream>
#include <cstdlib>
#include <ctime>

#define ANZ 5

using namespace std;

int main()
{
  string arr[ANZ] = {"Hans", "Anton", "Stefanie", "Stefan", "Stef"}, hilf;
  int i, anz = ANZ, tausch = 0, schleifen = 0;
  bool getauscht;

  srand(time(NULL));
  cout << "Vorher:\n";
  for (i = 0; i < ANZ; i++)
  {
    cout << arr[i] << " ";
  }

  do
  {
    getauscht = false;
    anz--;
    for (i = 0; i < anz; i++)
    {
      schleifen++;
      if (arr[i + 1] < arr[i])
      {
        tausch++;
        hilf = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = hilf;
        getauscht = true;
      }
    }
  } while (getauscht == true);

  cout << "\nNachher:\n";
  for (i = 0; i < ANZ; i++)
  {
    cout << arr[i] << " ";
  }

  cout << "\nEs wurde " << tausch << " mal getauscht.";
  cout << "\nSchleifendurchl\204ufe: " << schleifen;

  return 0;
}
