#include <iostream>

/*
In Abhängigkeit vom Goldgehalt im Roherz soll die anschließende Verarbeitung festgelegt werden.

Eingegeben wird der Goldgehalt, das Programm gibt eine Meldung aus, wie mit dem Material zu verfahren ist.
Folgende Gehalte und deren Verarbeitung sind zu berücksichtigen.
- 1 g/t gelten als Erz und werden der Aufbereitung zugeführt;
- Reicherze mit Gehalten von über 10g/t werden zum Verschneiden mit Armerzen zwischengelagert;
- Erze mit Gehalten zwischen 10 und 2 g/t werden direkt in die Aufbereitung transportiert;
- Armerze (1-2g/t) werden zum Verschneiden mit Reicherzen eingewogen;
- Gestein mit Gehalten bis 1g/t werden auf die Halde geschüttet.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float goldGehalt = 0.0;

  cout << "Bitte Goldgehalt eingeben (gramm/tonne): " << endl;
  cin >> goldGehalt;

  if (goldGehalt < 1)
  {
    cout << "Gestein mit Gehalten bis 1g/t werden auf die Halde geschuettet." << endl;
  }
  else if (goldGehalt >= 1 && goldGehalt <= 2)
  {
    cout << "Armerze (1-2g/t) werden zum Verschneiden mit Reicherzen eingewogen" << endl;
  }
  else if (goldGehalt >= 2 && goldGehalt <= 10)
  {
    cout << "Erze mit Gehalten zwischen 2 und 10 g/t werden direkt in die Aufbereitung transportiert" << endl;
  }
  else
  {
    cout << "Reicherze mit Gehalten von ueber 10g/t werden zum Verschneiden mit Armerzen zwischengelagert" << endl;
  }

  return 0;
}