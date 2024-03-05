#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  float zuZahlen = 0, gegeben = 0, rueckgeld = 0;
  int z = 0, intRueck = 0;

  cout << "Zu Zahlen: ";
  cin >> zuZahlen;

  cout << "Gegeben: ";
  cin >> gegeben;

  rueckgeld = gegeben - zuZahlen;
  cout << "Sie erhalten: " << rueckgeld << " zurueck." << endl;

  intRueck = rueckgeld * 100;
  z = intRueck / 50000;
  intRueck = intRueck % 50000;

  if (z > 0)
  {
    cout << z << "x 500\n";
    z = 0;
  }

  z = intRueck / 20000;
  intRueck = intRueck % 20000;
  if (z > 0)
  {
    cout << z << "x 200\n";
    z = 0;
  }

  z = intRueck / 10000;
  intRueck = intRueck % 10000;

  if (z > 0)
  {
    cout << z << "x 100\n";
    z = 0;
  }

  z = intRueck / 5000;
  intRueck = intRueck % 5000;

  if (z > 0)
  {
    cout << z << "x 50\n";
    z = 0;
  }

  z = intRueck / 2000;
  intRueck = intRueck % 2000;

  if (z > 0)
  {
    cout << z << "x 20\n";
    z = 0;
  }

  z = intRueck / 1000;
  intRueck = intRueck % 1000;

  if (z > 0)
  {
    cout << z << "x 10\n";
    z = 0;
  }

  return 0;
}
