#include <iostream>

/*
Umfang und Fläche eines Quadrates bestimmen mit Call by Reference
*/

using namespace std;
void quadrat(float, float *, float *);

int main()
{
  float a, umf, fla;
  cout << "Seite a: ";
  cin >> a;

  quadrat(a, &umf, &fla);

  cout << "Umfang ist: " << umf << endl;
  cout << "Fl\204che ist: " << fla << endl;
  return 0;
}

void quadrat(float a, float *u, float *f)
{
  *u = 4 * a;
  *f = a * a;
}