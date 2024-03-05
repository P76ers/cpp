#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

/*
Die Fläche eines Kreises lässt sich über die Formel `pi * r2` ausrechnen ,
der Umfang über die Formel `2 pi * r`;
wobei `pi` einer Konstanten von 3,1416 entspricht
und `r` der Radius des Kreises ist.

Erstellen Sie ein Programm, welches nach Eingabe des Radius die Fläche
und den Umfang des entsprechenden Kreises berechnet und auf dem Bildschirm ausgibt.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float radius = 0;
  float flaeche = 0;
  float umfang = 0;

  cout << "Bitte Radius angeben: " << endl;
  cin >> radius;

  flaeche = M_PI * pow(radius, 2);
  umfang = 2 * M_PI * radius;

  cout << "Die Flaeche betraegt: " << flaeche << endl;
  cout << "Der Umfang betraegt: " << umfang << endl;

  return 0;
}