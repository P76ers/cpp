#include <iostream>
#include <cstdlib>
#include <ctime>

/*
In einem bundesweit agierenden Systemhaus mit angeschlossenem Shop für Hard- und Software mit insgesamt 50 Filialen wird ein einheitliches Sortiment von 100 Produkten verkauft.

Für die monatlichen Umsatzauswertungen sollen die Daten in einem Programm ausgewertet werden, dazu wird ein zweidimensionales Array mit 100 Zeilen und 50 Spalten benutzt.

In jeder Zeile finden sich also die Umsätze eines Produkts in allen 50 Filialen; in jeder Spalte die Umsätze einer Filiale mit jeweils allen 100 Produkten.

Beispiel/Hinweis: Der Beispielwert 125,07 € ist der Umsatz des 2. Produktes in der 5. Filiale. Wegen der Indexierung aber mit 0 beginnend, also 0, 1, 2, …, ist aber die Ansprache des dazugehörigen Array-Elements dann "ums[1][4]".

Erstellen Sie die Programme (sprich: Struktogramme) für die Ermittlung folgender Kennzahlen:

c. Geben Sie den Umsatz je Produkt und den Umsatz je Filiale aus.
*/

using namespace std;

int main()
{
  int ums[100][50], p, f, summe = 0;

  for (p = 0; p < 100; p++)
  {
    for (f = 0; f < 50; f++)
    {
      ums[p][f] = 1; // rand()%151;
    }
    cout << endl;
  }

  // Umsatz je Produkt
  for (p = 0; p < 100; p++)
  {

    for (f = 0; f < 50; f++)
    {
      summe += ums[p][f];
    }
    cout << "\nProdukt: " << (p + 1) << " Umsatz: " << summe;
    summe = 0;
  }

  // Umsatz Filiale 1 (Spalte 0)
  for (f = 0; f < 50; f++)
  {
    summe = 0;
    for (p = 0; p < 100; p++)
    {
      summe += ums[p][f];
    }
    cout << "\nUmsatz Filiale: " << (f + 1) << " Umsatz: " << summe;
  }

  return 0;
}