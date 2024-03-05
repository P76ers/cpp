#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#define ANZ 5

/*
Eingabe von 5 Werten über Konsole und speichern dieser im Array.
Random Ausgabe eines Array-Elements.
*/

using namespace std;

int main()
{
  int z[ANZ], i;
  srand(time(NULL));

  for (i = 0; i < ANZ; i++)
  {
    cout << "z[" << i << "] bitte: ";
    cin >> z[i];
  }
  cout << "\n---------------------\n";
  /*
      for(i=ANZ-1; i>=0; i--){
          cout << "z["<< i <<"]: " << z[i] << endl;
      }

      cout << "Welches Element wollen Sie sehen? ";
      cin >> i;
  */
  i = rand() % ANZ;
  cout << "\nz[" << i << "]: " << z[i];

  return 0;
}
