#include <iostream>
#include <ctime>
#define OG 50
#define UG 10
#define ANZAHL 10

/*
Füllen Sie ein Array mit 10 Zufallszahlen (zwischen 10 und 50)
multiplizieren Sie jede Zahl mit 2 und legen Sie das Ergebnis danach in einem
zweiten Array ab
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int erstes[ANZAHL] = {0}, zweites[ANZAHL] = {0}, i = 0;

  srand(time(NULL));

  for (i = 0; i < ANZAHL; i++)
  {
    erstes[i] = rand() % (OG - UG + 1) + UG;
    zweites[i] = erstes[i] * 2;

    cout << "Erstes[" << i << "]: " << erstes[i] << "   "
         << "Zweites[" << i << "]: " << zweites[i] << endl;
  }

  return 0;
}