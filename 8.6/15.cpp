#include <iostream>
#define GRUNDGEHALT 3000

/*
Erweitern Sie die obige Aufgabe (14): Wenn Vertreter in (H)amburg, (B)erlin oder (M)ünchen wohnen,
erhalten sie einen Ortszuschlag von 250 € für die erhöhten Lebenshaltungskosten in diesen Großstädten.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float umsatz = 0.0;
  float gehalt = 0.0;
  char ort = ' ';

  cout << "Bitte Umsatz eingeben:" << endl;
  cin >> umsatz;

  cout << "Bitte Wohnort angeben (H)amburg, (B)erlin oder (M)uenchen:" << endl;
  cin >> ort;

  if (umsatz < 10000)
  {
    gehalt = GRUNDGEHALT * 1.03;
  }
  else if (umsatz >= 10000 && umsatz <= 20000)
  {
    gehalt = GRUNDGEHALT * 1.05;
  }
  else if (umsatz > 20000)
  {
    gehalt = GRUNDGEHALT * 1.075;
  }

  cout << "Sie erhalten Gehalt + Provision: " << gehalt << endl;

  if (ort == 'H' || ort == 'h' || ort == 'b' || ort == 'B' || ort == 'M' || ort == 'M')
  {
    gehalt = gehalt + 250;
    cout << "Sie erhalten Ortszuschlag: 250" << endl;
  }

  cout << "Sie erhalten insgesamt: " << gehalt << endl;

  return 0;
}