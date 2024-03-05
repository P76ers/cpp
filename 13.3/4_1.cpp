#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  float zuZahlen = 0, gegeben = 0, rueckgeld = 0;
  int z = 0;

  cout << "Zu Zahlen: ";
  cin >> zuZahlen;

  cout << "Gegeben: ";
  cin >> gegeben;

  rueckgeld = gegeben - zuZahlen;
  cout << "Sie erhalten: " << rueckgeld << endl;

  while (rueckgeld >= 500)
  {
    rueckgeld = rueckgeld - 500;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 500\n";
    z = 0;
  }

  while (rueckgeld >= 200)
  {
    rueckgeld = rueckgeld - 200;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 200\n";
    z = 0;
  }

  while (rueckgeld >= 100)
  {
    rueckgeld = rueckgeld - 100;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 100\n";
    z = 0;
  }

  while (rueckgeld >= 50)
  {
    rueckgeld = rueckgeld - 50;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 50\n";
    z = 0;
  }

  while (rueckgeld >= 20)
  {
    rueckgeld = rueckgeld - 20;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 20\n";
    z = 0;
  }

  while (rueckgeld >= 10)
  {
    rueckgeld = rueckgeld - 10;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 10\n";
    z = 0;
  }

  while (rueckgeld >= 5)
  {
    rueckgeld = rueckgeld - 5;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 5\n";
    z = 0;
  }

  while (rueckgeld >= 2)
  {
    rueckgeld = rueckgeld - 2;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 2\n";
    z = 0;
  }

  while (rueckgeld >= 1)
  {
    rueckgeld = rueckgeld - 1;
    z++;
  }
  if (z > 0)
  {
    cout << z << "x 1\n";
    z = 0;
  }

  return 0;
}
