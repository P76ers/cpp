#include <iostream>

/*
Es werden 3 Zahlen per Tastatur eingeben, der Computer gibt anschließend die größte Zahl wieder aus.

Erweiterung: Auch die kleinste eingegebene Zahl wird ausgegeben.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float eingabe = 0;
  float min = 0;
  float max = 0;

  for (int i = 1; i <= 3; i++)
  {
    cout << "Bitte Zahl" << i << " eingeben:" << endl;
    cin >> eingabe;

    if (i == 1)
    {
      max = min = eingabe;
    }
    else if (eingabe < min)
    {
      min = eingabe;
    }
    else if (eingabe > max)
    {
      max = eingabe;
    }
  }

  cout << "Die kleinste Zahl betrug: " << min << endl;
  cout << "Die groesste Zahl betrug: " << max << endl;

  return 0;
}