#include <iostream>

/*
Definieren Sie eine Funktion "Barrel (Liter)", die eine Liter-Angabe in Barrel umrechnet,
wobei ein Petrol Barrel (PB) laut Definition einem Volumen von nahezu 159 Litern entspricht.

Extra: Erstellen Sie auch die Funktion "LiBa(Menge, Zieleinheit)",
die wahlweise Liter in Barrel umrechnet oder Barrel in Liter, entsprechend dem zweiten übergebenen Parameter.
*/

int barrel(int);

using namespace std;

int main(int argc, char const *argv[])
{
  int eingabe = 159, ausgabe;

  ausgabe = barrel(eingabe);

  printf("%i Liter = %i Barrel", eingabe, ausgabe);

  return 0;
}

int barrel(int liter)
{

  return liter / 159;
}