#include <iostream>

/*
Die Fibonacci-Reihe: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …
Berechnen Sie die ersten 100 Fibonacci-Zahlen und geben Sie diese aus!
*/

using namespace std;

int main()
{
  unsigned long fibonacci = 0;
  unsigned long next = 1;
  unsigned long last = 0;

  for (int i = 1; i <= 100; i++)
  {
    if (i == 1)
    {
      cout << last << " ";
    }
    if (i == 2)
    {
      cout << next << " ";
    }
    fibonacci = next + last;
    last = next;
    next = fibonacci;
    cout << fibonacci << " ";
  }

  return 0;
}