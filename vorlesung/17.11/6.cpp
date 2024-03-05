#include <iostream>
#include <ctime>
#define OG 500
#define UG 50

/*
Ein Array ist mit 1000 zufälligen ganzzahligen Werten zwischen 50 und 500 zu füllen.

6.1.
Danach ermitteln Sie bitte den Durchschnitt dieser Werte und geben anschließend aus,
wie viele Werte unter dem Durchschnitt sind und wie viele darüber liegen.
6.2.
Geben Sie das Array aus: jeweils 15 (oder 10 oder 20, je nach Schriftgröße) Werte in einer Zeile,
danach ein Zeilenumbruch, dann die nächste Zeile
6.3.
Lassen Sie den User eine Zahl zwischen 50 und 500 eingeben und stellen Sie fest,
ob diese Zahl im Array vorhanden ist und wenn ja, wie oft?
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[1000], anzKleiner = 0, AnzGroesser = 0;
  float durchschnitt = 0.0, summe = 0;

  srand(time(NULL));

  // 6 + 6.1

  for (int i = 0; i < 1000; i++)
  {
    arr[i] = rand() % (OG - UG + 1) + UG;
    summe += arr[i];
  }

  durchschnitt = summe / 1000;

  printf("Durchschnitt: %12.2f", durchschnitt);

  for (int i = 0; i < 1000; i++)
  {
    if (arr[i] > durchschnitt)
    {
      AnzGroesser++;
    }
    else if (arr[i] < durchschnitt)
    {
      anzKleiner++;
    }
  }

  printf("\nUeber Durchschnitt: %i", AnzGroesser);
  printf("\nUnter Durchschnitt: %i", anzKleiner);

  // 6.2
  for (int i = 0; i < 1000; i++)
  {
    if (i % 20 == 0)
    {
      cout << endl;
    }
    printf("%3i ", arr[i]);
  }

  // 6.3
  int zahl = 0, menge = 0;

  do
  {
    cout << endl
         << "Bitte eine Zahl zwischen 50-500 eingeben" << endl;
    cin >> zahl;
  } while (zahl < 50 || zahl > 500);

  for (int i = 0; i < 1000; i++)
  {
    if (zahl == arr[i])
    {
      menge++;
    }
  }

  printf("Die Zahl %i ist %ix vorhanden", zahl, menge);

  return 0;
}