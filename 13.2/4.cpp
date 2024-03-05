#include <iostream>

/*
Schreiben Sie ein Programm, das zwei ganze Zahlen a und b eingegeben bekommt
und dann die Summe aller ganzen Zahlen in diesem Bereich (Intervall) berechnet.
Beispiel:
Eingaben 3 und 7      -> 25     = 3 + 4 + 5 + 6 + 7
Eingaben 20 und 24    -> 110    = 20 + 21 + 22 + 23 + 24
*/

using namespace std;

int main()
{
  int zahlA = 0;
  int zahlB = 0;
  int summe = 0;

  cout << "Bitte Zahl A eingeben: " << endl;
  cin >> zahlA;

  cout << "Bitte Zahl B eingeben: " << endl;
  cin >> zahlB;

  for (zahlA; zahlA <= zahlB; zahlA++)
  {
    summe += zahlA;
  }

  cout << summe;

  return 0;
}
