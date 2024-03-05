#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Rechentrainer mit Zufallszahlen

Erweiterung1:
  Operatoren: +

*/

using namespace std;

int main()
{
  int a, b, c, d;

  srand(time(NULL));

  a = rand() % 9 + 1;
  b = rand() % 9 + 1;
  c = a + b;

  cout << a << " + " << b << " = ";
  cin >> d;

  if (d == c)
    cout << "richtig geraten";
  else
    cout << "leider falsch";

  return 0;
}
