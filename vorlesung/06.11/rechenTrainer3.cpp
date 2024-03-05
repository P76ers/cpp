#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Rechentrainer mit Zufallszahlen

Erweiterung1:
  Operatoren: +, -, *, %

Erweiterung2:
  10x Eingabe und Ausgabe und Summe der richtigen Berechnung
*/

using namespace std;

int main()
{
  int a, b, c, eingabe, zuf, i, zaehler = 0;
  char op;

  srand(time(NULL));

  for (i = 1; i <= 5; i++)
  {
    a = rand() % 9 + 1;
    b = rand() % 9 + 1;
    zuf = rand() % 4;

    switch (zuf)
    {
    case 0:
      op = '+';
      c = a + b;
      break;
    case 1:
      op = '-';
      c = a - b;
      break;
    case 2:
    {
      op = '*';
      c = a * b;
      break;
    }
    case 3:
    {
      op = '%';
      c = a % b;
      break;
    }
    }

    cout << a << " " << op << " " << b << " = ";
    cin >> eingabe;

    if (eingabe == c)
      zaehler++;
  }
  cout << "Sie haben " << zaehler << " Aufgaben richtig beantwortet.";

  return 0;
}
