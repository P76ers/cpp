#include <iostream>

/*
Spass mit Arrays
Welche Inhalte hat das Array "werte[]" jeweils nach den Schleifen?
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int werte[8] = {0}, k = 1, z = 3;

  // Welche Inhalte hat das Array "werte[]" nach dieser Schleife?
  while (k <= 7)
  {
    werte[k] = (k + 2) * (z + 1);
    z++;
    k++;
  }

  for (int x : werte)
  {
    cout << x << " ";
  }

  // Welche Inhalte hat das Array "werte[]" nach dieser Schleife?
  k = 7;
  while (k >= 1)
  {
    werte[k] = werte[8 - k] - k;
    k--;
  }

  cout << endl;

  for (int x : werte)
  {
    cout << x << " ";
  }

  return 0;
}