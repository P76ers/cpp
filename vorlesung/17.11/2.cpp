#include <iostream>

/*
Lassen Sie vom Benutzer Größe und Gewicht eingeben und berechnen Sie dazu den Bodymaßindex (BMI).

Bewerten Sie den BMI der Benutzer, indem Sie ausgeben
- "Untergewicht",
  - bmi < 25
- "Normalgewicht",
  - bmi >= 25
- "Übergewicht 1 (Untergroß)",
  - bmi >= 30
- "Übergewicht 2, Arzt konsultieren".
  - bmi > 40
*/

using namespace std;

int main(int argc, char const *argv[])
{
  double groesse = 1.75, gewicht = 220, bmi = 0;

  cout << "Bitte Groesse eingeben: " << endl;
  cin >> groesse;

  cout << "Bitte Gewicht eingeben: " << endl;
  cin >> gewicht;

  bmi = gewicht / (groesse * groesse);

  if (bmi > 40)
  {
    cout << "Uebergewicht 2, Arzt konsultieren" << endl;
  }
  else if (bmi >= 30)
  {
    cout << "Uebergewicht 1 (Untergross)" << endl;
  }
  else if (bmi >= 25)
  {
    cout << "Normalgewicht" << endl;
  }
  else if (bmi < 25)
  {
    cout << "Untergewicht" << endl;
  }

  return 0;
}