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
  int arrNoten[50], i, z1 = 0, z2 = 0, z3 = 0, z4 = 0, z5 = 0, z6 = 0;

  srand(time(NULL));

  for (i = 0; i < 50; i++)
  {
    arrNoten[i] = rand() % 100 + 1;
    cout << arrNoten[i];
    if (arrNoten[i] < 50)
      cout << " Nicht";
    cout << " bestanden mit ";

    if (arrNoten[i] >= 92)
    {
      cout << "1 \n";
      z1++;
    }
    else if (arrNoten[i] >= 81)
    {
      cout << "2 \n";
      z2++;
    }
    else if (arrNoten[i] >= 67)
    {
      cout << "3 \n";
      z3++;
    }
    else if (arrNoten[i] >= 50)
    {
      cout << "4 \n";
      z4++;
    }
    else if (arrNoten[i] >= 31)
    {
      cout << "5 \n";
      z5++;
    }
    else
    {
      cout << "6 \n";
      z6++;
    }
  }
  cout << "\n"
       << z1 + z2 + z3 + z4 + z5 + z6 << " Ergebenis.";
  cout << "\n1: " << z1;
  cout << "\n2: " << z2;
  cout << "\n3: " << z3;
  cout << "\n4: " << z4;
  cout << "\n5: " << z5;
  cout << "\n6: " << z6;
  return 0;
}