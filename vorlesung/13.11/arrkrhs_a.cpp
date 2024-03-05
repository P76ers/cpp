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

a. Gesamtzahl aller männlichen Patienten im Jahr (Januar – Dezember), die Gesamtzahl aller weiblichen Patientinnen
im Jahr und die Gesamtzahl aller Patienten für das Jahr;
*/

using namespace std;

int main()
{
  int krhs[12][6], z, s, sm = 0, sw = 0;
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

  for (z = 0; z < 12; z++)
  {
    for (s = 0; s < 6; s += 2)
    {
      sm += krhs[z][s];
      sw += krhs[z][s + 1];
    }
  }

  // for (z = 0; z < 12; z++)
  // {
  //   for (s = 0; s < 6; s++)
  //   {
  //     if (s % 2 == 0)
  //       sm += krhs[z][s];
  //     else
  //       sw += krhs[z][s];
  //   }
  // }

  // for (z = 0; z < 12; z++)
  // {
  //   for (s = 0; s < 6; s += 2)
  //   {
  //     sm += krhs[z][s];
  //   }
  //   for (s = 1; s < 6; s += 2)
  //   {
  //     sw += krhs[z][s];
  //   }
  // }

  printf("\nEs lagen %i M\204nner im Krankenhaus.", sm);
  printf("\nEs lagen %i Frauen im Krankenhaus.", sw);
  printf("\nInsgesamt %i Menschen.", sm + sw);

  return 0;
}
