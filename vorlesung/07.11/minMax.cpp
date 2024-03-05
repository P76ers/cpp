#include <iostream>

/*
Es sollen vom User 100 Werte eingegeben werden, das Programm gibt Minimum
und Maximum der eingegebenen Werte aus. Erstellen Sie den Code für die geforderte Auswertung.

Hinweis: Es ist kein Array zu benutzen.
Folgendes Gerüst ist vorgegeben (und zu benutzen):

#include <iostream>
using namespace std;

int main()
{
  int x = 0, y = 0;
  int mini = 0, maxi = 0;

  while (y < 100)
  {
    cout << "\nZahl bitte: ";
    cin >> x;

    y++;
  }
  cout << "\nMinimum ist: " << mini;
  cout << "\nMaximum ist: " << maxi;

  return 0;
}
*/

using namespace std;

int main()
{
  int x = 0, y = 0;
  int mini = 0, maxi = 0;

  cout << "\nZahl bitte: ";
  cin >> mini >> maxi;
  y++;

  while (y < 100)
  {
    cout << "\nZahl bitte: ";
    cin >> x;

    if (x < mini)
    {
      mini = x;
    }
    else if (x > maxi)
    {
      maxi = x;
    }
    y++;
  }
  cout << "\nMinimum ist: " << mini;
  cout << "\nMaximum ist: " << maxi;

  return 0;
}