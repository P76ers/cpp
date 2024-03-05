#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  float kapital = 0.0, nkapital = 0.0, zinssatz = 0, zinsen = 0.0;
  int jahre = 0, i;

  do
  {
    cout << "Bitte geben Sie ihr Startkapital ein: (500 - 500000)";
    cin >> kapital;
  } while (kapital < 500 || kapital > 500000);

  do
  {
    cout << "Bitte geben Sie den Zinssatz ein (0.5 - 10)";
    cin >> zinssatz;
  } while (zinssatz < 0.5 || zinssatz > 10);

  do
  {
    cout << "Bitte geben Sie die Stehzeit ein (0.5 - 50)";
    cin >> jahre;
  } while (jahre < 1 || jahre > 50);

  for (i = 1; i <= jahre; i++)
  {

    zinsen = kapital * zinssatz / 100;
    nkapital = kapital + zinsen;

    printf("%3i %8.2f %6.2f %8.2f\n", i, kapital, zinsen, nkapital);
    kapital = nkapital;
  }

  return 0;
}
