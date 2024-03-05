#include <iostream>
/*
1 x 1 = 1
2 x 2 = 4
3 x 3 = 9
...
20 x 20 =400
*/
using namespace std;

int main()
{
  int a = 1, b = 0;

  for (a = 1; a <= 20; a++)
  {
    b = a * a;
    // cout << a << " x " << a << " = " << b << endl;
    printf("%3i x %2i = %3x\n", a, a, b);
  }
  return 0;
}
