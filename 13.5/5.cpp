#include <iostream>
#include <ctime>

int zufall(int, int);

/*
Erstellen Sie eine Funktion "Zufall (ug, og)",
die Ihnen passende Zufallszahlen zwischen der Untergrenze ug und der Obergrenze og liefert.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int rnd = 0;

  srand(time(NULL));

  for (int i = 0; i < 10; i++)
  {
    rnd = zufall(450, 50);
    printf("%i ", rnd);
  }

  return 0;
}

int zufall(int ug, int og)
{
  int erg;

  erg = rand() % (og - ug + 1) + ug;

  return erg;
}
