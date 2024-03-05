#include <iostream>

/*
Ausgabe der Zahlen 1 bis 100. Es sollen jedoch nur jeweils 25 Zahlen angezeigt werden.
Danach soll zu einem Tastendruck aufgefordert werden, um die nächsten 25 Zahlen anzuzeigen.
*/

using namespace std;

int main(int argc, char const *argv[])
{

  for (int i = 1; i <= 100; i++)
  {
    if (i == 26 || i == 51 || i == 76)
    {
      cout << endl;
      system("pause");
    }

    cout << i << " ";
  }

  return 0;
}
