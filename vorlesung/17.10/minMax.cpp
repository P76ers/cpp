#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  int i = 0, mini = 0, maxi = 0, zahl = 0;
  float summe = 0.0, durch = 0.0;

  cout << "Bitte erste Zahl eingeben:" << endl;
  cin >> zahl;

  mini = zahl;
  maxi = zahl;
  summe = zahl;

  for (i = 1; i < 5; i++)
  {
    cout << "Bitte naechste Zahl eingeben:" << endl;
    cin >> zahl;
    summe += zahl;
    if (zahl > maxi)
    {
      maxi = zahl;
    }
    else if (zahl < mini)
    {
      mini = zahl;
    }
  }
  durch = summe / i;

  cout << "Minimum:" << mini << endl;
  cout << "Maximum:" << maxi << endl;
  cout << "Durchschnitt" << durch << endl;

  return 0;
}