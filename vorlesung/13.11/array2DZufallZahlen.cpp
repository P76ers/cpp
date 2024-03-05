#include <iostream>
#include <ctime>
#define ZEILEN 10
#define SPALTEN 5

/*
Mehrdimensionales Array mit Zufallszahlen zwischen 50 und 500.
*/

int main()
{
  int a[ZEILEN][SPALTEN] = {0};
  srand(time(NULL));

  for (int i = 0; i < ZEILEN; i++)
  {
    for (int k = 0; k < SPALTEN; k++)
    {
      a[i][k] = rand() % 451 + 50;
      printf("%4i", a[i][k]);
    }
    printf("\n");
  }
}