#include <iostream>
#include <ctime>
#define ZEILEN 12
#define SPALTEN 6

/*
krankenHausZettel
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int klasse[ZEILEN][SPALTEN] = {0}, mann = 0, frau = 0, gesamtPatienten = 0, i, k;

  // srand(time(NULL));

  /*
    a) Gesamtzahl aller männlichen Patienten im Jahr (Januar – Dezember),
    die Gesamtzahl aller weiblichen Patientinnen im Jahr und die Gesamtzahl aller Patienten für das Jahr;
   */

  printf("    I    II    III\n");
  printf("  m  w  m  w  m  w\n");
  for (i = 0; i < ZEILEN; i++)
  {
    for (k = 0; k < SPALTEN; k++)
    {
      klasse[i][k] = rand() % 3 + 1;
      gesamtPatienten += klasse[i][k];
      printf("%3i", klasse[i][k]);
      // printf(" ");
      if (i % 2 == 0)
      {
        mann += klasse[i][k];
      }
      else
      {
        frau += klasse[i][k];
      }
    }
    printf("\n");
  }

  printf("\n%3ix Maenner", mann);
  printf("\n%3ix Frauen", frau);
  printf("\n%3ix Gesamt Patientenanzahl", gesamtPatienten);

  // b) Geben Sie die Belegung je Monat aus; (also 12 Ausgaben)
  int belegungMonat = 0;

  for (i = 0; i < ZEILEN; i++)
  {
    belegungMonat = 0;
    for (k = 0; k < SPALTEN; k++)
    {
      belegungMonat += klasse[i][k];
    }
    cout << "\nMonat" << i << " " << belegungMonat;
  }

  /*
  c) Es wird eine Monatsnummer (1-12) eingegeben, das Programm gibt dann die Belegung (insgesamt)
  in diesem Monat aus; Für Fortgeschrittene: Es dürfen nur gültige Werte (1-12) eingegeben werden,
  auch wiederholte Falscheingaben sind abzufangen!
  */

  int eingabe = 0;
  belegungMonat = 0;
  do
  {
    cout << "\nBitte Monat eingaben (0-11): " << endl;
    cin >> eingabe;
  } while (eingabe < 0 || eingabe > 11);

  for (k = 0; k < SPALTEN; k++)
  {
    i = eingabe;
    belegungMonat += klasse[i][k];
  }

  printf("\nBelegung fuer den Monat (%i): %i", eingabe, belegungMonat);

  // d) Belegung in Pflegeklasse II im ersten Halbjahr;
  int belegungHalbJahr = 0;

  for (i = 0; i < ZEILEN / 2; i++)
  {
    for (k = 0; k < SPALTEN; k++)
    {
      belegungHalbJahr += klasse[i][k];
    }
  }
  printf("\nBelegung Pflegeklasse II fuer das Halbjahr: %i", belegungHalbJahr);

  // e) Anzahl männlicher Patienten im 2. Quartal;
  mann = 0;

  for (i = 6; i < ZEILEN; i++)
  {
    for (k = 0; k < (SPALTEN - 2); k++)
    {
      mann += klasse[i][k];
    }
  }
  printf("\nBelegung Maenner im 2. Quartal %i", mann);

  // f) Anzahl weiblichen Patientinnen in Pflegeklasse I und II;
  frau = 0;
  for (i = 0; i < ZEILEN; i++)
  {
    for (k = 0; k < 4; k++)
    {
      if (k % 2 != 0)
      {
        frau += klasse[i][k];
      }
    }
  }
  printf("\nBelegung Frauen in Pflegeklasse I & II %i", frau);

  // g) Anzahl männlicher Patienten im November;
  mann = 0;
  i = 10;

  for (k = 0; k < SPALTEN; k++)
  {
    mann = klasse[i][k];
  }

  return 0;
}