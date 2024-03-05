#include <iostream>

/*
Erinnern Sie sich an die Altersstatistik aus dem Skript? (Kapitel 13.3, Aufgabe 5)
Testen Sie, ob das nachfolgende Struktogramm die Aufgabe auch erfüllt und erstellen Sie das C++-Programm.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int m[5] = {0}, w[5] = {0}, stufe = 0, ein = 0;
  char gesch = 'x';

  do
  {
    cout << "Alter bitte (-1 fuer Abbruch)";
    cin >> ein;

    if (ein != -1)
    {
      cout << "Geschlecht (m/w):";
      cin >> gesch;

      if (ein > 65)
      {
        stufe = 4;
      }
      else if (ein > 50)
      {
        stufe = 3;
      }
      else if (ein > 30)
      {
        stufe = 2;
      }
      else if (ein > 17)
      {
        stufe = 1;
      }
      else
      {
        stufe = 0;
      }

      if (gesch == 'm')
      {
        m[stufe]++;
      }
      else if (gesch == 'w')
      {
        w[stufe]++;
      }
    }

  } while (ein != -1);

  for (int i = 0; i < 5; i++)
  {
    cout << "m[" << i + 1 << "]: " << m[i] << endl;
  }

  cout << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << "w[" << i + 1 << "]: " << w[i] << endl;
  }

  return 0;
}