#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int alter, u18 = 0, u30 = 0, u50 = 0, u65 = 0, ue65 = 0;

  while (alter != 0)
  {
    cout << "Alter bitte (Ende bei 0):";
    cin >> alter;

    if (alter > 65)
    {
      ue65++;
    }
    else if (alter >= 51)
    {
      u65++;
    }
    else if (alter >= 31)
    {
      u50++;
    }
    else if (alter >= 18)
    {
      u30++;
    }
    else if (alter != 0)
    {
      u18++;
    }
  }
  cout << "unter 18:  " << u18 << endl;
  cout << "18 bis 30: " << u30 << endl;
  cout << "31 bis 50: " << u50 << endl;
  cout << "51 bis 65: " << u65 << endl;
  cout << "\201ber 65 :  " << ue65 << endl;

  return 0;
}
