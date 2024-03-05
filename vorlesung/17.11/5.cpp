#include <iostream>

/*
Teilen mit Rest: 14 : 3 = 4 Rest 2
Dabei lässt sich die Division als fortgesetzte Subtraktion darstellen.
(Denken Sie einmal zurück an "schriftliches Teilen" in der Schule.)
Erstellen Sie ein Programm zur Ausgabe des Ergebnisses, aber ohne die Rechenarten *, /, % zu benutzen.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 0, b = 0, c = 0;

  cout << "Bitte Zahl a eingeben" << endl;
  cin >> a;

  cout << "Bitte Zahl b eingeben" << endl;
  cin >> b;

  printf("%i : %i = ", a, b);

  while (a >= b)
  {
    a -= b;
    c++;
  }

  printf("%i Rest %i", c, a);

  return 0;
}