#include <iostream>
float rechteck(float, float);

/*
nach http://localhost:3000/cpp/Aufgaben/vorlesung#funktionen
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float a = 5.5, b = 4.4;
  cout << rechteck(a, b);
  return 0;
}

float rechteck(float x, float y)
{
  return x * y;
}