#include <iostream>
#include <stdlib.h>
#include <time.h>

#define OG 6
#define UG 1
#define ANZAHL 1000000

using namespace std;

int main()
{
  int i, zufall, z1 = 0, z2 = 0, z3 = 0, z4 = 0, z5 = 0, z6 = 0;

  srand(time(NULL)); // Start Random

  for (i = 1; i <= ANZAHL; i++)
  {
    zufall = rand() % (OG - UG + 1) + UG;
    //      cout << zufall << " ";
    //	    if(i%20==0){
    //          cout << "\n";
    //		    }
    switch (zufall)
    {
    case 1:
      z1++;
      break;
    case 2:
      z2++;
      break;
    case 3:
      z3++;
      break;
    case 4:
      z4++;
      break;
    case 5:
      z5++;
      break;
    case 6:
      z6++;
      break;
    }
  }

  cout << "\n"
       << ANZAHL << " Wuerfe:";
  cout << "\n 1: " << z1 << " mal";
  cout << "\n 2: " << z2 << " mal";
  cout << "\n 3: " << z3 << " mal";
  cout << "\n 4: " << z4 << " mal";
  cout << "\n 5: " << z5 << " mal";
  cout << "\n 6: " << z6 << " mal";

  return 0;
}
