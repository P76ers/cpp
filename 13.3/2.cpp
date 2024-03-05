#include <iostream>
// #include <stdlib.h>
#include <ctime>
#define OG 6
#define UG 1

/*
Ein Programm soll 100/1000/10.000/... mal "würfeln".
Ermitteln Sie, wie oft jede Zahl (1-6) jeweils geworfen wurde.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int i, zufall;
  srand(time(NULL)); // Start Random
  int eins = 0;
  int zwei = 0;
  int drei = 0;
  int vier = 0;
  int fuenf = 0;
  int sechs = 0;

  for (i = 1; i <= 100; i++)
  {
    //	zufall=rand()%(Obergrenze-Untergrenze+1)+Untergrenze
    zufall = rand() % (OG - UG + 1) + UG;

    switch (zufall)
    {
    case 1:
      eins++;
      break;
    case 2:
      zwei++;
      break;
    case 3:
      drei++;
      break;
    case 4:
      vier++;
      break;
    case 5:
      fuenf++;
      break;
    default:
      sechs++;
      break;
    }
  }
  cout << "eins: " << eins << endl;
  cout << "zwei: " << zwei << endl;
  cout << "drei: " << drei << endl;
  cout << "vier: " << vier << endl;
  cout << "fuenf: " << fuenf << endl;
  cout << "sechs: " << sechs << endl;

  return 0;
}