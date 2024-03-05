#include <iostream>
using namespace std;

/*
Schreiben zu der, im folgenden Struktogramm dargestellten,
Programmlogik ein C++-Programm.
NUR ab main() { ... }
*/

int main()
{
  int mini = 0, maxi = 0, z = 1, zahl = 0;

  cout << "Zahl bitte eingeben:" << endl;
  cin >> zahl >> maxi >> mini;

  while (z <= 10)
  {
    cout << "Zahl bitte eingeben:" << endl;
    cin >> zahl;

    if (zahl > maxi)
    {
      maxi = zahl;
    }
    else if (zahl < mini)
    {
      mini = zahl;
    }
    z++;
  }
  cout << "Minimum ist :" << mini << endl;
  cout << "Maximum ist :" << maxi << endl;

  return 0;
}
