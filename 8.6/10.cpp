#include <iostream>

/*
Verfeinern Sie Ihre Lösung: Januar, März, Mai, Juli, August, Oktober, Dezember haben 31 Tage,
die anderen Monate mit Ausnahme des Februars haben 30 Tage.
-> Sie müssen also Tag und Monat im Zusammenhang prüfen…
Das Monatsende des Februars muss natürlich im Zusammenhang mit dem Jahr geprüft werden,
gibt es 28 oder 29 Tage?!?

- 2020 Schaltjahr
- 1900 kein Schaltjahr
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int tag = 0;
  int monat = 0;
  int jahr = 0;

  cout << "Bitte Tag eingeben" << endl;
  cin >> tag;
  cout << "Bitte Monat eingeben" << endl;
  cin >> monat;
  cout << "Bitte Jahr eingeben" << endl;
  cin >> jahr;

  if (tag < 1 || tag > 31 || monat < 1 || monat > 12 || jahr < 1800 || jahr > 2200)
  {

    cout << "Falsche Datumeingabe!" << endl;
  }
  else
  {
    cout << "Plausible Datumeingabe!" << endl;
  }
  if (monat == 1 || monat == 3 || monat == 5 || monat == 7 || monat == 8 || monat == 10 || monat == 12)
  {
    cout << "Dieser Monat hat 31 Tage" << endl;
    // cout << "Den " << tag << "." << monat << "." << jahr << " gibt es nicht!" << endl;
  }
  else if (monat == 2)
  {
    if (jahr % 400 == 0 || jahr % 4 == 0 && jahr % 100 != 0)
    {
      cout << "Schaltjahr: Dieser Monat hat 29 Tage" << endl;
    }
    else
    {
      cout << "Dieser Monat hat 28 Tage" << endl;
    }
  }
  else
  {
    cout << "Dieser Monat hat 30 Tage!" << endl;
  }

  return 0;
}