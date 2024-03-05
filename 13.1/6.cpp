#include <iostream>

/*
Zwei Variablen a und b sollen die Inhalte tauschen;
formulieren Sie dazu ein allgemeingültiges Verfahren!
Es muss für Daten jedes Typs funktionieren, auch für Char-Variablen, sprich Texte, Strings.
*/

using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main(int argc, char const *argv[])
{
  int intA = 5, intB = 10;
  double doubleA = 3.14, doubleB = 2.71;
  char charA = 'A', charB = 'B';

  // Tausche zwei Integer
  swapValues(intA, intB);
  std::cout << "Nach dem Tausch - Integer: a = " << intA << ", b = " << intB << std::endl;

  // Tausche zwei Doubles
  swapValues(doubleA, doubleB);
  std::cout << "Nach dem Tausch - Double: a = " << doubleA << ", b = " << doubleB << std::endl;

  // Tausche zwei Char
  swapValues(charA, charB);
  std::cout << "Nach dem Tausch - Char: a = " << charA << ", b = " << charB << std::endl;

  return 0;
}