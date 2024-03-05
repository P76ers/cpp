#include <iostream>
#define OG 20
#define UG 10

/*
Rechentrainer mit Zufallszahlen

Erweiterung1:
  Operatoren: +, -, *, %

Erweiterung2:
  10x Eingabe und Ausgabe
*/

using namespace std;

int main()
{
  int a = 0, b = 0, c = 0, d = 0, operat = 0;
  char op = ' ';

  for (int i = 1; i <= 10; i++)
  {
    srand(time(NULL)); // Start Random
    a = rand() % (OG - UG + 1) + UG;
    b = rand() % (OG - UG + 1) + UG;
    operat = rand() % 4;

    if (operat == 0)
    {
      op = '+';
      c = a + b;
    }
    else if (operat == 1)
    {
      op = '-';
      c = a - b;
    }
    else if (operat == 2)
    {
      op = '*';
      c = a * b;
    }
    else if (operat == 3)
    {
      op = '%';
      c = a % b;
    }

    printf("Was ist das Ergebnis von %i %c %i?\n", a, op, b);
    cin >> d;

    while (d != c)
    {
      printf("Eingabe falsch! \n");
      printf("Was ist das Ergebnis von %i %c %i?\n", a, op, b);
      cin >> d;
    }

    printf("Gut gerechnet!\n");
  }

  return 0;
}