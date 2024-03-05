#include <iostream>
#include <ctime>
#define ANZAHL 50

/*
Füllen Sie ein Array "arrNoten[50]" mit beliebigen Klausurnoten (0 - 100 P)
und geben Sie Sie beste und die schlechteste Note (Standard-Rezept!!!)
sowie den Durchschnitt der Werte aus, auf eine Kommastelle gerundet.
*/

using namespace std;

int main()
{
  int arrNoten[ANZAHL] = {0}, schlechteste = 0, beste = 0;
  float durchSchnitt = 0.0, summe = 0.0;

  for (int i = 0; i < ANZAHL; i++)
  {
    arrNoten[i] = rand() % 101;
    if (i == 0)
    {
      beste = schlechteste = arrNoten[0];
    }
    else if (arrNoten[i] < schlechteste)
    {
      schlechteste = arrNoten[i];
    }
    else if (arrNoten[i] > beste)
    {
      beste = arrNoten[i];
    }
    cout << arrNoten[i] << endl;
    summe += arrNoten[i];
  }

  durchSchnitt = summe / ANZAHL;

  printf("Durchschnittsnote : %.1f\n", durchSchnitt);
  printf("Schlechteste Note %i \n", schlechteste);
  printf("Beste Note %i \n", beste);

  return 0;
}