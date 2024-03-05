#include <iostream>
#include <ctime>

/*
Geben Sie in ein Array, z.B. int arr[10] oder string texte[10] beliebige Werte ein
und sortieren Sie es (möglichst) "aus dem Kopf"…
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[10] = {0}, anz = 10, hilf = 0;
  bool tausch = true;

  srand(time(NULL));

  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 100;
  }

  printf("Vorher: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%2i ", arr[i]);
  }

  do
  {
    tausch = false;
    anz--;
    for (int i = 0; i < anz; i++)
    {
      // Wenn Array bereits sortiert ist, ist "tausch=false" -> fertig
      if (arr[i] > arr[i + 1])
      {
        hilf = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = hilf;
        tausch = true;
      }
    }

  } while (tausch == true);

  printf("\nNachher:");
  for (int i = 0; i < 10; i++)
  {
    printf("%2i ", arr[i]);
  }

  return 0;
}