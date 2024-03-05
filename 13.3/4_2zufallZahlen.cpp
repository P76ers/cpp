#include <iostream>
#include <stdlib.h>
#include <time.h>
#define OG 20000
#define UG 10000

/*
Erstellen Sie das Programm für einen Geldrückgabeautomaten, zum Beispiel im Parkhaus,
bei einem Fahrkartenautomaten, ähnlich auch wie in einem Geldautomaten.
*/

using namespace std;

int main()
{
  float zuZahlen = 0, gegeben = 0, rueckgeld = 0;
  int z = 0, intRueck = 0;

  srand(time(NULL)); // Start Random

  zuZahlen = rand() % (OG - UG + 1) + UG;
  zuZahlen = zuZahlen / 100;
  cout << "Bitte zahlen Sie: " << zuZahlen << endl;

  do
  {
    /* code */
    cout << "Gegeben: ";
    cin >> gegeben;
  } while (gegeben < zuZahlen);

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

  z = intRueck / 500;
  intRueck = intRueck % 500;

  if (z > 0)
  {
    cout << z << "x 5\n";
    z = 0;
  }

  z = intRueck / 200;
  intRueck = intRueck % 200;

  if (z > 0)
  {
    cout << z << "x 2\n";
    z = 0;
  }

  z = intRueck / 100;
  intRueck = intRueck % 100;

  if (z > 0)
  {
    cout << z << "x 1\n";
    z = 0;
  }

  z = intRueck / 50;
  intRueck = intRueck % 50;

  if (z > 0)
  {
    cout << z << "x 0,5\n";
    z = 0;
  }

  z = intRueck / 20;
  intRueck = intRueck % 20;

  if (z > 0)
  {
    cout << z << "x 0,2\n";
    z = 0;
  }

  z = intRueck / 10;
  intRueck = intRueck % 10;

  if (z > 0)
  {
    cout << z << "x 0,1\n";
    z = 0;
  }

  z = intRueck / 5;
  intRueck = intRueck % 5;

  if (z > 0)
  {
    cout << z << "x 0,5\n";
    z = 0;
  }

  z = intRueck / 2;
  intRueck = intRueck % 2;

  if (z > 0)
  {
    cout << z << "x 0,2\n";
    z = 0;
  }

  z = intRueck / 1;
  intRueck = intRueck % 1;

  if (z > 0)
  {
    cout << z << "x 0,1\n";
    z = 0;
  }

  return 0;
}
