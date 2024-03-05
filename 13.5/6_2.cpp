#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Definieren Sie eine Funktion "Barrel (Liter)", die eine Liter-Angabe in Barrel umrechnet,
wobei ein Petrol Barrel (PB) laut Definition einem Volumen von nahezu 159 Litern entspricht.

Extra: Erstellen Sie auch die Funktion "LiBa(Menge, Zieleinheit)",
die wahlweise Liter in Barrel umrechnet oder Barrel in Liter, entsprechend dem zweiten übergebenen Parameter.
*/

double barrel(double);
double liba(double, char);

int main()
{
  int x;
  char z;
  srand(time(NULL));

  // x=rand()%9901+100;
  // cout << x << " Liter sind " << barrel(liter) << " Barrel.";

  cout << "Menge: ";
  cin >> x;

  do
  {
    cout << "Zieleinheit:\n(L)iter oder (B)arrel: ";
    cin >> z;
  } while (z != 'l' && z != 'L' && z != 'b' && z != 'B'); // bis z=L oder z=B

  if (z == 'l' || z == 'L')
    cout << x << " Barrel sind " << liba(x, z) << " Liter.";
  else
    cout << x << " Liter sind " << liba(x, z) << " Barrel.";

  return 0;
}

// LiBa(Menge, Zieleinheit)
double liba(double menge, char ziel)
{
  if (ziel == 'l' || ziel == 'L')
  {
    return menge * 159;
  }
  else
  {
    return menge / 159;
  }
}

double barrel(double liter)
{
  return liter / 159;
}
