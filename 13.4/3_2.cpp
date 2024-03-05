#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Geben Sie alle Noten aus und dazu jeweils den passenden Text "Bestanden" oder "Nicht bestanden",
je nach Wert. ("Bestanden" bei mindestens 50%) Erweiterung:
Geben Sie zu den Punkten auch jeweils die Note aus, also 1, 2, 3 usw.
Für diese Aufgaben gelten die CBM-/ Handelskammerrichtlinien.
 */

using namespace std;

int main()
{
  int arrNoten[20] = {0}, i, z[6] = {0};

  srand(time(NULL));

  for (i = 0; i < 20; i++)
  {
    arrNoten[i] = rand() % 100 + 1;
    cout << arrNoten[i] << " ";

    if (arrNoten[i] >= 92)
    {
      z[0]++;
    }
    else if (arrNoten[i] >= 81)
    {
      z[1]++;
    }
    else if (arrNoten[i] >= 67)
    {
      z[2]++;
    }
    else if (arrNoten[i] >= 50)
    {
      z[3]++;
    }
    else if (arrNoten[i] >= 30)
    {
      z[4]++;
    }
    else
    {
      z[5]++;
    }
  }

  for (i = 0; i < 6; i++)
  {
    cout << "\n " << (i + 1) << ": " << z[i] << " mal";
  }
  return 0;
}
