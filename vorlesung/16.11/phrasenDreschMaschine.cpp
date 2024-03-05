#include <iostream>
#include <ctime>

/*
Die Phrasendreschmaschine...
Füllen Sie drei Arrays mit jeweils den Satzteilen Subjekt, Prädikat, Objekt.

Ein Programm kombiniert daraus über zufällige Zugriffe auf die Arrays ganze Sätze.

|   arr01   |  arr02 |    arr03    |   arr04  |   arr05  |
|:---------:|:------:|:-----------:|:--------:|:--------:|
| Der Hund  | bellt  |    laut.    | optional | optional |
| Mia       | tanzt  | zauberhaft. |   Zeit   |    Ort   |
| Der Regen | tropft | langsam.    |          |          |

Ausgaben:
Hans tanzt langsam.
Der Regen singt zauberhaft.
Der Hund tropft laut.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  string arr01[4] = {"Hans", "Der Hund", "Mia", "Der Regen"},
         arr02[4] = {"singt", "bellt", "tanzt", "tropft"},
         arr03[4] = {"falsch.", "laut.", "zauberhaft.", "langsam."};
  int i, j, k;

  srand(time(NULL));

  for (int x = 0; x < 10; x++)
  {
    i = rand() % 4;
    j = rand() % 4;
    k = rand() % 4;

    cout << arr01[i] << " " << arr02[j] << " " << arr03[k] << endl;
  }

  return 0;
}