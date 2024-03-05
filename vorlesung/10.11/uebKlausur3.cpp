#include <iostream>
using namespace std;

/*
Gegeben ist das untenstehende Array; erstellen Sie den C-Code
(nur Variablendeklaration und Anweisungsteil) für den Bubble-Sort zu diesem Array.

int a[5] = { 2, 8, 5, 4, 21};
*/

int main()
{
  int a[5] = {2, 8, 5, 4, 21}, hilf = 0, i = 0, anz = 5;
  bool tausch = true;

  cout << "vorher: ";
  for (i = 0; i < 5; i++)
  {
    printf("%2i ", a[i]);
  }

  do
  {
    tausch = false;
    anz--;
    for (i = 0; i < anz; i++)
    {
      if (a[i] > a[i + 1])
      {
        hilf = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hilf;
        tausch = true;
      }
    }
  } while (tausch);

  cout << "\nnachher:";
  for (i = 0; i < 5; i++)
  {
    printf("%2i ", a[i]);
  }

  return 0;
}
