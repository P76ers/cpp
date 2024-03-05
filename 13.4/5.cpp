#include <iostream>
#define OG 6
#define UG 1

/*
Lassen Sie das Programm 1000 x würfeln (also Zufallszahlen zwischen 1 und 6 erzeugen) und ermitteln Sie,
wie oft jede Zahl gewürfelt wurde.

oder:
Damit Sie baldmöglichst an den Lottojackpot kommen, zählen Sie einfach,
wie oft jede Zahl zwischen 1 und 49 bei 1.000.000 "Lottoziehungen" vorkommt.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[6] = {0}, wurf = 0;

  srand(time(NULL));

  for (int i = 0; i < 1000; i++)
  {
    wurf = rand() % (OG - UG + 1) + UG;

    switch (wurf)
    {
    case 1:
      arr[0]++;
      break;
    case 2:
      arr[1]++;
      break;
    case 3:
      arr[2]++;
      break;
    case 4:
      arr[3]++;
      break;
    case 5:
      arr[4]++;
      break;
    case 6:
      arr[5]++;
      break;
    }
  }

  for (int i = 0; i < 6; i++)
  {
    printf("%i wurde %ix gewuerfelt \n", i + 1, arr[i]);
  }

  return 0;
}