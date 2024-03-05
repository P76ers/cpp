#include <iostream>
#include <string>

/*
Für die Ausgabe von Schecks ist vom Benutzer ein Betrag zwischen 1 und 999 (€uro)einzugeben.
Ein C++-Programm zerlegt anschließend die Zahl in Hunderter, Zehner und Einer
und gibt dann das "Geldwort" dazu aus.

Das Scheckgesetz erlaubt zwei Schreibweisen:

458 vier-fünf-acht Euro
221 zwei-zwei-eins Euro
Folgender Ansatz für ein Arrays kann Ihnen helfen:

string arr1[10]= {"null", "ein", "zwei", "drei", "vier", "fünf", "sechs", "sieben", "acht", "neun"};
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int eingabeInt = 10, stelle = 0;
  string eingabeString = " ";
  string arr[10] = {"null", "ein", "zwei", "drei", "vier", "fuenf", "sechs", "sieben", "acht", "neun"};

  do
  {
    cout << "Bitte Betrag eingeben:";
    cin >> eingabeString;
    eingabeInt = stoi(eingabeString);
  } while (eingabeInt < 1 || eingabeInt > 999);

  for (int i = 0; i < 3; i++)
  {
    stelle = int(eingabeString[i]) - 48;
    cout << arr[stelle] << "-";
  }
  cout << "EUR";

  return 0;
}