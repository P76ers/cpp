#include <iostream>
#include <ctime>

/*
Lassen Sie die Lottozahlen vom nächsten Wochenende schon heute ziehen!
Achtung: Eine Zahl darf dabei nicht doppelt vorkommen!
*/

using namespace std;

int main()
{
  int lotto[6];
  int i, j;
  bool neueZahl;

  srand(time(0));
  for (i = 0; i < 6; i++)
  {
    do
    {
      lotto[i] = rand() % 49 + 1;
      neueZahl = true;
      for (j = 0; j < i; j++)
      {
        if (lotto[j] == lotto[i])
        {
          neueZahl = false;
        }
      }
    } while (!neueZahl);
  }

  for (i = 0; i < 6; i++)
  {
    cout << lotto[i] << " ";
  }
}