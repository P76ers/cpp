#include <iostream>
#include <cstdlib>
#include <ctime>

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

int main()
{
  int arr100[100], i, z6 = 0, z23 = 0;

  srand(time(NULL));
  for (i = 0; i < 100; i++)
  {
    arr100[i] = rand() % 100 + 1;
    cout << arr100[i] << " ";
  }
  // wie viele Zahlen durch 6 teilbar
  for (i = 0; i < 100; i++)
  {
    if (arr100[i] % 6 == 0)
    {
      z6++;
    }
  }
  cout << "\n"
       << z6 << " Zahlen sind durch 6 teilbar.\n";

  // wenn durch 5 teilbar ersetzen durch 227
  for (i = 0; i < 100; i++)
  {
    if (arr100[i] % 5 == 0)
    {
      arr100[i] = 227;
    }
  }
  // wie oft die 23?
  for (i = 0; i < 100; i++)
  {
    if (arr100[i] == 23)
    {
      z23++;
    }
  }
  cout << "\n"
       << z23 << " mal die 23.\n";

  for (i = 0; i < 100; i++)
  {
    printf("%5i", arr100[i]);
    if (i % 10 == 9)
    {
      cout << "\n";
    }
  }

  return 0;
}
