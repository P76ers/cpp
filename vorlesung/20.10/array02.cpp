#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#define ANZ 50

/*
Array mit Zufallszahlen.
Eingabe einer Zahl und Anzeige dieses Array-Index.
*/

using namespace std;

int main()
{
  int z[ANZ], i;
  srand(time(NULL));

  for (i = 0; i < ANZ; i++)
  {
    z[i] = rand() % 100 + 1;
  }

  for (i = 0; i < ANZ; i++)
  {
    cout << z[i] << " ";
    if ((i + 1) % 10 == 0)
      cout << endl;
  }
  cout << "\n---------------------\n";
  cout << "Welches Element wollen Sie sehen? ";
  cin >> i;

  //   i=rand()%ANZ;
  cout << "\nz[" << i << "]: " << z[i];

  return 0;
}
