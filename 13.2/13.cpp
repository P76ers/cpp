#include <iostream>

/*
Prüfen Sie die Eingaben im "Sparprogramm" (die vorherige Zinseszinsaufgabe) auf Korrektheit!
Bei falscher Eingabe muss der User die entsprechenden Werte erneut eingeben, bis er eine gültige Eingabe macht.
Prüfungen:
- Der Anlagebetrag muss mindestens 500 € betragen, maximal 500.000 €;
- der Zinssatz muss zwischen 0,5 und max. 10% liegen;
- die Stehzeit: mindestens 1 Jahr, maximal 50 Jahre.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float startKapital = 1000.0;
  float zinsSatz = 3;
  float zinsen = 0.0;
  int jahre = 1;
  float endKapital = 0.0;

  do
  {
    cout << "Bitte Startkapital eingeben: " << endl;
    cin >> startKapital;
  } while (startKapital < 500 || startKapital > 500000);

  do
  {
    cout << "Bitte Zinssatz eingeben: " << endl;
    cin >> zinsSatz;
  } while (zinsSatz < 0.5 || zinsSatz > 10);

  do
  {
    cout << "Bitte Stehzeit eingeben: " << endl;
    cin >> jahre;
  } while (jahre < 1 || jahre > 50);

  cout << "jahre "
       << "startKapital "
       << "zinsen "
       << "endKapital " << endl;

  for (int i = 1; i <= jahre; i++)
  {

    endKapital = startKapital + (startKapital * zinsSatz / 100);
    zinsen = endKapital - startKapital;

    cout
        << i << " " << startKapital << " " << zinsen << " " << endKapital << endl;
    startKapital = endKapital;
  }

  return 0;
}