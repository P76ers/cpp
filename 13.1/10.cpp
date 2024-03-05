#include <iostream>
#include <cmath>

/*
Berechnen Sie nach Eingabe von Anfangskapital, Stehzeit (in Jahren) und eines Zinssatzes
den Kapitalwert am Ende der Zeit mit Hilfe der (nebenstehenden) Zinseszinsformel.
Kn = pow(Ko(1+(p/100)),2);
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float anfangsKapital = 0;
  float stehZeit = 0;
  float zinsSatz = 0;
  float endKapital = 0;

  cout << "Bitte Anfangskapital eingeben :" << endl;
  cin >> anfangsKapital;
  cout << "Bitte Stehzeit in Jahren eingeben :" << endl;
  cin >> stehZeit;
  cout << "Bitte Zinssatz eingeben :" << endl;
  cin >> zinsSatz;

  endKapital = anfangsKapital * pow((1 + (zinsSatz / 100)), stehZeit);

  cout << "Endkapital betraegt :" << endKapital << endl;

  return 0;
}