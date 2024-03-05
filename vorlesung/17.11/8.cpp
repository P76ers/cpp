#include <iostream>

/*
"Special 2" for Runaways: Es naht die Weihnachtszeit!
Bereiten Sie Ihren Rechner darauf vor, indem Sie einen "Weihnachtsbaum" programmieren!
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int i = 20, j = 0;

  while (i != 0 && j != 40)
  {
    cout << string(i, ' ') << string(j, '*') << endl;
    i--;
    j += 2;
  }

  for (int k = 0; k < 7; k++)
  {
    cout << "                 ****" << endl;
  }

  return 0;
}