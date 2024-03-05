#include <iostream>

/*
Berechnen. Sie das maximale Volumen eines quadratischen Behältnisses.

Die dunklen Flächen werden in 1 mm Schritten vom Seitenrand ausgeschnitten. Im 1. Schritt werden
die Seitenflächen jeweils um 1 mm verkürzt. Die so entstandene neue Grundfläche wird mit Imm
Höhe berechnet, so erhält man ein Volumen. Wiederholen Sie die Schritte, bis Sie das maximale
Volumen haben und geben dann die so entstandenen neuen Seitenlängen und das Volumen aus.

*/

using namespace std;

int main()
{
  double volumen = 0.0, a = 10.0, h = 0.0, aMax = 0.0, hMax = 0.0, volMax = 0.0;

  while (h <= a / 2)
  {
    volumen = (a - 2 * h) * (a - 2 * h) * h;

    if (volumen > volMax)
    {
      volMax = volumen;
      aMax = a - 2 * h;
      hMax = h;
    }

    h += 0.1;
  }

  cout << "Groesste Volumen ist " << volMax << endl;
  cout << "... mit Seitenlaenge :" << aMax << endl;
  cout << "... mit Hoehe :" << hMax << endl;

  return 0;
}