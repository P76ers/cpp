#include <iostream>
using namespace std;

/*
2 Zahlen mit einer Funktion und Call by Reference tauschen
*/

void tausch(int *, int *);

int main()
{
  int a = 7, b = 25;
  cout << "Vorher: " << a << " und " << b << endl;

  tausch(&a, &b);
  cout << "Nachher: " << a << " und " << b << endl;

  return 0;
}

void tausch(int *a, int *b)
{
  int hilf = *a;
  *a = *b;
  *b = hilf;
}
