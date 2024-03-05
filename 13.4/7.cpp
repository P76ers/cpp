#include <iostream>
#include <ctime>

/*
Füllen Sie ein Array mit 25 Zufallszahlen zwischen 1 und 100.

Anschließend gibt der Benutzer eine Zahl ein und das Programm gibt aus,
ob die eingegebene Zahl im Array vorhanden ist.

Variation 1: Der Benutzer hat 3 Versuche, eine Zahl zu finden, die im Array enthalten ist.
*/

using namespace std;

int main()
{
  int arr[25] = {0}, eingabe = 0;
  bool win = false;

  srand(time(NULL));

  for (int i = 0; i < 25; i++)
  {
    arr[i] = rand() % 100 + 1;
  }

  for (int x = 0; x <= 2; x++)
  {
    cout << "Bitte Zahl raten (1-100)" << endl;
    cin >> eingabe;
    x++;

    for (int i = 0; i < 25; i++)
    {
      if (eingabe == arr[i])
      {
        win = true;
      }
    }
  }

  if (win == true)
  {
    cout << "Gewonnen!" << endl;
  }
  else
  {
    cout << "Falsch geraten!" << endl;
  }

  return 0;
}