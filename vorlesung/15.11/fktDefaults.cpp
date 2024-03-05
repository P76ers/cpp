#include <iostream>

/*
Funktion mit Aufruf eines zweiten optional Parameters (wird auf Defaultwert b=0 gesetzt)
*/

float multiplizieren(float a, float b = 0)
{
  if (b == 0)
    return a * a;
  else
    return a * b;
}

using namespace std;

int main()
{
  float erg;
  erg = multiplizieren(1, 0);

  //  erg=multiplizieren(6);

  cout << "Ergebnis: " << erg;
  return 0;
}
