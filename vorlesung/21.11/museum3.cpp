#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
hitliste top 5 in array "ja" speichern [museum][besuchersumme] und per bubblesort absteigend sortieren
*/

int main()
{
  int arr[5][7], i, k, museum;
  int ja[5][2], hilf, anzahl = 5;
  bool tausch;

  srand(time(NULL));
  for (i = 0; i < 5; i++)
  {
    for (k = 0; k < 7; k++)
    {
      arr[i][k] = rand() % 101;
    }
  }

  for (i = 0; i < 5; i++)
  {
    museum = 0;
    for (k = 0; k < 7; k++)
    {
      museum += arr[i][k];
    }
    ja[i][0] = i;
    ja[i][1] = museum;
  }

  for (i = 0; i < 5; i++)
  {
    cout << "Museum " << (ja[i][0] + 1) << " hatte " << ja[i][1] << " Besucher\n";
  }

  do
  {
    anzahl--;
    tausch = false;
    for (i = 0; i < anzahl; i++)
    {
      if (ja[i][1] < ja[i + 1][1])
      {
        hilf = ja[i][1];
        ja[i][1] = ja[i + 1][1];
        ja[i + 1][1] = hilf;

        hilf = ja[i][0];
        ja[i][0] = ja[i + 1][0];
        ja[i + 1][0] = hilf;

        tausch = true;
      }
    }
  } while (tausch == true);

  cout << endl;
  for (i = 0; i < 5; i++)
  {
    cout << "Museum " << ja[i][0] + 1 << " hatte " << ja[i][1] << " Besucher\n";
  }
  return 0;
}
