#include <iostream>

/*
Erstellen Sie ein Programm für eine einfache Datumsprüfung.
Es werden einzeln Tag, Monat, Jahr eingegeben und sind danach zu prüfen.
- Der Tag muss zwischen 1 und 31 liegen
- Der Monat dann zwischen 1 und 12 und
- Jahreszahl sollen nur zwischen 1800 und 2200 erlaubt sein.

Das Programm gibt am Ende aus: "Plausibles Datum!" oder "Falsches Datum!"
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

  return 0;
}