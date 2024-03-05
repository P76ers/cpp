#include <iostream>

/*
Erstellen Sie aus dem folgenden Struktogramm den passenden C++-Code.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int zahl = 0, userIn = 0, versuche = 0, level = 0, zuHoch = 0, zuNiedrig = 0;

  while (userIn < 1 || userIn > 5)
  {
    cout << "Bitte den Level eingeben: " << endl;
    cin >> userIn;
  }

  switch (userIn)
  {
  case 1:
    level = 1;
    break;
  case 2:
    level = 100;
    break;
  case 3:
    level = 1000;
    break;
  case 4:
    level = 9999;
    break;
  }

  userIn = 0;
  zahl = level;

  while (userIn < zahl || userIn > zahl)
  {
    cout << " versuche die Zufallszahl zu erraten!";
    cin >> userIn;

    if (userIn != zahl)
    {
      if (userIn > zahl)
      {
        cout << "Zu erratende Zahl ist kleiner!";
        zuHoch++;
      }
      else
      {
        cout << "Zu erratende Zahl ist groesser!";
        zuNiedrig++;
      }
    }
    versuche++;
  }

  cout << "Glueckwunsch, Sie haben die Zahl mit " << versuche << " Versuchen erraten!" << endl;
  cout << zuHoch << " zu hoch geraten" << endl;
  cout << zuNiedrig << " zu niedrig geraten" << endl;

  return 0;
}