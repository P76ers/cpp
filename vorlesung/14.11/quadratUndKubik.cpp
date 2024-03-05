#include <iostream>

int kubik(int);
int quadrat(int);

/*
Funktionen quadrat() und kubik()
*/

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

int quadrat(int x)
{
  int erg;
  erg = x * x;
  return erg;
}

int kubik(int z)
{
  return quadrat(z) * z;
}