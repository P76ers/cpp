#include <iostream>

/*
Es sollen vom Benutzer ein Anlagebetrag, ein Zinssatz (in %) und eine Stehzeit eingegeben werden.
Das Programm gibt dann in einer Tabelle die Entwicklung des Kapitalzuwachses anschaulich in einer Tabelle aus.
(Auf die Zahlenformatierung brauchen Sie noch nicht Rücksicht zu nehmen.)
Beispiel: Kapital 1000 Euro, Zinssatz 3 % auf 5 Jahre angelegt
*/

using namespace std;

int main(int argc, char const *argv[])
{
  double startKapital = 1000.0;
  int zinsSatz = 3;
  double zinsen = 0.0;
  int jahre = 5;
  double endKapital = 0.0;

  // cout << "Bitte Startkapital eingeben: " << endl;
  // cin >> startKapital;

  // cout << "Bitte Zinssatz eingeben: " << endl;
  // cin >> zinsSatz;

  // cout << "Bitte Stehzeit eingeben: " << endl;
  // cin >> jahre;

  cout << "Jahre "
       << "StartKapital "
       << "Zinsen "
       << "Endkapital:" << endl;

  for (int i = 1; i <= jahre; i++)
  {
    endKapital = startKapital + (startKapital * zinsSatz / 100);
    zinsen = endKapital - startKapital;

    printf("\n%5i %12.2lf %6.2lf %10.2lf ", i, startKapital, zinsen, endKapital);
    startKapital = endKapital;
  }

  return 0;
}