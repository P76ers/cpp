#include <iostream>

/*
Wir betrachten eine fiktive Hausratversicherung, bei der die Prämie wie folgt von der Anzahl
Personen `personen` und Quadratmeteranzahl `flaeche` der Wohnung abhängt:

| Personen | Prämie             |
|----------|--------------------|
| 1-2      | 10 + flaeche / 2   |
| 3        | 15 + flaeche       |
| 4        | 15 + 1,5 * flaeche |
| >4       | 25 + 2 * flaeche   |

Erstellen Sie ein Programm zur Berechnung der Prämie nach Eingabe der beiden Grundwerte.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int personen = 0;
  double flaeche = 0.0, praemie = 0.0;

  cout << "Bitte Personenanzahl eingeben: " << endl;
  cin >> personen;

  cout << "Bitte Wohnflaeche eingeben: " << endl;
  cin >> flaeche;

  if (personen <= 2)
  {
    praemie = 10 + flaeche / 2;
  }
  else if (personen == 3)
  {
    praemie = 15 + flaeche;
  }
  else if (personen == 4)
  {
    praemie = 15 + 1.5 * flaeche;
  }
  else if (personen > 4)
  {
    praemie = 25 + 2 * flaeche;
  }

  cout << "Praemie: " << praemie << endl;

  return 0;
}