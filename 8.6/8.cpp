#include <iostream>

/*
Nach Eingabe eines Gehalts und eines Kennbuchstabens (`S`tunde, `W`oche, `M`onat)
wird das entsprechende Jahresgehalt ausgerechnet.

Das Jahr hat 52 Wochen, 12 Monate und 2080 Arbeitsstunden/Jahr sind zu leisten.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float gehalt = 0;
  float jahresGehalt = 0;
  char kennBuchstabe = ' ';

  do
  {
    cout << "Bitte geben Sie Ihr Gehalt ein: " << endl;
    cin >> gehalt;
  } while (gehalt <= 0);

  do
  {
    cout << "Bitte geben Sie Berechnungzeitraum ein (S)tunden-, (W)ochen- oder (M)onatslohn : " << endl;
    cin >> kennBuchstabe;
  } while (kennBuchstabe != 's' && kennBuchstabe != 'S' && kennBuchstabe != 'w' && kennBuchstabe != 'W' && kennBuchstabe != 'm' && kennBuchstabe != 'M');

  if (kennBuchstabe == 's' || kennBuchstabe == 'S')
  {
    jahresGehalt = gehalt * 2080;
  }
  else if (kennBuchstabe == 'w' || kennBuchstabe == 'W')
  {
    jahresGehalt = gehalt * 52;
  }
  else
  {
    jahresGehalt = gehalt * 12;
  }

  cout << "Ihr Jahresgehalt betraegt: " << jahresGehalt << endl;

  return 0;
}