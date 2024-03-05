#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Gegeben ist ein bspay bsp[100] von Ganzzahlen.
(Die unten gezeigten Inhalte stellen nur ein Beispiel zur besseren Visualisierung dar!)

Erstellen Sie den C++-Code (nur Variablendeklaration und Anweisungsteil) für die folgenden beiden Aufgabenstellungen:

1. den Bubble-Sort zu dem Array bsp[100];

2. alle ungeraden Zahlen aus bsp[100] sind in das Array ung[50]
zu übertragen. Ist das zweite Array voll (also alle Plätze belegt),
darf nicht mehr weiter übertragen werden!

int bsp [100] = {25, 3, 32, 8, 56, 4, 21, 12, 48, ... };
int ung [50] = {0};
*/

int main()
{
  int bsp[10] = {25, 3, 31, 8, 55, 43, 21, 17, 49, 85};
  int ung[5] = {0};
  int i = 0, k = 0, hilf, anz = 10;
  bool tausch = true;

  printf("\nVorher:  ");
  for (i = 0; i < 10; i++)
  {
    printf("%3i ", bsp[i]);
  }

  do
  {
    tausch = false;
    anz = anz - 1;
    for (i = 0; i < anz; i++)
    {
      if (bsp[i] > bsp[i + 1])
      {
        hilf = bsp[i];
        bsp[i] = bsp[i + 1];
        bsp[i + 1] = hilf;
        tausch = true;
      }
    }

  } while (tausch == true);

  printf("\nNachher: ");
  for (i = 0; i < 10; i++)
  {
    printf("%3i ", bsp[i]);
  }

  // while(k<5 && i<10){
  for (i = 0; i < 10 && k < 5; i++)
  {
    if (bsp[i] % 2 == 1)
    {
      ung[k] = bsp[i];
      k++;
    }
    //	i++;
  }

  printf("\nUngerade:");
  for (i = 0; i < 5; i++)
  {
    printf("%3i", ung[i]);
  }
  return 0;
}
