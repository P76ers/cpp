#include <iostream>

/*
Ein Programm "SeeM" soll aus einer einzugebenden Kilometerzahl die entsprechenden Seemeilen
( 1 SM = 1,852 Km) berechnen.

Erweiterung:
Berechnen Sie, wieviel Meter Seemannsgarn der Kapitän während einer zehnstündigen Fahrt
bei einer mittleren Geschwindigkeit von 4 Grog pro Stunde spinnt.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float kilometerAnzahl = 0;
  float seeMeilen = 0;

  cout << "Bitte Kilometer eingeben: " << endl;
  cin >> kilometerAnzahl;

  seeMeilen = kilometerAnzahl / 1.852;

  cout << kilometerAnzahl << "km = " << seeMeilen << "sm" << endl;

  return 0;
}