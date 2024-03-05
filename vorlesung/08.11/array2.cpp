#include <iostream>
#define OG 50
#define UG 10
#define ANZAHL 10

/*
Übertragen Sie alle geraden Zahlen in das Array "gerade[]".
Geben Sie Array "gerade[]" aus.
*/

using namespace std;

int main()
{
  int erstes[ANZAHL] = {0}, zweites[ANZAHL] = {0}, i = 0;

  srand(time(NULL));

  for (i = 0; i < ANZAHL; i++)
  {
    erstes[i] = rand() % (OG - UG + 1) + UG;

    if (erstes[i] % 2 == 0)
    {
      zweites[i] = erstes[i] * 2;
    }

    cout << "Erstes[" << i << "]: " << erstes[i] << "   "
         << "Zweites[" << i << "]: " << zweites[i] << endl;
  }

  return 0;
}