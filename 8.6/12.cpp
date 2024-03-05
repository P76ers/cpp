#include <iostream>

/*
Verknüpfen Sie die beiden vorherigen Aufgaben (8) zum „Jahres/Stunde/Monatsgehalt“ und
die Aufgabe (11) zur Steuerberechnung, so dass nach Ermittlung des Jahresgehalts (Brutto)
die Steuer und der Nettolohn ermittelt werden.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float bruttoGehalt = 0;
  float jahresGehaltBrutto = 0;
  float jahresGehaltNetto = 0;
  float steuerLast = 0;
  char kennBuchstabe = ' ';

  do
  {
    cout << "Bitte geben Sie Ihr Gehalt (brutto) ein: " << endl;
    cin >> bruttoGehalt;
  } while (bruttoGehalt <= 0);

  do
  {
    cout << "Bitte geben Sie Berechnungzeitraum ein (S)tunden-, (W)ochen- oder (M)onatslohn : " << endl;
    cin >> kennBuchstabe;
  } while (kennBuchstabe != 's' && kennBuchstabe != 'S' && kennBuchstabe != 'w' && kennBuchstabe != 'W' && kennBuchstabe != 'm' && kennBuchstabe != 'M');

  if (kennBuchstabe == 's' || kennBuchstabe == 'S')
  {
    jahresGehaltBrutto = bruttoGehalt * 2080;
  }
  else if (kennBuchstabe == 'w' || kennBuchstabe == 'W')
  {
    jahresGehaltBrutto = bruttoGehalt * 52;
  }
  else
  {
    jahresGehaltBrutto = bruttoGehalt * 12;
  }

  if (jahresGehaltBrutto > 50000)
  {
    jahresGehaltNetto = jahresGehaltBrutto * 0.5;
  }
  else if (jahresGehaltBrutto > 25000)
  {
    jahresGehaltNetto = jahresGehaltBrutto * 0.7;
  }
  else if (jahresGehaltBrutto > 10000)
  {
    jahresGehaltNetto = jahresGehaltBrutto * 0.8;
  }
  else
  {
    jahresGehaltNetto = jahresGehaltBrutto * 0.9;
  }

  steuerLast = jahresGehaltBrutto - jahresGehaltNetto;

  cout << "Ihr Jahresgehalt (brutto) betraegt: " << jahresGehaltBrutto << endl;
  cout << "Ihr Jahresgehalt (netto) betraegt: " << jahresGehaltNetto << endl;
  cout << "Ihre jaehrliche Steuerlast betraegt: " << steuerLast << endl;

  return 0;
}