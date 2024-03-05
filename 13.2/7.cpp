#include <iostream>
#define ANZ 250

/*
Ein Voting: 250 User können "j" für Ja, "n" für Nein und "e" für Enthaltung eingeben.
Geben Sie bitte aus, wie viele User jeweils für Ja und Nein gestimmt haben und wie viele Enthaltungen es gab.

Freiwillige Erweiterung: Geben Sie die prozentualen Anteile an.
*/

using namespace std;

int main()
{
  int ja = 0, nein = 0, enthaltung = 0, ungueltig = 0, i = 0;
  double stimmen = 0.0;
  char eingabe = ' ';

  for (i = 0; i < ANZ; i++)
  {
    cout << "Bitte abstimmen (J)a / (N)ein (E)nthaltung" << endl;
    cin >> eingabe;
    stimmen++;

    if (eingabe == 'j' || eingabe == 'J')
    {
      ja++;
    }
    else if (eingabe == 'n' || eingabe == 'N')
    {
      nein++;
    }
    else if (eingabe == 'e' || eingabe == 'E')
    {
      enthaltung++;
    }
    else
    {
      ungueltig++;
    }
  }

  printf("Mit 'ja' abgestimmt: %4i %6.2lf%%", ja, (ja * 100 / stimmen));
  printf("\nMit 'nein' abgestimmt: %2i %6.2lf%%", nein, (nein * 100 / stimmen));
  printf("\nEnthaltungen: %11i %6.2lf%%", enthaltung, (enthaltung * 100 / stimmen));
  printf("\nUngueltige Stimmen: %5i %6.2lf%%", ungueltig, (ungueltig * 100 / stimmen));

  return 0;
}