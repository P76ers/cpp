#include <iostream>
#include <math.h>

/*
Funktion "runden(Zahl, Stellen)", Stellen gibt die Anzahl der Stellen an auf die gerundet
werden soll.
*/

using namespace std;

double runden(double zahl, int stellen)
{
  zahl = zahl * pow(10, stellen);
  zahl = round(zahl);
  zahl = zahl / pow(10, stellen);
  return zahl;
}

int main()
{
  float z = 5.88754;
  cout << z << endl;
  cout << runden(z, 4) << endl;

  return 0;
}