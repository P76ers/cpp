#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/*
Eingabe, Speicherung und Ausgabe von 5 Strings in einem Array.
*/

using namespace std;

int main()
{
  string namen[5];
  int i;

  for (i = 0; i < 5; i++)
  {
    cout << "Name:";
    cin >> namen[i];
  }

  cout << "\n----------------------\n";
  for (i = 0; i < 5; i++)
  {
    cout << namen[i] << " ";
  }
  return 0;
}
