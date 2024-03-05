#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Erstellen Sie ein Array mit 20 ganzzahligen Elementen, alle mit 0 vorbelegt.
Greifen Sie jetzt in einer While-Schleife per Zufallszahl für den Index auf beliebige Elemente zu
und tragen Sie dort eine beliebige (zufällige) Zahl zwischen 10 und 255 ein.

Aber es darf auf jedes Element nur einmal zugegriffen werden!
Wenn also dort schon eine Zahl steht, darf diese nicht überschrieben werden! Die Schleife muss so oft laufen,
bis alle Elemente gefüllt sind; zählen Sie dazu die Anzahl der Durchläufe.
*/

using namespace std;

int main()
{
  const int arraySize = 20;
  int myArray[arraySize] = {0};

  srand((time(NULL)));

  int count = 0;

  while (count < arraySize)
  {
    int index = rand() % arraySize;

    if (myArray[index] == 0)
    {
      myArray[index] = rand() % 246 + 10;
      count++;
    }
  }

  for (int i = 0; i < arraySize; ++i)
  {
    cout << myArray[i] << " ";
  }

  cout << "\nAnzahl der Durchlaeufe: " << count << endl;

  return 0;
}