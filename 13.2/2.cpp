#include <iostream>

/*
Geben Sie eine Liste der Umrechnungswerte für Temperaturen von Celsius in Fahrenheit (F = C° * 1,8 + 32) aus.
Benutzen Sie dabei den Bereich von -50° bis +70° Celsius in 5°-Schritten.
*/

using namespace std;

int main()
{
  float celsius = 0;
  float fahrenheit = 0;

  for (celsius; celsius <= 70; celsius += 5)
  {
    fahrenheit = celsius * 1.8 + 32;
    cout << celsius << " Celsius entsprechen: " << fahrenheit << " Fahrenheit\n";
  }

  return 0;
}