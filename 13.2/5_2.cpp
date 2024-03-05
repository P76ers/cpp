#include <iostream>
#include <stdlib.h>
#include <time.h>
#define OG 20
#define UG 1

using namespace std;

int main()
{
  int zahl, raten;
  srand(time(NULL)); // Start Random

  zahl = rand() % (OG - UG + 1) + UG;
  //   cout << zahl << "\n";

  cout << "Tipp: ";
  cin >> raten;

  while (raten != zahl)
  {
    if (raten < zahl)
    {
      cout << "Ihre Zahl ist kleiner als die gesuchte Zahl";
    }
    else
    {
      cout << "Ihre Zahl ist groesser als die gesuchte Zahl";
    }
    cout << "\nTipp: ";
    cin >> raten;
  }
  cout << "GEWONNEN!";

  return 0;
}
