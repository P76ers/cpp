#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Rechentrainer mit Zufallszahlen

Erweiterung1:
  Operatoren: +, -, *, %

*/

using namespace std;

int main()
{
  int a, b, c, eingabe, zuf;
  char op;

  srand(time(NULL));

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
    cout << "richtig geraten";
  else
    cout << "leider falsch";

  return 0;
}
