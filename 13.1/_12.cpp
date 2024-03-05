#include <iostream>

/*
Für Baustoffe gelten die, in der nebenstehenden Tabelle genannten, Einheitsgewichte.
Eingegeben werden die Maße einer Baugrube in Metern (Länge, Breite und Tiefe),
und das Programm soll zuerst das abzutransportierende Volumen in Kubikmetern berechnen und ausgeben.
Anschließend soll das Gewicht in Tonnen pro Kubikmeter eingegeben werden,
um auch das Gewicht des abzutransportierenden Bauschutts zu ermitteln und auszugeben.

Baustoffe:            t / m3
Stahlbeton              2,5
Beton aus Kies          2,3
Klinkerziegelsteine     2,0
normale Ziegel voll     1,8
Lochziegel              1,5
Mörtel                  2,0
Asbestzement            2,0

Bodenarten:
Sand und Kies naß       2,0
Sand und Kies trocken   1,8
Steinschotter           1,8
Lehm und Ton            2,1

Holz:
naß                     0,9
trocken                 0,7
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float laenge = 0.0;
  float breite = 0.0;
  float tiefe = 0.0;
  float volumen = 1.0;

  float sandKiesNass = 2.0;
  float sandKiesTrocken = 1.8;
  float steinSchotter = 1.8;
  float lehmTon = 2.1;

  float stahlbeton = 2.5;
  float betonKies = 2.3;
  float klinkerZiegelSteine = 1.8;
  float normZiegel = 1.8;
  float lochziegel = 1.5;
  float moertel = 2.0;
  float asbestZement = 2.0;

  float holzNass = 0.0;
  float holzTrocken = 0.0;

  float bauschutt = 0.0;

  // cout << "Bitte Laenge eingeben: " << endl;
  // cin >> laenge;
  // cout << "Bitte Breite eingeben: " << endl;
  // cin >> breite;
  // cout << "Bitte Tiefe eingeben: " << endl;
  // cin >> tiefe;

  // volumen = laenge * breite * tiefe;
  // cout << "Das Volumen betraegt: " << volumen << endl;

  stahlbeton = volumen * 2.5;
  cout << "Stahlbeton betraegt: " << stahlbeton << endl;
  betonKies = volumen * 2.3;
  cout << "Beton aus Kies betraegt: " << betonKies << endl;
  klinkerZiegelSteine = volumen * 2.0;
  cout << "Klinkerziegelsteine betragen: " << klinkerZiegelSteine << endl;
  normZiegel = volumen * 1.8;
  cout << "normale Ziegel voll betragen: " << normZiegel << endl;
  lochziegel = volumen * 1.5;
  cout << "Lochziegel betragen: " << lochziegel << endl;
  moertel = volumen * 2.0;
  cout << "Moertel betraegt: " << moertel << endl;
  asbestZement = volumen * 2.0;
  cout << "Asbestzemet betraegt: " << asbestZement << endl;

    return 0;
}