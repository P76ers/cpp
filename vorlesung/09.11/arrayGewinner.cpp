#include <iostream>
#include <ctime>

/*
zufällig einen Gewinner aus dem Array ermitteln
*/

using namespace std;

int main(int argc, char const *argv[])
{
  string arr[5] = {"Hans", "Stefan", "Stefanie", "Peter", "Paul"};

  srand(time(NULL));

  printf("%s hat gewonnen", arr[rand() % 5].c_str());

  return 0;
}