#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int krhs[12][6], z = 0, s, su = 0;
  char antwort;

  srand(time(NULL));

  printf("    I    II    III\n");
  printf("  m  w  m  w  m  w\n");
  for (z = 0; z < 12; z++)
  {
    for (s = 0; s < 6; s++)
    {
      krhs[z][s] = rand() % 3 + 1;
      printf("%3i", krhs[z][s]);
    }
    printf("\n");
  }

  do
  {
    do
    {
      cout << "Gesuchter Monat? (1-12)";
      cin >> z;
    } while (z < 1 || z > 12);
    su = 0;
    for (s = 0; s < 6; s++)
    {
      su += krhs[z - 1][s];
    }
    printf("\nMonat %2i, Belegung: %i", z, su);
    printf("\nNochmal? (j/n)");
    cin >> antwort;
  } while (antwort == 'j' || antwort == 'J');

  return 0;
}
