#include <iostream>
#include <ctime>
#define ZEILEN 100
#define SPALTEN 50

/*
Array Zettel
*/

using namespace std;

int main()
{
  int ums[ZEILEN][SPALTEN], i, k, gesamtUmsatz = 0, umsatzProdukt9 = 0, umsatzJeProdukt = 0, umsatzJeFiliale = 0;

  // Aufgabe a)
  for (i = 0; i < ZEILEN; i++)
  {
    for (k = 0; k < SPALTEN; k++)
    {
      ums[i][k] = 1;
      // printf("%2i", ums[i][k]);
      gesamtUmsatz += ums[i][k];
    }
  }

  // Aufgabe b)
  for (k = 0; k < SPALTEN; k++)
  {
    umsatzProdukt9 += ums[9][k];
  }

  // Aufgabe c)
  for (i = 0; i < ZEILEN; i++)
  {
    umsatzJeProdukt = 0;
    for (k = 0; k < SPALTEN; k++)
    {
      umsatzJeProdukt += ums[i][k];
    }
    printf("\n Gesamtumsatz je Produkt[%3i] %3i  EUR", (i + 1), umsatzJeProdukt);
  }

  printf("\n");

  for (k = 0; k < SPALTEN; k++)
  {
    umsatzJeFiliale = 0;
    for (i = 0; i < ZEILEN; i++)
    {
      umsatzJeFiliale += ums[i][k];
    }

    printf("\n Gesamtumsatz je Filiale[%3i] %3i EUR", (k + 1), umsatzJeFiliale);
  }

  // d)
  printf("\n Gesamtumsatz %i EUR", gesamtUmsatz);
  printf("\n Gesamtumsatz Winux 0.8.15: %i EUR", umsatzProdukt9);

  // e)
  int anzFilialen = 0;

  for (i = 0; i < ZEILEN; i++)
  {
    for (k = 0; k < SPALTEN; k++)
    {
      ums[i][k] = rand() % 185;
    }
  }

  for (k = 0; k < SPALTEN; k++)
  {
    umsatzJeFiliale = 0;
    for (i = 0; i < ZEILEN; i++)
    {
      umsatzJeFiliale += ums[i][k];
    }
    if (umsatzJeFiliale > 10000)
    {
      anzFilialen++;
      printf("\n Gesamtumsatz je Filiale[%3i] %3i EUR", (k + 1), umsatzJeFiliale);
    }
  }
  cout << "\nEs sind " << anzFilialen << " Filialen.";

  return 0;
}