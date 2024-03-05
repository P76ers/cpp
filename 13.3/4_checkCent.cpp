#include <iostream>

/*

*/

using namespace std;

int main(int argc, char const *argv[])
{
  /* code */

  float zahlbetrag = 0.0;
  float einzahlbetrag = 0.0;
  float wechselgeld = 0.0;

  int eur50 = 0;
  int eur20 = 0;
  int eur10 = 0;
  int eur5 = 0;
  int eur2 = 0;
  int eur1 = 0;
  int cent50 = 0;
  int cent20 = 0;
  int cent10 = 0;
  int cent5 = 0;
  int cent2 = 0;
  int cent1 = 0;

  while (zahlbetrag < 0.01)
  {
    cout << "Geben Sie den Zahlbetrag an: ";
    cin >> zahlbetrag;
  }

  while (einzahlbetrag < zahlbetrag)
  {
    cout << "Geben Sie Ihren Einzahlbetrag an: ";
    cin >> einzahlbetrag;
  }

  wechselgeld = einzahlbetrag - zahlbetrag;
  cout << "Sie erhalten :" << wechselgeld << endl;

  while (wechselgeld > 0.0)
  {
    while (wechselgeld >= 50)
    {
      wechselgeld = wechselgeld - 50;
      eur50++;
    }
    while (wechselgeld >= 20)
    {
      wechselgeld = wechselgeld - 20;
      eur20++;
    }
    while (wechselgeld >= 10)
    {
      wechselgeld = wechselgeld - 10;
      eur10++;
    }
    while (wechselgeld >= 5)
    {
      wechselgeld = wechselgeld - 5;
      eur5++;
    }
    while (wechselgeld >= 2)
    {
      wechselgeld = wechselgeld - 2;
      eur2++;
    }
    while (wechselgeld >= 1)
    {
      wechselgeld = wechselgeld - 1;
      eur1++;
    }
    while (wechselgeld >= 0.5)
    {
      wechselgeld = wechselgeld - 0.5;
      cent50++;
    }
    while (wechselgeld >= 0.2)
    {
      wechselgeld = wechselgeld - 0.2;
      cent20++;
    }
    while (wechselgeld >= 0.1)
    {
      wechselgeld = wechselgeld - 0.1;
      cent10++;
    }
    while (wechselgeld >= 0.05)
    {
      wechselgeld = wechselgeld - 0.05;
      cent5++;
    }
    while (wechselgeld >= 0.02)
    {
      wechselgeld = wechselgeld - 0.02;
      cent2++;
    }
    while (wechselgeld >= 0.01)
    {
      wechselgeld = wechselgeld - 0.01;
      cent1++;
    }
  }

  cout << eur50 << " x 50 EUR" << endl;
  cout << eur20 << " x 20 EUR" << endl;
  cout << eur10 << " x 10 EUR" << endl;
  cout << eur5 << " x 5 EUR" << endl;
  cout << eur2 << " x 2 EUR" << endl;
  cout << eur1 << " x 1 EUR" << endl;
  cout << cent50 << " x 50 Cent" << endl;
  cout << cent20 << " x 20 Cent" << endl;
  cout << cent10 << " x 10 Cent" << endl;
  cout << cent5 << " x  5 Cent" << endl;
  cout << cent2 << " x  2 Cent" << endl;
  cout << cent1 << " x  1 Cent" << endl;

  return 0;
}