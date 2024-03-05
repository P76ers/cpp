#include <iostream>

/*
Früher wurde das Normalgewicht berechnet aus der Körpergröße in Zentimetern - 100,
das dazugehörige Idealgewicht lag bei Männern 10% darunter, bei Frauen minus 15%.

Erstellen Sie ein Programm, das Größe und Geschlecht (m/w) abfragt und dann Normal-
und Ideal-gewicht ausgibt.

Erweiterung: Lassen Sie das tatsächliche Gewicht eingeben
und geben Sie die Abweichung vom Normal- und Idealgewicht aus,
ggf. mit entsprechenden Bewertung "Sie haben Über-/Untergewicht."
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float groesse = 0;
  char geschlecht = ' ';
  float idealGewicht = 0;
  float normalGewicht = 0;
  // Erweiterung
  float gewicht = 0;

  cout << "Bitte Koerpergroesse in cm eingeben: " << endl;
  cin >> groesse;

  do
  {
    cout << "Bitte geben Sie Ihr Geschlecht an (w/m) : " << endl;
    cin >> geschlecht;
  } while (geschlecht != 'w' && geschlecht != 'm');

  cout << "Bitte geben Sie Ihr Gewicht ein: " << endl;
  cin >> gewicht;

  normalGewicht = groesse - 100;

  if (geschlecht == 'w')
  {
    idealGewicht = normalGewicht * 0.85;
  }
  else
  {
    idealGewicht = normalGewicht * 0.9;
  }

  cout << "Ihr Normalgewicht betraegt : " << normalGewicht << endl;
  cout << "Ihr Idealgewicht betraegt : " << idealGewicht << endl;
  if (gewicht < idealGewicht)
  {
    cout << "Sie haben Untergewicht!" << endl;
  }
  else
  {
    cout << "Sie haben Uebergewicht!" << endl;
  }

  return 0;
}