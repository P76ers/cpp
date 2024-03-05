#include <iostream>

/*
Eine Anzahl Bytes gegeben als int-Wert soll so mit Hilfe der metrischen Einheiten (K, M, G)
auf dem Bildschirm ausgegeben werden, dass höchstens 3 Vorkommastellen angezeigt werden.
Die Ausgabe soll in etwa wie folgt aussehen:
- 123 Byte sind 123.0 Byte
- 15323 Byte sind 15.323 KByte
- 15323000 Byte sind 15.323 Mbyte
- 1532300001 Byte sind 1.532300001 GByte

Verwenden Sie keine Schleifen (nur if-else). Die Ausgabeanweisungen dürfen ausschließlich am Ende
der main-Funktion sein.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int eingabe = 1532300001;
  double ergebnis = 0;
  string text = "";

  if (eingabe < 1000)
  {
    ergebnis = eingabe;
    text = printf("%5.1lf Byte", ergebnis);
  }

  else if (eingabe < 1000000)
  {
    ergebnis = eingabe / 1000.0;
    text = printf("%7.3lf KByte", ergebnis);
  }
  else if (eingabe < 1000000000)
  {
    ergebnis = eingabe / 1000000.0;
    text = printf("%7.3lf MByte", ergebnis);
  }
  else if (eingabe < 1000000000000)
  {
    ergebnis = eingabe / 1000000000.0;
    text = printf("%13.9lf GByte", ergebnis);
  }

  cout << text << endl;

  return 0;
}