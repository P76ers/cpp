#include <iostream>

/*
Für einen Betrieb soll eine Altersstatistik der Mitarbeiter erzeugt werden,
die die Anzahl der Beschäftigten nach Altersgruppen aufsteigend aufgeschlüsselt ausgibt.
Dazu wird das jeweilige Alter der Personen eingegeben, Ende bei Eingabe einer 0.

Alter: | Anzahl:
----------+----------
Unter 18  | 1
18 bis 30 | 3
31 bis 50 | 2
51 bis 65 | 1
Ueber 65  | 2 ----------+----------
Summe:    | 9
*/

using namespace std;

int main()
{
  int alter = 0, u18 = 0, u30 = 0, u50 = 0, u65 = 0, ue65 = 0, summe = 0;

  do
  {
    printf("Bitte Alter eingeben (0 für Abbruch): \n");

    cin >> alter;
    if (alter > 0 && alter < 18)
    {
      u18++;
    }
    else if (alter >= 18 && alter <= 30)
    {
      u30;
    }
    else if (alter >= 31 && alter <= 50)
    {
      u50++;
    }
    else if (alter >= 51 && alter <= 65)
    {
      u65++;
    }
    else if (alter > 65)
    {
      ue65++;
    }
  } while (alter != 0);

  summe = u18 + u30 + u50 + u65 + ue65;

  printf("Unter 18:  %i\n", u18);
  printf("18 bis 30: %i\n", u30);
  printf("31 bis 50: %i\n", u50);
  printf("51 bis 65: %i\n", u65);
  printf("Ueber 65:  %i\n", ue65);
  printf("Summe:     %i\n", summe);

  return 0;
}