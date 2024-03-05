#include <iostream>
#include <cstdlib>
#include <ctime>
#define ANZAHL 100

/*
Füllen Sie ein Array mit 100 Zufallszahlen (zum Beispiel zwischen 1 und 10.000).

a. Zählen Sie, wie viele Zahlen darin durch 6 teilbar sind.
(Hilfe: Restrechnung / Modulo: 9 modulo 4 ergibt (Rest) 1
10 modulo 4 ergibt (Rest) 2
12 modulo 4 ergibt (Rest) 0

b. Ersetzen Sie im Array alle Werte, die durch 5 teilbar sind, durch den Wert 227.

c. Wie oft ist die Zahl 23 in diesem Array enthalten?

d. Geben Sie das Array in zehn Zeilen zu je 10 Werten (Spalten) aus.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[ANZAHL] = {0}, teilbar6 = 0, vorhanden23 = 0;

  srand(time(NULL));

  for (int i = 0; i < ANZAHL; i++)
  {
    arr[i] = rand() % 10000 + 1;
    printf("%5i ", arr[i]);

    if (arr[i] % 6 == 0)
    {
      teilbar6++;
    }
    // b) Ersetzen Sie im Array alle Werte, die durch 5 teilbar sind, durch den Wert 227.
    if (arr[i] % 5 == 0)
    {
      arr[i] = 227;
    }
    // cout << arr[i] << endl;
    // c) Wie oft ist die Zahl 23 in diesem Array enthalten?
    if (arr[i] == 23)
    {
      vorhanden23++;
    }
    // d) Geben Sie das Array in zehn Zeilen zu je 10 Werten (Spalten) aus.
    if (i % 10 == 0 && i != 0)
    {
      printf("\n");
    }
  }

  printf("\nEs sind %i Werte durch 6 teilbar \n", teilbar6);
  printf("Die 23 ist %i x vorhanden ", vorhanden23);

  return 0;
}