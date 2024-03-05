#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int arr[5][7], i, k, museum, tage, su = 0;

  srand(time(NULL));
  for (i = 0; i < 5; i++)
  {
    for (k = 0; k < 7; k++)
    {
      arr[i][k] = rand() % 11;
    }
  }

  for (i = 0; i < 5; i++)
  {
    museum = 0;
    for (k = 0; k < 7; k++)
    {
      museum = museum + arr[i][k];
      su += arr[i][k];
    }
    cout << "Museum " << i + 1 << " hatte " << museum << " Besucher\n";
  }
  cout << "Es waren insgesamt " << su << " Besucher.\n\n";

  su = 0;
  for (k = 0; k < 7; k++)
  {
    tage = 0;
    for (i = 0; i < 5; i++)
    {
      tage = tage + arr[i][k];
      su += arr[i][k];
    }
    cout << "Tag " << k + 1 << " hatte " << tage << " Besucher\n";
  }
  cout << "Es waren insgesamt " << su << " Besucher.\n";
  return 0;
}
