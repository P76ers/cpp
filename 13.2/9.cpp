#include <iostream>

/*
In einem Unternehmen wird das Gehalt in einer Gehaltsgruppe in Abhängigkeit vom Alter der Beschäftigten berechnet.
Dazu soll eine entsprechende Tabelle ausgegeben werden.
Im Alter bis 35 wird das monatliche Bruttogehalt alle 2 Jahre um 100€ erhöht,
danach alle 4 Jahre um jeweils 150€. Gehen Sie von einem Endalter von mindestens 67 Jahren aus.

Ausgangspunkt (und Eingabe): Das Gehalt eines 21-jährigen Mitarbeiters
*/

using namespace std;

int main(int argc, char const *argv[])
{
  double gehalt = 0;
  int alter = 21, jahr = 1;

  cout << "Bitte Gehalt eingeben: " << endl;
  cin >> gehalt;

  printf("Jahr    Gehalt   Alter:");

  do
  {
    printf("\n%4i   %5.2lf   %5i", jahr, gehalt, alter);
    alter++;
    jahr++;
    if (jahr % 2 == 0)
    {
      gehalt = gehalt + 100;
    }
  } while (alter <= 35);

  do
  {
    printf("\n%4i   %5.2lf   %5i", jahr, gehalt, alter);
    alter++;
    jahr++;
    if (jahr % 4 == 3 && alter >= 39)
    {
      gehalt = gehalt + 150;
    }
  } while (alter > 35 && alter <= 67);

  return 0;
}