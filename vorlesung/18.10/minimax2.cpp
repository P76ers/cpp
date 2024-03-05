#include <iostream>

using namespace std;

int main()
{

  int i, mini = 0, maxi = 0, zahl = 0;
  float summe = 0.0, durch = 0.0;

  for (i = 1; i <= 5; i++)
  {
    cout << "Zahl bitte: ";
    cin >> zahl;
    summe = summe + zahl;
    if (i == 1)
    {
      maxi = zahl;
      mini = zahl;
    }
    else if (zahl > maxi)
    {
      maxi = zahl;
    }
    else if (zahl < mini)
    {
      mini = zahl;
    }
  }

  durch = summe / i;

  cout << "\nMinimum: " << mini;
  cout << "\nMaximum: " << maxi;
  cout << "\nDurchschnitt: " << durch;

  return 0;
}
