#include <iostream>

/*
Ein Unternehmen beschließt für seine Mitarbeiter Belegschaftsaktien zu Vorzugskonditionen anzubieten.
Es werden folgende Konditionen festgesetzt.

Mitarbeiter mit einer Betriebszugehörigkeit von mehr als 10 Jahren können 20 Aktien beziehen,
bei einer Betriebszugehörigkeit von mehr als 2 Jahren können sie 10 Aktien erwerben.

Mitarbeiter, die sich in einem gekündigten Arbeitsverhältnis befinden, sollen jedoch keine Aktien erhalten.

Eingabe:
Dauer der Betriebszugehörigkeit, gekündigtes Arbeitsverhältnis (ja oder nein)

Ausgabe: Anzahl der Aktien, die bezogen werden können.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int betriebsZugehoerigkeit = 0;
  int aktien = 0;
  char gekuendigt = ' ';

  cout << "Bitte Dauer der Betriebszugehoerigkeit angeben: " << endl;
  cin >> betriebsZugehoerigkeit;

  do
  {
    cout << "Wurde Ihnen gekuendigt (j/n)?" << endl;
    cin >> gekuendigt;
    if (gekuendigt != 'j' && gekuendigt != 'n')
    {
      cout << "Falsche Eingabe! Bitte (j/n) angeben: " << endl;
    }

  } while (gekuendigt != 'j' && gekuendigt != 'n');

  if (gekuendigt == 'j')
  {
    cout << "Da Ihnen gekuendigt wurde erhalten Sie keine Vorzugsaktien" << endl;
  }
  else
  {
    if (betriebsZugehoerigkeit > 10)
    {
      aktien = 20;
      cout << "Sie koennen " << aktien << " Vorzugsaktien erwerben!" << endl;
    }
    else
    {
      aktien = 10;
      cout << "Sie koennen " << aktien << " Vorzugsaktien erwerben!" << endl;
    }
  }

  return 0;
}