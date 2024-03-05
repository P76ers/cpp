#include <iostream>
#include <cstdlib>
#include <ctime>

/* Das "Krankenhaus am Rande der Stadt" verfügt über unterschiedlich ausgestattete Zimmer:

Pflegeklasse 1 Einzelzimmer mit eigener Nasszelle, TV und Internetanschluss inklusive
Pflegeklasse 2 Zweibettzimmer mit eigener Nasszelle und TV; ein Internetanschluss ist auf Wunsch gegen Bezahlung möglich.
Pflegeklasse 3 Mehrbettzimmer mit Etagendusche/-WC, TV und Internetanschluss auf Wunsch gegen gesonderte Berechnung.
In jeder Klasse werden monatlich die Patientenzahlen nach Geschlechtern getrennt erfasst,
die Daten sind in einem zweidimensionalen Array gespeichert. Zur Veranschaulichung dient folgende schematische
Darstellung der Daten

alt

Ermitteln Sie jetzt folgende Werte:

c. Es wird eine Monatsnummer (1-12) eingegeben, das Programm gibt dann die Belegung (insgesamt) in diesem Monat aus;
Für Fortgeschrittene: Es dürfen nur gültige Werte (1-12) eingegeben werden, auch wiederholte Falscheingaben sind abzufangen!
*/

using namespace std;

int main()
{
  int krhs[12][6], z = 0, s, su = 0;
  char antwort;

  srand(time(NULL));

  printf("    I    II    III\n");
  printf("  m  w  m  w  m  w\n");
  for (z = 0; z < 12; z++)
  {
    for (s = 0; s < 6; s++)
    {
      krhs[z][s] = rand() % 3 + 1;
      printf("%3i", krhs[z][s]);
    }
    printf("\n");
  }

  do
  {
    do
    {
      cout << "Gesuchter Monat? (1-12)";
      cin >> z;
    } while (z < 1 || z > 12);
    su = 0;
    for (s = 0; s < 6; s++)
    {
      su += krhs[z - 1][s];
    }
    printf("\nMonat %2i, Belegung: %i", z, su);
    printf("\nNochmal? (j/n)");
    cin >> antwort;
  } while (antwort == 'j' || antwort == 'J');

  return 0;
}
