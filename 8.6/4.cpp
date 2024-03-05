#include <iostream>

/*
Schreiben Sie ein Programm, welches eine Note (1 bis 6) in Ziffern einliest
und anschließend die Note in Worten (’sehr gut’, ’gut’ usw.) ausgibt.
Wenn eine ungültige Ziffer (>6 oder <1) eingegeben wurde, erscheint eine Fehlermeldung.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int note = 0;

  cout << "Bitte Note eingeben: " << endl;
  cin >> note;

  while (note < 0 || note > 6)
  {
    cout << "Bitte geben Sie eine Note zwischen 1-6 an: " << endl;
    cin >> note;
  }

  switch (note)
  {
  case 1:
    cout << "Ihr Note ist sehr gut! " << endl;
    break;
  case 2:
    cout << "Ihr Note ist gut! " << endl;
    break;
  case 3:
    cout << "Ihr Note ist befriedigend! " << endl;
    break;
  case 4:
    cout << "Ihr Note ist ausreichend! " << endl;
    break;
  case 5:
    cout << "Ihr Note ist mangelhaft! " << endl;
    break;
  default:
    cout << "Ihr Note ist ungenuegend! " << endl;
    break;
  }

  return 0;
}