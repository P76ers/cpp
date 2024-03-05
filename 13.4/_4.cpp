#include <iostream>
#define ANZ 10000

/*
Es sollen in ein Array „arrZahlen“ beliebig viele Zahlen zwischen 1 und 1.000 eingeben werden können.
Ende ist bei Eingabe einer `0`, es dürfen aber nur maximal 10.000 Zahlen eingegeben werden.

- Erstellen Sie ein Teilstruktogramm für die Werteingabe. Beachten Sie dabei die Endebedingungen
  und den Gültigkeitsbereich der Zahlen! Ungültige Zahlen dürfen nicht akzeptiert werden.
- Erstellen Sie ein weiteres Teilstruktogramm, das die Anzahl und
  den Durchschnitt der eingegebenen Werte ermittelt und auf dem Bildschirm ausgibt.
- Erstellen Sie ein drittes Teilstruktogramm, das Minimum und Maximum der eingegebenen Werte ermittelt
  und auf dem Bildschirm ausgibt.
- Kopieren Sie alle Werte, die um +/- 10 vom Durchschnitt abweichen in ein zweites Array.
  (Da wir noch keine dynamischen Arrays kennen, wählen Sie das Array bitte gleichgroß.)
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[ANZ] = {0}, eingabe = 0;

  do
  {

    cout << "Zahl bitte (1-1000) ";
    cin >> eingabe;

    if (eingabe < 1 || eingabe > 1000)
    {
      cout << "Zahl NUR zwischen (1-1000)";
    }
    else
    {
    }

  } while (eingabe != 0);

  return 0;
}
