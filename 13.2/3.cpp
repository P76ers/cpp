#include <iostream>

/*
Es werden beliebig viele positive, ganze Zahlen eingegeben, Ende bei Eingabe einer negativen Zahl.
Das Programm gibt dann aus, wie viele gerade Zahlen eingegeben wurden.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int eingabe = 0;
  int zaehler = 0;

  do
  {
    cout << "Bitte Zahl eingeben" << endl;
    cin >> eingabe;
    if (eingabe % 2 == 0)
    {
      zaehler++;
    }

  } while (eingabe >= 0);

  cout << "Es wurden " << zaehler << " gerade Zahlen eingegeben" << endl;

  return 0;
}
