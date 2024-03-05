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

d. Belegung in Pflegeklasse II im ersten Halbjahr;
*/

using namespace std;

int main()
{
  int krhs[12][6], z, s, su = 0;
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

  for (z = 0; z < 6; z++)
  {
    for (s = 2; s < 4; s++)
    {
      su += krhs[z][s];
    }
  }
  //    s=2;
  //    for(z=0;z<6;z++){
  //    	su=su+krhs[z][s]+krhs[z][s+1];
  //		}

  //    for(z=0;z<6;z++){
  //    	su=su+krhs[z][2]+krhs[z][3];
  //		}

  printf("\nInsgesamt %i Menschen in Pflegeklasse II.", su);

  return 0;
}
