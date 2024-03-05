#include <iostream>

/*
Funktionen quadrat() und kubik()
Deklaration vor main()
!!! Error da Funktion kubik() zuerst deklariert, jedoch quadrat() aufruft
*/

int kubik(int z)
{
  return quadrat(z) * z;
}

int quadrat(int x)
{
  int erg;
  erg = x * x;
  return erg;
}

using namespace std;

int main()
{

  int a = 5, b;
  b = quadrat(a);
  cout << "Quadrat :" << b << endl;
  b = kubik(a);
  cout << "Kubik :" << b;

  return 0;
}
