#include <iostream>

/*
Überladene Funktion
*/

float ui(float);        // Angabe mehrerer Prototypen
float ui(float, float); // ="Funktionsüberladung"

using namespace std;

int main()
{
  float f;

  f = ui(2.5, 3.2);

  cout << "Ergebnis: " << f;
  return 0;
}

float ui(float a)
{
  return a * a;
}

float ui(float a, float b)
{
  return a / b;
}
