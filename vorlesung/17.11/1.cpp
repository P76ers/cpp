#include <iostream>

/*
Erstellen Sie aus den folgenden Struktogrammen den passenden C++-Code
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 0, b = 0, c = 0;

  for (a = 1; a <= 10; a++)
  {
    for (b = 1; b <= 10; b++)
    {
      c = a * b;
      printf("%2i * %2i = %3i\n", b, a, c);
    }
  }

  cout << "----------------" << endl;

  a = 1, b = 1, c = 0;

  // alternativ
  while (a <= 10)
  {
    c = a * b;
    printf("%2i * %2i = %3i\n", b, a, c);
    b++;

    if (b > 10)
    {
      b = 1;
      a++;
    }
  }

  return 0;
}