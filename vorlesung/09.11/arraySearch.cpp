#include <iostream>

/*
Array nach Benutzereingabe durchsuchen
*/

using namespace std;

int main(int argc, char const *argv[])
{
  string arr[5] = {"Hans", "Stefan", "Stefanie", "Peter", "Paul"}, ein = " ";
  int i = 0;

  printf("Bitte zu durchsuchenden Namen eingeben:");
  cin >> ein;

  for (i = 0; i < 5; i++)
  {
    if (ein == arr[i])
    {
      printf("%s gefunden: arr[%i]", ein.c_str(), i);
    }
  }
  return 0;
}