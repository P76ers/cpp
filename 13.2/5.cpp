#include <iostream>
#include <stdlib.h>
#include <ctime>
#define OG 20
#define UG 1

/*
Das Programm "Zahlenraten" denkt sich eine Zahl zwischen 1 und 20
(oder 100 oder 1000 oder o-der oder) aus und Sie müssen diese Zahl erraten.
Nehmen Sie zahl = zufall(1,20) als Anweisung für die Zufallszahl.
Das Programm gibt nach jeder Eingabe den Hinweis,
ob die eingegebene Zahl größer oder kleiner war als die gesuchte Zahl – oder es ein Treffer ist.

Erweiterung: Der User hat maximal n Versuche.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int eingabe = 0, zufall = 0;
  srand(time(NULL)); // Start Random

  //	zufall=rand()%(Obergrenze-Untergrenze+1)+Untergrenze
  zufall = rand() % (OG - UG + 1) + UG;

  do
  {

    cout << "Bitte Zahl raten: " << endl;
    cin >> eingabe;
    if (eingabe == zufall)
    {
      cout << "zahl richtig geraten!";
    }
    else if (eingabe < zufall)
    {
      cout << "zahl zu klein!" << endl;
    }
    else
    {
      cout << "zahl zu gross!" << endl;
    }

  } while (eingabe != zufall);

  return 0;
}