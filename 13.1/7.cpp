#include <iostream>
#include <cmath>

/*
Die Programmiersprache "C" stellt eine Funktion zum kaufmännischen Runden zur Verfügung,
die jedoch nur auf ganze Zahlen rundet; aus 3.4 wird also 3, aus 6.5 eine 7 usw.

Wie erreichen Sie eine Rundung auf zum Beispiel 2 Nachkommastellen?
-> aus 3.1415 soll dann 3.14 werden, aus 2.728 dann 2.73 usw.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float pi = 3.1415;

  pi = pi * 100;
  pi = round(pi);
  pi = pi / 100;

  cout << "pi gerundet : " << pi << endl;
  printf("pi gerundet : %.2f", pi);

  return 0;
}